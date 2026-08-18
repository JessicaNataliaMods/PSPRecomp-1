#!/usr/bin/env python3
from pathlib import Path
import sys

profile = Path(__file__).resolve().parents[1]
host = profile / 'host'
generated = profile / 'generated'

geometry = (host / 'vcs_tier2_cluster_geometry.cpp').read_text(encoding='utf-8')
world = (host / 'vcs_tier2_cluster_world.cpp').read_text(encoding='utf-8')
log_cpp = (host / 'vcs_runtime_log.cpp').read_text(encoding='utf-8')

checks = []
def require(cond: bool, message: str) -> None:
    if not cond:
        raise SystemExit(f'V8 CPU fusion audit FAILED: {message}')
    checks.append(message)

require('Tier2DirectMemoryView tier2_mem' in geometry, 'Geometry direct-fastmem view present')
require('Tier2DirectMemoryView tier2_mem' in world, 'World direct-fastmem view present')
require('std::uint32_t tier2_gpr_4 = ctx.gpr[4];' not in geometry,
        'Geometry GPR shadow remains disabled')
require(geometry.count('account_inlined_generated_leaf(ctx)') == 9,
        'Geometry has 3 local + 6 direct generated leaf sites')
require(geometry.count('recomp_unit_0088_entry(rt, ctx, 36u, aot_mem)') == 4,
        'Geometry direct-leaf lowering covers four 0088 call sites')
require('tier2_direct_mem_sites=2068' in log_cpp, 'Runtime metadata reports 2068 direct-memory sites')
require('perf_layer=8' in log_cpp, 'Runtime metadata reports V8')

hook_units = (43, 44, 84, 85, 86, 129, 154, 155, 157, 158)
hook_gate_count = 0
for unit in hook_units:
    text = (generated / f'generated_unit_{unit:04d}.cpp').read_text(encoding='utf-8')
    hook_gate_count += text.count('rt.memory().direct_fastmem_enabled()')
require(hook_gate_count == 25, 'All 25 Tier-2 hooks are gated by direct fastmem')

print(f'V8 CPU fusion static audit: PASS ({len(checks)} checks)')
