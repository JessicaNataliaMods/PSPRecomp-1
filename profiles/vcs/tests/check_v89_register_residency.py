#!/usr/bin/env python3
from __future__ import annotations
from pathlib import Path
import json,re,sys
root=Path(__file__).resolve().parents[3]
profile=root/'profiles'/'vcs'
def read(rel): return (root/rel).read_text(encoding='utf-8',errors='ignore')
def need(c,m):
    if not c:
        print('FAIL:',m); raise SystemExit(1)
    print('PASS:',m)
log=read('profiles/vcs/host/vcs_runtime_log.cpp')
build=read('profiles/vcs/scripts/build_release_ninja.bat')
tool=read('tools/optimize_generated_register_residency.py')
manifest=json.loads(read('profiles/vcs/generated/v89_register_residency_manifest.json'))
need('stage=perf-v8.9-extreme-cpu-register-residency-2026-08-18' in log,'V8.9 stage stamp')
need('perf_layer=15' in log and 'cpu_aggressive_revision=9' in log and 'correctness_revision=8272' in log,'V8.9 revision metadata')
for token in (
    'aot_register_residency=1','aot_register_residency_units=230',
    'aot_gpr_resident_slots=6','aot_fpr_resident_slots=4',
    'aot_gpr_resident_occurrences=876226','aot_fpr_resident_occurrences=145774',
    'trusted_chain=1','outer_aot_view_reuse=1','radio_atrac_identity_guard=1',
    'ge_async_default=0','parallel_vertex_decode_default=0'):
    need(token in log,'metadata '+token)
need('optimize_generated_register_residency.py' in build,'Windows build applies generic register residency optimizer')
need('check_v89_register_residency.py' in build,'Windows build runs V8.9 auditor')
strip_cmd='optimize_generated_register_residency.py" "%PROFILE%\\generated" --strip'
strip_pos=build.find('--strip')
tier2_pos=build.find('build_tier2_superblocks.py')
apply_pos=build.find('APPLY_TIER2_EXTREME.bat')
need(strip_pos >= 0 and tier2_pos >= 0 and apply_pos >= 0 and strip_pos < apply_pos < tier2_pos,
     'Windows build strips register residency before Tier-2/canonical AOT preprocessing')
need("text=re.sub(r'\\baot_gpr_(\\d+)\\b'" in tool,
     'strip uses whole-token GPR alias restoration')
need('PSPRECOMP_AOT_REGCACHE_BEGIN' in tool and 'AOT_REGCACHE_SYNC_OUT' in tool and 'AOT_REGCACHE_SYNC_IN' in tool,'generic optimizer owns explicit architectural sync')
need('vcs' not in tool.lower() and '0x088' not in tool and '0x089' not in tool and '0x08a' not in tool.lower(),'generic optimizer has no VCS/address coupling')
need(manifest['files']==234 and manifest['changed']==230,'manifest corpus 234 units / 230 resident units')
need(manifest['gpr_occurrences']==876226 and manifest['gpr_total']==1188249,'manifest GPR coverage exact')
need(manifest['fpr_occurrences']==145774 and manifest['fpr_total']==196805,'manifest FPR coverage exact')
units=sorted((profile/'generated').glob('generated_unit_*.cpp'))
need(len(units)==234,'234 generated units preserved')
resident=0; bare_return=[]; missing_sync=[]
for p in units:
    text=p.read_text(encoding='utf-8',errors='ignore')
    if 'PSPRECOMP_AOT_REGCACHE_BEGIN' not in text: continue
    resident+=1
    m=re.search(r'void recomp_unit_\d+_entry\([^\{]+\)\s*\{',text)
    need(m is not None,f'{p.name} entry exists')
    body=text[m.end():].split('\nvoid recomp_unit_',1)[0]
    # Any plain function exit from a resident unit would leak host-local values.
    if re.search(r'(?<!AOT_REGCACHE_SYNC_OUT\(\); )return;',body): bare_return.append(p.name)
    if 'rt.invoke_chained_' in body and 'AOT_REGCACHE_SYNC_IN()' not in body: missing_sync.append(p.name)
need(resident==230,'230 units carry register residency')
need(not bare_return,'all resident-unit exits materialize cached registers')
need(not missing_sync,'resident chained calls restore architectural state after callee')
# The cache is intentionally bounded to avoid host register pressure regressions.
need(all(len(row.get('gpr_regs',[]))<=6 and len(row.get('fpr_regs',[]))<=4
         for row in manifest['units'] if not row.get('skipped')),
     'per-unit native register pressure cap')
print('V8.9 EXTREME CPU REGISTER RESIDENCY auditor: PASS')
