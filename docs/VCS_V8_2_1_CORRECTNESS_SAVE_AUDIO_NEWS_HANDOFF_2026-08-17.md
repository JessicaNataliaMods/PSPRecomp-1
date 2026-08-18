# VCSNative V8.2.1 — Correctness: Save + SAS loops + NEWS radio

**Date:** 2026-08-17  
**Base:** PSPRecomp-VCS-PERF-V8.2-CPU-RUNTIME-LEAN-2026-08-17  
**Stage:** `correctness-v8.2.1-save-audio-news-2026-08-17`

## Why this release exists

Performance work is intentionally paused. V8.1/V8.2 restored the correct gameplay-speed feeling, but three correctness risks have priority before further CPU work:

1. after a real successful Save Game, some later mission states can leave a black screen;
2. a vehicle-related SAS effect (reported most clearly on motorcycles, possibly brake/engine) can remain looped until entering the menu;
3. NEWS radio transitions may still hitch when a second ATRAC stream starts.

The V8.2 Tier-2 shape, Geometry rollback, scheduler cadence and runtime-chain lean path are unchanged.

## 1. Save Game black-screen hardening

### Firmware lifecycle fix

The successful LISTSAVE result path previously did all of these at once when the user acknowledged `SAVE COMPLETED`:

- changed the utility state to `Quit`;
- destroyed the host savedata UI;
- immediately cleared `display_window`'s system-utility ownership.

The guest had **not yet** observed `Quit` and called `sceUtilitySavedataShutdownStart`. The new path keeps system-utility ownership through that final PSP utility transition and releases it only from the existing ShutdownStart/Finished path.

This does not reuse or alter the older V9.6 LISTSAVE-cancel workaround. Load cancellation behavior remains unchanged.

### Transactional slot writes

The previous save writer truncated `DATA.BIN` before validating/writing every optional payload. Mission-dependent ICON/PIC/SND descriptors could therefore fail after the main file was already replaced.

V8.2.1 now:

1. validates and snapshots the main game save buffer;
2. validates and snapshots every supplied optional savedata buffer;
3. stages every host file beside its final target;
4. moves any old file to a temporary backup;
5. commits the staged files;
6. rolls all already-committed files back if a later commit fails;
7. removes backups only after the complete commit succeeds.

`VCSNative.meta` remains host-only decoration and cannot turn a valid game save into a failed PSP save operation.

A regression test creates an existing `DATA.BIN`, deliberately makes a later auxiliary target impossible, requires the transaction to fail, and verifies the old `DATA.BIN` remains byte-for-byte intact.

## 2. Stuck motorcycle / vehicle sound

The SAS error value `0x80420016` is now named `kSasErrorInvalidState` rather than the misleading `kSasErrorVoicePaused`.

More importantly, `__sceSasSetKeyOff` no longer rejects an active voice merely because that voice is currently mixer-paused. Pause is treated as a mixer gate, while KeyOff still latches:

- `on = false`;
- envelope phase = `Release`.

This closes the state hole where a looped VAG vehicle voice could be paused during a transition, receive a rejected KeyOff, and later resume with its key still logically held.

The existing zero-release-rate safeguard remains in place. A new regression test exercises:

`looped VAG -> paused -> KeyOff -> unpause -> Release -> retired`

and requires the voice to reach zero envelope and stop playing.

## 3. NEWS radio hitch investigation/fix

### Removed synchronous source scan from the common path

ATRAC setup previously identified a host source by iterating all registered AT3/AA3/OMA files with the same size, opening each candidate synchronously and reading up to 256 header bytes.

V8.2.1 records the native path associated with a normal file descriptor. When `sceIoRead` fills a guest buffer from an ATRAC source, it records the exact producer for that guest buffer. `sceAtracSetHalfwayBufferAndGetID` then resolves the source directly from that buffer address:

- no directory-sized candidate scan;
- no host file open;
- no header reread in the common case.

