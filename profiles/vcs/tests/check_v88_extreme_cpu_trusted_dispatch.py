#!/usr/bin/env python3
from pathlib import Path
import json
import re

root = Path(__file__).resolve().parents[3]
profile = root / 'profiles' / 'vcs'
generated = profile / 'generated'
host = profile / 'host'

def read(rel): return (root / rel).read_text(encoding='utf-8', errors='ignore')
def need(cond, msg):
    if not cond:
        print('FAIL:', msg)
        raise SystemExit(1)
    print('PASS:', msg)

log = read('profiles/vcs/host/vcs_runtime_log.cpp')
runtime_h = read('include/psprecomp/runtime.hpp')
runtime_cpp = read('src/runtime.cpp')
codegen = read('profiles/vcs/tools/vcs_codegen_main.cpp')
tier2gen = read('profiles/vcs/tools/build_tier2_superblocks.py')
build = read('profiles/vcs/scripts/build_release_ninja.bat')
cmake = read('profiles/vcs/CMakeLists.txt')
compact_cpp = read('profiles/vcs/host/vcs_compact_leaves.cpp')
compact_h = read('profiles/vcs/host/vcs_compact_leaves.hpp')

need(('stage=perf-v8.8-extreme-cpu-trusted-dispatch-2026-08-18' in log) or ('stage=perf-v8.9-extreme-cpu-register-residency-2026-08-18' in log) or ('stage=perf-v8.10-extreme-cpu-resident-regions-2026-08-18' in log), 'V8.8/V8.9 stage stamp')
need(((('perf_layer=14' in log and 'cpu_aggressive_revision=8' in log) or ('perf_layer=15' in log and 'cpu_aggressive_revision=9' in log) or ('perf_layer=16' in log and 'cpu_aggressive_revision=10' in log)) and 'correctness_revision=8272' in log),
     'V8.8 revision metadata')
for token in (
    'trusted_chain=1', 'trusted_chain_sites=45968', 'trusted_chain_poisonable_sites=3240',
    'compact_leaf_dispatch=1', 'compact_leaf_targets=4', 'compact_leaf_sites=1885',
    'outer_entry_dispatch=1', 'outer_aot_view_reuse=1', 'v87_tiny_leaf_reverted=1',
    'radio_atrac_identity_guard=1', 'atrac_direct_header_validation=1',
    'news_atrac_v825_guard=1', 'save_exitdelete_semantics=1', 'save_partition_reuse=1',
    'ge_async_default=0', 'parallel_vertex_decode_default=0'):
    need(token in log, 'metadata/protected ' + token)

need('invoke_chained_direct_impl' in runtime_h and 'if constexpr (!TrustedUnit)' in runtime_h and
     'invoke_chained_trusted_direct' in runtime_h, 'generic trusted-chain implementation exists')
need('invoke_compact_generated_leaf' in runtime_h and 'chain_depth_ >= chain_depth_limit_' in runtime_h,
     'compact leaf preserves chain-depth boundary')
need('generated_entry(*this, cpu_, 0u, outer_aot_mem)' in runtime_cpp and
     'auto outer_aot_mem = memory_.aot_fast_view();' in runtime_cpp,
     'outer dispatcher reuses AOT view and calls direct generated entry')
need('vcs_generated_unit_is_trusted' in codegen and 'vcs_compact_generated_leaf' in codegen,
     'future VCS codegen emits V8.8 fast paths')
need('stale cluster cleanup' in tier2gen and "raw.replace('invoke_chained_trusted_direct', 'invoke_chained_direct')" in tier2gen,
     'Tier2 rebuild handles stale clusters and normalizes V8.8 edges in-memory')
need('host/vcs_compact_leaves.cpp' in cmake, 'compact leaf source is in VCSNative CMake target')
need('optimize_generated_v88_trusted_chain.py' in build and 'optimize_generated_v88_compact_leaves.py' in build and
     'check_v88_extreme_cpu_trusted_dispatch.py' in build and 'PERF_V88_TRUSTED_DISPATCH_STAMP' in build,
     'Windows build applies, audits and invalidates V8.8 once')

