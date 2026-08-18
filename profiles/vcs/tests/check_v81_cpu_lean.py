#!/usr/bin/env python3
from pathlib import Path

profile = Path(__file__).resolve().parents[1]
host = profile / 'host'
generated = profile / 'generated'

geometry = (host / 'vcs_tier2_cluster_geometry.cpp').read_text(encoding='utf-8')
world = (host / 'vcs_tier2_cluster_world.cpp').read_text(encoding='utf-8')
log_cpp = (host / 'vcs_runtime_log.cpp').read_text(encoding='utf-8')
generator = (profile / 'tools' / 'build_tier2_superblocks.py').read_text(encoding='utf-8')

checks = []
def require(cond: bool, message: str) -> None:
    if not cond:
        raise SystemExit(f'V8.1 CPU LEAN audit FAILED: {message}')
    checks.append(message)

require('Tier2DirectMemoryView tier2_mem' in geometry, 'Geometry direct-fastmem view retained')
require('Tier2DirectMemoryView tier2_mem' in world, 'World direct-fastmem view retained')
require('std::uint32_t tier2_gpr_4 = ctx.gpr[4];' not in geometry,
        'Geometry GPR shadow remains disabled')
require(geometry.count('account_inlined_generated_leaf(ctx)') == 0,
        'V8 Geometry leaf-inlining experiment fully rolled back')
require('DIRECT_GENERATED_LEAF_TARGETS = set()' in generator,
        'Direct generated leaf experiment disabled')
require('GEOMETRY_INLINE_LEAF_BODIES = {}' in generator,
        'Geometry local leaf experiment disabled')
require('83: [0x08953A08' not in generator and '117: [0x089D89E0]' not in generator,
        'Extra V8 Geometry closure seeds removed')
require('hot_blocks=1060 static_fused_calls=36' in log_cpp,
        'Runtime metadata restored to V7-size Tier-2 closure')
require('tier2_direct_mem_sites=1969' in log_cpp,
        'Runtime metadata reports lean 1969 direct-memory sites')
require('geometry_fusion_rollback=1' in log_cpp,
        'Runtime metadata identifies regression rollback')
require('perf_layer=8 cpu_lean_revision=1' in log_cpp, 'Runtime metadata reports V8.1 lean revision')

hook_units = (43, 44, 84, 85, 86, 129, 154, 155, 157, 158)
hook_gate_count = 0
for unit in hook_units:
    text = (generated / f'generated_unit_{unit:04d}.cpp').read_text(encoding='utf-8')
    hook_gate_count += text.count('rt.memory().direct_fastmem_enabled()')
require(hook_gate_count == 25, 'All 25 Tier-2 hooks remain gated by direct fastmem')

print(f'V8.1 CPU LEAN static audit: PASS ({len(checks)} checks)')
