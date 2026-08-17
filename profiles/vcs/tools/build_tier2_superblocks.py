#!/usr/bin/env python3
"""Generate VCS Tier-2 SUPERBLOCK V2 multi-cluster second-layer AOT.

V2 is profile-guided and intentionally keeps the original generated corpus as
its semantic fallback.  It extracts only measured hot control-flow closures,
fuses selected cross-unit direct calls/tails inside those closures, and leaves
all cold/external paths in the original AOT units.

The generated code preserves Runtime chain-depth and starvation accounting for
removed invoke_chained_direct frames through tier2_enter_fused_transfer() and
tier2_complete_fused_transfers().
"""
from __future__ import annotations

import argparse
import collections
import dataclasses
import pathlib
import re
from typing import Dict, Iterable, List, Mapping, MutableMapping, Sequence, Set, Tuple

HOOK_BEGIN = '// TIER2_SUPERBLOCK_V2_HOOK_BEGIN\n'
HOOK_END = '// TIER2_SUPERBLOCK_V2_HOOK_END\n'
OLD_HOOK_BEGIN = '// TIER2_SUPERBLOCK_V1_HOOK_BEGIN\n'
OLD_HOOK_END = '// TIER2_SUPERBLOCK_V1_HOOK_END\n'
HEADER_INCLUDE = '#include "vcs_tier2_superblocks.hpp"\n'

# Generated unit labels use globally unique guest PCs, so one label namespace
# can safely span several AOT units in a cluster.
LABEL_RE = re.compile(r'^L_([0-9A-F]{8}):\n', re.M)
GOTO_RE = re.compile(r'goto SB_L_([0-9A-F]{8});')
DIRECT_ENTRY_RE = re.compile(r'case (\d+)u: goto L_([0-9A-F]{8});')
DIRECT_CALL_RE = re.compile(
    r'(?P<indent>[ \t]*)if \(rt\.invoke_chained_direct<&recomp_unit_(?P<target_name>\d+)_entry, '
    r'(?P<target_unit>\d+)u, (?P<entry>\d+)u, (?P<target_pc>0x[0-9A-F]+)u>'
    r'\(ctx, &aot_mem\) && ctx\.pc == (?P<cont>0x[0-9A-F]+)u\) '
    r'goto SB_L_(?P<cont_label>[0-9A-F]{8});\n(?P=indent)return;')
TAIL_CALL_RE = re.compile(
    r'(?P<indent>[ \t]*)\(void\)rt\.invoke_chained_direct<&recomp_unit_(?P<target_name>\d+)_entry, '
    r'(?P<target_unit>\d+)u, (?P<entry>\d+)u, (?P<target_pc>0x[0-9A-F]+)u>'
    r'\(ctx, &aot_mem\); return;')
LOCAL_DISPATCH_SEQUENCE_RE = re.compile(
    r'(?P<indent>[ \t]*)local_pc = (?P<local_expr>[^;]+);\n'
    r'(?P=indent)if \(\+\+local_transfers < 256u\) \{ entry_id = 0u; goto LOCAL_DISPATCH; \}\n'
    r'(?P=indent)ctx\.pc = (?P<pc_expr>[^;]+);\n'
    r'(?P=indent)return;')


@dataclasses.dataclass(frozen=True)
class UnitSource:
    unit: int
    raw: str
    blocks: Mapping[int, str]
    ordered_pcs: Tuple[int, ...]
    entries: Mapping[int, int]


@dataclasses.dataclass
class Cluster:
    key: str
    enum_name: str
    function: str
    # Unit -> hot seed PCs. Local control-flow closure is extracted from these.
    seeds: Dict[int, List[int]]
    # Optional explicit PC windows.  These are useful for the entity loop where
    # unrestricted local closure pulls in unrelated cold functions.
    windows: Dict[int, List[Tuple[int, int]]] = dataclasses.field(default_factory=dict)
    # Units where cross-unit call targets are recursively pulled into the same
    # cluster. This is bounded by the source units in `seeds`/`windows`.
    expand_cross_units: bool = False
    hooks: Dict[int, List[int]] = dataclasses.field(default_factory=dict)
    max_blocks: int = 700