units = sorted(generated.glob('generated_unit_*.cpp'))
need(len(units) == 234, '234 generated AOT units preserved')
paths = units + sorted(host.glob('vcs_tier2_cluster_*.cpp'))
trusted_re = re.compile(r'rt\.invoke_chained_trusted_direct<(&recomp_unit_(\d{4})(?:_entry)?),\s*(\d+)u')
defensive_re = re.compile(r'rt\.invoke_chained_direct<(&recomp_unit_(\d{4})(?:_entry)?),\s*(\d+)u')
compact_re = re.compile(r'rt\.invoke_compact_generated_leaf<&([A-Za-z0-9_]+),\s*(\d+)u,\s*(0x[0-9A-F]+)u>\(ctx,\s*&aot_mem\)')
poisonable = {44, 197, 212, 216, 219}
trusted = defensive = compact = 0
trusted_units = set()
defensive_units = set()
compact_counts = {}
for path in paths:
    text = path.read_text(encoding='utf-8', errors='ignore')
    for m in trusted_re.finditer(text):
        sym = int(m.group(2)); unit = int(m.group(3))
        if sym != unit:
            raise SystemExit(f'FAIL: {path.name}: trusted symbol/unit mismatch {sym}!={unit}')
        if unit in poisonable:
            raise SystemExit(f'FAIL: {path.name}: poisonable unit {unit} marked trusted')
        trusted += 1; trusted_units.add(unit)
    for m in defensive_re.finditer(text):
        sym = int(m.group(2)); unit = int(m.group(3))
        if sym != unit:
            raise SystemExit(f'FAIL: {path.name}: defensive symbol/unit mismatch {sym}!={unit}')
        defensive += 1; defensive_units.add(unit)
    for m in compact_re.finditer(text):
        compact += 1
        pc = m.group(3)
        compact_counts[pc] = compact_counts.get(pc, 0) + 1

is_v810='stage=perf-v8.10-extreme-cpu-resident-regions-2026-08-18' in log
need(trusted == (34797 if is_v810 else 45968), f'trusted direct sites exact for lineage (got {trusted})')
if is_v810:
    resident_sites=sum(path.read_text(encoding='utf-8',errors='ignore').count('invoke_resident_generated_leaf<') for path in units)
    need(trusted + resident_sites == 45968, 'V8.10 resident regions preserve V8.8 trusted-edge total')
need(defensive == 3240, f'poisonable defensive sites exact = 3240 (got {defensive})')
need(defensive_units <= poisonable, f'defensive generated units are only poisonable buckets {sorted(defensive_units)}')
need(compact == 1885, f'compact leaf sites exact = 1885 (got {compact})')
expected_compact = {
    '0x08960424': 785,
    '0x0898B428': 456,
    '0x08AFEF7C': 308,
    '0x08A931B8': 336,
}
need(compact_counts == expected_compact, f'compact target distribution exact {compact_counts}')
need(trusted + compact + (resident_sites if is_v810 else 0) == 47853, '47,853 statically safe edges remain accelerated across V8.8/V8.10 lineage')

trusted_manifest = json.loads((generated / 'v88_trusted_chain_manifest.json').read_text())
compact_manifest = json.loads((generated / 'v88_compact_leaf_manifest.json').read_text())
need(trusted_manifest['trusted_sites'] == 45968 and trusted_manifest['poisonable_units'] == [44,197,212,216,219],
     'trusted-chain manifest matches canonical corpus')
need(compact_manifest['sites'] == 1885 and len(compact_manifest['targets']) == 4,
     'compact-leaf manifest matches canonical corpus')

for token in ('vcs_compact_leaf_08960424', 'vcs_compact_leaf_0898B428',
              'vcs_compact_leaf_08AFEF7C', 'vcs_compact_leaf_08A931B8'):
    need(token in compact_h and token in compact_cpp, 'compact helper declaration/body ' + token)
need('aot_direct_load8(ctx.gpr[28] + 7800u)' in compact_cpp and
     'ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>()' in compact_cpp,
     'compact helper architectural operations pinned')

# V8.7's broad body duplication must not leak into this V8.6-derived baseline.
markers = sum(p.read_text(encoding='utf-8', errors='ignore').count('V87_TINY_LEAF_INLINE') for p in units)
need(markers == 0, 'V8.7 broad tiny-leaf body duplication fully reverted')

print('V8.8 EXTREME CPU TRUSTED DISPATCH auditor: PASS')
