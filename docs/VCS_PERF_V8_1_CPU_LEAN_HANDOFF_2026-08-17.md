# VCS PERF V8.1 CPU LEAN — handoff — 2026-08-17

## Trigger
The V8 CPU FUSION runtime capture `VCSNative(20260817-221115).log` felt slower in live gameplay. The log confirms a measurable regression in heavy comparable windows, so V8 is not accepted as the performance baseline.

## Measured V7 -> V8 regression
The comparison uses PERF windows at the same vblank index and accepts only pairs whose `game_draws` differ by at most 10%, avoiding broad whole-run averages with unrelated workload.

For the 22 comparable heavy pairs where both runs exceed 50k game draws:

- mean workload: V7 75,487 draws vs V8 74,947 draws
- mean guest CPU: V7 12.594 ms vs V8 13.146 ms
- V8 regression: +0.552 ms / +4.38% guest CPU
- mean FPS: V7 58.17 vs V8 55.77
- FPS delta: -2.40 FPS
- V8 guest CPU was worse in 14/22 pairs
- median guest CPU delta: +0.692 ms

This is not a deterministic replay benchmark, but workload and vblank alignment are close enough to reject the V8 Geometry expansion.

## Root-cause direction
V8 expanded Geometry from 379 to 417 hot blocks and raised the total static fused-call count from 36 to 52. The generated Geometry TU grew from 6,944-ish baseline lines to 8,290 lines. Under the same Linux `-O2` code shape, Geometry `.text` grew to 209,248 bytes.

The regression becomes clearer as draw pressure rises: 50-70k bins are roughly neutral, while the 70-110k bins trend worse. That pattern is consistent with the extra Geometry closure increasing host instruction-cache/code-footprint pressure in the busiest city scenes. V8.1 therefore removes the speculative expansion rather than trying to compensate with more inlining.

## V8.1 design
V8.1 is not a full V8 rollback. It retains the architectural parts that can still reduce overhead without growing Geometry:

1. Tier-2 direct-fastmem remains enabled. The direct-memory decision is hoisted out of individual Tier-2 loads/stores.
2. Deep per-entry Tier-2 counters/timers remain compiled out in the normal build. Overall `PERF` telemetry remains enabled.
3. Entity V6 leaf-inline remains intact (13 proven sites).
4. V7 architectural fastmem, scheduler fixes, native VFPU leaf, DX12 compatibility and AMD/UMA safeguards remain intact.
5. GE async, parallel vertex decode and the unsafe V5 VFPU experiments remain quarantined.

What is rolled back:

- Geometry extra units/seeds added by V8
- Geometry local-inline leaf experiment (3 sites)
- direct generated leaf experiment (6 sites)
- Geometry block count 417 -> 379
- total hot blocks 1098 -> 1060
- static fused calls 52 -> 36
- Tier-2 direct-memory sites 2068 -> 1969 (the removed 99 sites belonged to the discarded extra closure)

## Direct-memory view slimming
V8 stored both a fastmem base and a runtime RAM-limit field in every `Tier2DirectMemoryView`. V8.1 stores only the host base pointer. The VCS guest RAM limit is fixed at 32 MiB, so the append/alias helper uses a compile-time bound.

This changes `Tier2DirectMemoryView` host state to one pointer (`static_assert(sizeof(...) == sizeof(void *))`) and avoids carrying an unnecessary second value through hot Tier-2 functions.

## Code-footprint result
Geometry source:

- V8: 8,290 lines / 377,564 bytes
- V8.1: 6,946 lines / 310,424 bytes

Linux `-O2` Geometry object `.text`:

- V8: 209,248 bytes
- V8.1: 181,782 bytes
- reduction: ~13.13%

Geometry GPR shadow remains disabled, preserving the MSVC compile-time safeguard discovered in V4.

## Validation
Completed in the container:

- V8.1 static audit: PASS 12/12
- generator second run: all 7 clusters `host_changed=0`, hook units `hook_units_changed=0`
- VCSNative Tier-2 cluster object compile: PASS 7/7
- `psprecomp_tests`: PASS
- `vcs_profile_tests`: PASS
- `vcs_config_tests`: PASS
- `vfpu_tier2_tests`: PASS

The Windows/MSVC build and real VCS route are the authoritative runtime benchmark.

## Build / install
Preferred if V8 is currently in the working tree: extract the V8.1 overlay over it and overwrite files, then run:

```bat
profiles\vcs\BUILD_VCS_NINJA.bat
```

Do **not** delete `out`. The new stamp `.vcs_perf_v81_cpu_lean_20260817` invalidates the seven Tier-2 cluster objects plus runtime-log identity while preserving generated AOT and DX12 objects.

The FULL package is also supplied for a clean source tree.

## Expected runtime identity

```text
stage=perf-v8.1-cpu-lean-2026-08-17
perf_layer=8 cpu_lean_revision=1
hot_blocks=1060 static_fused_calls=36
geometry_inline_leaf_sites=0 direct_generated_leaf_sites=0
tier2_direct_fastmem=1 tier2_direct_mem_sites=1969
geometry_fusion_rollback=1
```

## Next benchmark
Use the same city route if practical and send the new runtime log. Primary acceptance metric is `guest_cpu_us_avg` in 50k-110k draw windows. V8.1 should be judged against V7 as well as V8; if it does not beat V7, the remaining V8 direct-memory experiment should also be rejected rather than kept on theory.

## Progress estimate
- overall project: ~92%
- CPU/Tier-2 architecture: ~96%
- >150 FPS performance target: ~58% until V8.1 runtime data proves a net gain