CLUSTERS: List[Cluster] = [
    Cluster(
        key='entity', enum_name='Entity', function='tier2_superblock_entity',
        seeds={},
        windows={
            152: [(0x08A65EA0, 0x08A65EC8)],
            153: [(0x08A68CBC, 0x08A68CE4)],
            154: [(0x08A6E894, 0x08A6ED98)],
            155: [(0x08A71100, 0x08A71214)],
        },
        expand_cross_units=False,
        hooks={154: [0x08A6E894, 0x08A6E8A4],
               155: [0x08A71100, 0x08A711E0, 0x08A711EC]},
    ),
    Cluster(
        key='geometry', enum_name='Geometry', function='tier2_superblock_geometry',
        seeds={84: [0x08955444, 0x089554A8],
               85: [0x08958D28, 0x0895A760]},
        expand_cross_units=True,
        hooks={84: [0x08955444, 0x089554A8],
               85: [0x08958D28, 0x0895A760]},
        max_blocks=520,
    ),
    Cluster(
        key='boundary', enum_name='Boundary', function='tier2_superblock_boundary',
        seeds={85: [0x0895BF3C, 0x0895BF7C],
               86: [0x0895C000, 0x0895C01C, 0x0895C2A8]},
        expand_cross_units=True,
        hooks={85: [0x0895BF3C, 0x0895BF7C],
               86: [0x0895C000, 0x0895C01C, 0x0895C2A8]},
        max_blocks=180,
    ),
    Cluster(
        key='matrix', enum_name='Matrix', function='tier2_superblock_matrix',
        seeds={44: [0x088B4738]},
        hooks={44: [0x088B4738]},
        max_blocks=180,
    ),
    Cluster(
        key='physics', enum_name='Physics', function='tier2_superblock_physics',
        seeds={129: [0x08A09B2C]},
        hooks={129: [0x08A09B2C]},
        max_blocks=100,
    ),
    Cluster(
        key='world', enum_name='World', function='tier2_superblock_world',
        seeds={157: [0x08A79DF8, 0x08A7A94C, 0x08A7A664,
                     0x08A7B5A8, 0x08A7B5A0, 0x08A7B910, 0x08A7B5B0],
               158: [0x08A7EC68, 0x08A7F080]},
        expand_cross_units=True,
        hooks={157: [0x08A79DF8, 0x08A7A94C, 0x08A7A664, 0x08A7B5A8],
               158: [0x08A7EC68, 0x08A7F080]},
        max_blocks=700,
    ),
    Cluster(
        key='edge43', enum_name='Edge43', function='tier2_superblock_edge43',
        seeds={43: [0x088B3FCC], 44: [0x088B4004, 0x088B40F8]},
        expand_cross_units=True,
        hooks={43: [0x088B3FCC], 44: [0x088B4004, 0x088B40F8]},
        max_blocks=100,
    ),
]


def strip_hooks(text: str) -> str:
    for begin, end in ((HOOK_BEGIN, HOOK_END), (OLD_HOOK_BEGIN, OLD_HOOK_END)):
        text = re.sub(re.escape(begin) + r'.*?' + re.escape(end), '', text, flags=re.S)
    text = text.replace(HEADER_INCLUDE, '')
    return text


def parse_unit(path: pathlib.Path, unit: int) -> UnitSource:
    raw = strip_hooks(path.read_text(encoding='utf-8'))
    matches = list(LABEL_RE.finditer(raw))
    blocks: Dict[int, str] = {}
    order: List[int] = []
    end_markers = [m.start() for m in (
        re.search(r'\n}\n\nvoid recomp_unit_\d+\(', raw),
        re.search(r'\n}\n\nvoid register_generated_unit_', raw),
    ) if m is not None]
    code_end = min(end_markers) if end_markers else len(raw)
    for i, match in enumerate(matches):
        pc = int(match.group(1), 16)
        end = matches[i + 1].start() if i + 1 < len(matches) else code_end
        # Labels belonging to registration metadata do not exist, but clamp the
        # final executable block defensively so the generated superblock never
        # copies the unit registration function or namespace close.
        end = min(end, code_end)
        blocks[pc] = raw[match.start():end]
        order.append(pc)
    entries = {int(pc, 16): int(entry) for entry, pc in DIRECT_ENTRY_RE.findall(raw)}
    return UnitSource(unit=unit, raw=raw, blocks=blocks,
                      ordered_pcs=tuple(order), entries=entries)


