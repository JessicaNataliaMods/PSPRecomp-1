#!/usr/bin/env python3
from __future__ import annotations

import argparse
import collections
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]
PROFILE = ROOT / 'profiles' / 'vcs'
GENERATED = PROFILE / 'generated'
HOST = PROFILE / 'host'
MANIFEST = GENERATED / 'v810_resident_region_manifest.json'
HEADER = HOST / 'vcs_resident_regions.hpp'
SOURCE = HOST / 'vcs_resident_regions.cpp'

MIN_STATIC_SITES = 40
MAX_BLOCKS = 40
POISONABLE_UNITS = frozenset({44, 197, 212, 216, 219})
INCLUDE = '#include "vcs_resident_regions.hpp"\n'

DIRECT_CALL_RE = re.compile(
    r'rt\.invoke_chained_(?:trusted_)?direct<&recomp_unit_(?P<sym>\d{4})_entry,\s*'
    r'(?P<unit>\d+)u,\s*(?P<entry>\d+)u,\s*(?P<pc>0x[0-9A-Fa-f]+)u>'
    r'\(ctx,\s*&aot_mem\)')
RESIDENT_CALL_RE = re.compile(
    r'rt\.invoke_resident_generated_leaf<&vcs_resident_region_(?P<namepc>[0-9A-F]{8}),\s*'
    r'(?P<unit>\d+)u,\s*(?:(?P<entry>\d+)u,\s*)?(?P<pc>0x[0-9A-Fa-f]+)u>\(ctx,\s*&aot_mem(?P<args>[^\)]*)\)')
ENTRY_RE = re.compile(r'case (\d+)u: goto L_([0-9A-F]{8});')
LABEL_RE = re.compile(r'^L_([0-9A-F]{8}):\n', re.M)
GOTO_RE = re.compile(r'goto L_([0-9A-F]{8});')
LOCAL_RETURN_RE = re.compile(
    r'(?P<indent>[ \t]*)local_pc = (?P<local_expr>[^;]+);\n'
    r'(?P=indent)if \(\+\+local_transfers < 256u\) \{ entry_id = 0u; goto LOCAL_DISPATCH; \}\n'
    r'(?P=indent)ctx\.pc = (?P<pc_expr>[^;]+);\n'
    r'(?P=indent)return;')



def read_unit(unit: int):
    path = GENERATED / f'generated_unit_{unit:04d}.cpp'
    text = path.read_text(encoding='utf-8', errors='ignore')
    start = text.index(f'void recomp_unit_{unit:04d}_entry')
    end = text.index(f'\nvoid recomp_unit_{unit:04d}(', start)
    body = text[start:end]
    entries = {int(e): int(pc, 16) for e, pc in ENTRY_RE.findall(body)}
    matches = list(LABEL_RE.finditer(body))
    order: list[int] = []
    blocks: dict[int, str] = {}
    for i, m in enumerate(matches):
        pc = int(m.group(1), 16)
        order.append(pc)
        blocks[pc] = body[m.end(): matches[i + 1].start() if i + 1 < len(matches) else len(body)]
    return path, text, entries, order, blocks


def reachable(entry_pc: int, order: list[int], blocks: dict[int, str]) -> set[int]:
    index = {pc: i for i, pc in enumerate(order)}
    seen: set[int] = set()
    stack = [entry_pc]
    while stack:
        pc = stack.pop()
        if pc in seen or pc not in blocks:
            continue
        seen.add(pc)
        if len(seen) > MAX_BLOCKS:
            return seen
        text = blocks[pc]
        for dst in GOTO_RE.findall(text):
            stack.append(int(dst, 16))
        clean = re.sub(r'//.*', '', text).strip()
        if not re.search(r'(?:return;|goto L_[0-9A-F]{8};)\s*$', clean):
            i = index[pc]
            if i + 1 < len(order):
                stack.append(order[i + 1])
    return seen


def normalize_region(text: str) -> str:
    text = LOCAL_RETURN_RE.sub(lambda m: f'{m.group("indent")}ctx.pc = {m.group("pc_expr")};\n{m.group("indent")}return;', text)
    return text


