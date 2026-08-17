# VCSNative PERF V5 ASYNC/VFPU — Handoff — 2026-08-16

## Base

This revision is based directly on **Tier2 V4 AMD/UMA COMPAT (BUILDFIX3 lineage)**.  It preserves the AMD/UMA safety policy (aligned packed 0x0115 storage, conservative indexed/merge/indirect policy on AMD UMA, and the UMA MSAA guard).

## Objective

V4 telemetry showed that ExecuteIndirect removed thousands of Draw API calls without materially reducing `ge_us`, while heavy gameplay still spent roughly 10–15 ms in guest/AOT CPU and several milliseconds in GE work.  V5 therefore stops optimizing Draw submission count and targets overlap/parallelism plus measured-hot VFPU overhead.

## V5 changes

### 1. GE async is the DX12 production default

`vcs_config.cpp` installs `PSPRECOMP_GE_ASYNC=1` for DirectX 12 when the caller has not provided an explicit environment value.  `play.bat` does the same without overriding a caller-provided value.

The existing GE worker is not new experimental code: it already provides ordered task completion, list/idle waits at guest-visible synchronization points, fatal propagation, and a display/vblank visibility boundary.  V5 promotes this path from opt-in to the normal DX12 path so Allegrex work can overlap GE list execution instead of paying guest + GE serially whenever the game does not immediately synchronize.

Recovery/A-B switch:

```bat
set PSPRECOMP_GE_ASYNC=0
```

### 2. Parallel vertex decode is the DX12 production default

`PSPRECOMP_GE_PARALLEL_VERTEX_DECODE=1` is installed by the config/play defaults unless explicitly overridden.  The existing persistent worker pool remains bounded and only parallelizes sufficiently large CPU-decoded vertex work.  Packed 0x0115 GPU-decode traffic remains on its native GPU path.

Recovery/A-B switch:

```bat
set PSPRECOMP_GE_PARALLEL_VERTEX_DECODE=0
```

### 3. ExecuteIndirect is no longer enabled by default

V4 runtime telemetry proved that it can save thousands of Draw calls while leaving GE wall time essentially unchanged.  V5 therefore avoids building/uploading indirect argument records by default.  The implementation remains available for A/B testing:

```bat
set PSPRECOMP_DX12_EXECUTE_INDIRECT=1
```

AMD/UMA safe mode still vetoes that aggressive path unless its separate diagnostic override is used.

### 4. Measured-hot VFPU default-prefix lowering

A new header, `profiles/vcs/host/vcs_vfpu_fast.hpp`, provides exact fast branches for the common architectural prefix state (S=T=0xE4, D=0) with the original CT helper as fallback for non-default prefixes.

Final static transformed call sites: **95**

- destination-prefix writes: 60
- VSCL: 2
- VDOT: 19
- VCMP: 14
- VCMOV: 0

The transformed clusters are Entity, Matrix, Physics, World and Edge43.  Geometry and Boundary are intentionally byte-identical to V4.  Geometry was kept unchanged because adding extra VFPU template specialization to that already-large TU reintroduced the compiler-time cliff; the runtime-critical Geometry V3/V4 dataflow + SIMD optimizations remain intact.

No fast-math/FMA reassociation was introduced.  Differential tests exercise default-prefix fast branches and randomized non-default-prefix fallback against the original helpers.

### 5. Verified native VFPU leaf 0x088B1780 now uses block loads

The already-registered native leaf at `0x088B1780` previously performed sixteen independent 32-bit loads for its first four vector inputs.  V5 keeps the verified native lowering but uses four `aot_load32_block` operations instead, collapsing address canonicalization/bounds checking per 16-byte vector while preserving the original scalar fallback on non-RAM paths.  The existing `PSPRECOMP_VALIDATE_FAST_088B1780` AOT-reference mechanism remains available for real-game differential validation.  This optimization is local to `vcs_native_fast_paths.cpp`, so it does not force the large Tier-2 Geometry TU to rebuild.

## Existing V4 optimization retained

- 7 profile-guided Tier-2 clusters / 1,060 hot blocks
- 49 fused direct calls / 13 fused tails / 9 cold exits
- V3 memory/dataflow batching
- 4 ordered mat4 + 19 ordered matvec SIMD sites
- safe GPR shadow on Entity/Boundary/World/Edge43 (3,428 static accesses)
- unwind fix and Tier-2 reentry guard
- DX12 native GE, packed/GPU vertex path, textures, batching and framebuffer feedback path
- AMD/UMA compatibility layer and UMA MSAA crash guard

## Build behavior

New stamp: `.vcs_perf_v5_async_vfpu_20260816`.

Only the five actually modified Tier-2 cluster objects plus `vcs_config`, `vcs_native_fast_paths`, `ge_gpu_backend_dx12`, and `vcs_runtime_log` are explicitly invalidated.  Geometry and Boundary are not invalidated and their generated source is byte-identical to V4, preventing the previous long Geometry recompilation cliff.

## Validation completed in the container

- `psprecomp_tests`: PASS
- `vcs_profile_tests` with `PSPRECOMP_GE_ASYNC=1`: PASS
- `vfpu_tier2_tests`: PASS
- `vcs_config_tests`: PASS, including DirectX12 async/parallel-decode defaults
- VCSNative target objects for the five modified Tier-2 clusters: PASS
- VCSNative target objects for `vcs_config.cpp`, `vcs_native_fast_paths.cpp`, `ge_gpu_backend_dx12.cpp`, and `vcs_runtime_log.cpp`: PASS on the Linux target/stub path
- generator second run: idempotent (`host_changed=0`, `hook_units_changed=0`)
- Geometry and Boundary generated sources: byte-identical to V4 AMD/UMA base

The container does not provide the Windows D3D12 SDK/runtime, so the user's VS2022 build remains the authoritative Windows build.  V5 does not introduce a new D3D12 command implementation; it changes the default selection of the already-existing ExecuteIndirect path and preserves the V4 AMD code.

## Expected V5 runtime log header

```text
stage=perf-v5-async-vfpu-2026-08-16
...
version=4 ... perf_layer=5 ge_async_default=1 parallel_vertex_decode_default=1
vfpu_default_prefix_fast=95 ... dx12_execute_indirect_default=0
amd_uma_compat=1 uma_msaa_guard=1
```

The important PERF values for the next comparison are `fps_avg`, `guest_cpu_us_avg`, `ge_us_avg`, and especially `ge_wait_us_avg`.  With async active, `ge_us_avg` is worker CPU time and `ge_wait_us_avg` is the serialized portion paid by the guest/frame.  The goal is to reduce wall-frame cost through overlap, not merely make the worker's CPU time disappear from telemetry.

## Install

Overlay is relative to **V4 AMD/UMA COMPAT**.  Extract it over the current repository, replacing files, then run:

```bat
profiles\vcs\BUILD_VCS_NINJA.bat
```

Do not delete `out` or `.obj` manually.