def local_closure(source: UnitSource, seeds: Iterable[int], limit: int) -> Set[int]:
    queue = collections.deque(seeds)
    selected: Set[int] = set()
    while queue:
        if len(selected) >= limit:
            raise RuntimeError(f'unit {source.unit:04d}: hot closure exceeded {limit} blocks')
        pc = queue.popleft()
        if pc in selected:
            continue
        block = source.blocks.get(pc)
        if block is None:
            raise RuntimeError(f'unit {source.unit:04d}: missing hot seed/target 0x{pc:08X}')
        selected.add(pc)
        for target in re.findall(r'goto L_([0-9A-F]{8});', block):
            target_pc = int(target, 16)
            if target_pc in source.blocks and target_pc not in selected:
                queue.append(target_pc)
    return selected


def window_blocks(source: UnitSource, windows: Sequence[Tuple[int, int]]) -> Set[int]:
    out: Set[int] = set()
    for start, end in windows:
        if start not in source.blocks:
            raise RuntimeError(f'unit {source.unit:04d}: window start 0x{start:08X} missing')
        for pc in source.ordered_pcs:
            if start <= pc < end:
                out.add(pc)
    return out


def selected_for_cluster(cluster: Cluster, sources: Mapping[int, UnitSource]) -> Dict[int, Set[int]]:
    units = sorted(set(cluster.seeds) | set(cluster.windows))
    selected: Dict[int, Set[int]] = {u: set() for u in units}
    for unit in units:
        src = sources[unit]
        if unit in cluster.windows:
            selected[unit].update(window_blocks(src, cluster.windows[unit]))
        if unit in cluster.seeds:
            selected[unit].update(local_closure(src, cluster.seeds[unit], cluster.max_blocks))

    if not cluster.expand_cross_units:
        return selected

    # Recursively pull direct-call targets only when both source and destination
    # units are members of this cluster.  Local closure of those targets captures
    # whole guest functions/loops but remains bounded by max_blocks.
    changed = True
    while changed:
        changed = False
        total = sum(len(v) for v in selected.values())
        if total > cluster.max_blocks:
            raise RuntimeError(f'{cluster.key}: closure exceeded {cluster.max_blocks} blocks')
        for unit in units:
            src = sources[unit]
            for pc in list(selected[unit]):
                block = src.blocks[pc]
                for target_unit_s, target_pc_s in re.findall(
                    r'invoke_chained_direct<&recomp_unit_(\d+)_entry, \d+u, \d+u, '
                    r'(0x[0-9A-F]+)u>', block):
                    target_unit = int(target_unit_s)
                    target_pc = int(target_pc_s, 16)
                    if target_unit not in selected or target_pc in selected[target_unit]:
                        continue
                    closure = local_closure(sources[target_unit], [target_pc], cluster.max_blocks)
                    before = len(selected[target_unit])
                    selected[target_unit].update(closure)
                    if len(selected[target_unit]) != before:
                        changed = True
    return selected


def selected_pc_owner(selected: Mapping[int, Set[int]]) -> Dict[int, int]:
    owner: Dict[int, int] = {}
    for unit, pcs in selected.items():
        for pc in pcs:
            if pc in owner and owner[pc] != unit:
                raise RuntimeError(f'duplicate guest PC 0x{pc:08X}')
            owner[pc] = unit
    return owner


