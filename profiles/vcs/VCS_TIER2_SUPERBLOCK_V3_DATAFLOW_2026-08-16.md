# VCS Tier-2 Superblock V3 Dataflow — 2026-08-16

## Purpose
V2 proved that multi-cluster Tier-2 coverage is high but call/tail fusion alone does not remove enough guest CPU time. V3 keeps the V2 unwind/reentry safety fixes and attacks repeated guest-memory work inside the hot superblock bodies.

## Architecture retained from V2
- 7 Tier-2 clusters / 1,060 hot blocks.
- 49 static fused direct calls and 13 fused tail edges.
- Safe AOT fallback, chain-depth/starvation accounting, unwind fix, and reentry guard.
- Existing per-window TIER2 telemetry remains active.

## V3 dataflow/memory lowering
`GuestMemory::AotFastView` now exposes block/batched fast paths with exact scalar fallback:
- `aot_try_load32_block<N>` / `aot_load32_block<N>`
- `aot_try_store32_block<N>` / `aot_store32_block<N>`
- `aot_append32`
- `aot_advance32`

The Tier-2 generator lowers hot-body patterns to those helpers only when it can prove the required adjacency/order. Slow/VRAM/write-watch/alias cases preserve the original scalar behavior.

Static V3 lowering across the 7 clusters:
- 104 VFPU four-word loads batched.
- 29 VFPU four-word stores batched.
- 14 generic contiguous load runs / 141 words.
- 21 generic contiguous store runs / 146 words.
- 51 append32 command-builder patterns.
- 89 advance32 cursor patterns.

## Validation
- `psprecomp_tests`: PASS.
- `vcs_profile_tests`: PASS.
- `vfpu_tier2_tests`: PASS.
- Generator second run: zero changes.
- 7/7 Tier-2 cluster objects compiled using the real VCSNative target flags.
- 8/10 hooked generated units have fresh real target objects; units 0157/0158 pass exact-command syntax validation but the Linux optimizer exceeded the interactive execution window when rebuilding those very large units.
- Full Linux VCSNative link was not claimed because the guest-memory header change causes a broad AOT rebuild and exceeds the container execution window.

## Build / test
Apply the V3 overlay on top of the current V2 CRASHFIX tree and run:

```bat
profiles\vcs\BUILD_VCS_NINJA.bat
```

Do not delete object files manually. The V3 stamp invalidates the intended Tier-2 objects, while the `guest_memory.hpp` dependency causes Ninja to rebuild any AOT units that require the new header automatically.

Expected runtime log:

```text
stage=tier2-superblock-v3-dataflow-2026-08-16
tier2_superblocks=... version=3 ... dataflow=1 vfpu_block32=133 mem_runs=35 mem_words=287 append32=51 advance32=89
```

## Performance status
The isolated Linux helper microbenchmarks showed roughly 18% lower time for the batched four-word load helper and roughly 16% lower time for the append32 pattern. These are local microbenchmarks only; V3 game FPS/guest CPU improvement is unproven until the Windows runtime log is measured.
