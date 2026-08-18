#!/usr/bin/env python3
from pathlib import Path

root = Path(__file__).resolve().parents[3]
profile = root / 'profiles' / 'vcs'
host = profile / 'host'
source = (host / 'vcs_profile.cpp').read_text(encoding='utf-8')
runtime = (root / 'src' / 'runtime.cpp').read_text(encoding='utf-8')
display_cpp = (host / 'display_window.cpp').read_text(encoding='utf-8')
display_hpp = (host / 'display_window.hpp').read_text(encoding='utf-8')
main = (host / 'main.cpp').read_text(encoding='utf-8')
header = (host / 'vcs_profile.hpp').read_text(encoding='utf-8')
log = (host / 'vcs_runtime_log.cpp').read_text(encoding='utf-8')
guest = (profile / 'generated' / 'generated_unit_0170.cpp').read_text(encoding='utf-8')

def need(cond, msg):
    if not cond:
        print('FAIL:', msg)
        raise SystemExit(1)
    print('PASS:', msg)

need('stage=correctness-v8.2.6a-save-repro-passive-recovery-2026-08-18' in log, 'V8.2.6A runtime stage')
need('correctness_revision=8261' in log, 'V8.2.6A correctness revision')
need('hot_blocks=1060' in log and 'static_fused_calls=36' in log and 'geometry_fusion_rollback=1' in log,
     'V8.2 CPU/Tier2 shape preserved')
need('atrac_stream_resident_status=1' in log and 'atrac_nonloop_resident=-2' in log and
     'atrac_loop_resident=-3' in log and 'news_atrac_v825_guard=1' in log,
     'working V8.2.5 NEWS semantics preserved')
need('output2_late_catchup=0' in log, 'rejected Output2 catch-up remains disabled')
need('save_repro_passive_until_f8=1' in log and 'save_repro_hle_hotpath=0' in log and
     'save_repro_ui_hotkeys=1' in log, 'passive-capture recovery advertised')
need('kAtracRemainNonLoopOnMemory = 0xFFFFFFFEu' in source and
     'kAtracRemainLoopOnMemory = 0xFFFFFFFDu' in source, 'V8.2.5 ATRAC resident code preserved')
need('static_cast<std::uint32_t>(-1)' in guest and 'static_cast<std::uint32_t>(-2)' in guest,
     'VCS guest ATRAC resident branches preserved')

# The regression source: V8.2.6 put library/NID bookkeeping around every import.
# V8.2.6A must have none of that in core runtime or profile hot paths.
for forbidden in ['g_runtime_current_import_library', 'g_runtime_current_import_nid',
                  'runtime_current_import_library()', 'runtime_current_import_nid()']:
    need(forbidden not in runtime, f'core runtime has no passive import identity: {forbidden}')
need('save_repro_trace_hle' not in source, 'profile has no per-HLE SAVE_REPRO tracing')
need('GetAsyncKeyState(' not in source, 'SAVE_REPRO does not poll Win32 keyboard from guest/vblank code')
need('display_window_take_save_repro_commands()' in source, 'guest consumes queued UI-thread F8/F10 commands')
need('save_repro_commands.fetch_or(0x1u' in display_cpp and 'save_repro_commands.fetch_or(0x2u' in display_cpp,
     'WndProc queues F8/F10 edges')
need('save_repro_commands.exchange(0u' in display_cpp and
     'display_window_take_save_repro_commands() noexcept' in display_hpp,
     'queued diagnostic commands are atomically consumed')
need('(1u << 30u)' in display_cpp, 'Win32 key autorepeat is ignored')

# Checkpoint remains useful once explicitly armed.
for token, label in [
    ('kSaveReproVersion = 826u', 'checkpoint format compatibility'),
    ('VCS_SAVE_REPRO_CHECKPOINT.bin', 'checkpoint filename'),
    ('VCS_SAVE_REPRO_TRACE.txt', 'trace filename'),
    ('PSPRECOMP_SAVE_REPRO_AUTO_RESTORE', 'auto-restore switch'),
    ('kSaveReproTraceCapacity = 131072u', 'trace ring capacity'),
    ('kSaveReproDispatchSampleStride = 64u', 'dispatch trace sampling'),
    ('save_repro_fnv1a', 'checkpoint checksum'),
    ('save_repro_write_kernel_state', 'kernel state serialization'),
    ('save_repro_write_media_audio_state', 'media/audio state serialization'),
    ('save_repro_write_ge_state', 'GE state serialization'),
]: need(token in source, label)
need('save_repro_capture_requested = true' in source and
     'if (save_repro_capture_requested)' in source and
     'save_repro_write_checkpoint(rt, ctx, error)' in source,
     'F8 still captures at exact post-dispatch boundary')
need('restore_save_repro_checkpoint_if_requested' in header and
     'restore_save_repro_checkpoint_if_requested(runtime, save_repro_restore_error)' in main and
     'save_repro_restored ? runtime.cpu().pc : elf.runtime_entry()' in main,
     'persistent checkpoint restore path preserved')
need('save_repro_dump_trace(rt, "window-close")' in source,
     'trace auto-dump on close preserved after capture')

capture = source[source.index('// V8.2.6 SAVE REPRO CAPTURE'):source.index('constexpr std::uint32_t kPspUtilityStart')]
need('PSPRECOMP_TIME_TICK_DISPATCHES' not in capture and 'g_runtime_starvation_interval_fast' not in capture,
     'capture block does not change scheduler cadence')
print('V8.2.6A SAVE REPRO PASSIVE RECOVERY audit PASS')