def transform_block(block: str, source_unit: int, selected: Mapping[int, Set[int]],
                    sources: Mapping[int, UnitSource], stats: MutableMapping[str, int],
                    fused_continuations: MutableMapping[Tuple[int, int], int]) -> str:
    pc_owner = selected_pc_owner(selected)
    selected_all = set(pc_owner)
    text = re.sub(r'\bL_([0-9A-F]{8})\b', r'SB_L_\1', block)

    # Fuse JAL-style direct calls when the callee target is part of this cluster.
    def direct_repl(m: re.Match[str]) -> str:
        target_unit = int(m.group('target_unit'))
        target_pc = int(m.group('target_pc'), 16)
        cont = int(m.group('cont'), 16)
        indent = m.group('indent')
        if target_pc not in selected_all or pc_owner[target_pc] != target_unit:
            return m.group(0)
        stats['fused_calls'] += 1
        fused_continuations[(source_unit, cont)] = sources[source_unit].entries.get(cont, -1)
        original = m.group(0).replace('return;', 'TIER2_SB_RETURN();')
        return (
            f'{indent}if (tier2_return_depth < kTier2ReturnCapacity) {{\n'
            f'{indent}    if (!rt.tier2_enter_fused_transfer<{target_unit}u, 0x{target_pc:08X}u>(ctx)) {{\n'
            f'{indent}        ctx.pc = 0x{target_pc:08X}u;\n'
            f'{indent}        TIER2_SB_RETURN();\n'
            f'{indent}    }}\n'
            f'{indent}    tier2_return_pc[tier2_return_depth] = 0x{cont:08X}u;\n'
            f'{indent}    tier2_return_unit[tier2_return_depth] = {source_unit}u;\n'
            f'{indent}    tier2_return_pending_base[tier2_return_depth] = tier2_pending_transfers;\n'
            f'{indent}    ++tier2_return_depth;\n'
            f'{indent}    ++tier2_stats.fused_calls;\n'
            f'{indent}    goto SB_L_{target_pc:08X};\n'
            f'{indent}}}\n'
            f'{indent}++tier2_stats.fallbacks;\n'
            f'{original}'
        )

    text = DIRECT_CALL_RE.sub(direct_repl, text)

    # Fuse tail-style direct calls. Their logical chain frames stay pending until
    # the superblock leaves, matching nested native tail frames in V1/SAFE AOT.
    def tail_repl(m: re.Match[str]) -> str:
        target_unit = int(m.group('target_unit'))
        target_pc = int(m.group('target_pc'), 16)
        indent = m.group('indent')
        if target_pc not in selected_all or pc_owner[target_pc] != target_unit:
            return m.group(0)
        stats['fused_tail'] += 1
        return (
            f'{indent}if (!rt.tier2_enter_fused_transfer<{target_unit}u, 0x{target_pc:08X}u>(ctx)) {{\n'
            f'{indent}    ctx.pc = 0x{target_pc:08X}u;\n'
            f'{indent}    TIER2_SB_RETURN();\n'
            f'{indent}}}\n'
            f'{indent}++tier2_pending_transfers;\n'
            f'{indent}++tier2_stats.fused_tail_edges;\n'
            f'{indent}goto SB_L_{target_pc:08X};'
        )

    text = TAIL_CALL_RE.sub(tail_repl, text)

    # Standard generated indirect/local return path.  The shared unit-specific
    # dispatcher below recognizes a fused-call continuation and performs exactly
    # one logical chain unwind before resuming the caller.
    def local_dispatch_repl(m: re.Match[str]) -> str:
        indent = m.group('indent')
        return (f'{indent}local_pc = {m.group("local_expr")};\n'
                f'{indent}goto TIER2_LOCAL_DISPATCH_U{source_unit:04d};')
    text = LOCAL_DISPATCH_SEQUENCE_RE.sub(local_dispatch_repl, text)
    text = text.replace('goto LOCAL_DISPATCH;', f'goto TIER2_LOCAL_DISPATCH_U{source_unit:04d};')

    # Any ordinary local branch that leaves this cluster resumes the exact
    # original generated entry without creating a new logical chain frame.
    def goto_repl(m: re.Match[str]) -> str:
        target = int(m.group(1), 16)
        if target in selected_all:
            return m.group(0)
        entry = sources[source_unit].entries.get(target)
        stats['cold_exits'] += 1
        if entry is not None:
            return (f'++tier2_stats.cold_exits; tier2_scope.finish(); '
                    f'psprecomp::recomp_unit_{source_unit:04d}_entry(rt, ctx, {entry}u, aot_mem); '
                    f'TIER2_SB_RETURN();')
        return (f'++tier2_stats.cold_exits; ctx.pc = 0x{target:08X}u; TIER2_SB_RETURN();')
    text = GOTO_RE.sub(goto_repl, text)

    # External calls / unsupported exits remain the SAFE AOT implementation and
    # simply unwind any pending fused tail frames before returning.
    text = re.sub(r'(?<!TIER2_SB_)\breturn;', 'TIER2_SB_RETURN();', text)
    return text