A bounded 256-byte prefix cache remains only as a fallback for raw virtual-disc layouts where the direct fd-to-buffer association is unavailable. Each fallback file is read at most once.

### Runtime proof in normal VCSNative.log

No environment variable is required. Low-volume lines are now written to the normal runtime log:

```text
ATRAC_SOURCE resolve_us=... candidates=... direct_buffer=1 fallback_reads=0 ... source=NEWS_....AT3
ATRAC_DECODE source=NEWS_....AT3 open=1 decode_us=... bytes=... sample=... slow_events=...
```

`ATRAC_DECODE` is emitted for every decoder open and for later decode calls taking at least 2 ms. Therefore the next physical NEWS test can distinguish:

- source resolution stall;
- FFmpeg decoder-open stall;
- slow steady-state decode.

This release removes the known synchronous resolver scan. It does **not** claim that FFmpeg opening a brand-new NEWS decoder is already proven hitch-free; the new log makes that measurable before a more invasive decoder-prewarm change is considered.

## Preserved V8.2 performance baseline

Unchanged:

- hot blocks: 1,060;
- static fused calls: 36;
- Geometry inline generated leaves: 0;
- Boundary direct generated leaf sites: 5;
- `cpu_lean_revision=2`;
- Geometry fusion rollback active;
- direct fastmem active;
- GE async quarantined/off;
- parallel vertex decode quarantined/off;
- scheduler/starvation cadence unchanged.

## Runtime identity

Expected header:

```text
stage=correctness-v8.2.1-save-audio-news-2026-08-17
...
correctness_revision=821
save_transaction=1
save_shutdown_lifecycle=1
sas_paused_keyoff=1
atrac_direct_source=1
atrac_stall_diag=1
```

## Validation completed

- `vcs_profile.cpp` VCSNative Release object: PASS.
- `vcs_runtime_log.cpp` VCSNative Release object: PASS.
- `psprecomp_tests`: PASS.
- `vcs_profile_tests`: PASS.
- `vcs_config_tests`: PASS.
- `vfpu_tier2_tests`: PASS.
- V8.2 CPU runtime-lean audit: PASS.
- V8.2.1 correctness static audit: **13/13 PASS**.
- transactional save rollback fixture: PASS as part of `vcs_profile_tests`.
- paused looped-SAS KeyOff fixture: PASS as part of `vcs_profile_tests`.
- changed-source audit for the prohibited external emulator name: PASS.

A full fresh Linux VCSNative link was not repeated because this host-only correctness overlay does not modify generated AOT/Tier-2/DX12 code; the changed VCSNative target objects were compiled directly. Windows VS2022/Ninja plus real VCS gameplay remains authoritative.

## Windows build / install

Preferred path from current V8.2 source: extract the V8.2.1 overlay over it, overwrite files, **do not delete `out`**, then run:

```bat
profiles\vcs\BUILD_VCS_NINJA.bat
```

The new one-shot stamp invalidates only `vcs_profile` and `vcs_runtime_log` objects. Generated AOT, Tier-2 and DX12 objects are preserved.

## Physical test order

1. Load the same save and complete several missions.
2. Save into an existing slot and a new slot; acknowledge `SAVE COMPLETED`; verify normal return every time.
3. Reproduce the motorcycle/vehicle sound that previously stuck; enter/leave pause and vehicles repeatedly; verify no effect survives incorrectly.
4. Listen until a NEWS bulletin starts. If any hitch remains, provide the new `VCSNative(...).log`; inspect `ATRAC_SOURCE` and `ATRAC_DECODE` around the NEWS filename.

## Progress estimate

- Overall VCS recomp project: **~92%**.
- Correctness/frontend/audio stabilization: **~94% implementation**, pending physical Windows verification of these three reports.
- CPU/Tier-2 optimization: remains **~97% architectural work**, intentionally paused here.
- 150+ FPS headroom objective: unchanged from V8.2 and not advanced by this correctness release.
