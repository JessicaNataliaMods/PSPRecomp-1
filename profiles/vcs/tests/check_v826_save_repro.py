#!/usr/bin/env python3
from pathlib import Path

root = Path(__file__).resolve().parents[3]
profile = root / 'profiles' / 'vcs'
host = profile / 'host'
source = (host / 'vcs_profile.cpp').read_text(encoding='utf-8')
runtime = (root / 'src' / 'runtime.cpp').read_text(encoding='utf-8')
main = (host / 'main.cpp').read_text(encoding='utf-8')
header = (host / 'vcs_profile.hpp').read_text(encoding='utf-8')
log = (host / 'vcs_runtime_log.cpp').read_text(encoding='utf-8')
guest = (profile / 'generated' / 'generated_unit_0170.cpp').read_text(encoding='utf-8')

def need(cond, msg):
    if not cond:
        print('FAIL:', msg)
        raise SystemExit(1)
    print('PASS:', msg)

# Runtime identity and protected V8.2/V8.2.5 guards.
need('stage=correctness-v8.2.6-save-repro-capture-2026-08-18' in log, 'V8.2.6 runtime stage')
need('correctness_revision=826' in log, 'V8.2.6 correctness revision')
need('hot_blocks=1060' in log and 'static_fused_calls=36' in log and 'geometry_fusion_rollback=1' in log,
     'V8.2 CPU/Tier2 shape preserved')
need('ge_async_quarantined=1' in log and 'parallel_vertex_decode_quarantined=1' in log,
     'unstable GE paths remain quarantined')
need('atrac_stream_resident_status=1' in log and 'atrac_nonloop_resident=-2' in log and
     'atrac_loop_resident=-3' in log and 'news_atrac_v825_guard=1' in log,
     'working V8.2.5 NEWS semantics are a regression guard')
need('output2_late_catchup=0' in log, 'rejected Output2 catch-up remains disabled')
need('kAtracRemainNonLoopOnMemory = 0xFFFFFFFEu' in source and
     'kAtracRemainLoopOnMemory = 0xFFFFFFFDu' in source and
     source.count('atrac_remain_frame_status(*state)') >= 3,
     'V8.2.5 ATRAC resident implementation preserved')
need('static_cast<std::uint32_t>(-1)' in guest and 'static_cast<std::uint32_t>(-2)' in guest,
     'VCS guest resident-state branches remain covered')

# Checkpoint/trace surface.
for token, label in [
    ('kSaveReproVersion = 826u', 'checkpoint format version'),
    ('VCS_SAVE_REPRO_CHECKPOINT.bin', 'persistent checkpoint filename'),
    ('VCS_SAVE_REPRO_TRACE.txt', 'circular trace filename'),
    ('VK_F8', 'F8 checkpoint hotkey'),
    ('VK_F10', 'F10 trace hotkey'),
    ('PSPRECOMP_SAVE_REPRO_AUTO_RESTORE', 'auto-restore switch'),
    ('kSaveReproTraceCapacity = 131072u', 'deep trace ring'),
    ('kSaveReproDispatchSampleStride = 64u', 'sampled dispatch trace cadence'),
    ('save_repro_fnv1a', 'checkpoint integrity checksum'),
    ('file_open_flags', 'live file descriptor reopen flags'),
    ('recent_atrac_reads', 'ATRAC producer association state'),
    ('save_repro_write_kernel_state', 'kernel/thread state serialization'),
    ('save_repro_write_media_audio_state', 'audio/media state serialization'),
    ('save_repro_write_ge_state', 'GE/callback state serialization'),
]:
    need(token in source, label)
need('save_repro_checkpoint=1' in log and 'save_repro_trace=1' in log and
     'save_repro_auto_restore=1' in log and 'save_repro_dispatch_sample_stride=64' in log,
     'checkpoint runtime capabilities advertised')
need('save-repro full checkpoint did not restore RAM/time/controller/CPU exactly' in source,
     'full RAM/EDRAM persistent checkpoint roundtrip regression test present')
need('save_repro_dump_trace(rt, "window-close")' in source,
     'trace is preserved automatically when the repro window closes')

# Restore must enter at the captured guest continuation, not the ELF entry.
need('restore_save_repro_checkpoint_if_requested' in header and
     'restore_save_repro_checkpoint_if_requested(runtime, save_repro_restore_error)' in main,
     'main invokes persistent checkpoint restore')
need('save_repro_restored ? runtime.cpu().pc : elf.runtime_entry()' in main,
     'restored CPU PC is used as Runtime::run entry')

# HLE trace gets exact import identity without changing generated-call ABI.
need('runtime_current_import_library() noexcept' in runtime and 'runtime_current_import_nid() noexcept' in runtime,
     'runtime exposes current import identity to diagnostic trace')
need('g_runtime_current_import_library = previous_import_library' in runtime and
     'g_runtime_current_import_nid = previous_import_nid' in runtime,
     'nested import metadata is restored')
need('runtime_current_import_library() noexcept;' in source and 'runtime_current_import_nid() noexcept;' in source,
     'profile uses local diagnostic declarations without runtime.hpp churn')

# Diagnostic only: do not alter protected time/scheduler configuration.
capture_block = source[source.index('// V8.2.6 SAVE REPRO CAPTURE'):source.index('constexpr std::uint32_t kPspUtilityStart')]
need('PSPRECOMP_TIME_TICK_DISPATCHES' not in capture_block and 'g_runtime_starvation_interval_fast' not in capture_block,
     'checkpoint block does not override scheduler cadence')
need('save_repro_capture_requested = true' in source and
     'if (save_repro_capture_requested)' in source and
     'save_repro_write_checkpoint(rt, ctx, error)' in source,
     'F8 arms at vblank and checkpoint captures exact post-dispatch CPU context')
print('V8.2.6 SAVE REPRO CAPTURE audit PASS')
