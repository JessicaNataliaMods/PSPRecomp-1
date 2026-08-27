# VCS Tier-2 BOOTFIX — 2026-08-16

## Why this revision exists

The first Tier-2 EXTREME package linked `VCSNative.exe`, but on the user's Windows machine it produced a black screen before the normal loading screen. The later MSVC C1001 happened only while linking `vfpu_tier2_tests.exe`; it did not cause the black-screen executable.

The EXTREME pass had changed several things that can affect bootstrap/scheduler semantics at once. This BOOTFIX restores the known-boot control/scheduling behavior while keeping the lowerings that do not alter guest execution ordering.

## Disabled from the default game path

1. **VCS local transfer budget 2048 -> restored to 256.**
   - Final checked-in VCS corpus: 11,299 guards at `< 256u`.
   - Final checked-in VCS corpus: 0 guards at `< 2048u`.
   - The VCS-specific generator is pinned to 256.
   - The BOOTFIX reapply script also converts 2048 back to 256 after any regeneration.

2. **Cross-unit tail-chain rewrite disabled.**
   - Final generated corpus contains 0 `invoke_chained_direct_tail` calls.
   - Runtime header uses the previous `invoke_chained_direct` semantics.

3. **Hot GPR/FPR block-local promotion disabled.**
   - The 37 hot units were restored from the user-provided pre-EXTREME corpus and then only safe lowerings were reapplied.
   - Final generated corpus contains 0 `PSPRECOMP_VCS_TIER2_HOT_BLOCK_CACHE` markers.

4. **Aggressive startup environment defaults removed.**
   - `VCSNative.exe` no longer forces GE async, tick=4096, parallel vertex decode, or texture-upload-ring on direct launch.
   - `PLAY_VCS.bat` restores the known-boot settings: `PSPRECOMP_GE_ASYNC` unset, tick unset (profile default), parallel vertex decode=0.
   - The corrected `out\vcs-release-ninja` executable selection remains.

## Optimizations retained

- AotFastView lowering for AOT LWL/LWR/SWL/SWR.
- Direct FCR31 condition-bit lowering.
- Compile-time VFPU lowerings on the measured 37 hot units.
- Existing AOT O3/profile-guided hot-unit compile layout and AVX2 host build settings.
- Existing direct cross-unit chaining that was already present before EXTREME.
- Corrected Ninja output-path selection in `PLAY_VCS.bat`.

## MSVC C1001 fix

`vfpu_tier2_tests` is explicitly excluded from IPO/LTCG (`INTERPROCEDURAL_OPTIMIZATION=FALSE`, `/GL-` on MSVC). Game/host LTCG remains enabled. The C1001 was a compiler back-end ICE during test linking, not a VCS C++ diagnostic.

## One-time stale-object protection

`BUILD_VCS_NINJA.bat` now creates this stamp after the first successful BOOTFIX VCSNative build:

`.vcs_tier2_bootfix_20260816_v1`

If the build tree exists and the stamp does not, the BAT deletes stale `.obj` and `.pch` once before building. This is specifically to prevent an overlay install from accidentally reusing objects compiled from the broken EXTREME generated sources.

## Validation performed in the container

- `psprecomp_tests`: PASS.
- `vcs_config_tests`: PASS.
- `audio_resampler_tests`: PASS.
- `vfpu_tier2_tests`: PASS.
- `vcs_bootstrap_paths_tests`: PASS.
- Reusable selected suite: 5/5 PASS.
- `vcs_recomp`: compiled and linked.
- 37/37 measured hot `generated_unit_*.cpp` files: `g++ -fsyntax-only` PASS.
- Final corpus sanity:
  - tail refs: 0
  - local-transfer 2048 refs: 0
  - local-transfer 256 guards: 11,299
  - GPR/FPR Tier-2 marker refs: 0

## Windows test instruction

Overlay this BOOTFIX over the current repository and run `profiles\vcs\BUILD_VCS_NINJA.bat` normally. Do not manually preserve the old EXTREME `.obj` files; the BAT now invalidates them once automatically. Then launch through `PLAY_VCS.bat` so the known-boot runtime settings are used.

## What this establishes

This revision is intended first to restore startup/loading correctness while retaining safe Tier-2 arithmetic/memory lowerings. If Windows reaches loading/gameplay again, the removed aggressive transforms can be reintroduced one at a time with an A/B profile instead of changing scheduler, chain semantics, and register lifetime simultaneously.
