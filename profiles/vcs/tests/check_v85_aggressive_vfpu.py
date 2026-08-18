#!/usr/bin/env python3
from pathlib import Path
import sys

root = Path(__file__).resolve().parents[3]
profile = root / 'profiles' / 'vcs'

def read(rel):
    return (root / rel).read_text(encoding='utf-8', errors='ignore')

def need(cond, msg):
    if not cond:
        print(f'FAIL: {msg}')
        raise SystemExit(1)
    print(f'PASS: {msg}')

log = read('profiles/vcs/host/vcs_runtime_log.cpp')
header = read('include/psprecomp/allegrex_context.hpp')
codegen = read('tools/codegen_main.cpp')
build = read('profiles/vcs/scripts/build_release_ninja.bat')
opt = read('profiles/vcs/tools/optimize_generated_v85_vfpu.py')
ini = read('profiles/vcs/config/VCSNative.ini')

need(('stage=perf-v8.5-aggressive-vfpu-fastlane-2026-08-18' in log) or ('stage=perf-v8.6-radio-identity-vfpu-ct2-2026-08-18' in log), 'V8.5 lineage stage stamp')
need((('perf_layer=11' in log and 'cpu_aggressive_revision=5' in log) or ('perf_layer=12' in log and 'cpu_aggressive_revision=6' in log)), 'V8.5/V8.6 performance revision metadata')
for token in (
    'aot_hard_fastmem=1', 'aot_branchless_mem=1', 'aot_vfpu_block32=19455',
    'aot_scalar_run_blocks=10665', 'aot_scalar_run_words=53173',
    'vfpu_default_fastlane=1', 'vfpu_vec3_fastlane_sites=2469',
    'vfpu_unary_fastlane_sites=1607', 'vfpu_vdot_default_fast=1',
    'vfpu_vscl_default_fast=1', 'atrac_nonloop_resident=-2',
    'atrac_loop_resident=-3', 'output2_late_catchup=0', 'save_exitdelete_semantics=1',
    'save_partition_reuse=1', 'save_repro_default_enabled=0'):
    need(token in log, f'protected/runtime flag {token}')

need('execute_vfpu_vec3_ct' in header, 'generic vec3 fast-lane helper exists')
need('execute_vfpu_unary_ct' in header, 'generic unary fast-lane helper exists')
need('vfpu_ctrl[0] == 0xE4u' in header and 'vfpu_ctrl[1] == 0xE4u' in header and 'vfpu_ctrl[2] == 0u' in header,
     'fast-lane guards require architectural default S/T/D prefixes')
need('execute_vfpu_vdot_ct' in header and 'execute_vfpu_vscl_ct' in header, 'VDOT/VSCL helpers retained')
need('ctx.execute_vfpu_vec3_ct<' in codegen, 'future codegen emits vec3 helper')
need('ctx.execute_vfpu_unary_ct<' in codegen, 'future codegen emits unary helper')
need('optimize_generated_v85_vfpu.py' in build, 'Windows build applies V8.5 corpus optimizer')
need('check_v85_aggressive_vfpu.py' in build, 'Windows build runs V8.5 auditor')
need('PERF_V85_VFPU_FASTLANE_STAMP' in build, 'V8.5 one-time rebuild stamp exists')
need('SaveRepro=false' in ini, 'internal SAVE_REPRO remains disabled by default')
need('vec3' in opt and 'unary' in opt, 'V8.5 optimizer contains vec3/unary transforms')

files = list((profile / 'generated').glob('generated_unit_*.cpp'))
need(len(files) >= 220, 'complete generated AOT corpus present')
counts = {k:0 for k in ('vec3','unary','vdot','vscl','old_source','old_target')}
for f in files:
    t=f.read_text(encoding='utf-8', errors='ignore')
    counts['vec3'] += t.count('execute_vfpu_vec3_ct<')
    counts['unary'] += t.count('execute_vfpu_unary_ct<')
    counts['vdot'] += t.count('execute_vfpu_vdot_ct<')
    counts['vscl'] += t.count('execute_vfpu_vscl_ct<')
    counts['old_source'] += t.count('std::array<float, 4> source_values')
    counts['old_target'] += t.count('std::array<float, 4> target_values')
need(counts['vec3'] == 2469, f"vec3 sites exact ({counts['vec3']})")
need(counts['unary'] == 1607, f"unary sites exact ({counts['unary']})")
need(counts['vdot'] == 1456, f"VDOT sites retained ({counts['vdot']})")
need(counts['vscl'] == 1668, f"VSCL sites retained ({counts['vscl']})")
need(counts['old_source'] == 0 and counts['old_target'] == 0, 'old generic vec3 temporary-array form eliminated')

# Protect the lean Tier-2 shape which was restored for V8.4.
need('clusters=7' in log and 'hot_blocks=1060' in log and 'static_fused_calls=36' in log and 'static_fused_tail=13' in log,
     'protected V8.2.7A/V8.4 Tier-2 shape retained')
need('ge_async_default=0' in log and 'parallel_vertex_decode_default=0' in log,
     'unstable async/parallel paths remain quarantined')

print('V8.5 aggressive VFPU fast-lane auditor: PASS')
