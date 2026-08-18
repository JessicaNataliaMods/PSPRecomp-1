# VCSNative V8.2.2 Correctness Recovery — Save / SAS / ATRAC

Date: 2026-08-17
Base: V8.2 CPU Runtime Lean stable source (not V8.2.1)
Estimated total VCS recomp project progress: ~92%

## Why this recovery exists

The physical V8.2.1 test did not fix the stuck vehicle sound and introduced/revealed an infinite mission-interior Loading state. The supplied runtime log shows the Loading screen is active rather than blocked: from vblank 20461 onward the same 4500 game draws / 4080 GPU draws / 420 merges repeat with host I/O at zero for thousands of vblanks. There are no savedata operations in that run before the interior stall.

V8.2.2 therefore rebases correctness work onto the previously stable V8.2 source and does not carry forward the speculative V8.2.1 paused-KeyOff or LISTSAVE lifecycle changes.

## 1. Mission-interior Loading regression recovery

- Source base restored to V8.2 for runtime behavior.
- V8.2.1 paused-KeyOff behavior removed.
- V8.2.1 LISTSAVE host-ownership/lifecycle experiment removed.
- Tier-2, scheduler, Geometry, World, DX12 and performance architecture are unchanged from V8.2.

This removes V8.2.1-specific runtime changes from the mission/interior path. Physical gameplay remains authoritative to prove the interior transition is restored.

## 2. SAS audio correctness

### Latched EndFlag

The old HLE returned `!voice.playing` directly from `__sceSasGetEndFlag`. PSP SAS exposes end flags as a snapshot refreshed by a completed Core mixer cycle. V8.2.2 stores `SasState::end_flags` and refreshes it only after `sas_mix_into` / `sas_mix_raw` completes.

This prevents guest audio control code from observing a voice transition before the mixer cycle that publishes it, which can otherwise cause premature voice reuse/rearming.

### VAG loop predictor restoration

The decoder already captured `loop_start_history1/2`, but `rewind_loop()` never restored them. V8.2.2 restores both predictor histories on every loop jump. This makes every pass through a loop start from the same ADPCM decoder state instead of accumulating waveform drift.

### What was deliberately reverted

The V8.2.1 helper that accepted KeyOff while a voice was paused is gone. V8.2 paused-KeyOff behavior is restored until a physical trace proves a different state transition is required.

## 3. Savedata

The useful transactional write protection is retained, but the UI/status lifecycle is exactly the V8.2/V9.6 behavior again.

Before replacing an existing slot, V8.2.2 snapshots all guest buffers, stages DATA.BIN and optional auxiliary files to temporary host files, and commits only after all staging succeeds. A failure rolls the old slot back instead of leaving DATA.BIN partially replaced.

Normal VCSNative.log now records low-volume LISTSAVE diagnostics:

- `SAVEDATA_SAVE result=... data=... icon0=... icon1=... pic1=... snd0=...`
- `SAVEDATA_SAVE acknowledged status=QUIT`
- `SAVEDATA_SAVE shutdown status=FINISHED`

These lines will distinguish an I/O/descriptor failure from a guest frontend transition if the original post-save black screen still reproduces.

## 4. ATRAC / radio NEWS stall

V8.2.1 attempted direct source tracking only for ordinary host-file reads. The physical log showed every observed source resolution as `direct_buffer=0`, proving the radio was taking another path. VCS commonly reads these streams through the virtual UMD handle.

V8.2.2 maps virtual-disc read offsets back to the indexed `VirtualDiscFile` before the read, associates an ATRAC guest destination buffer with the exact AT3/AA3/OMA source, and consumes that mapping in `sceAtracSetHalfwayBufferAndGetID`.

The old content-header search remains only as fallback. `ATRAC_SOURCE` and `ATRAC_DECODE` remain low-volume runtime diagnostics.

Expected healthy line:

`ATRAC_SOURCE resolve_us=<small> direct_buffer=1 fallback_reads=0 source=...AT3`

The V8.2.1 physical log contained a 7152 us source lookup while the matching decoder open was only 431 us, so source resolution itself was still capable of producing a visible radio hitch.

## Validation

- CMake Release/Ninja configure: PASS
- changed `vcs_profile.cpp` object: PASS
- changed `vcs_runtime_log.cpp` object: PASS
- psprecomp_tests: PASS
- vcs_profile_tests: PASS
- vcs_config_tests: PASS
- vfpu_tier2_tests: PASS
- V8.2 CPU runtime lean audit: PASS
- V8.2.2 correctness recovery audit: PASS (15 checks)
- forbidden external-emulator reference audit: PASS

The full Windows/DX12 executable was not linked in the Linux container. VS2022/Ninja on the user's machine remains the authoritative full build and physical runtime test.

## Physical test order

1. Enter the same mission interior that looped on Loading. This is the first gate.
2. Reproduce the motorcycle/vehicle sound that used to stay looped; verify it retires without opening the menu.
3. Save after several missions and complete the Save UI. If black returns, send the new log; the SAVEDATA_SAVE lines now expose the exact result/descriptor state.
4. Let radio/news transitions occur. Check whether `ATRAC_SOURCE` is now `direct_buffer=1 fallback_reads=0`, and report any visible hitch.

Do not resume CPU optimization until these correctness gates pass.