def analyze_target(unit: int, pc: int):
    _, _, entries, order, blocks = read_unit(unit)
    reverse = {target_pc: entry for entry, target_pc in entries.items()}
    entry = reverse.get(pc)
    if entry is None:
        return None
    seen = reachable(pc, order, blocks)
    if len(seen) > MAX_BLOCKS:
        return None
    region = ''.join(f'L_{p:08X}:\n{blocks[p]}' for p in order if p in seen)
    region = normalize_region(region)
    # A resident region must be a true generated leaf: no nested guest/HLE/host boundary.
    forbidden = (
        'rt.invoke_', 'tier2_superblock_', 'rt.unsupported', 'rt.arithmetic_overflow',
        'ctx.execute_signed_', 'LOCAL_DISPATCH', 'local_transfers', 'local_pc', 'entry_id',
        'direct_entry_id', 'aot_regcache_', 'aot_gpr_', 'aot_fpr_')
    if any(token in region for token in forbidden):
        return None
    # Only architectural scalar state that can safely be passed by reference is admitted.
    tmp = re.sub(r'ctx\.gpr\[\d+\]|ctx\.fpr\[\d+\]|ctx\.(?:pc|hi|lo)', '', region)
    if 'ctx.' in tmp:
        return None
    # Every local branch target must remain inside the extracted closure.
    if any(int(dst, 16) not in seen for dst in GOTO_RE.findall(region)):
        return None
    gprs = sorted(set(map(int, re.findall(r'ctx\.gpr\[(\d+)\]', region))))
    fprs = sorted(set(map(int, re.findall(r'ctx\.fpr\[(\d+)\]', region))))
    uses_hi = 'ctx.hi' in region
    uses_lo = 'ctx.lo' in region
    uses_pc = 'ctx.pc' in region
    return {
        'unit': unit, 'entry': entry, 'pc': pc, 'blocks': len(seen), 'region': region,
        'gprs': gprs, 'fprs': fprs, 'uses_hi': uses_hi, 'uses_lo': uses_lo, 'uses_pc': uses_pc,
    }


def arg_expr(info: dict) -> list[str]:
    args: list[str] = []
    if info['uses_pc']: args.append('ctx.pc')
    if info['uses_hi']: args.append('ctx.hi')
    if info['uses_lo']: args.append('ctx.lo')
    args.extend(f'ctx.gpr[{r}]' for r in info['gprs'])
    args.extend(f'ctx.fpr[{r}]' for r in info['fprs'])
    return args


def param_decl(info: dict) -> list[str]:
    args: list[str] = []
    if info['uses_pc']: args.append('std::uint32_t &pc')
    if info['uses_hi']: args.append('std::uint32_t &hi')
    if info['uses_lo']: args.append('std::uint32_t &lo')
    args.extend(f'std::uint32_t &r{r}' for r in info['gprs'])
    args.extend(f'float &f{r}' for r in info['fprs'])
    return args


def rewrite_region(info: dict) -> str:
    region = info['region']
    region = re.sub(r'goto L_([0-9A-F]{8});', r'goto RL_\1;', region)
    region = re.sub(r'^L_([0-9A-F]{8}):', r'RL_\1:', region, flags=re.M)
    for r in info['gprs']:
        region = region.replace(f'ctx.gpr[{r}]', f'r{r}')
    for r in info['fprs']:
        region = region.replace(f'ctx.fpr[{r}]', f'f{r}')
    if info['uses_pc']: region = region.replace('ctx.pc', 'pc')
    if info['uses_hi']: region = region.replace('ctx.hi', 'hi')
    if info['uses_lo']: region = region.replace('ctx.lo', 'lo')
    if 'ctx.' in region:
        raise RuntimeError(f'0x{info["pc"]:08X}: residual ctx access in resident region')
    decl = '    std::uint32_t jump_target = 0u;\n' if re.search(r'\bjump_target\b', region) else ''
    return decl + f'    goto RL_{info["pc"]:08X};\n' + region


