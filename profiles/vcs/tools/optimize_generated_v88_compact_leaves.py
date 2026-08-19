#!/usr/bin/env python3
from __future__ import annotations

import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]
PROFILE = ROOT / 'profiles' / 'vcs'
GENERATED = PROFILE / 'generated'
HOST = PROFILE / 'host'
MANIFEST = GENERATED / 'v88_compact_leaf_manifest.json'

TARGETS = {
    0x08960424: (87, 'vcs_compact_leaf_08960424'),
    0x0898B428: (97, 'vcs_compact_leaf_0898B428'),
    0x08AFEF7C: (190, 'vcs_compact_leaf_08AFEF7C'),
    0x08A931B8: (163, 'vcs_compact_leaf_08A931B8'),
}

CALL = re.compile(
    r'rt\.invoke_chained_(?:trusted_)?direct<(&recomp_unit_(\d{4})(?:_entry)?),\s*'
    r'(\d+)u(?:,\s*\d+u)?,\s*(0x[0-9A-Fa-f]+)u>\(ctx,\s*&aot_mem\)'
)
COMPACT = re.compile(
    r'rt\.invoke_compact_generated_leaf<&([A-Za-z0-9_]+),\s*(\d+)u,\s*'
    r'(0x[0-9A-Fa-f]+)u>\(ctx,\s*&aot_mem\)'
)


def paths() -> list[Path]:
    return sorted(GENERATED.glob('generated_unit_*.cpp')) + sorted(HOST.glob('vcs_tier2_cluster_*.cpp'))


def main() -> int:
    changed_files = 0
    changed_sites = 0
    per_target = {pc: 0 for pc in TARGETS}
    for path in paths():
        text = path.read_text(encoding='utf-8', errors='ignore')
        def repl(m: re.Match[str]) -> str:
            nonlocal changed_sites
            pc = int(m.group(4), 16)
            target = TARGETS.get(pc)
            if target is None:
                return m.group(0)
            symbol_unit = int(m.group(2))
            arg_unit = int(m.group(3))
            expected_unit, function = target
            if symbol_unit != arg_unit or arg_unit != expected_unit:
                raise RuntimeError(f'{path}: compact target/unit mismatch at 0x{pc:08X}')
            changed_sites += 1
            per_target[pc] += 1
            return (f'rt.invoke_compact_generated_leaf<&{function}, {expected_unit}u, '
                    f'0x{pc:08X}u>(ctx, &aot_mem)')
        updated = CALL.sub(repl, text)
        if updated != text:
            path.write_text(updated, encoding='utf-8', newline='\n')
            changed_files += 1

    # Count canonical state, including idempotent reruns.
    compact_counts = {pc: 0 for pc in TARGETS}
    for path in paths():
        text = path.read_text(encoding='utf-8', errors='ignore')
        for m in COMPACT.finditer(text):
            pc = int(m.group(3), 16)
            if pc not in TARGETS:
                continue
            unit, function = TARGETS[pc]
            if int(m.group(2)) != unit or m.group(1) != function:
                raise RuntimeError(f'{path}: malformed compact leaf for 0x{pc:08X}')
            compact_counts[pc] += 1
        # No canonical direct call to a selected target may remain.
        for m in CALL.finditer(text):
            if int(m.group(4), 16) in TARGETS:
                raise RuntimeError(f'{path}: selected compact target still uses generated-unit entry')

    manifest = {
        'version': 1,
        'stage': 'perf-v8.8-extreme-cpu-trusted-dispatch-2026-08-18',
        'targets': [
            {'pc': f'0x{pc:08X}', 'unit': unit, 'function': fn, 'sites': compact_counts[pc]}
            for pc, (unit, fn) in TARGETS.items()
        ],
        'sites': sum(compact_counts.values()),
        'changed_files_this_run': changed_files,
        'changed_sites_this_run': changed_sites,
    }
    MANIFEST.write_text(json.dumps(manifest, indent=2) + '\n', encoding='utf-8')
    print('V8.8 compact leaves: files_changed=%d replacements=%d sites=%d %s' % (
        changed_files, changed_sites, manifest['sites'],
        ' '.join(f'{pc:08X}={compact_counts[pc]}' for pc in TARGETS)))
    return 0

if __name__ == '__main__':
    raise SystemExit(main())
