# VCS PERF V8 CPU FUSION — handoff — 2026-08-17

## Baseline and reason for this stage

V8 is based on **V7 ARCH FASTMEM BUILDFIX1**, not the older public repository state.
The supplied V7 runtime log contains 171 gameplay PERF windows. Across the 120
windows at or above 50,000 game draws, the measured averages were approximately:

- FPS: 57.29
- frame: 17.611 ms
- guest CPU: 12.781 ms
- GE: 3.623 ms
- present: 1.198 ms
- draws: 74,461 per 60-vblank window

This makes CPU/AOT execution the target of V8. No renderer-quality reduction and
no DX12 feature rewrite is part of this stage.

## V8 CPU architecture changes

### 1. Hoisted Tier-2 direct-fastmem decision

V7 introduced the architectural direct-fastmem mapping, but its generic
`GuestMemory::AotFastView` still tests whether the direct map exists in every
inlined load/store helper. V8 adds profile-local `Tier2DirectMemoryView`.

Every V8 Tier-2 hook now requires `direct_fastmem_enabled()` before entering the
cluster. Once inside, the cluster can directly address the mapped PSP address
space without repeating the null/fallback decision at each memory site.

Static transformed memory sites: **2,068**.

Fallback semantics are unchanged: if direct fastmem is unavailable, the V8 hook
is skipped and the original generated AOT code below the hook executes.

### 2. Geometry call/CFG fusion without the old GPR-shadow failure mode

Historical builds established that Geometry GPR shadow caused a pathological
Windows compiler cliff. V8 does **not** re-enable it.

Instead, Geometry is expanded selectively from 379 to **417** hot blocks using
small/high-value measured helper closures. Total static fused calls across the
seven clusters increase from V7's 36 to **52** while World is deliberately kept
at its stable 402-block shape.

### 3. Geometry leaf-call removal

Three tiny 0084 Geometry leaves are emitted directly in their callers, preserving
scheduler accounting and the exact continuation PC. In addition, six call sites
to statically audited generated leaves bypass `invoke_chained_direct` and call the
exact direct generated entry, then perform the removed call's scheduler safe-point.

The direct generated leaf audit rejects nested generated/HLE/syscall calls,
non-`$ra` computed returns, and explicit foreign-PC exits.

### 4. Tier-2 profiler overhead removed from normal performance builds

The old Tier-2 `SampleScope` incremented per-cluster entry counters and tested a
1/256 timing sample on every Tier-2 entry. The V7 log shows tens of thousands of
Tier-2 entries per 60-vblank window, so those diagnostics are no longer compiled
into the normal performance path.

The **correctness-critical active-depth/reentry guard remains active** on every
Tier-2 entry/exit. Only coverage/timing counters are removed.

Deep diagnostics remain available as a build switch:

```bat
set PSPRECOMP_TIER2_DEEP_TELEMETRY=ON
profiles\vcs\BUILD_VCS_NINJA.bat
```

Normal builds default to OFF and retain the low-overhead overall `PERF` telemetry.

## Static V8 shape

- clusters: 7
- hot blocks: 1,098
- static fused calls: 52
- fused tails: 13
- hooks: 25
- Tier-2 direct-memory sites: 2,068
- Entity inline leaf sites: 13
- Geometry local inline leaf sites: 3
- Geometry direct generated leaf sites: 6
- GPR shadow clusters: 4
- GPR shadow occurrences: 3,461
- Geometry GPR shadow: OFF
- GE async: OFF/quarantined
- parallel vertex decode: OFF/quarantined
- experimental V5 VFPU path: quarantined
- ExecuteIndirect default: OFF

## Build behavior

New one-time stamp:

```text
.vcs_perf_v8_cpu_fusion_20260817
```

When upgrading a successfully built V7 tree, V8 intentionally invalidates only:

- seven Tier-2 cluster objects;
- ten generated hook-unit objects (0043, 0044, 0084, 0085, 0086, 0129, 0154,
  0155, 0157, 0158);
- runtime-log metadata.

The generic AOT memory ABI/header is unchanged by V8, so this stage does not
intentionally force a fresh compile of all 234 generated units.

## Validation completed

- generator second run: idempotent (`host_changed=0`, `hook_units_changed=0`)
- V8 static audit: PASS (8 checks)
- Tier-2 cluster direct compilation: 7/7 PASS
- Geometry Release-equivalent compile: PASS (~21 s in this Linux environment)
- hook generated-unit syntax/codegen: 10/10 PASS
- `psprecomp_tests`: PASS
- `vcs_profile_tests`: PASS
- `vcs_config_tests`: PASS
- `vfpu_tier2_tests`: PASS
- optional deep-telemetry compilation: PASS
- `git diff --check`: PASS

A full Linux VCSNative build was attempted after the changes. The pre-existing
build tree selected unrelated AOT units for rebuild and the complete link did not
finish inside the interactive build window. No V8 compile error was reported
before termination. The user's VS2022/Ninja build is the authoritative Windows
compile and runtime test.

## Required runtime benchmark

Build normally, drive the same heavy city route, and send the new `VCSNative.log`.
Normal V8 logs should begin with:

```text
stage=perf-v8-cpu-fusion-2026-08-17
...
perf_layer=8
...
tier2_direct_fastmem=1 tier2_direct_mem_sites=2068 tier2_deep_telemetry_default=0
```

Primary comparison fields:

1. `guest_cpu_us_avg` — main success metric;
2. `fps_avg` and `frame_us_avg`;
3. workload matching through `game_draws`;
4. `ge_us_avg` and `present_us_avg` only to make sure the test route is comparable.

The V7 >=50k-draw baseline is ~12.78 ms guest CPU. A useful V8 result must move
that materially lower; this handoff does **not** claim a runtime FPS gain before
that Windows measurement exists.

## Progress estimate

- overall VCS recomp project: **~92%**
- CPU/Tier-2 architecture: **~96% implemented**, runtime tuning still required
- >150 FPS headroom target: **~60%**, intentionally unchanged until V8 is measured