def strip_specialization() -> int:
    changed_files = 0
    changed_sites = 0
    reverse_entries: dict[int, dict[int, int]] = {}
    def entry_for(unit: int, pc: int):
        if unit not in reverse_entries:
            _, _, entries, _, _ = read_unit(unit)
            reverse_entries[unit] = {target_pc: entry for entry, target_pc in entries.items()}
        return reverse_entries[unit].get(pc)
    for path in sorted(GENERATED.glob('generated_unit_*.cpp')):
        text = path.read_text(encoding='utf-8', errors='ignore')
        def repl(m: re.Match[str]) -> str:
            nonlocal changed_sites
            unit = int(m.group('unit')); pc = int(m.group('pc'), 16)
            entry = entry_for(unit, pc)
            if entry is None:
                raise RuntimeError(f'{path}: cannot restore resident region 0x{pc:08X}')
            changed_sites += 1
            return (f'rt.invoke_chained_trusted_direct<&recomp_unit_{unit:04d}_entry, '
                    f'{unit}u, {entry}u, 0x{pc:08X}u>(ctx, &aot_mem)')
        updated = RESIDENT_CALL_RE.sub(repl, text)
        if 'invoke_resident_generated_leaf<' not in updated:
            updated = updated.replace(INCLUDE, '')
        if updated != text:
            path.write_text(updated, encoding='utf-8', newline='\n')
            changed_files += 1
    print(f'V8.10 resident regions strip: files={changed_files} sites={changed_sites}')
    return 0

