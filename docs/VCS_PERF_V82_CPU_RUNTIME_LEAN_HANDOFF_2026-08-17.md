# VCS PERF V8.2 CPU RUNTIME LEAN — handoff

Date: 2026-08-17

## Baseline and reason for this stage

V8.1 CPU LEAN is the protected baseline. The user reported that it fixed the
slow-motion feeling at low FPS. Its runtime architecture therefore remains
unchanged where timing/scheduling is concerned.

The latest V8.1 log confirms the CPU direction is better than V7/V8 under heavy
workload. Using all windows with at least 50k game draws:

- V7: 12.781 ms guest CPU, 57.29 FPS (120 windows, mean 74,461 draws)
- V8: 12.952 ms guest CPU, 56.70 FPS (124 windows, mean 74,482 draws)
- V8.1: 11.969 ms guest CPU, 60.69 FPS (122 windows, mean 76,124 draws)

These are workload-threshold aggregates, not deterministic replay pairs. V8.2
therefore does not alter the V8.1 frame/tick behavior; it targets repeated native
chain overhead and code footprint.

## 1. Generic PSPRecomp runtime-chain telemetry compile switch

New CMake option:

`PSPRECOMP_RUNTIME_CHAIN_TELEMETRY`

The generic framework defaults it ON so profiling capability remains available.
The VCS production build script defaults it OFF.

When OFF, the compiler removes per-chain branches/counters for:

- `g_guest_hotspot_profile_enabled`
- `g_guest_hotspot_unit_calls`
- guest-hotspot sampling clocks/records
- `g_unit_profile_enabled`
- `g_unit_profile_counts`

from compile-time direct chains, dynamic generated-unit chains, and Tier-2 fused
transfer entry accounting.

This does **not** disable the low-overhead VCS `PERF` telemetry used for FPS,
guest CPU, GE, Present and renderer workload measurements.

To produce a deep diagnostic build:

```bat
set PSPRECOMP_RUNTIME_CHAIN_TELEMETRY=ON
profiles\vcs\BUILD_VCS_NINJA.bat
```

## 2. PSP scheduler/tick semantics are protected

The following mechanisms are unchanged from V8.1:

- `PSPRECOMP_TIME_TICK_DISPATCHES` policy
- `g_runtime_starvation_interval_fast`
- `dispatches_since_import_`
- `run_starvation_boundary()`
- context-switch invalidation / native-chain unwind behavior
- `account_inlined_generated_leaf()` scheduler cadence
- Tier-2 fused-transfer scheduler accounting

This is intentional because V8.1 resolved the user's low-FPS slow-motion feeling.

## 3. Five tiny Boundary leaf wrappers removed

The Boundary cluster has four unit-0206 targets that pass the existing static
leaf validator:

- `0x08B3E084`
- `0x08B3E08C` (two call sites)
- `0x08B3E254`
- `0x08B3E260`

Total transformed sites: **5**.

The validator rejects nested generated/HLE/syscall calls, non-`$ra` returns and
foreign explicit PC exits. Each transformed site invokes the exact generated
entry and then calls `account_inlined_generated_leaf()` so the removed native
wrapper still contributes exactly one scheduler work edge.

No World direct-leaf expansion was enabled because previous experimentation
showed a compiler/codegen cliff when broad direct-leaf work was mixed with
World's GPR shadow.

## 4. Geometry/World protected shape

V8.2 deliberately keeps:

- Geometry: **379 blocks**, no GPR shadow, no inline/direct-leaf experiment
- World: **402 blocks**, no new direct-leaf experiment
- Tier-2 total: **1,060 blocks**
- static fused calls: **36**
- static fused tails: **13**
- Tier-2 direct-fastmem: **1,969 sites**

This avoids repeating V8's I-cache/code-size regression.

## Static code-size evidence

Same compiler/flags, Linux x86-64, V8.1 vs V8.2:

- generated unit 0085 `.text`: 374,333 -> 354,075 bytes (**-5.41%**)
- generated unit 0158 `.text`: 360,754 -> 345,782 bytes (**-4.15%**)
- Geometry Tier-2 `.text`: 170,247 -> 161,163 bytes (**-5.34%**), still 379 blocks
- Boundary Tier-2 `.text`: 24,937 -> 18,257 bytes (**-26.79%**)

`nm` audit on V8.2 unit 0085 shows no references to the guest-hotspot/unit-profile
symbols that were present in the V8.1 object.

## Isolated wrapper microbenchmark

20 million calls, x86-64 optimized build, scheduler interval disabled to isolate
native wrapper overhead:

- ordinary `invoke_chained_direct`: ~2.8 ns/call
- statically proven leaf direct call + `account_inlined_generated_leaf`: ~1.1–1.2 ns/call

This microbenchmark only validates the local mechanism. It is **not** a game-FPS
claim; Windows VCS gameplay remains authoritative.

## Validation

Passed:

- `psprecomp_tests`
- `vcs_profile_tests` (scheduler/callback/framebuffer)
- `vcs_config_tests`
- `vfpu_tier2_tests`
- V8.2 static audit
- 10/10 hooked generated units syntax-checked with production macros
- 7/7 Tier-2 cluster objects compiled
- generated unit 0085 optimized object compile
- generated unit 0158 optimized object compile
- Geometry/Boundary optimized object A/B code-size builds

A full Linux VCSNative link was started. The 234-unit O3 generated corpus exceeds
the interactive build window; no source diagnostic occurred before interruption.
The Windows VS2022/Ninja build is authoritative for the full executable.

## Runtime identity

Expected log:

```text
stage=perf-v8.2-cpu-runtime-lean-2026-08-17
...
guest_hotspot=0 ... chain_telemetry_compiled=0
...
perf_layer=8 cpu_lean_revision=2 runtime_chain_telemetry_default=0
...
direct_generated_leaf_sites=5
geometry_fusion_rollback=1
```

## What to compare

Primary comparison is V8.2 against V8.1, not against the rejected V8 build.
Compare `guest_cpu_us_avg` and FPS for similar draw bins, especially 50k+, 70k+
and 90k+ game draws. The game-speed/slow-motion feeling must remain identical to
V8.1; any regression there invalidates this stage regardless of average FPS.

## Progress estimate

- overall VCS recomp project: **~92%**
- CPU/Tier-2 architecture: **~97%**
- >150 FPS headroom goal: **~61%**, pending V8.2 Windows gameplay benchmark