def emit_cluster(cluster: Cluster, selected: Mapping[int, Set[int]],
                 sources: Mapping[int, UnitSource], host: pathlib.Path) -> Tuple[pathlib.Path, Dict[str, int]]:
    owner = selected_pc_owner(selected)
    selected_all = set(owner)
    stats: Dict[str, int] = collections.Counter()
    continuations: Dict[Tuple[int, int], int] = {}
    chunks: List[str] = []

    for unit in sorted(selected):
        src = sources[unit]
        for pc in src.ordered_pcs:
            if pc not in selected[unit]:
                continue
            chunks.append(transform_block(src.blocks[pc], unit, selected, sources, stats, continuations))

    # Entry hooks are intentionally narrower than the selected closure: only
    # measured roots pay the extra branch into Tier-2.
    entry_cases: List[str] = []
    for unit, pcs in cluster.hooks.items():
        for pc in pcs:
            if pc not in selected.get(unit, set()):
                raise RuntimeError(f'{cluster.key}: hook 0x{pc:08X} is outside selected closure')
            entry_cases.append(f'    case 0x{pc:08X}u: goto SB_L_{pc:08X};')

    # Unit-specific local dispatch tables. These handle guest JR $ra and any
    # computed local jump that was previously routed through LOCAL_DISPATCH.
    unit_dispatch: List[str] = []
    for unit in sorted(selected):
        local_cases = '\n'.join(
            f'    case 0x{pc:08X}u: goto SB_L_{pc:08X};'
            for pc in sorted(selected[unit]))
        unit_dispatch.append(f'''TIER2_LOCAL_DISPATCH_U{unit:04d}:
    if (tier2_return_depth != 0u && local_pc == tier2_return_pc[tier2_return_depth - 1u]) {{
        tier2_resume_pc = local_pc;
        tier2_resume_unit = tier2_return_unit[tier2_return_depth - 1u];
        // Match invoke_chained_direct(): when the callee has returned, ctx.pc
        // already contains the caller continuation before any starvation
        // boundary/accounting can run.  A scheduler switch here must never see
        // the stale callee PC.
        ctx.pc = local_pc;
        const std::uint32_t tier2_pending_base =
            tier2_return_pending_base[tier2_return_depth - 1u];
        bool tier2_same_context = true;
        if (tier2_pending_transfers < tier2_pending_base) {{
            ++tier2_stats.fallbacks;
            ctx.pc = local_pc;
            TIER2_SB_RETURN();
        }}
        const std::uint32_t tier2_nested_tail =
            tier2_pending_transfers - tier2_pending_base;
        if (tier2_nested_tail != 0u) {{
            tier2_pending_transfers = tier2_pending_base;
            if (!rt.tier2_complete_fused_transfers(ctx, tier2_nested_tail))
                tier2_same_context = false;
        }}
        --tier2_return_depth;
        if (!rt.tier2_complete_fused_transfers(ctx, 1u))
            tier2_same_context = false;
        if (!tier2_same_context) TIER2_SB_RETURN();
        goto TIER2_FUSED_RETURN_DISPATCH;
    }}
    switch (local_pc) {{
{local_cases}
    default:
        ctx.pc = local_pc;
        TIER2_SB_RETURN();
    }}
''')

    global_resume_cases = '\n'.join(
        f'    case 0x{pc:08X}u: goto SB_L_{pc:08X};' for pc in sorted(selected_all))

    cold_resume_by_unit: Dict[int, List[Tuple[int, int]]] = collections.defaultdict(list)
    for (caller_unit, cont), entry in sorted(continuations.items()):
        if cont in selected_all:
            continue
        if entry >= 0:
            cold_resume_by_unit[caller_unit].append((cont, entry))
    cold_resume_sections: List[str] = []
    for unit, entries in sorted(cold_resume_by_unit.items()):
        cases = '\n'.join(
            f'        case 0x{pc:08X}u: ++tier2_stats.cold_exits; tier2_scope.finish(); '
            f'psprecomp::recomp_unit_{unit:04d}_entry(rt, ctx, {entry}u, aot_mem); TIER2_SB_RETURN();'
            for pc, entry in entries)
        cold_resume_sections.append(f'''    case {unit}u:
        switch (tier2_resume_pc) {{
{cases}
        default: break;
        }}
        break;''')

    cpp = f'''// AUTO-GENERATED by profiles/vcs/tools/build_tier2_superblocks.py.
// Tier-2 SUPERBLOCK V2 cluster: {cluster.key}
#include "vcs_tier2_superblocks.hpp"
#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"

#include <cstdint>

namespace vcs {{
using namespace psprecomp;

void {cluster.function}(psprecomp::Runtime &rt,
                        psprecomp::AllegrexContext &ctx,
                        psprecomp::GuestMemory::AotFastView &aot_mem,
                        std::uint32_t entry_pc) {{
    tier2_detail::SampleScope tier2_scope(Tier2ClusterId::{cluster.enum_name});
    auto &tier2_stats = tier2_scope.stats();
    constexpr std::uint32_t kTier2ReturnCapacity = 32u;
    std::uint32_t tier2_pending_transfers = 0u;
    std::uint32_t tier2_return_depth = 0u;
    std::uint32_t tier2_return_pc[kTier2ReturnCapacity]{{}};
    std::uint32_t tier2_return_unit[kTier2ReturnCapacity]{{}};
    std::uint32_t tier2_return_pending_base[kTier2ReturnCapacity]{{}};
    std::uint32_t tier2_resume_pc = 0u;
    std::uint32_t tier2_resume_unit = 0u;
    std::uint32_t jump_target = 0u;
    std::uint32_t local_pc = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t entry_id = 0u;

#define TIER2_SB_RETURN() do {{ \
        tier2_scope.finish(); \
        /* Unwind every logical invoke_chained_direct frame in true LIFO \
           order. Tail frames created inside a fused JAL unwind before that \
           JAL; outer JAL frames are also released after context invalidation. */ \
        while (tier2_return_depth != 0u) {{ \
            std::uint32_t tier2_base_ = tier2_return_pending_base[tier2_return_depth - 1u]; \
            if (tier2_base_ > tier2_pending_transfers) {{ \
                ++tier2_stats.fallbacks; \
                tier2_base_ = tier2_pending_transfers; \
            }} \
            const std::uint32_t tier2_tail_count_ = tier2_pending_transfers - tier2_base_; \
            tier2_pending_transfers = tier2_base_; \
            if (tier2_tail_count_ != 0u) \
                (void)rt.tier2_complete_fused_transfers(ctx, tier2_tail_count_); \
            --tier2_return_depth; \
            (void)rt.tier2_complete_fused_transfers(ctx, 1u); \
        }} \
        if (tier2_pending_transfers != 0u) {{ \
            (void)rt.tier2_complete_fused_transfers(ctx, tier2_pending_transfers); \
            tier2_pending_transfers = 0u; \
        }} \
        return; \
    }} while (false)

    goto TIER2_ENTRY_DISPATCH;

TIER2_FUSED_RETURN_DISPATCH:
    switch (tier2_resume_pc) {{
{global_resume_cases}
    default: break;
    }}
    switch (tier2_resume_unit) {{
{chr(10).join(cold_resume_sections)}
    default: break;
    }}
    ctx.pc = tier2_resume_pc;
    TIER2_SB_RETURN();

{chr(10).join(unit_dispatch)}

TIER2_ENTRY_DISPATCH:
    switch (entry_pc) {{
{chr(10).join(entry_cases)}
    default:
        ctx.pc = entry_pc;
        ++tier2_stats.fallbacks;
        TIER2_SB_RETURN();
    }}

{chr(10).join(chunks)}

#undef TIER2_SB_RETURN
}}

}} // namespace vcs
'''
    path = host / f'vcs_tier2_cluster_{cluster.key}.cpp'
    old = path.read_text(encoding='utf-8') if path.exists() else None
    if old != cpp:
        path.write_text(cpp, encoding='utf-8', newline='\n')
        stats['host_changed'] = 1
    else:
        stats['host_changed'] = 0
    stats['blocks'] = sum(len(v) for v in selected.values())
    stats['lines'] = len(cpp.splitlines())
    stats['units'] = len(selected)
    stats['hooks'] = sum(len(v) for v in cluster.hooks.values())
    return path, stats


