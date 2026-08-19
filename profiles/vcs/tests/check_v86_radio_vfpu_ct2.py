#!/usr/bin/env python3
from pathlib import Path
import sys
root=Path(__file__).resolve().parents[3]
profile=root/'profiles'/'vcs'
def read(rel): return (root/rel).read_text(encoding='utf-8',errors='ignore')
def need(c,m):
    if not c: print('FAIL:',m); raise SystemExit(1)
    print('PASS:',m)
log=read('profiles/vcs/host/vcs_runtime_log.cpp')
source=read('profiles/vcs/host/vcs_profile.cpp')
header=read('include/psprecomp/allegrex_context.hpp')
gen=read('tools/codegen_main.cpp')
vgen=read('profiles/vcs/tools/vcs_codegen_main.cpp')
build=read('profiles/vcs/scripts/build_release_ninja.bat')
ini=read('profiles/vcs/config/VCSNative.ini')
need(('stage=perf-v8.6-radio-identity-vfpu-ct2-2026-08-18' in log) or ('stage=perf-v8.8-extreme-cpu-trusted-dispatch-2026-08-18' in log) or ('stage=perf-v8.9-extreme-cpu-register-residency-2026-08-18' in log),'V8.6 lineage stage')
need((('perf_layer=12' in log and 'cpu_aggressive_revision=6' in log) or ('perf_layer=14' in log and 'cpu_aggressive_revision=8' in log) or ('perf_layer=15' in log and 'cpu_aggressive_revision=9' in log)) and 'correctness_revision=8272' in log,'V8.6/V8.8 revisions')
for t in ('radio_atrac_identity_guard=1','atrac_direct_header_validation=1','atrac_identity_cache=1','atrac_header_only_producer_hint=1','vfpu_vtfm_ct=1','vfpu_vtfm_ct_sites=337','vfpu_vi2f_ct=1','vfpu_vi2f_ct_sites=164','vfpu_vcmp_default_fast=1','vfpu_vcmov_default_fast=1','vfpu_cross_default_fast=1'):
    need(t in log,'metadata '+t)
for t in ('atrac_nonloop_resident=-2','atrac_loop_resident=-3','news_atrac_v825_guard=1','output2_late_catchup=0','save_exitdelete_semantics=1','save_partition_reuse=1','save_repro_default_enabled=0','aot_hard_fastmem=1','aot_branchless_mem=1','vfpu_default_fastlane=1'):
    need(t in log,'protected '+t)
need('AtracSourceIdentity' in source and 'atrac_source_matches_header' in source,'ATRAC identity cache/validator')
need('direct_rejected' in source and 'fallback_candidates' in source,'stale direct source can be rejected')
need('read_absolute == file_start && read >= 12u' in source,'virtual UMD producer hints are header-only')
need('read_start == std::streampos(0) && read >= 12u' in source,'normal file producer hints are header-only')
need('ATRAC source identity trusted a stale radio staging-buffer hint' in source,'radio mismatch self-test exists')
need('kAtracRemainNonLoopOnMemory = 0xFFFFFFFEu' in source and 'kAtracRemainLoopOnMemory = 0xFFFFFFFDu' in source,'NEWS ATRAC remain-frame sentinels remain in source')
need('execute_vfpu_vtfm_ct' in header and 'execute_vfpu_vi2f_ct' in header,'new VFPU CT helpers exist')
need('execute_vfpu_vcmp_ct' in header and 'execute_vfpu_vcmov_ct' in header and 'execute_vfpu_cross_quat_ct' in header,'existing CT helpers extended')
need('ctx.execute_vfpu_vtfm_ct<' in gen and 'ctx.execute_vfpu_vi2f_ct<' in gen,'generic PSP codegen emits VTFM/VI2F CT')
need('ctx.execute_vfpu_vtfm_ct<' in vgen and 'ctx.execute_vfpu_vi2f_ct<' in vgen,'VCS codegen emits VTFM/VI2F CT')
need('execute_vfpu_cross_quat_ct' in gen and 'execute_vfpu_compare3_ct' in gen and 'execute_vfpu_vh2f_ct' in gen,'generic lowering covers remaining literal helpers')
files=sorted((profile/'generated').glob('generated_unit_*.cpp'))
need(len(files)==234,'234 generated units')
text=''.join(p.read_text(encoding='utf-8',errors='ignore') for p in files)
checks={'vtfm':('execute_vfpu_vtfm_ct<',337),'vi2f':('execute_vfpu_vi2f_ct<',164),'vcmp':('execute_vfpu_vcmp_ct<',558),'vcmov':('execute_vfpu_vcmov_ct<',461),'cross':('execute_vfpu_cross_quat_ct<',217)}
for name,(pat,want) in checks.items(): need(text.count(pat)==want,f'{name} CT sites={want} (got {text.count(pat)})')
need('constexpr std::uint32_t vfpu_side =' not in text,'old VTFM inline body eliminated')
need('const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>' not in text,'old VI2F inline body eliminated')
need('ctx.execute_vfpu_cross_quat(' not in text and 'ctx.execute_vfpu_compare3(' not in text and 'ctx.execute_vfpu_vh2f(' not in text,'remaining literal helper calls lowered')
need('clusters=7' in log and 'hot_blocks=1060' in log and 'static_fused_calls=36' in log and 'static_fused_tail=13' in log,'protected lean Tier2 shape')
need('ge_async_default=0' in log and 'parallel_vertex_decode_default=0' in log,'unstable async paths quarantined')
need('SaveRepro=false' in ini,'internal SAVE_REPRO default off')
need('PERF_V86_RADIO_VFPU_CT2_STAMP' in build and 'check_v86_radio_vfpu_ct2.py' in build,'Windows build V8.6 gate')
print('V8.6 radio identity + VFPU CT2 auditor: PASS')
