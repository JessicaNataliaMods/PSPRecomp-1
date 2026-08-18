#!/usr/bin/env python3
from pathlib import Path

root = Path(__file__).resolve().parents[3]
profile = root / 'profiles' / 'vcs'
host = profile / 'host'
tools = profile / 'tools'
gen = profile / 'generated'

generator = (tools / 'build_tier2_superblocks.py').read_text(encoding='utf-8')
hpp = (host / 'vcs_tier2_superblocks.hpp').read_text(encoding='utf-8')
common = (host / 'vcs_tier2_superblocks.cpp').read_text(encoding='utf-8')
cmake = (profile / 'CMakeLists.txt').read_text(encoding='utf-8')
log = (host / 'vcs_runtime_log.cpp').read_text(encoding='utf-8')
collision = (host / 'vcs_tier2_cluster_collisionloop.cpp').read_text(encoding='utf-8')
edge = (host / 'vcs_tier2_cluster_edge43.cpp').read_text(encoding='utf-8')
u37 = (gen / 'generated_unit_0037.cpp').read_text(encoding='utf-8')
u38 = (gen / 'generated_unit_0038.cpp').read_text(encoding='utf-8')
u43 = (gen / 'generated_unit_0043.cpp').read_text(encoding='utf-8')
geometry = (host / 'vcs_tier2_cluster_geometry.cpp').read_text(encoding='utf-8')
world = (host / 'vcs_tier2_cluster_world.cpp').read_text(encoding='utf-8')
runtime_hpp = (root / 'include' / 'psprecomp' / 'runtime.hpp').read_text(encoding='utf-8')

def need(cond, msg):
    if not cond:
        print('FAIL:', msg)
        raise SystemExit(1)
    print('PASS:', msg)

need('stage=perf-v8.3-cpu-boundary-fusion-2026-08-18' in log, 'V8.3 runtime stage')
need('perf_layer=9 cpu_lean_revision=3 correctness_revision=8271' in log,
     'performance revision advances without changing protected correctness revision')
need('clusters=8' in log and 'hot_blocks=1139' in log and 'static_fused_calls=36' in log and
     'static_fused_tail=18' in log and 'static_pc_fused=1' in log,
     'generated Tier-2 V8.3 shape matches audited generator output')
need('cpu_boundary_fusion=1' in log and 'edge43_continuation_fused=1' in log and
     'collisionloop_blocks=78' in log and 'collisionloop_static_pc_fused=1' in log and 'collisionloop_scheduler_accounting=1' in log,
     'boundary-fusion metadata present')

need('fuse_static_pc_returns: bool = False' in generator and 'STATIC_PC_RETURN_RE' in generator,
     'static PC return fusion is explicit and opt-in')
need("key='collisionloop'" in generator and 'fuse_static_pc_returns=True' in generator,
     'only dedicated collision-loop cluster opts into generated-boundary fusion')
need(generator.count('fuse_static_pc_returns=True') == 1,
     'legacy Tier-2 clusters cannot silently change boundary semantics')
need('37: [(0x0889BFC0, 0x0889C000)]' in generator and
     '38: [(0x0889C000, 0x0889C5C0)]' in generator,
     'collision-loop window remains narrowly bounded to units 0037/0038')
need('seeds={43: [0x088B3FCC, 0x088B3FFC]' in generator,
     'Edge43 includes measured missing continuation 0x088B3FFC')

need('account_inlined_dispatch_boundary' in runtime_hpp and 'return account_inlined_dispatch_boundary(ctx);' in runtime_hpp,
     'generic inlined-dispatch accounting preserves starvation cadence and backs leaf accounting')

need('CollisionLoop = 7u' in hpp and 'Count = 8u' in hpp and
     'tier2_superblock_collisionloop' in hpp,
     'eighth cluster is registered in Tier-2 ABI')
need('case Tier2ClusterId::CollisionLoop: return "collisionloop";' in common,
     'collision-loop cluster has runtime identity')
need('host/vcs_tier2_cluster_collisionloop.cpp' in cmake,
     'collision-loop translation unit is compiled')

need('SB_L_0889BFC0:' in collision and 'SB_L_0889C000:' in collision and
     'account_inlined_dispatch_boundary(ctx)' in collision and 'goto SB_L_0889C000;' in collision,
     'unit0037 -> unit0038 boundary is local while retaining outer-dispatch scheduler accounting')
need('goto SB_L_0889BFC0;' in collision,
     'hot loop closes back into unit0037 without outer Runtime dispatch')
need('tier2_enter_fused_transfer<37u, 0x0889BFC0u>' in collision and
     'tier2_complete_shadow(tier2_static_pending_)' in collision,
     'real tail-call frames unwind before the fused outer boundary, preserving accounting order')
need('tier2_superblock_collisionloop(rt, ctx, aot_mem, 0x0889BFC0u)' in u37 and
     'tier2_superblock_collisionloop(rt, ctx, aot_mem, 0x0889C000u)' in u38 and
     'tier2_superblock_collisionloop(rt, ctx, aot_mem, 0x0889C5B8u)' in u38,
     'measured loop entry hooks are installed')

need('SB_L_088B3FFC:' in edge and 'case 0x088B3FFCu: goto SB_L_088B3FFC;' in edge,
     'Edge43 local-return dispatch owns the missing continuation')
need('tier2_enter_fused_transfer<44u, 0x088B40F8u>' in edge and
     'tier2_enter_fused_transfer<44u, 0x088B4004u>' in edge,
     'Edge43 continuation flows directly into selected unit0044 targets')
need('tier2_superblock_edge43(rt, ctx, aot_mem, 0x088B3FFCu)' in u43,
     '0x088B3FFC outer-entry hook is installed for measured fallback cases')

# Guard against repeating V8 broad geometry/world expansion.
need(geometry.count('\nSB_L_') == 379, 'Geometry remains exactly 379 selected blocks')
need(world.count('\nSB_L_') == 402, 'World remains exactly 402 selected blocks')
need(len(collision.splitlines()) == 1363, 'new collision-loop body stays small (1363 lines)')
need(len(edge.splitlines()) == 949, 'Edge43 expansion stays small (949 lines)')

# Current correctness regression guards.
for token, label in [
    ('correctness_revision=8271', 'Save lifecycle correctness revision'),
    ('save_exitdelete_semantics=1', 'ExitDelete lifecycle fix'),
    ('save_partition_reuse=1', 'partition-memory reuse fix'),
    ('save_repro_internal_ini_gate=1', 'internal SAVE_REPRO gate'),
    ('save_repro_default_enabled=0', 'SAVE_REPRO disabled by default'),
    ('atrac_nonloop_resident=-2', 'NEWS non-loop ATRAC resident sentinel'),
    ('atrac_loop_resident=-3', 'NEWS loop ATRAC resident sentinel'),
    ('output2_late_catchup=0', 'rejected Output2 pacing remains off'),
    ('geometry_fusion_rollback=1', 'rejected V8 Geometry expansion remains rolled back'),
    ('ge_async_default=0', 'GE async remains quarantined'),
    ('parallel_vertex_decode_default=0', 'parallel vertex decode remains quarantined'),
]:
    need(token in log, label)

print('V8.3 CPU BOUNDARY FUSION audit PASS')
