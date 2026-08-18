#!/usr/bin/env python3
from pathlib import Path

root = Path(__file__).resolve().parents[3]
profile = root / 'profiles' / 'vcs'
host = profile / 'host'
source = (host / 'vcs_profile.cpp').read_text(encoding='utf-8')
runtime = (root / 'src' / 'runtime.cpp').read_text(encoding='utf-8')
display_cpp = (host / 'display_window.cpp').read_text(encoding='utf-8')
log = (host / 'vcs_runtime_log.cpp').read_text(encoding='utf-8')
collector = (profile / 'COLLECT_SAVE_REPRO.bat').read_text(encoding='utf-8')
restore = (profile / 'RESTORE_SAVE_REPRO.bat').read_text(encoding='utf-8')
guest = (profile / 'generated' / 'generated_unit_0170.cpp').read_text(encoding='utf-8')

def need(cond, msg):
    if not cond:
        print('FAIL:', msg)
        raise SystemExit(1)
    print('PASS:', msg)

need('stage=correctness-v8.2.6b-save-repro-trace-hotfix-2026-08-18' in log, 'V8.2.6B runtime stage')
need('correctness_revision=8262' in log, 'V8.2.6B correctness revision')
need('hot_blocks=1060' in log and 'static_fused_calls=36' in log and 'geometry_fusion_rollback=1' in log,
     'V8.2 CPU/Tier2 shape preserved')
need('atrac_stream_resident_status=1' in log and 'atrac_nonloop_resident=-2' in log and
     'atrac_loop_resident=-3' in log and 'news_atrac_v825_guard=1' in log,
     'working V8.2.5 NEWS semantics preserved')
need('output2_late_catchup=0' in log, 'rejected Output2 catch-up remains disabled')
need('save_repro_passive_until_f8=1' in log and 'save_repro_hle_hotpath=0' in log and
     'save_repro_f10_async_fallback=1' in log and 'save_repro_collector_partial_bundle=1' in log,
     'V8.2.6B trace recovery advertised')
need('kAtracRemainNonLoopOnMemory = 0xFFFFFFFEu' in source and
     'kAtracRemainLoopOnMemory = 0xFFFFFFFDu' in source, 'V8.2.5 ATRAC resident code preserved')
need('static_cast<std::uint32_t>(-1)' in guest and 'static_cast<std::uint32_t>(-2)' in guest,
     'VCS guest ATRAC resident branches preserved')
for forbidden in ['g_runtime_current_import_library', 'g_runtime_current_import_nid',
                  'runtime_current_import_library()', 'runtime_current_import_nid()']:
    need(forbidden not in runtime, f'core runtime has no passive import identity: {forbidden}')
need('save_repro_trace_hle' not in source, 'profile still has no per-HLE SAVE_REPRO tracing')
need('save_repro_commands.fetch_or(0x1u' in display_cpp and 'save_repro_commands.fetch_or(0x2u' in display_cpp,
     'WndProc F8/F10 edge queue preserved')
need('if (save_repro_trace_enabled)' in source and 'GetAsyncKeyState(VK_F10)' in source and
     'f10_async_was_down' in source, 'F10 async fallback is gated behind armed trace')
# Ensure GetAsyncKeyState is not used anywhere before the save-repro function block.
prefix = source[:source.index('void save_repro_vblank_hotkeys')]
need('GetAsyncKeyState(VK_F10)' not in prefix, 'no F10 polling exists on pre-F8 gameplay/cutscene path')
need('VCS_SAVE_REPRO_TRACE_MISSING.txt' in collector and
     'The bundle will still be created with the checkpoint and runtime log.' in collector and
     'exit /b 3' not in collector, 'collector preserves checkpoint even when trace is absent')
need('if exist "%TRACE%" del /q "%TRACE%"' in restore, 'restore deletes stale trace before a new repro')
for token, label in [
    ('kSaveReproVersion = 826u', 'checkpoint format compatibility'),
    ('VCS_SAVE_REPRO_CHECKPOINT.bin', 'checkpoint filename'),
    ('VCS_SAVE_REPRO_TRACE.txt', 'trace filename'),
    ('PSPRECOMP_SAVE_REPRO_AUTO_RESTORE', 'auto-restore switch'),
    ('kSaveReproTraceCapacity = 131072u', 'trace ring capacity'),
    ('kSaveReproDispatchSampleStride = 64u', 'dispatch trace sampling'),
    ('save_repro_dump_trace(runtime, "manual-F10")', 'manual F10 dump path'),
    ('save_repro_dump_trace(rt, "window-close")', 'window-close dump fallback'),
]: need(token in source, label)
need('PSPRECOMP_TIME_TICK_DISPATCHES' not in source[source.index('// V8.2.6 SAVE REPRO CAPTURE'):source.index('constexpr std::uint32_t kPspUtilityStart')],
     'capture block does not change scheduler cadence')
print('V8.2.6B SAVE REPRO TRACE HOTFIX audit PASS')