def patch_hooks(raw: str, unit: int, hook_specs: Sequence[Tuple[Cluster, int]]) -> str:
    text = strip_hooks(raw)
    if HEADER_INCLUDE not in text:
        text = text.replace('#include "generated_units.hpp"\n',
                            '#include "generated_units.hpp"\n' + HEADER_INCLUDE, 1)
    # Multiple clusters may hook the same unit but never the same PC in V2.
    for cluster, pc in hook_specs:
        label = f'L_{pc:08X}:\n'
        if label not in text:
            raise RuntimeError(f'unit {unit:04d}: hook label 0x{pc:08X} missing')
        hook = (
            label + HOOK_BEGIN +
            f'    if (vcs::tier2_cluster_enabled(vcs::Tier2ClusterId::{cluster.enum_name})) {{\n'
            f'        vcs::{cluster.function}(rt, ctx, aot_mem, 0x{pc:08X}u);\n'
            f'        return;\n'
            f'    }}\n' + HOOK_END
        )
        text = text.replace(label, hook, 1)
    return text


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument('profile', nargs='?', type=pathlib.Path,
                    default=pathlib.Path(__file__).resolve().parents[1])
    args = ap.parse_args()
    requested = args.profile
    # Convenience: from the repository root, both `vcs` and `profiles/vcs`
    # resolve to the VCS profile. The build BAT still passes an absolute path.
    if requested == pathlib.Path('vcs'):
        profile = pathlib.Path(__file__).resolve().parents[3] / 'profiles' / 'vcs'
    else:
        profile = requested.resolve()
    generated = profile / 'generated'
    host = profile / 'host'

    all_units = sorted({u for c in CLUSTERS for u in (set(c.seeds) | set(c.windows) | set(c.hooks))})
    sources = {u: parse_unit(generated / f'generated_unit_{u:04d}.cpp', u) for u in all_units}

    total = collections.Counter()
    selected_by_cluster: Dict[str, Dict[int, Set[int]]] = {}
    generated_paths: List[pathlib.Path] = []
    for cluster in CLUSTERS:
        selected = selected_for_cluster(cluster, sources)
        selected_by_cluster[cluster.key] = selected
        path, stats = emit_cluster(cluster, selected, sources, host)
        generated_paths.append(path)
        print(f'Tier2 V2 cluster {cluster.key}: ' + ' '.join(f'{k}={v}' for k, v in sorted(stats.items())))
        total.update(stats)

    hooks_by_unit: Dict[int, List[Tuple[Cluster, int]]] = collections.defaultdict(list)
    for cluster in CLUSTERS:
        for unit, pcs in cluster.hooks.items():
            for pc in pcs:
                hooks_by_unit[unit].append((cluster, pc))

    hook_units_changed = 0
    for unit, specs in sorted(hooks_by_unit.items()):
        path = generated / f'generated_unit_{unit:04d}.cpp'
        patched = patch_hooks(sources[unit].raw, unit, specs)
        if path.read_text(encoding='utf-8') != patched:
            path.write_text(patched, encoding='utf-8', newline='\n')
            hook_units_changed += 1

    # Remove the V1 generated body so CMake can no longer accidentally compile
    # both generations. The common runtime/toggle implementation keeps this name.
    legacy = host / 'vcs_tier2_superblocks.cpp'
    # common file is handwritten by V2 and must remain; generated cluster files
    # carry all hot code.

    print('Tier2 SUPERBLOCK V2 COMPLETE:',
          f'clusters={len(CLUSTERS)} hook_units_changed={hook_units_changed}',
          f'blocks={total["blocks"]} lines={total["lines"]}',
          f'fused_calls={total["fused_calls"]} fused_tail={total["fused_tail"]}',
          f'cold_exits={total["cold_exits"]}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
