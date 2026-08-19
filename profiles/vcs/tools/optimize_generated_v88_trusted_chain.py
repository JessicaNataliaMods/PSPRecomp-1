#!/usr/bin/env python3
from __future__ import annotations

import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]
PROFILE = ROOT / 'profiles' / 'vcs'
GENERATED = PROFILE / 'generated'
HOST = PROFILE / 'host'
MANIFEST = GENERATED / 'v88_trusted_chain_manifest.json'

# VCS buckets that are deliberately poisoned by exact host/import replacements.
# 44: vcs_path_hash, 197: codec-module host hook, 212: vcs_sprintf,
# 216: raw-deflate host hook, 219: PSP import stubs.
POISONABLE_UNITS = frozenset({44, 197, 212, 216, 219})
PATTERN = re.compile(
    r'rt\.invoke_chained_direct<(&recomp_unit_(\d{4})(?:_entry)?),\s*(\d+)u'
)
TRUSTED_PATTERN = re.compile(
    r'rt\.invoke_chained_trusted_direct<(&recomp_unit_(\d{4})(?:_entry)?),\s*(\d+)u'
)


def candidate_paths() -> list[Path]:
    return sorted(GENERATED.glob('generated_unit_*.cpp')) + sorted(HOST.glob('vcs_tier2_cluster_*.cpp'))


def transform_text(text: str) -> tuple[str, int, int, int]:
    changed = 0
    safe_seen = 0
    unsafe_seen = 0

    def repl(match: re.Match[str]) -> str:
        nonlocal changed, safe_seen, unsafe_seen
        symbol_unit = int(match.group(2))
        unit = int(match.group(3))
        if symbol_unit != unit:
            raise RuntimeError(f'direct-chain symbol/unit mismatch: symbol={symbol_unit} arg={unit}')
        if unit in POISONABLE_UNITS:
            unsafe_seen += 1
            return match.group(0)
        safe_seen += 1
        changed += 1
        return match.group(0).replace('invoke_chained_direct', 'invoke_chained_trusted_direct', 1)

    return PATTERN.sub(repl, text), changed, safe_seen, unsafe_seen


def audit(paths: list[Path]) -> dict[str, int]:
    trusted = 0
    untrusted_safe = 0
    poisonable = 0
    generated_trusted = 0
    tier2_trusted = 0
    for path in paths:
        text = path.read_text(encoding='utf-8', errors='ignore')
        for match in TRUSTED_PATTERN.finditer(text):
            symbol_unit = int(match.group(2))
            unit = int(match.group(3))
            if symbol_unit != unit:
                raise RuntimeError(f'{path}: trusted-chain symbol/unit mismatch')
            if unit in POISONABLE_UNITS:
                raise RuntimeError(f'{path}: poisonable unit {unit} marked trusted')
            trusted += 1
            if path.parent == GENERATED:
                generated_trusted += 1
            else:
                tier2_trusted += 1
        for match in PATTERN.finditer(text):
            unit = int(match.group(3))
            if unit in POISONABLE_UNITS:
                poisonable += 1
            else:
                untrusted_safe += 1
    if untrusted_safe:
        raise RuntimeError(f'{untrusted_safe} safe direct-chain sites were not converted')
    return {
        'trusted_sites': trusted,
        'generated_trusted_sites': generated_trusted,
        'tier2_trusted_sites': tier2_trusted,
        'poisonable_sites_retained': poisonable,
    }


def main() -> int:
    paths = candidate_paths()
    files_changed = 0
    replacements = 0
    for path in paths:
        original = path.read_text(encoding='utf-8', errors='ignore')
        updated, changed, _safe, _unsafe = transform_text(original)
        if changed:
            path.write_text(updated, encoding='utf-8', newline='\n')
            files_changed += 1
            replacements += changed

    stats = audit(paths)
    manifest = {
        'version': 1,
        'stage': 'perf-v8.8-extreme-cpu-trusted-dispatch-2026-08-18',
        'poisonable_units': sorted(POISONABLE_UNITS),
        'generated_units': len(list(GENERATED.glob('generated_unit_*.cpp'))),
        **stats,
    }
    MANIFEST.write_text(json.dumps(manifest, indent=2) + '\n', encoding='utf-8')
    print(
        'V8.8 trusted-chain optimizer: '
        f'files_changed={files_changed} replacements={replacements} '
        f'trusted={stats["trusted_sites"]} '
        f'generated={stats["generated_trusted_sites"]} '
        f'tier2={stats["tier2_trusted_sites"]} '
        f'poisonable_retained={stats["poisonable_sites_retained"]}'
    )
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
