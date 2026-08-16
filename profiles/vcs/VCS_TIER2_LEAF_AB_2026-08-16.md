# VCS Tier-2 LEAF A/B Handoff — 2026-08-16

## Goal
Isolate the leaf-call inlining part of the failed HOTSPOT OPT1 experiment while keeping the known-good HOTFIX SAFE corpus everywhere else.

## Baseline
Built directly from `PSPRecomp-VCS-TIER2-HOTSPOT-HOTFIX-SAFE-2026-08-16`, the last source tree confirmed by the user to boot and reach gameplay.

## What changed
Only two generated caller units are semantically changed:
- `generated_unit_0155.cpp`
- `generated_unit_0085.cpp`

18 static cross-unit callsites are replaced with exact bodies for eight tiny generated leaf entries:
- unit 0152 entries 432/433 (`0x08A65EA0`, `0x08A65EB4`)
- unit 0153 entries 100..104 (`0x08A68CBC` .. `0x08A68CDC`)
- unit 0044 entry 665 (`0x088B7AD8`)

No GPR block cache, no FPR cache, no global tail-chain change, no local-transfer cap increase, no scheduler cadence change, and no new VFPU hotspot expansion are included in this A/B.

## Critical semantic correction versus HOTSPOT OPT1
The failed OPT1 leaf transform called `account_inlined_generated_leaf(ctx)` while `ctx.pc` could still contain a stale native-frame PC. If the starvation boundary fired at that exact call, the scheduler could observe/save the wrong guest PC.

The A/B transform now reproduces the generated callee's return semantics first:

```cpp
ctx.pc = <continuation PC>;
if (!rt.account_inlined_generated_leaf(ctx)) return;
goto <continuation label>;
```

This uses the existing Runtime helper from the known-good SAFE tree. `runtime.hpp` is unchanged, avoiding a full generated-corpus rebuild.

## Build behavior
`BUILD_VCS_NINJA.bat` uses marker `.tier2_leaf_ab_20260816_v1` and, on the first build only, invalidates:
- `generated_unit_0085.cpp.obj`
- `generated_unit_0155.cpp.obj`
- `vcs_runtime_log.cpp.obj`

Ninja then handles normal dependencies. It should not intentionally invalidate all generated units.

## Runtime log identity
Expected header:

```text
stage=tier2-leaf-ab-2026-08-16
perf_telemetry=1
guest_hotspot=0
```

## Validation completed
- Transform application: 2 files, 18 static callsites.
- Transform idempotence: PASS (second run reports 0 changes).
- Generated corpus audit: only units 0085 and 0155 differ from HOTFIX SAFE.
- `generated_unit_0085.cpp`: `g++ -fsyntax-only` PASS.
- `generated_unit_0155.cpp`: `g++ -fsyntax-only` PASS.
- `psprecomp_tests`: PASS.
- `vcs_profile_tests`: PASS.
- `vfpu_tier2_tests`: PASS.
- Full Linux `VCSNative` build was started and reached generated-unit compilation without source errors, but was not allowed to finish within the execution-call windows. Windows/DX12 runtime boot must be confirmed by the user.

## Test protocol
1. Overlay the LEAF A/B package on top of the current HOTFIX SAFE tree.
2. Run `profiles\\vcs\\BUILD_VCS_NINJA.bat`.
3. Confirm `[0c-leaf]` appears on the first build.
4. Launch normally.
5. First priority: confirm the loading screens and gameplay still boot.
6. If it boots, run the same heavy-city route for 3–5 minutes and send `VCSNative.log`.
7. Compare `guest_cpu_us_avg` and FPS distribution against HOTFIX SAFE.

## Rollback
If it closes before loading, re-overlay `PSPRecomp-VCS-TIER2-HOTSPOT-HOTFIX-SAFE-OVERLAY-2026-08-16.zip` and rebuild. Because the experiment modifies only two generated units, this cleanly isolates leaf-inline as the cause.

## Estimated project progress
- Overall project: ~82%
- Performance diagnosis: 100%
- Tier-2 implementation: ~69%
