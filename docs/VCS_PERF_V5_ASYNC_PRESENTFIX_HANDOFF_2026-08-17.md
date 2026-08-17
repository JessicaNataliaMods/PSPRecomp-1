# VCS PERF V5 ASYNC PRESENTFIX — 2026-08-17

## Base
Built directly on **V5 ASYNC/VFPU STALLFIX**. All V5 performance work remains enabled: asynchronous GE, parallel vertex decode, 95 VFPU default-prefix fast paths, native block-load leaf optimization, Tier-2 V4 dataflow/SIMD/GPR-shadow work, and AMD/UMA compatibility.

## Symptom
After the intro videos the game reached the gameplay framebuffer/swapchain creation and then remained black without a crash. The runtime log stopped before any gameplay GE/draw telemetry appeared.

## Root cause
V5 made `sceDisplayWaitVblank*` call `ge_async_wait_idle()`. That is too strong and is not PSP display semantics. VBlank is not a global GE DrawSync. A GE list may legitimately remain queued/stalled across a vblank and require the Allegrex thread to advance its stall address. Blocking the Allegrex thread in VBlank until `outstanding == 0` can therefore create a circular wait:

1. Allegrex enters VBlank and waits for all async GE tasks to become idle.
2. GE reaches/depends on a stall transition that requires the guest to continue and update it.
3. Guest cannot update it because it is blocked in VBlank.
4. No crash occurs; the screen remains black indefinitely.

The previous STALLFIX correctly fixed one worker/UpdateStall commit race but could not fix this architectural barrier.

## PRESENTFIX
- Removed the global `ge_async_wait_idle()` call from the VBlank path.
- Added an explicit **presentation safe-point gate**.
- VBlank raises `presentation_requested`.
- The GE worker finishes only the segment it is currently executing, then pauses **between tasks/segments**.
- Presentation waits only for `worker_busy == false`, not `outstanding == 0`.
- While presentation owns the gate, the worker cannot start another segment, so `ge_gpu_backend_finish_color_frame()` and related backend presentation operations see coherent state.
- After presentation, the gate is released and queued/stalled work resumes.
- Existing stall-race recovery is preserved.

This retains real CPU/GE overlap during the frame while avoiding both the deadlock and a renderer concurrency race during final frame presentation.

## Telemetry
Runtime header now reports:

`stage=perf-v5-async-presentfix-2026-08-17`

and:

`ge_async_stall_race_fix=1 ge_async_present_gate=1`

Async shutdown census also reports `present_safe_points=`.

## Build behavior
New one-shot stamp:

`.vcs_perf_v5_async_presentfix_20260817`

It invalidates only:
- `vcs_profile*.obj`
- `vcs_runtime_log*.obj`

No Tier-2 cluster or DX12 backend object is intentionally invalidated.

## Validation
- `psprecomp_tests`: PASS
- `vcs_config_tests`: PASS
- `vfpu_tier2_tests`: PASS
- `PSPRECOMP_GE_ASYNC=1 vcs_profile_tests`: PASS
- VCSNative target `vcs_profile.cpp` object: PASS
- VCSNative target `vcs_runtime_log.cpp` object: PASS

A new regression test verifies that presentation can acquire a safe point even while `outstanding == 1`; this specifically prevents the VBlank/GE circular wait from returning.

## Expected next test
Apply the overlay over the current V5 STALLFIX tree, rebuild, and boot normally with GE async left enabled. The critical result is whether gameplay proceeds past the first post-intro framebuffer. If it does, the resulting runtime log can finally be used to evaluate V5 performance rather than boot stability.

## Progress estimate
- Overall project: ~91%
- Tier-2: ~95%
- >150 FPS performance-margin goal: ~62% (unchanged; this patch is a correctness fix for the performance architecture, not a measured FPS gain)
