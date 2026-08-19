#!/usr/bin/env python3
from pathlib import Path
import re, sys
root=Path(__file__).resolve().parents[3]
profile=root/'profiles'/'vcs'
host=profile/'host'
log=(host/'vcs_runtime_log.cpp').read_text(encoding='utf-8')
main=(host/'main.cpp').read_text(encoding='utf-8')
mem=(root/'include'/'psprecomp'/'guest_memory.hpp').read_text(encoding='utf-8')
ctx=(root/'include'/'psprecomp'/'allegrex_context.hpp').read_text(encoding='utf-8')
vgen=(profile/'tools'/'vcs_codegen_main.cpp').read_text(encoding='utf-8')
ggen=(root/'tools'/'codegen_main.cpp').read_text(encoding='utf-8')
tier=(profile/'tools'/'build_tier2_superblocks.py').read_text(encoding='utf-8')
build=(profile/'scripts'/'build_release_ninja.bat').read_text(encoding='utf-8')

def need(c,m):
    if not c:
        print('FAIL:',m); raise SystemExit(1)
    print('PASS:',m)

need(('stage=perf-v8.4-aggressive-cpu-direct-2026-08-18' in log) or ('stage=perf-v8.5-aggressive-vfpu-fastlane-2026-08-18' in log) or ('stage=perf-v8.6-radio-identity-vfpu-ct2-2026-08-18' in log) or ('stage=perf-v8.8-extreme-cpu-trusted-dispatch-2026-08-18' in log) or ('stage=perf-v8.9-extreme-cpu-register-residency-2026-08-18' in log), 'V8.4 lineage stage')
need((('cpu_aggressive_revision=4' in log) or ('cpu_aggressive_revision=5' in log) or ('cpu_aggressive_revision=6' in log) or ('cpu_aggressive_revision=8' in log) or ('cpu_aggressive_revision=9' in log)) and 'aot_hard_fastmem=1' in log and 'aot_branchless_mem=1' in log, 'aggressive CPU metadata')
need('aot_vfpu_block32=19455' in log and 'aot_scalar_run_blocks=10665' in log and 'aot_scalar_run_words=53173' in log and 'aot_load_runs=5633' in log and 'aot_store_runs=5032' in log and 'vfpu_default_dest_fast=1' in log and 'vfpu_vmscl_default_fast=1' in log, 'vector/VFPU and scalar-run metadata')
need((('correctness_revision=8271' in log) or ('correctness_revision=8272' in log)) and 'save_exitdelete_semantics=1' in log, 'V8.2.7 Save fix preserved')
need('atrac_nonloop_resident=-2' in log and 'atrac_loop_resident=-3' in log and 'output2_late_catchup=0' in log, 'V8.2.5 NEWS fix preserved')
need('hot_blocks=1060' in log and 'static_fused_calls=36' in log and 'geometry_fusion_rollback=1' in log, 'protected V8.2 Tier2 shape preserved')
need('requires Win64 direct fastmem' in main and 'if (!runtime.memory().direct_fastmem_enabled())' in main, 'launch fails cleanly without required fastmem')
for token in ('aot_direct_load8','aot_direct_load16','aot_direct_load32','aot_direct_store8','aot_direct_store16','aot_direct_store32','aot_direct_load32_block','aot_direct_store32_block','aot_direct_load_word_left','aot_direct_store_word_right'):
    need(token in mem, f'branchless AOT helper {token}')
need('if (destination_prefix == 0u)' in ctx, 'exact default destination-prefix fast path')
need('vfpu_ctrl[0] == 0xE4u && vfpu_ctrl[1] == 0xE4u && vfpu_ctrl[2] == 0u' in ctx, 'exact default VMSCL fast path')
need('rt.memory().aot_load32_block(vfpu_address, vfpu_words)' in ggen and 'rt.memory().aot_store32_block(vfpu_address, vfpu_words)' in ggen, 'generic codegen emits LV.Q/SV.Q block accesses')
need('aot_mem.aot_direct_$1$2(' in vgen and 'aot_mem.aot_direct_$132_block(' in vgen, 'VCS automatic codegen lowers memory to direct accessors')
need("raw = raw.replace('aot_mem.aot_direct_', 'aot_mem.aot_')" in tier and 'Patch hooks into the checked-in corpus spelling' in tier, 'Tier2 extraction preserves baseline and V8.4 corpus idempotence')
need('optimize_generated_v84_cpu.py' in build and 'PERF_V84_AGGRESSIVE_CPU_STAMP' in build, 'Windows build applies one-time V8.4 corpus rebuild')

files=sorted((profile/'generated').glob('generated_unit_*.cpp'))
need(len(files)==234, '234 generated AOT units present')
text=''.join(p.read_text(encoding='utf-8') for p in files)
# No checked AotFastView memory accessor may remain in automatic VCS code.
remaining=re.findall(r'aot_mem\.aot_(?!direct_)(?:load|store)', text)
need(not remaining, 'automatic VCS AOT has no per-access checked memory calls')
load_blocks=text.count('aot_mem.aot_direct_load32_block(')
store_blocks=text.count('aot_mem.aot_direct_store32_block(')
vfpu_load_blocks=text.count('std::uint32_t vfpu_words[4]{};')
vfpu_store_blocks=text.count('const std::uint32_t vfpu_words[4]{')
scalar_load_runs=len(re.findall(r'aot_mem\.aot_direct_load32_block\((?:ctx\.gpr\[|aot_gpr_)', text))
scalar_store_runs=len(re.findall(r'aot_mem\.aot_direct_store32_block\((?:ctx\.gpr\[|aot_gpr_)', text))
need(vfpu_load_blocks==11861, f'LV.Q block sites = 11861 (got {vfpu_load_blocks})')
need(vfpu_store_blocks==7594, f'SV.Q block sites = 7594 (got {vfpu_store_blocks})')
need(vfpu_load_blocks+vfpu_store_blocks==19455, '19455 vector memory operations collapsed to 16-byte blocks')
need(scalar_load_runs==5633, f'contiguous scalar load runs = 5633 (got {scalar_load_runs})')
need(scalar_store_runs==5032, f'contiguous scalar store runs = 5032 (got {scalar_store_runs})')
need(load_blocks==17494, f'total direct load32 block calls = 17494 (got {load_blocks})')
need(store_blocks==12626, f'total direct store32 block calls = 12626 (got {store_blocks})')
scalar=sum(text.count(f'aot_mem.aot_direct_{n}(') for n in ('load8','load16','load32','store8','store16','store32','load_word_left','load_word_right','store_word_left','store_word_right'))
need(scalar==205600, f'remaining branchless direct scalar/unaligned sites = 205600 (got {scalar})')
print('V8.4 AGGRESSIVE CPU DIRECT audit PASS')
