# VCS Tier-2 SUPERBLOCK V2 COMPLETE — Handoff

Date: 2026-08-16
Base: `PSPRecomp-VCS-TIER2-SUPERBLOCK-V1-PYFIX-2026-08-16`
Target: VCSNative / PSPRecomp / Windows DirectX 12

## Purpose

V1 proved that scheduler-safe second-layer AOT can boot and run, but a single 0154↔0155 trace was too small to move whole-frame performance. V2 replaces that experiment with a profile-guided multi-cluster second layer covering the dominant guest/AOT hotspots measured by `GUESTHOT_UNIT` / `GUESTHOT_PC`.

This is not the rejected GPR cache A/B and not the neutral leaf-inline A/B. The original generated AOT remains the semantic fallback. V2 cold-splits measured hot control-flow closures into smaller host translation units and fuses selected cross-unit direct calls/tail transfers inside those closures while preserving Runtime chain-depth and starvation/scheduler accounting.

## Final V2 coverage

Static generated second-layer corpus:

- 7 profile-guided clusters
- 1,060 selected hot basic blocks
- 17,660 generated cluster source lines (generator-reported)
- 49 static cross-unit/direct call sites fused
- 13 static tail-transfer sites fused
- 25 entry hooks across 10 generated units
- 9 explicit cold exits in the Entity cluster
- all cold/external paths retain the original AOT fallback

Clusters:

| Bit | Mask | Cluster | Units / purpose | Blocks | Fused calls | Fused tails | Hooks |
|---:|---:|---|---|---:|---:|---:|---:|
| 0 | `0x01` | Entity | 0152/0153 accessors + 0154/0155 entity loop | 94 | 13 | 8 | 5 |
| 1 | `0x02` | Geometry | 0084/0085 geometry/collision | 379 | 33 | 0 | 4 |
| 2 | `0x04` | Boundary | 0085/0086 boundary loop | 62 | 0 | 4 | 5 |
| 3 | `0x08` | Matrix | 0044 matrix/VFPU hot function | 73 | 0 | 0 | 1 |
| 4 | `0x10` | Physics | 0129 transform/physics hot function | 15 | 0 | 0 | 1 |
| 5 | `0x20` | World | 0157/0158 world/streaming hot functions | 402 | 1 | 0 | 6 |
| 6 | `0x40` | Edge43 | 0043/0044 boundary | 35 | 2 | 1 | 3 |
| | `0x7F` | **ALL** | | **1,060** | **49** | **13** | **25** |

The 0157 side was added in the final pass because unit 0157 was the sixth-largest unit hotspot in the original profiler. Its measured roots are now in the same World cluster as 0158 rather than leaving half of that hot pair in first-layer AOT.

## Runtime architecture

### Multi-cluster hot CFGs

`profiles/vcs/tools/build_tier2_superblocks.py` parses the generated AOT blocks, computes bounded local control-flow closures from measured PC roots, emits cluster-local labels, and patches only the measured entry PCs in the original units.

Each enabled hook calls a dedicated second-layer function. Local control flow stays in that function. Selected `invoke_chained_direct` calls whose target is inside the same cluster become local second-layer transfers.

### Scheduler / chain-depth preservation

Removed native `invoke_chained_direct` stack frames are retained as logical Runtime frames through the existing scheduler-safe Tier-2 helpers. Fused calls/tails therefore continue to obey chain-depth limits and starvation boundaries. If an external/cold path is required, pending logical frames are completed before returning to normal AOT.

### Original AOT fallback

The original generated unit body remains directly below each hook. Disabling a cluster immediately restores first-layer execution at that PC without rebuilding. Cold exits with known original entry IDs resume the original generated entry function rather than entering a generic PC dispatcher.

## Runtime switches (no rebuild)

Global off:

```bat
set PSPRECOMP_TIER2_SUPERBLOCKS=0
```

Global on/default:

```bat
set PSPRECOMP_TIER2_SUPERBLOCKS=1
```

Cluster mask (default all = `0x7F`):

```bat
set PSPRECOMP_TIER2_CLUSTER_MASK=0x7F
```

Useful masks:

- Entity `0x01`
- Geometry `0x02`
- Boundary `0x04`
- Matrix `0x08`
- Physics `0x10`
- World `0x20`
- Edge43 `0x40`

Masks can be combined with bitwise OR, e.g. Entity+Geometry = `0x03`.

The mask is read once per process. Restart VCSNative after changing it.

## Coverage telemetry

V2 fixes a major blind spot from V1: every PERF interval now emits a `TIER2` line.

Header expected:

```text
stage=tier2-superblock-v2-complete-2026-08-16
perf_telemetry=1 interval_vblanks=60
tier2_superblocks=1 version=2 clusters=7 mask=0x7f hot_blocks=1060 static_fused_calls=49 static_fused_tail=13 hooks=25
```

Per PERF window, expect fields such as:

