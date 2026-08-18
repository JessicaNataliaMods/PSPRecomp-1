#!/usr/bin/env python3
from pathlib import Path
import json, re, sys
root=Path(__file__).resolve().parents[3]
profile=root/'profiles'/'vcs'
def read(rel): return (root/rel).read_text(encoding='utf-8',errors='ignore')
def need(c,m):
    if not c: print('FAIL:',m); raise SystemExit(1)
    print('PASS:',m)
log=read('profiles/vcs/host/vcs_runtime_log.cpp')
runtime=read('include/psprecomp/runtime.hpp')
build=read('profiles/vcs/scripts/build_release_ninja.bat')
tier2=read('profiles/vcs/tools/build_tier2_superblocks.py')
opt=read('profiles/vcs/tools/optimize_generated_v87_tiny_leaves.py')
ini=read('profiles/vcs/config/VCSNative.ini')
manifest_path=profile/'generated'/'v87_tiny_leaf_manifest.json'
need('stage=perf-v8.7-extreme-cpu-tiny-leaf-2026-08-18' in log,'V8.7 stage stamp')
need('perf_layer=13' in log and 'cpu_aggressive_revision=7' in log and 'correctness_revision=8272' in log,'V8.7 revision metadata')
for t in ('tiny_leaf_inline=1','tiny_leaf_targets=26','tiny_leaf_sites=2017','tiny_leaf_changed_units=122','tiny_leaf_postfold=1','tiny_leaf_postfold_runs=113','tiny_leaf_postfold_words=339'):
    need(t in log,'metadata '+t)
need('can_inline_generated_leaf() const noexcept' in runtime,'guarded generated-leaf eligibility helper')
need('#if !defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)' in runtime and 'return false;' in runtime,'diagnostic builds retain canonical wrapper path')
need('generated_unit_disabled_[UnitIndex] == 0u && chain_depth_ < chain_depth_limit_' in runtime,'poison/depth guards preserved')
need('account_inlined_generated_leaf' in runtime,'scheduler starvation accounting helper preserved')
need("host.glob('vcs_tier2_cluster_*.cpp')" in tier2 and 'active_cluster_names' in tier2 and 'path.unlink()' in tier2,
     'stale generated Tier2 clusters are removed before CMake globbing')
need(manifest_path.exists(),'V8.7 generated manifest exists')
man=json.loads(manifest_path.read_text())
need(man.get('targets')==26 and man.get('sites')==2017 and man.get('changed_units')==122,'manifest corpus shape 26 targets / 2017 sites / 122 units')
files=sorted((profile/'generated').glob('generated_unit_*.cpp'))
need(len(files)==234,'234 generated units preserved')
texts=[p.read_text(encoding='utf-8',errors='ignore') for p in files]
joined=''.join(texts)
need(joined.count('// V87_TINY_LEAF_INLINE ')==2017,'exactly 2017 guarded inline call sites')
need(joined.count('rt.account_inlined_generated_leaf(ctx)')>=2017,'inlined leaves retain scheduler accounting')
need(joined.count('rt.can_inline_generated_leaf<')==2017,'every inline site has runtime eligibility guard')
# The original call remains immediately in every transformed site as correctness fallback.
pat=re.compile(r'// V87_TINY_LEAF_INLINE .*?if \(rt\.can_inline_generated_leaf<.*?\n.*?rt\.invoke_chained_direct<',re.S)
need(len(pat.findall(joined))==2017,'all 2017 sites retain original invoke_chained_direct fallback')
need('MIN_SITES = 40' in opt and 'MAX_STATEMENTS = 4' in opt,'conservative automatic leaf-selection thresholds pinned')
need('PERF_V87_TINY_LEAF_STAMP' in build and 'optimize_generated_v87_tiny_leaves.py' in build and 'check_v87_extreme_cpu_tiny_leaf.py' in build,'Windows build applies and audits V8.7')
need(build.count('optimize_generated_v84_cpu.py') >= 2,'Windows build performs canonical post-inline V8.4 fold')
need(joined.count('aot_mem.aot_direct_store32_block(ctx.gpr[')==5145,'canonical V8.7 corpus has 5032 baseline + 113 post-inline store runs')
need(joined.count('aot_mem.aot_direct_store32_block(')==12739,'canonical V8.7 total direct store32 block calls')
scalar=sum(joined.count(f'aot_mem.aot_direct_{n}(') for n in ('load8','load16','load32','store8','store16','store32','load_word_left','load_word_right','store_word_left','store_word_right'))
need(scalar==207098,f'canonical V8.7 direct scalar/unaligned sites after post-fold = 207098 (got {scalar})')
for t in ('radio_atrac_identity_guard=1','atrac_direct_header_validation=1','news_atrac_v825_guard=1','save_exitdelete_semantics=1','save_partition_reuse=1','ge_async_default=0','parallel_vertex_decode_default=0'):
    need(t in log,'protected '+t)
need('SaveRepro=false' in ini,'internal SAVE_REPRO remains off')
print('V8.7 extreme CPU tiny-leaf auditor: PASS')
