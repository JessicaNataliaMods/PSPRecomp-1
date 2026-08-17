#!/usr/bin/env python3
from pathlib import Path
import re
import sys

profile = Path(__file__).resolve().parents[1]
entity = (profile / 'host' / 'vcs_tier2_cluster_entity.cpp').read_text(encoding='utf-8')
gen = (profile / 'tools' / 'build_tier2_superblocks.py').read_text(encoding='utf-8')

errors = []
if entity.count('account_inlined_generated_leaf(ctx)') != 13:
    errors.append('expected exactly 13 inlined Entity leaf call sites')

resume_pairs = re.findall(
    r'ctx\.pc = (0x[0-9A-F]{8})u;\n\s*TIER2_GPR_SYNC_OUT\(\);\n\s*if \(!rt\.account_inlined_generated_leaf\(ctx\)\)',
    entity)
if len(resume_pairs) != 13:
    errors.append(f'expected 13 continuation-PC publications before inline scheduler accounting, got {len(resume_pairs)}')
if len(resume_pairs) == 13:
    account_positions = [m.start() for m in re.finditer(r'account_inlined_generated_leaf\(ctx\)', entity)]
    for index, pos in enumerate(account_positions):
        window = entity[max(0, pos - 900):pos]
        ra = re.findall(r'ctx\.gpr\[31\] = \((0x[0-9A-F]{8})u\);', window)
        pc = re.findall(r'ctx\.pc = (0x[0-9A-F]{8})u;', window)
        if not ra or not pc or ra[-1] != pc[-1]:
            errors.append(f'inline site {index} does not publish the exact JAL return PC before accounting')
if 'tier2_enter_fused_transfer<152u' in entity:
    errors.append('unit 0152 still uses fused-call plumbing inside Entity cluster')
if 'tier2_enter_fused_transfer<153u' in entity:
    errors.append('unit 0153 still uses fused-call plumbing inside Entity cluster')
for pc in ('0x08A65EA0', '0x08A65EB4', '0x08A68CBC', '0x08A68CC4',
           '0x08A68CCC', '0x08A68CD4', '0x08A68CDC'):
    if pc not in gen:
        errors.append(f'missing inline leaf mapping {pc}')
# Keep the known-stable V4 Entity shadow ownership set.  This is deliberate:
# V6 makes gpr[2] syntactically hotter but must not evict stack pointer gpr[29].
for reg in (4, 6, 19, 17, 5, 29):
    if f'tier2_gpr_{reg} = ctx.gpr[{reg}]' not in entity:
        errors.append(f'missing stable shadow register gpr[{reg}]')
if 'tier2_gpr_2 = ctx.gpr[2]' in entity:
    errors.append('gpr[2] unexpectedly displaced a stable V4 shadow register')

if errors:
    for e in errors:
        print('FAIL:', e)
    sys.exit(1)
print('check_v6_entity_leaf_inline: PASS')