def main() -> int:
    ap=argparse.ArgumentParser()
    ap.add_argument('--strip', action='store_true')
    ns=ap.parse_args()
    if ns.strip:
        return strip_specialization()
    # Count both canonical direct calls and already-specialized resident calls so reruns are idempotent.
    target_counts: collections.Counter[tuple[int, int]] = collections.Counter()
    for path in sorted(GENERATED.glob('generated_unit_*.cpp')):
        text = path.read_text(encoding='utf-8', errors='ignore')
        for m in DIRECT_CALL_RE.finditer(text):
            unit = int(m.group('unit')); pc = int(m.group('pc'), 16)
            if int(m.group('sym')) != unit:
                raise RuntimeError(f'{path}: direct symbol/unit mismatch')
            target_counts[(unit, pc)] += 1
        for m in RESIDENT_CALL_RE.finditer(text):
            unit = int(m.group('unit')); pc = int(m.group('pc'), 16)
            if int(m.group('namepc'), 16) != pc:
                raise RuntimeError(f'{path}: resident region name/pc mismatch')
            target_counts[(unit, pc)] += 1

    selected: dict[tuple[int, int], dict] = {}
    for (unit, pc), sites in target_counts.items():
        if sites < MIN_STATIC_SITES or unit in POISONABLE_UNITS:
            continue
        info = analyze_target(unit, pc)
        if info is None:
            continue
        info['sites'] = sites
        selected[(unit, pc)] = info

    changed_files = 0
    changed_sites = 0
    for path in sorted(GENERATED.glob('generated_unit_*.cpp')):
        text = path.read_text(encoding='utf-8', errors='ignore')
        local_changes = 0
        def repl(m: re.Match[str]) -> str:
            nonlocal local_changes, changed_sites
            unit = int(m.group('unit')); pc = int(m.group('pc'), 16)
            info = selected.get((unit, pc))
            if info is None:
                return m.group(0)
            if int(m.group('entry')) != info['entry']:
                raise RuntimeError(f'{path}: resident region entry mismatch at 0x{pc:08X}')
            fn = f'vcs_resident_region_{pc:08X}'
            args = arg_expr(info)
            suffix = ''.join(', ' + a for a in args)
            local_changes += 1; changed_sites += 1
            return (f'rt.invoke_resident_generated_leaf<&{fn}, {unit}u, {info["entry"]}u, 0x{pc:08X}u>'
                    f'(ctx, &aot_mem{suffix})')
        updated = DIRECT_CALL_RE.sub(repl, text)
        if local_changes and INCLUDE not in updated:
            # Keep profile header after generated_units so generic codegen sources stay untouched.
            anchor = '#include "generated_units.hpp"\n'
            if anchor not in updated:
                raise RuntimeError(f'{path}: generated include anchor missing')
            updated = updated.replace(anchor, anchor + INCLUDE, 1)
        if updated != text:
            path.write_text(updated, encoding='utf-8', newline='\n')
            changed_files += 1

    # Generate one copy of every resident leaf region out-of-line. Callers pass resident locals by reference.
    infos = sorted(selected.values(), key=lambda x: (x['pc'], x['unit']))
    h = ['#pragma once', '', '#include "psprecomp/guest_memory.hpp"', '#include <cstdint>', '', 'namespace psprecomp {', '']
    c = ['#include "vcs_resident_regions.hpp"', '', '#include <bit>', '#include <cmath>', '#include <cstdint>', '#include <limits>', '', 'namespace psprecomp {', '']
    for info in infos:
        fn = f'vcs_resident_region_{info["pc"]:08X}'
        params = ['GuestMemory::AotFastView &aot_mem'] + param_decl(info)
        signature = f'void {fn}(' + ', '.join(params) + ') noexcept'
        h.append(signature + ';')
        c.append(signature + ' {')
        c.append(rewrite_region(info).rstrip())
        c.append('}')
        c.append('')
    h += ['', '} // namespace psprecomp', '']
    c += ['} // namespace psprecomp', '']
    HEADER.write_text('\n'.join(h), encoding='utf-8', newline='\n')
    SOURCE.write_text('\n'.join(c), encoding='utf-8', newline='\n')

    # Validate final call-site count and that no selected target remains on the full-sync path.
    final_counts: collections.Counter[tuple[int, int]] = collections.Counter()
    remaining_selected = 0
    transformed_files = 0
    for path in sorted(GENERATED.glob('generated_unit_*.cpp')):
        text = path.read_text(encoding='utf-8', errors='ignore')
        if 'invoke_resident_generated_leaf<' in text:
            transformed_files += 1
        for m in RESIDENT_CALL_RE.finditer(text):
            final_counts[(int(m.group('unit')), int(m.group('pc'), 16))] += 1
        for m in DIRECT_CALL_RE.finditer(text):
            if (int(m.group('unit')), int(m.group('pc'), 16)) in selected:
                remaining_selected += 1
    if remaining_selected:
        raise RuntimeError(f'{remaining_selected} selected resident-region calls remain unspecialized')
    sites = sum(final_counts[k] for k in selected)
    expected = sum(info['sites'] for info in infos)
    if sites != expected:
        raise RuntimeError(f'resident-region site mismatch: {sites} != {expected}')

    manifest = {
        'version': 1,
        'stage': 'perf-v8.10-extreme-cpu-resident-regions-2026-08-18',
        'min_static_sites': MIN_STATIC_SITES,
        'max_blocks': MAX_BLOCKS,
        'poisonable_units': sorted(POISONABLE_UNITS),
        'targets': len(infos),
        'sites': sites,
        'generated_files_with_sites': transformed_files,
        'changed_files_this_run': changed_files,
        'changed_sites_this_run': changed_sites,
        'regions': [
            {
                'pc': f'0x{info["pc"]:08X}', 'unit': info['unit'], 'entry': info['entry'],
                'blocks': info['blocks'], 'sites': final_counts[(info['unit'], info['pc'])],
                'gprs': info['gprs'], 'fprs': info['fprs'],
                'uses_hi': info['uses_hi'], 'uses_lo': info['uses_lo'], 'uses_pc': info['uses_pc'],
            }
            for info in infos
        ],
    }
    MANIFEST.write_text(json.dumps(manifest, indent=2) + '\n', encoding='utf-8')
    print('V8.10 resident regions: targets=%d sites=%d files=%d changed_files=%d changed_sites=%d' % (
        manifest['targets'], manifest['sites'], transformed_files, changed_files, changed_sites))
    return 0

if __name__ == '__main__':
    raise SystemExit(main())
