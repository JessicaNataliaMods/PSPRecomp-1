#!/usr/bin/env python3
from pathlib import Path

root = Path(__file__).resolve().parents[3]
profile = root / 'profiles' / 'vcs'
host = profile / 'host'
source = (host / 'vcs_profile.cpp').read_text(encoding='utf-8')
log = (host / 'vcs_runtime_log.cpp').read_text(encoding='utf-8')
runtime = (root / 'src' / 'runtime.cpp').read_text(encoding='utf-8')
guest_registry = (profile / 'generated' / 'generated_registry.cpp').read_text(encoding='utf-8')
sfx = (profile / 'generated' / 'generated_unit_0096.cpp').read_text(encoding='utf-8')
memstick = (profile / 'generated' / 'generated_unit_0172.cpp').read_text(encoding='utf-8')
stupid = (profile / 'generated' / 'generated_unit_0076.cpp').read_text(encoding='utf-8')

def need(cond, msg):
    if not cond:
        print('FAIL:', msg)
        raise SystemExit(1)
    print('PASS:', msg)

need('stage=correctness-v8.2.7-save-thread-lifecycle-fix-2026-08-18' in log, 'V8.2.7 runtime stage')
need('correctness_revision=827' in log, 'V8.2.7 correctness revision')
need('save_exitdelete_semantics=1' in log and 'save_repro_legacy_exitdelete_repair=1' in log and 'save_partition_reuse=1' in log,
     'ExitDelete/partition fix and migration metadata')
need('atrac_stream_resident_status=1' in log and 'atrac_nonloop_resident=-2' in log and
     'atrac_loop_resident=-3' in log and 'news_atrac_v825_guard=1' in log,
     'working V8.2.5 NEWS semantics preserved')
need('output2_late_catchup=0' in log, 'rejected Output2 pacing experiment remains disabled')
need('hot_blocks=1060' in log and 'static_fused_calls=36' in log and 'geometry_fusion_rollback=1' in log,
     'V8.2 CPU/Tier2 shape preserved')

# Core correctness: ExitThread remains dormant/Completed, ExitDelete actually
# destroys the object and releases its stack.
need('void exit_delete_current_thread' in source, 'dedicated ExitDelete lifecycle helper')
need('release_thread_stack(deleted);' in source and 'thread_table.threads.erase(deleted_uid);' in source,
     'ExitDelete releases stack and erases thread object')
need('wake_thread_end_waiters(deleted_uid, 0u);' in source,
     'ExitDelete still wakes thread-end waiters')
need('activate_next_thread(ctx, "thread-exit-delete")' in source,
     'ExitDelete schedules the next ready PSP thread')
exitdelete_reg = source[source.index('runtime.register_hle("ThreadManForUser", 0x809CE29Bu'):]
exitdelete_reg = exitdelete_reg[:exitdelete_reg.index('runtime.register_hle("ThreadManForUser", 0x383F7BCCu')]
need('exit_delete_current_thread(rt, ctx);' in exitdelete_reg and 'complete_current_thread(rt, ctx);' not in exitdelete_reg,
     'sceKernelExitDeleteThread no longer aliases sceKernelExitThread')
exit_reg = source[source.index('runtime.register_hle("ThreadManForUser", 0xAA73C935u'):]
exit_reg = exit_reg[:exit_reg.index('runtime.register_hle("ThreadManForUser", 0x278C0DF5u')]
need('complete_current_thread(rt, ctx);' in exit_reg,
     'sceKernelExitThread keeps dormant Completed semantics')

# Evidence baked into the generated guest: all three historically leaked VCS
# worker entries reach the ExitDelete import.
need('runtime.register_function(0x08B734F4u, &import_74, "ThreadManForUser::0x809CE29B")' in guest_registry,
     'guest import 0x08B734F4 maps to sceKernelExitDeleteThread')
need('L_08986B50:' in sfx and 'ctx.pc = 0x08B734F4u;' in sfx,
     'sfx bank worker reaches ExitDelete import')
need('L_08AB5AA0:' in memstick and 'ctx.pc = 0x08B734F4u;' in memstick,
     'memstick worker reaches ExitDelete import')
need('L_08934734:' in stupid and 'ctx.pc = 0x08B734F4u;' in stupid,
     'stupidthread worker reaches ExitDelete import')

# Existing V8.2.6 checkpoint migration is intentionally scoped to proven VCS
# worker entries and must leave normal ExitThread records alone.
need('bool is_legacy_vcs_exit_delete_worker' in source, 'legacy checkpoint worker classifier')
for token, label in [
    ('thread.entry == 0x08934734u && thread.name == "stupidthread"', 'stupidthread migration guard'),
    ('thread.entry == 0x08AB5AA0u && thread.name == "memstick"', 'memstick migration guard'),
    ('thread.entry == 0x08986B50u && thread.name == "sfx bank load thread"', 'sfx worker migration guard'),
    ('SAVE_REPRO legacy_memory_repair exitdelete_threads=', 'restore migration diagnostic'),
]:
    need(token in source, label)
need('const LegacyExitDeleteRepairStats exitdelete_repair = repair_legacy_vcs_exit_delete_threads();' in source,
     'checkpoint restore invokes legacy ExitDelete repair')
need('std::uint32_t partition_arena_base{};' in source and 'allocate_user_arena_range' in source and
     'recompute_partition_frontier' in source, 'partition allocator tracks reusable arena holes')
need(source.count('recompute_partition_frontier();') >= 5,
     'partition/FPL free and restore paths recompute the active frontier')
need('PARTITION_ALLOC failed name=' in source and 'FPL_CREATE failed name=' in source,
     'partition exhaustion diagnostics are present only on failure paths')
need('sceKernelExitDeleteThread left a Completed thread record behind' in source,
     'live ExitDelete regression self-test')
need('legacy ExitDelete migration did not recover the top-down stack frontier' in source,
     'legacy checkpoint migration regression self-test')
need('thread_table.threads.contains(1) && thread_table.threads.contains(13)' in source,
     'migration self-test protects ordinary/current threads')

# V8.2.6A passive rule remains: no reintroduction of import tracking into core.
for forbidden in ['g_runtime_current_import_library', 'g_runtime_current_import_nid',
                  'runtime_current_import_library()', 'runtime_current_import_nid()']:
    need(forbidden not in runtime, f'core runtime remains free of passive save tracing: {forbidden}')
need('kSaveReproVersion = 826u' in source, 'existing user checkpoint remains format-compatible')
need('PSPRECOMP_TIME_TICK_DISPATCHES' not in source[source.index('// V8.2.6 SAVE REPRO CAPTURE'):source.index('constexpr std::uint32_t kPspUtilityStart')],
     'save repair does not change scheduler cadence')

print('V8.2.7 SAVE THREAD LIFECYCLE audit PASS')
