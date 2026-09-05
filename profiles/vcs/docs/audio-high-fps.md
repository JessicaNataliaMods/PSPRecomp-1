# High-FPS audio / animation timing (2026-09-05)

Base: `efa4728` (the current checkout, not a historical reference build).

## Changes

* Revision 5 handles render/audio command ordering, not SAS envelope timeouts.
  A later stop cancels an unconsumed producer start (`0x0880A6A4`), while
  STOP->START still retriggers. The VCS playing query (`0x0880A5FC`) considers
  pending starts in both command buffers, so an extra render update cannot
  observe a false EOF and drop ownership before KeyOn. Each consumer visit
  retires its start bit (`0x0880AE90`); stale completed batches never hide EOF.
  Tests exhaust all 510 start/stop sequences of lengths 1–8 and both pending
  buffer phases for each channel. A negative control using the original
  independent masks fails with "Audio command order restarted a stopped voice".
* Revision 5 carries fractional milliseconds for the two CTimer integer
  counters at `0x08A11358/0x08A113B0`. The confirmed reproduction loses about
  350 ms relative to animation time in an eight-second interval. Stock mode,
  time scale, pause, and root-motion code remain unchanged. External counter
  changes reset the carry; tests check 60 seconds at 30–240 FPS with <1 ms
  cumulative quantization error. This does not remove the host device queue
  or establish an exact visual lip-sync offset without another user test.
* The revision 4 reproduction reported `aborted_batches=0`: its abort drain
  did not explain the confirmed stuck skid. Revision 5 logs cancelled starts
  and protected pending owners independently of that older path.

* Revision 4 (based on `32f4b08`) preserves unvisited KeyOff commands when
  `0x0880AB48` abandons a command batch because a sample is unavailable. The
  stock exit clears the batch-ready flag without reaching the remaining
  channels. Stops in words `0x08BB4AA8/0x08BB4AAC` must be drained first.
  Tests inject a failure at each of the 28 channels, check the 24+4 bit
  packing, and verify unrelated and paused voices are unaffected. This fixes
  a lost-command path, not a verified reproduction of every reported loop.
* Revision 4 logs SAS lifecycle counters/masks once per guest second and
  ATRAC create/release/seek events, including decoder IDs. Game-clock evidence
  is enabled with Audio Diagnostics too. A fresh user reproduction is needed
  to determine whether the cutscene issue is an unreleased decoder, a seek on
  the previous stream, or output latency. No new cutscene timing adjustment,
  FPS limit, root-motion change, or timeout on legitimate loops is introduced.

* Revision 3 fixes the root-motion regression exposed by removing the timer
  floor. Ped code at `0x0891997C` multiplies displacement by **0.5** when
  timestep < 0.5, while cutscene-object code at `0x08A199DC` divides by **0.5**.
  Both must instead divide displacement by the actual timestep in unlocked
  mode. At 200 FPS the old ped path preserved only 12.5% of displacement and
  the cutscene-object path only 50%. Keep the clock fix, fix both consumers,
  preserve stock mode, and return a zero scale for a paused/zero-duration frame.
* Revision 3 also releases the SAS KeyOn latch when the envelope ends naturally,
  and advances the source clock even when envelope gain is zero. Tests cover
  a looping source with natural envelope completion and a silent finite source.
  These are reproducible mixer defects; they do not alone establish that every
  horn/skid loop reported in gameplay has the same cause.
* The VCS `CTimer::Update` code at guest `0x08A11438` imposed a minimum
  timestep of `0.5`. Its units are 1/50 second, so a render frame always advanced
  animation by at least 10 ms. At 200 FPS this advances animation at twice the
  sample clock's rate. Unlocked modes now retain the measured timestep. Stock
  30 FPS behavior, pause branches, time scale, and the maximum timestep remain
  unchanged. No audio sample rate or pitch is changed.
* `sceSasGetEndFlag` now refreshes its cached mask from current voice state.
  Previously a just-restarted voice could still report its preceding EOF until
  a Core mix occurred. Extra game updates between two mixer grains could thus
  observe an ended voice that was actually playing. The cached field is kept
  for checkpoint layout compatibility. This follows the live `playing` check in
  [PPSSPP's implementation](https://github.com/hrydgard/ppsspp/blob/master/Core/HLE/sceSas.cpp).

The generated CTimer label uses a local jump; registering a host override for
that address does not intercept it. Consequently the fix is in generated unit
0131, with its arithmetic in `host/vcs_frame_timing.hpp`. A regression test also
checks that regeneration has not removed the call at the actual label. Preserve
this patch when regenerating the VCS code. The root-motion consumer patches in
units 0069 and 0133 must be preserved together with the timer patch.

## Verification and diagnostics

`vcs_profile_tests`, `audio_resampler_tests`, `audio_output_timeline_tests`, and
`vcs_frame_timing_tests` pass. Coverage includes KeyOn / repeated GetEndFlag /
Core / EOF / retrigger, 30–240 FPS clock accumulation over one minute, mixed
3/12 ms frames, and the production host audio queue with a fake waveOut device.

`ATRAC_TIMELINE` records source samples versus guest microseconds once per source
second. `PSPRECOMP_GAME_TIMING_DIAG=1` adds deduplicated render-frame animation
time and the guest game clock. `AUDIO_TIMING_REVISION=3` identifies this build.

These tests do not prove that every looping in-game sound is fixed. The exact
in-game loop reproduction and subjective lip sync still require validation.

During isolated automated runs, sending Cross+Start to skip TITLES reproduced
an access violation on BOTH the pre-change executable and the patched one:
guest dispatch `0x08AC43BC`, write to host fastmem offset `0x04800000`. This is
not evidence of a regression from these changes. The regular user's logs,
configuration, and saves were not overwritten by these isolated runs.