```text
TIER2 window=60 vblank=... entity_e=... entity_x=... geometry_e=... geometry_x=... ... total_entries=... fused_tail=... fused_calls=... cold=... fallback=... sampled=... sampled_us=...
```

`*_e` = dynamic second-layer entries in that 60-vblank window.

`*_x` = dynamic fused call + tail edges actually executed, not static site count.

`sampled_us` is low-overhead 1/256 sampled inclusive cluster time. It is for coverage/ranking, not an exclusive CPU-time sum.

Counters are thread-local to avoid atomics on hot edges. If a future runtime changes Allegrex execution/reporting to different threads and the TIER2 lines unexpectedly remain zero, the counters must be moved to runtime-owned or atomic aggregation.

## Build integration

`BUILD_VCS_NINJA.bat` now:

1. runs future-timestamp repair;
2. reapplies BOOTFIX-safe transforms only;
3. detects Python 3 using `py -3`, then `python`;
4. regenerates V2 clusters idempotently;
5. invalidates only V2 hook/cluster objects on the first V2 revision build;
6. configures/builds VCSNative and the normal regression/probe targets.

The first V2 revision invalidates units:

`0043 0044 0084 0085 0086 0129 0154 0155 0157 0158`

No manual `.obj` deletion is required.

MSVC cluster flags are kept independent from the giant generated corpus:

- `/O2`
- `/Ob3`
- `/bigobj`
- `/GL-`

A final CMake audit fixed an option-property overwrite: host `/Ob3` is now appended instead of replacing the cluster `/O2 /bigobj /GL-` options.

## Generator correctness / idempotence

Final second execution reports:

```text
host_changed=0
hook_units_changed=0
blocks=1060
lines=17660
fused_calls=49
fused_tail=13
cold_exits=9
```

CFG audit:

- 7/7 cluster files: every `goto SB_*` resolves to a label in the same TU
- zero raw `goto LOCAL_DISPATCH` remains in cluster files
- 25 V2 hooks found across exactly 10 generated units
- zero V1 hook markers remain in generated units

BOOTFIX-safe pass on the final generated corpus with `--check`:

```text
files=0
caps_2048_to_256=0
unaligned_fastview=0
fpu_set_inline=0
fpu_get_inline=0
hot VFPU changed=0
local_cap_2048=0 tail_chain=0 gpr_cache=0 fpr_cache=0
```

So the real Windows build order is idempotent.

## Validation performed

Final tests:

- `psprecomp_tests`: PASS
- `vcs_profile_tests`: PASS
- `vfpu_tier2_tests`: PASS

`vcs_profile_tests` now explicitly tests Tier-2 multi-cluster counter snapshot/reset semantics in addition to the existing scheduler/callback/framebuffer suite.

Actual VCSNative-target object compilation (not only syntax checking):

- 7/7 V2 cluster `.cpp` objects compiled
- 10/10 hooked generated-unit objects compiled: 0043, 0044, 0084, 0085, 0086, 0129, 0154, 0155, 0157, 0158

A full Linux `VCSNative` link was attempted, but `runtime.hpp`/CMake dependency changes made Ninja schedule ~250 generated/host objects and the container execution window interrupted the whole-target build after host compilation had begun. No source/compiler diagnostic was emitted before interruption. Do **not** interpret that as a completed full link. Windows/Ninja remains the authoritative complete build for this profile.

## What is deliberately NOT in V2

The following previously failed or neutral experiments are not reintroduced:

- global/local-cap 2048 change
- EXTREME cross-unit tail-chain semantics
- aggressive GPR/FPR architectural-state promotion
- OPT1 dirty GPR block cache
- GPR read-only A/B
- leaf-inline A/B
- forced GE async / forced vertex-parallel defaults

V2 obtains its structural gain by hot CFG extraction and call/tail fusion while leaving architectural state semantics on the known-good SAFE path.

## Windows test procedure

Apply the V2 overlay over the current V1 PYFIX tree and run:

```bat
profiles\vcs\BUILD_VCS_NINJA.bat
```

Do not delete `.obj` manually.

Then play the same heavy city route for roughly 3–5 minutes and provide the new `VCSNative.log`.

The next analysis should compare both `PERF` and `TIER2` lines. Most important questions:

1. How many dynamic entries/edges does each cluster actually cover?
2. Does `guest_cpu_us_avg` fall for comparable draw/texture/transfer loads?
3. Which cluster has the best sampled cost-to-entry ratio?
4. If performance or correctness regresses, can the offending cluster be isolated immediately by `PSPRECOMP_TIER2_CLUSTER_MASK`?

## Status / progress estimate

- Overall VCS recomp project: ~88%
- Tier-2 performance work: ~86%
- Second-layer architecture/implementation: ~85%
- Performance success against the 160–200 FPS aspiration: **not yet verified**; real Windows gameplay data is still required.

The implementation is complete enough to test as a multi-cluster second layer, but the optimization target is not considered achieved until the runtime logs demonstrate a material reduction in guest CPU time.
