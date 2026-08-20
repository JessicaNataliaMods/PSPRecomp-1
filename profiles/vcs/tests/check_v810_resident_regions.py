#!/usr/bin/env python3
from __future__ import annotations
from pathlib import Path
import json,re
root=Path(__file__).resolve().parents[3]
profile=root/'profiles'/'vcs'
def read(rel): return (root/rel).read_text(encoding='utf-8',errors='ignore')
def need(c,m):
    if not c:
        print('FAIL:',m); raise SystemExit(1)
    print('PASS:',m)
log=read('profiles/vcs/host/vcs_runtime_log.cpp')
build=read('profiles/vcs/scripts/build_release_ninja.bat')
runtime=read('include/psprecomp/runtime.hpp')
cmake=read('profiles/vcs/CMakeLists.txt')
tool=read('profiles/vcs/tools/optimize_generated_v810_resident_regions.py')
regtool=read('tools/optimize_generated_register_residency.py')
manifest=json.loads(read('profiles/vcs/generated/v810_resident_region_manifest.json'))
need('stage=perf-v8.10-extreme-cpu-resident-regions-2026-08-18' in log,'V8.10 runtime stage retained for benchmark continuity')
need('perf_layer=16' in log and 'cpu_aggressive_revision=10' in log and 'correctness_revision=8272' in log,'V8.10 revision metadata')
for token in (
    'resident_regions=1','resident_region_targets=83','resident_region_sites=11171',
    'resident_region_files=220','resident_region_sync_out_removed=11171',
    'resident_region_sync_in_removed=11171','resident_region_resident_args=53234',
    'resident_region_ctx_args=26183','resident_region_scheduler_guard=1',
    'resident_region_scheduler_fallback_sites=11171','aot_resident_region_weight=6',
    'aot_gpr_resident_occurrences=914095','aot_fpr_resident_occurrences=146813',
    'radio_atrac_identity_guard=1','save_exitdelete_semantics=1','ge_async_default=0',
    'parallel_vertex_decode_default=0'):
    need(token in log,'metadata '+token)
need('invoke_resident_generated_leaf' in runtime,'generic Runtime resident-leaf helper exists')
need('chain_depth_' not in runtime[runtime.find('invoke_resident_generated_leaf'):runtime.find('// Tier-2 hot-leaf', runtime.find('invoke_resident_generated_leaf'))],
     'proven non-nested regions avoid chain-depth admission')
need('resident_generated_leaf_fast_allowed' in runtime,
     'resident regions gate fast path before starvation safe-point')
need('run_starvation_boundary(ctx)' not in runtime[runtime.find('invoke_resident_generated_leaf'):runtime.find('// Tier-2 hot-leaf', runtime.find('invoke_resident_generated_leaf'))],
     'resident leaf itself cannot preempt with partial architectural state')
need('vcs' not in runtime[runtime.find('invoke_resident_generated_leaf'):runtime.find('// Tier-2 hot-leaf', runtime.find('invoke_resident_generated_leaf'))].lower(),
     'generic Runtime resident helper is title-independent')
need(manifest['targets']==83 and manifest['sites']==11171 and manifest['generated_files_with_sites']==220,
     'manifest exact 83 targets / 11171 sites / 220 caller units')
need(manifest['min_static_sites']==40 and manifest['max_blocks']==40,'automatic selection thresholds pinned')
need(manifest['poisonable_units']==[44,197,212,216,219],'override/poison buckets excluded')
need(all(r['unit'] not in {44,197,212,216,219} for r in manifest['regions']),'no resident region bypasses poisonable unit')
need(all(r['blocks']<=40 and r['sites']>=40 for r in manifest['regions']),'all resident regions obey block/site caps')
units=sorted((profile/'generated').glob('generated_unit_*.cpp'))
need(len(units)==234,'234 generated units preserved')
site_count=0; files=0; sync_out=0; sync_in=0; resident_args=0; ctx_args=0
call_re=re.compile(r'invoke_resident_generated_leaf<[^;\n]+?>\(ctx, &aot_mem(?P<args>[^\)]*)\)')
for p in units:
    text=p.read_text(encoding='utf-8',errors='ignore')
    matches=list(call_re.finditer(text))
    if matches: files+=1
    site_count += len(matches)
    sync_out += text.count('AOT_REGCACHE_SYNC_OUT()')
    sync_in += text.count('AOT_REGCACHE_SYNC_IN()')
    for m in matches:
        a=m.group('args')
        resident_args += len(re.findall(r'\baot_(?:gpr|fpr)_\d+\b',a))
        ctx_args += len(re.findall(r'ctx\.(?:gpr|fpr)\[\d+\]',a))
need(site_count==11171 and files==220,'exact resident region call-site corpus')
need(sync_out==120725 and sync_in==52703,'scheduler fallback restores full-sync safety at guarded resident call sites')
need(sum(p.read_text(encoding='utf-8',errors='ignore').count('PSPRECOMP_RESIDENT_SCHED_SAFE') for p in units)==11171,
     'all 11171 resident calls have scheduler-safe fallback guards')
need(resident_args==53234 and ctx_args==26183,'cross-unit scalar argument residency exact')
need('host/vcs_resident_regions.cpp' in cmake,'resident region host TU is linked')
need((profile/'host'/'vcs_resident_regions.cpp').exists() and (profile/'host'/'vcs_resident_regions.hpp').exists(),'resident region source/header generated')
need(read('profiles/vcs/host/vcs_resident_regions.cpp').count('void vcs_resident_region_')==83,'83 out-of-line region bodies generated once')
need('optimize_generated_v810_resident_regions.py' in build,'Windows build applies V8.10 region selector')
need('--resident-weight 6' in build,'Windows build biases register ownership across region boundaries')
strip_region=build.find('optimize_generated_v810_resident_regions.py" --strip')
tier2=build.find('build_tier2_superblocks.py')
rpos=build.find('optimize_generated_v810_resident_regions.py', strip_region+1)
gpos=build.find('optimize_generated_register_residency.py" "%PROFILE%\\generated" --gprs')
need(strip_region>=0 and tier2>strip_region,'V8.10 specialization strips before Tier-2 canonical extraction')
need(rpos>tier2 and gpos>rpos,'resident regions specialize after Tier-2 and before V8.9 register aliases')
need('resident_weight' in regtool and 'invoke_resident_generated_leaf' in regtool,'generic register residency supports cross-boundary weighting')
need('MIN_STATIC_SITES = 40' in tool and 'MAX_BLOCKS = 40' in tool,'VCS selector remains conservative/bounded')
print('V8.10.1 SCHEDULER-SAFE RESIDENT REGIONS auditor: PASS')
