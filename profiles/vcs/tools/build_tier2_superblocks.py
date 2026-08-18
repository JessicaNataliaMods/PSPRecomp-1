#!/usr/bin/env python3
"""Generate VCS Tier-2 V6 entity-leaf-inline multi-cluster second-layer AOT.

V4 is profile-guided and intentionally keeps the original generated corpus as
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


# Tiny leaf accessors used repeatedly by the 0155 entity-link maintenance loop.
# V6 emits their exact architectural bodies directly into 0155, eliminating
# C++ return-stack/chain-depth plumbing while keeping scheduler accounting at
# the original guest call cadence.  If the runtime chain is already at its
# depth limit we retain the ordinary fused-call path below.
ENTITY_INLINE_LEAF_BODIES = {
    0x08A65EA0: (152, [
        'ctx.gpr[4] = aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72));',
        'ctx.gpr[4] = (ctx.gpr[4] & 14u);',
        'ctx.gpr[2] = (ctx.gpr[4] ^ 6u);',
        'ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);',
    ]),
    0x08A65EB4: (152, [
        'ctx.gpr[4] = aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72));',
        'ctx.gpr[4] = (ctx.gpr[4] & 14u);',
        'ctx.gpr[2] = (ctx.gpr[4] ^ 8u);',
        'ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);',
    ]),
    0x08A68CBC: (153, [
        'ctx.gpr[2] = aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(444));',
    ]),
    0x08A68CC4: (153, [
        'aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);',
    ]),
    0x08A68CCC: (153, [
        'ctx.gpr[2] = aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(448));',
    ]),
    0x08A68CD4: (153, [
        'ctx.gpr[2] = aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2116));',
    ]),
    0x08A68CDC: (153, [
        'aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2116), ctx.gpr[5]);',
    ]),
}


# Tiny geometry leaves observed in the 0084/0085 hot closure. Unlike the large
# geometry helpers, these bodies contain no nested call/HLE edge and are cheaper
# to execute in the caller than to push/pop the Tier-2 logical return stack.
GEOMETRY_INLINE_LEAF_BODIES = {}


# Cross-unit generated functions that are statically proven leaves: their local
# closure contains no generated/HLE/syscall call and every dynamic return goes
# through $ra. Tier-2 may call these entry points directly and account the removed
# generated-call scheduler edge without paying invoke_chained_direct's profiling,
# chain-depth and fallback plumbing. Large/indirect helpers are deliberately absent.
# V8.2 keeps Geometry/World at the V8.1 shape and only bypasses the generic
# chain wrapper for four tiny Boundary helpers in unit 0206.  All four are
# statically validated leaves (no nested generated/HLE/syscall edge, $ra-only
# return).  This is intentionally a five-call-site change, not another CFG
# expansion: it preserves the V8.1 instruction-cache footprint and scheduler
# cadence while removing wrapper work around trivial generated helpers.
DIRECT_GENERATED_LEAF_TARGETS = {
    (206, 0x08B3E084),
    (206, 0x08B3E08C),
    (206, 0x08B3E254),
    (206, 0x08B3E260),
}



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



# Tier-2 V4 dataflow/memory lowering inherited from V3.  V2 proved that eliminating dispatch
# alone is not enough: the hot clusters still spend most of their time in the
# translated body.  These transforms deliberately target memory-access runs
# where semantics can be preserved without keeping guest registers dirty
# across control-flow boundaries.
QUAD_VFPU_LOAD_RE = re.compile(
    r'float vfpu_value\[4\]\{\s*'
    r'std::bit_cast<float>\(aot_mem\.aot_load32\(vfpu_address \+ 0u\)\),\s*'
    r'std::bit_cast<float>\(aot_mem\.aot_load32\(vfpu_address \+ 4u\)\),\s*'
    r'std::bit_cast<float>\(aot_mem\.aot_load32\(vfpu_address \+ 8u\)\),\s*'
    r'std::bit_cast<float>\(aot_mem\.aot_load32\(vfpu_address \+ 12u\)\)\};',
    re.S)

QUAD_VFPU_STORE_RE = re.compile(
    r'aot_mem\.aot_store32\(vfpu_address \+ 0u, (?P<v0>[^;]+)\);\s*'
    r'aot_mem\.aot_store32\(vfpu_address \+ 4u, (?P<v1>[^;]+)\);\s*'
    r'aot_mem\.aot_store32\(vfpu_address \+ 8u, (?P<v2>[^;]+)\);\s*'
    r'aot_mem\.aot_store32\(vfpu_address \+ 12u, (?P<v3>[^;]+)\);')

_SIMPLE_GPR_LOAD_RE = re.compile(
    r'^(?P<indent>\s*)ctx\.gpr\[(?P<dst>\d+)\] = \(aot_mem\.aot_load32\('
    r'ctx\.gpr\[(?P<base>\d+)\] \+ static_cast<std::uint32_t>\((?P<offset>-?\d+)\)\)\);$')
_SIMPLE_FPR_LOAD_RE = re.compile(
    r'^(?P<indent>\s*)ctx\.fpr\[(?P<dst>\d+)\] = std::bit_cast<float>\(aot_mem\.aot_load32\('
    r'ctx\.gpr\[(?P<base>\d+)\] \+ static_cast<std::uint32_t>\((?P<offset>-?\d+)\)\)\);$')


def _match_simple_load(line: str):
    m = _SIMPLE_GPR_LOAD_RE.match(line)
    if m is not None:
        return m, 'gpr'
    m = _SIMPLE_FPR_LOAD_RE.match(line)
    if m is not None:
        return m, 'fpr'
    return None, None


APPEND32_RE = re.compile(
    r'(?P<indent>\s*)ctx\.gpr\[(?P<old>\d+)\] = \(aot_mem\.aot_load32\('
    r'ctx\.gpr\[(?P<base>\d+)\] \+ static_cast<std::uint32_t>\((?P<off>-?\d+)\)\)\);\n'
    r'(?P=indent)aot_mem\.aot_store32\(ctx\.gpr\[(?P=old)\] \+ static_cast<std::uint32_t>\(0\), '
    r'(?P<value>ctx\.gpr\[(?P<value_reg>\d+)\])\);\n'
    r'(?P=indent)ctx\.gpr\[(?P<new>\d+)\] = \(aot_mem\.aot_load32\('
    r'ctx\.gpr\[(?P=base)\] \+ static_cast<std::uint32_t>\((?P=off)\)\)\);\n'
    r'(?P=indent)ctx\.gpr\[(?P=new)\] = \(ctx\.gpr\[(?P=new)\] \+ static_cast<std::uint32_t>\(4\)\);\n'
    r'(?P=indent)aot_mem\.aot_store32\(ctx\.gpr\[(?P=base)\] \+ static_cast<std::uint32_t>\((?P=off)\), '
    r'ctx\.gpr\[(?P=new)\]\);')

ADVANCE32_RE = re.compile(
    r'(?P<indent>\s*)ctx\.gpr\[(?P<reg>\d+)\] = \(aot_mem\.aot_load32\('
    r'ctx\.gpr\[(?P<base>\d+)\] \+ static_cast<std::uint32_t>\((?P<off>-?\d+)\)\)\);\n'
    r'(?P=indent)ctx\.gpr\[(?P=reg)\] = \(ctx\.gpr\[(?P=reg)\] \+ static_cast<std::uint32_t>\(4\)\);\n'
    r'(?P=indent)aot_mem\.aot_store32\(ctx\.gpr\[(?P=base)\] \+ static_cast<std::uint32_t>\((?P=off)\), '
    r'ctx\.gpr\[(?P=reg)\]\);')

_SIMPLE_STORE_RE = re.compile(
    r'^(?P<indent>\s*)aot_mem\.aot_store32\('
    r'ctx\.gpr\[(?P<base>\d+)\] \+ static_cast<std::uint32_t>\((?P<offset>-?\d+)\), '
    r'(?P<value>.+)\);$')

_SAFE_STORE_VALUE_RE = re.compile(
    r'^(?:ctx\.gpr\[\d+\]|std::bit_cast<std::uint32_t>\(ctx\.fpr\[\d+\]\)|'
    r'static_cast<std::uint32_t>\([^;]+\)|0x[0-9A-Fa-f]+u|\d+u?)$')


def _batch_simple_load_runs(text: str) -> tuple[str, int, int]:
    lines = text.splitlines()
    out: List[str] = []
    runs = 0
    words = 0
    i = 0
    while i < len(lines):
        first, first_kind = _match_simple_load(lines[i])
        if first is None:
            out.append(lines[i]); i += 1; continue
        base = int(first.group('base'))
        indent = first.group('indent')
        group = [(first, first_kind)]
        j = i + 1
        expected = int(first.group('offset')) + 4
        while j < len(lines):
            m, kind = _match_simple_load(lines[j])
            if m is None or int(m.group('base')) != base or m.group('indent') != indent or int(m.group('offset')) != expected:
                break
            # Do not batch a run that overwrites the address base before all
            # loads have executed.  That would change later effective addresses.
            if kind == 'gpr' and int(m.group('dst')) == base:
                break
            group.append((m, kind))
            expected += 4
            j += 1
        if len(group) < 3 or (first_kind == 'gpr' and int(first.group('dst')) == base):
            out.append(lines[i]); i += 1; continue

        n = len(group)
        start = int(group[0][0].group('offset'))
        out.append(f'{indent}{{ std::uint32_t tier2_words[{n}]{{}};')
        out.append(f'{indent}  if (aot_mem.aot_try_load32_block(ctx.gpr[{base}] + static_cast<std::uint32_t>({start}), tier2_words)) {{')
        for k, (m, kind) in enumerate(group):
            if kind == 'gpr':
                out.append(f'{indent}    ctx.gpr[{m.group("dst")}] = tier2_words[{k}];')
            else:
                out.append(f'{indent}    ctx.fpr[{m.group("dst")}] = std::bit_cast<float>(tier2_words[{k}]);')
        out.append(f'{indent}  }} else {{')
        # Preserve exact slow/fault path ordering and partial architectural state.
        out.extend(f'{indent}    {lines[i+k].lstrip()}' for k in range(n))
        out.append(f'{indent}  }} }}')
        runs += 1; words += n
        i = j
    return '\n'.join(out) + ('\n' if text.endswith('\n') else ''), runs, words


def _batch_simple_store_runs(text: str) -> tuple[str, int, int]:
    lines = text.splitlines()
    out: List[str] = []
    runs = 0
    words = 0
    i = 0
    while i < len(lines):
        first = _SIMPLE_STORE_RE.match(lines[i])
        if first is None or _SAFE_STORE_VALUE_RE.match(first.group('value').strip()) is None:
            out.append(lines[i]); i += 1; continue
        base = int(first.group('base'))
        indent = first.group('indent')
        group = [first]
        j = i + 1
        expected = int(first.group('offset')) + 4
        while j < len(lines):
            m = _SIMPLE_STORE_RE.match(lines[j])
            if (m is None or int(m.group('base')) != base or m.group('indent') != indent or
                    int(m.group('offset')) != expected or
                    _SAFE_STORE_VALUE_RE.match(m.group('value').strip()) is None):
                break
            group.append(m); expected += 4; j += 1
        if len(group) < 3:
            out.append(lines[i]); i += 1; continue
        n = len(group)
        start = int(group[0].group('offset'))
        values = ', '.join(m.group('value').strip() for m in group)
        out.append(f'{indent}{{ const std::uint32_t tier2_words[{n}]{{{values}}};')
        out.append(f'{indent}  aot_mem.aot_store32_block(ctx.gpr[{base}] + static_cast<std::uint32_t>({start}), tier2_words); }}')
        runs += 1; words += n
        i = j
    return '\n'.join(out) + ('\n' if text.endswith('\n') else ''), runs, words



MAT4_MUL_RE = re.compile(
    r'for \(std::uint32_t a = 0; a < 4u; \+\+a\) \{\s*'
    r'for \(std::uint32_t b = 0; b < 4u; \+\+b\) \{\s*'
    r'float sum = 0\.0f;\s*'
    r'for \(std::uint32_t c = 0; c < 4u; \+\+c\) sum \+= vfpu_s\[b \* 4u \+ c\] \* vfpu_t\[a \* 4u \+ c\];\s*'
    r'vfpu_d\[a \* 4u \+ b\] = sum;\s*'
    r'\}\s*\}')

MAT4_VEC_FIRST3_RE = re.compile(
    r'for \(std::uint32_t row = 0; row \+ 1u < vfpu_side; \+\+row\) \{\s*'
    r'float sum = 0\.0f;\s*'
    r'for \(std::uint32_t column = 0; column < vfpu_side; \+\+column\) sum \+= vfpu_matrix\[row \* 4u \+ column\] \* vfpu_target\[column\];\s*'
    r'vfpu_result\[row\] = sum;\s*'
    r'\}')


def optimize_tier2_simd(text: str) -> tuple[str, Dict[str, int]]:
    stats = {'mat4_mul': 0, 'mat4_vec_first3': 0}
    def repl_mul(_: re.Match[str]) -> str:
        stats['mat4_mul'] += 1
        return 'psprecomp::vcs_tier2_mat4_mul_ordered(vfpu_s, vfpu_t, vfpu_d);'
    text = MAT4_MUL_RE.sub(repl_mul, text)
    def repl_vec(_: re.Match[str]) -> str:
        stats['mat4_vec_first3'] += 1
        return ('if constexpr (vfpu_side == 4u) {\n'
                '        psprecomp::vcs_tier2_mat4_vec_first3_ordered(vfpu_matrix, vfpu_target, vfpu_result);\n'
                '      } else {\n'
                '        for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {\n'
                '          float sum = 0.0f;\n'
                '          for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];\n'
                '          vfpu_result[row] = sum;\n'
                '        }\n'
                '      }')
    text = MAT4_VEC_FIRST3_RE.sub(repl_vec, text)
    return text, stats

_GPR_BODY_BEGIN = '// TIER2_GPR_BODY_BEGIN\n'
_GPR_BODY_END = '// TIER2_GPR_BODY_END\n'
_GPR_DECL_PLACEHOLDER = '    // TIER2_GPR_SHADOW_DECLS\n'
_GPR_DIRECT_BOOL_RE = re.compile(r'rt\.invoke_chained_direct<[^;\n]+?>\(ctx, &aot_mem\)')
_GPR_DYNAMIC_BOOL_RE = re.compile(r'rt\.invoke_chained_call\(ctx, &aot_mem\)')


def optimize_tier2_gpr_shadow(text: str, cluster_key: str) -> tuple[str, Dict[str, object]]:
    """Promote six hot GPRs with explicit synchronization at visibility boundaries."""
    begin = text.find(_GPR_BODY_BEGIN)
    end = text.find(_GPR_BODY_END)
    if begin < 0 or end < 0 or end <= begin:
        raise RuntimeError(f'{cluster_key}: GPR body markers missing')
    body_start = begin + len(_GPR_BODY_BEGIN)
    body = text[body_start:end]
    eligible = cluster_key not in {'physics', 'matrix', 'geometry'}
    counts = collections.Counter(int(x) for x in re.findall(r'ctx\.gpr\[(\d+)\]', body))
    if cluster_key == 'entity':
        # Preserve the exact V4-stable entity shadow ownership set. V6 leaf
        # inlining makes gpr[2] syntactically hotter, but replacing stack pointer
        # gpr[29] with it would pessimize the much larger 0154 stack-local body.
        selected = [4, 6, 19, 17, 5, 29]
    elif cluster_key == 'world':
        # The V8 closure pulls measured external helpers into World. Keep the
        # already gameplay-stable World ownership set instead of allowing those
        # extra helper bodies to reshuffle which architectural registers live in
        # host locals across the giant CFG.
        selected = [4, 5, 16, 29, 6, 31]
    else:
        selected = [reg for reg, _ in counts.most_common() if reg != 0][:6] if eligible else []

    if selected:
        decls = ''.join(f'    std::uint32_t tier2_gpr_{r} = ctx.gpr[{r}];\n' for r in selected)
        out_body = ' '.join(f'ctx.gpr[{r}] = tier2_gpr_{r};' for r in selected)
        in_body = ' '.join(f'tier2_gpr_{r} = ctx.gpr[{r}];' for r in selected)
        macros = (decls +
            '    bool tier2_gpr_shadow_valid = true;\n' +
            f'#define TIER2_GPR_SYNC_OUT() do {{ if (tier2_gpr_shadow_valid) {{ {out_body} }} }} while (false)\n' +
            f'#define TIER2_GPR_SYNC_IN() do {{ if (tier2_gpr_shadow_valid) {{ {in_body} }} }} while (false)\n' +
            '#define TIER2_GPR_BEFORE_COLD() do { TIER2_GPR_SYNC_OUT(); tier2_gpr_shadow_valid = false; } while (false)\n')
    else:
        macros = ('    bool tier2_gpr_shadow_valid = true;\n'
            '#define TIER2_GPR_SYNC_OUT() do {} while (false)\n'
            '#define TIER2_GPR_SYNC_IN() do {} while (false)\n'
            '#define TIER2_GPR_BEFORE_COLD() do { tier2_gpr_shadow_valid = false; } while (false)\n')
    if _GPR_DECL_PLACEHOLDER not in text:
        raise RuntimeError(f'{cluster_key}: GPR declaration placeholder missing')

    if selected:
        def wrap_bool(m: re.Match[str]) -> str:
            expr = m.group(0)
            return ('([&]() { TIER2_GPR_SYNC_OUT(); const bool tier2_same_ = (' + expr + '); '
                    'if (tier2_same_) TIER2_GPR_SYNC_IN(); else tier2_gpr_shadow_valid = false; '
                    'return tier2_same_; }())')
        body = _GPR_DIRECT_BOOL_RE.sub(wrap_bool, body)
        body = _GPR_DYNAMIC_BOOL_RE.sub(wrap_bool, body)
        for r in selected:
            body = body.replace(f'ctx.gpr[{r}]', f'tier2_gpr_{r}')
        text = text[:body_start] + body + text[end:]

    # Insert declarations only after body splicing; doing this earlier shifts
    # the saved marker offsets and corrupts the generated CFG.
    text = text.replace(_GPR_DECL_PLACEHOLDER, macros, 1)

    return text, {
        'enabled': int(bool(selected)),
        'registers': selected,
        'occurrences': sum(counts[r] for r in selected),
    }


def optimize_tier2_dataflow(text: str) -> tuple[str, Dict[str, int]]:
    stats: Dict[str, int] = {
        'vfpu_quad_loads': 0, 'vfpu_quad_stores': 0, 'append32': 0, 'advance32': 0,
        'load_runs': 0, 'load_words': 0, 'store_runs': 0, 'store_words': 0,
    }

    def quad_load_repl(_: re.Match[str]) -> str:
        stats['vfpu_quad_loads'] += 1
        return ('std::uint32_t tier2_vfpu_words[4]{}; '
                'aot_mem.aot_load32_block(vfpu_address, tier2_vfpu_words);\n'
                '      float vfpu_value[4]{\n'
                '        std::bit_cast<float>(tier2_vfpu_words[0]),\n'
                '        std::bit_cast<float>(tier2_vfpu_words[1]),\n'
                '        std::bit_cast<float>(tier2_vfpu_words[2]),\n'
                '        std::bit_cast<float>(tier2_vfpu_words[3])};')
    text = QUAD_VFPU_LOAD_RE.sub(quad_load_repl, text)

    def quad_store_repl(m: re.Match[str]) -> str:
        stats['vfpu_quad_stores'] += 1
        vals = ', '.join(m.group(f'v{i}').strip() for i in range(4))
        return (f'const std::uint32_t tier2_vfpu_words[4]{{{vals}}};\n'
                '      aot_mem.aot_store32_block(vfpu_address, tier2_vfpu_words);')
    text = QUAD_VFPU_STORE_RE.sub(quad_store_repl, text)

    def append32_repl(m: re.Match[str]) -> str:
        # The value is constrained to a plain GPR read. The cursor load itself
        # has no side effects, so moving that read into aot_append32 cannot
        # reorder any architectural mutation. Preserve both destination GPRs.
        if m.group('old') == m.group('new') or m.group('old') == m.group('value_reg'):
            return m.group(0)
        stats['append32'] += 1
        indent = m.group('indent')
        cursor = (f'ctx.gpr[{m.group("base")}] + '
                  f'static_cast<std::uint32_t>({m.group("off")})')
        return (f'{indent}{{ std::uint32_t tier2_old_pointer = 0u;\n'
                f'{indent}  ctx.gpr[{m.group("new")}] = aot_mem.aot_append32('
                f'{cursor}, {m.group("value")}, &tier2_old_pointer);\n'
                f'{indent}  ctx.gpr[{m.group("old")}] = tier2_old_pointer; }}')
    text = APPEND32_RE.sub(append32_repl, text)

    def advance32_repl(m: re.Match[str]) -> str:
        stats['advance32'] += 1
        indent = m.group('indent')
        cursor = (f'ctx.gpr[{m.group("base")}] + '
                  f'static_cast<std::uint32_t>({m.group("off")})')
        return f'{indent}ctx.gpr[{m.group("reg")}] = aot_mem.aot_advance32({cursor});'
    text = ADVANCE32_RE.sub(advance32_repl, text)

    text, stats['load_runs'], stats['load_words'] = _batch_simple_load_runs(text)
    text, stats['store_runs'], stats['store_words'] = _batch_simple_store_runs(text)
    return text, stats

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


def validate_direct_generated_leaf(source: UnitSource, seed_pc: int) -> None:
    closure = local_closure(source, [seed_pc], 128)
    for pc in closure:
        block = source.blocks[pc]
        if ('invoke_chained_direct' in block or 'invoke_chained_call' in block or
                'invoke_hle' in block or 'invoke_syscall' in block):
            raise RuntimeError(
                f'unit {source.unit:04d} leaf 0x{seed_pc:08X}: nested call at 0x{pc:08X}')
        for value in re.findall(r'jump_target = ([^;]+);', block):
            if value.strip() != 'ctx.gpr[31]':
                raise RuntimeError(
                    f'unit {source.unit:04d} leaf 0x{seed_pc:08X}: non-$ra jump {value!r}')
        for value in re.findall(r'ctx\.pc = ([^;]+);', block):
            if value.strip() not in {'jump_target', 'local_pc'}:
                raise RuntimeError(
                    f'unit {source.unit:04d} leaf 0x{seed_pc:08X}: explicit PC {value!r}')
    if seed_pc not in source.entries:
        raise RuntimeError(f'unit {source.unit:04d}: direct leaf entry 0x{seed_pc:08X} missing')


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
        direct_leaf = (target_unit, target_pc) in DIRECT_GENERATED_LEAF_TARGETS
        if target_pc not in selected_all or pc_owner.get(target_pc) != target_unit:
            if not direct_leaf:
                return m.group(0)
            entry = sources[target_unit].entries[target_pc]
            stats['direct_generated_leaf_sites'] += 1
            # The generated leaf has no nested scheduler/HLE edge by static audit.
            # Call its exact direct entry, then preserve the scheduler cadence the
            # removed invoke_chained_direct frame would have contributed.  GPR
            # shadows are published around the external AOT function.
            return (
                f'{indent}TIER2_GPR_SYNC_OUT();\n'
                f'{indent}psprecomp::recomp_unit_{target_unit:04d}_entry(rt, ctx, {entry}u, aot_mem);\n'
                f'{indent}TIER2_GPR_SYNC_IN();\n'
                f'{indent}if (!rt.account_inlined_generated_leaf(ctx)) {{\n'
                f'{indent}    tier2_gpr_shadow_valid = false;\n'
                f'{indent}    TIER2_SB_RETURN();\n'
                f'{indent}}}\n'
                f'{indent}if (ctx.pc == 0x{cont:08X}u) goto SB_L_{cont:08X};\n'
                f'{indent}tier2_gpr_shadow_valid = false;\n'
                f'{indent}TIER2_SB_RETURN();')
        if source_unit == 155 and target_pc in ENTITY_INLINE_LEAF_BODIES:
            leaf_unit, leaf_body = ENTITY_INLINE_LEAF_BODIES[target_pc]
            if leaf_unit != target_unit:
                raise RuntimeError(f'entity inline leaf unit mismatch for 0x{target_pc:08X}')
            stats['inlined_leaf_sites'] += 1
            body = '\n'.join(f'{indent}{line}' for line in leaf_body)
            # The caller has already materialized $ra and arguments exactly as
            # the original JAL would. Execute the tiny leaf body in place, then
            # preserve the removed call's scheduler cadence. Entity GPR shadow
            # publication costs the same sync-out the old fused-return path paid,
            # but all chain-depth, return-stack and local-dispatch plumbing is gone.
            return (
                f'{body}\n'
                f'{indent}// Publish the exact JAL return PC before scheduler accounting.\n'
                f'{indent}// A starvation boundary may switch PSP ownership here; the\n'
                f'{indent}// resumed context must never observe the stale superblock PC.\n'
                f'{indent}ctx.pc = 0x{cont:08X}u;\n'
                f'{indent}TIER2_GPR_SYNC_OUT();\n'
                f'{indent}if (!rt.account_inlined_generated_leaf(ctx)) {{\n'
                f'{indent}    tier2_gpr_shadow_valid = false;\n'
                f'{indent}    TIER2_SB_RETURN();\n'
                f'{indent}}}\n'
                f'{indent}goto SB_L_{cont:08X};')
        if target_pc in GEOMETRY_INLINE_LEAF_BODIES:
            leaf_unit, leaf_body = GEOMETRY_INLINE_LEAF_BODIES[target_pc]
            if leaf_unit != target_unit:
                raise RuntimeError(f'geometry inline leaf unit mismatch for 0x{target_pc:08X}')
            stats['geometry_inline_leaf_sites'] += 1
            body = '\n'.join(f'{indent}{line}' for line in leaf_body)
            prefix = body + ('\n' if body else '')
            return (
                f'{prefix}'
                f'{indent}ctx.pc = 0x{cont:08X}u;\n'
                f'{indent}TIER2_GPR_SYNC_OUT();\n'
                f'{indent}if (!rt.account_inlined_generated_leaf(ctx)) {{\n'
                f'{indent}    tier2_gpr_shadow_valid = false;\n'
                f'{indent}    TIER2_SB_RETURN();\n'
                f'{indent}}}\n'
                f'{indent}goto SB_L_{cont:08X};')
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
                    f'TIER2_GPR_BEFORE_COLD(); psprecomp::recomp_unit_{source_unit:04d}_entry(rt, ctx, {entry}u, aot_mem); '
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
            if (!tier2_complete_shadow(tier2_nested_tail))
                tier2_same_context = false;
        }}
        --tier2_return_depth;
        if (!tier2_complete_shadow(1u))
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
            f'TIER2_GPR_BEFORE_COLD(); psprecomp::recomp_unit_{unit:04d}_entry(rt, ctx, {entry}u, aot_mem); TIER2_SB_RETURN();'
            for pc, entry in entries)
        cold_resume_sections.append(f'''    case {unit}u:
        switch (tier2_resume_pc) {{
{cases}
        default: break;
        }}
        break;''')

    cpp = f'''// AUTO-GENERATED by profiles/vcs/tools/build_tier2_superblocks.py.
// Tier-2 SUPERBLOCK V4 150FPS cluster: {cluster.key}
#include "vcs_tier2_superblocks.hpp"
#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_fast_paths.hpp"
#include "vcs_tier2_direct_memory.hpp"

#include <cstdint>

namespace vcs {{
using namespace psprecomp;

void {cluster.function}(psprecomp::Runtime &rt,
                        psprecomp::AllegrexContext &ctx,
                        psprecomp::GuestMemory::AotFastView &aot_mem,
                        std::uint32_t entry_pc) {{
    tier2_detail::SampleScope tier2_scope(Tier2ClusterId::{cluster.enum_name});
    auto &tier2_stats = tier2_scope.stats();
    Tier2DirectMemoryView tier2_mem(rt.memory().direct_fastmem_base_address());
    constexpr std::uint32_t kTier2ReturnCapacity = 32u;
    std::uint32_t tier2_pending_transfers = 0u;
    std::uint32_t tier2_return_depth = 0u;
    std::uint32_t tier2_return_pc[kTier2ReturnCapacity];
    std::uint32_t tier2_return_unit[kTier2ReturnCapacity];
    std::uint32_t tier2_return_pending_base[kTier2ReturnCapacity];
    std::uint32_t tier2_resume_pc = 0u;
    std::uint32_t tier2_resume_unit = 0u;
    std::uint32_t jump_target = 0u;
    std::uint32_t local_pc = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t entry_id = 0u;
    // TIER2_GPR_SHADOW_DECLS

    auto tier2_complete_shadow = [&](std::uint32_t count) -> bool {{
        TIER2_GPR_SYNC_OUT();
        const bool same = rt.tier2_complete_fused_transfers(ctx, count);
        if (!same) tier2_gpr_shadow_valid = false;
        return same;
    }};

#define TIER2_SB_RETURN() do {{ \
        TIER2_GPR_SYNC_OUT(); \
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
                (void)tier2_complete_shadow(tier2_tail_count_); \
            --tier2_return_depth; \
            (void)tier2_complete_shadow(1u); \
        }} \
        if (tier2_pending_transfers != 0u) {{ \
            (void)tier2_complete_shadow(tier2_pending_transfers); \
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

// TIER2_GPR_BODY_BEGIN\n{chr(10).join(chunks)}// TIER2_GPR_BODY_END\n\n#undef TIER2_SB_RETURN
#undef TIER2_GPR_BEFORE_COLD
#undef TIER2_GPR_SYNC_IN
#undef TIER2_GPR_SYNC_OUT
}}

}} // namespace vcs
'''
    cpp, dataflow_stats = optimize_tier2_dataflow(cpp)
    stats.update({f'dataflow_{k}': v for k, v in dataflow_stats.items()})
    cpp, simd_stats = optimize_tier2_simd(cpp)
    stats.update({f'simd_{k}': v for k, v in simd_stats.items()})
    direct_memory_sites = cpp.count('aot_mem.aot_')
    cpp = cpp.replace('aot_mem.aot_', 'tier2_mem.aot_')
    stats['direct_memory_sites'] = direct_memory_sites
    cpp, gpr_stats = optimize_tier2_gpr_shadow(cpp, cluster.key)
    stats['gpr_shadow_occurrences'] = int(gpr_stats['occurrences'])
    stats['gpr_shadow_registers'] = len(gpr_stats['registers'])

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
            f'    if (vcs::tier2_cluster_enabled(vcs::Tier2ClusterId::{cluster.enum_name}) && rt.memory().direct_fastmem_enabled()) {{\n'
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

    all_units = sorted(
        {u for c in CLUSTERS for u in (set(c.seeds) | set(c.windows) | set(c.hooks))} |
        {u for u, _pc in DIRECT_GENERATED_LEAF_TARGETS})
    sources = {u: parse_unit(generated / f'generated_unit_{u:04d}.cpp', u) for u in all_units}
    for unit, pc in sorted(DIRECT_GENERATED_LEAF_TARGETS):
        validate_direct_generated_leaf(sources[unit], pc)

    total = collections.Counter()
    selected_by_cluster: Dict[str, Dict[int, Set[int]]] = {}
    generated_paths: List[pathlib.Path] = []
    for cluster in CLUSTERS:
        selected = selected_for_cluster(cluster, sources)
        selected_by_cluster[cluster.key] = selected
        path, stats = emit_cluster(cluster, selected, sources, host)
        generated_paths.append(path)
        print(f'Tier2 V4 cluster {cluster.key}: ' + ' '.join(f'{k}={v}' for k, v in sorted(stats.items())))
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

    print('Tier2 V6 ENTITY LEAF INLINE:',
          f'clusters={len(CLUSTERS)} hook_units_changed={hook_units_changed}',
          f'blocks={total["blocks"]} lines={total["lines"]}',
          f'fused_calls={total["fused_calls"]} fused_tail={total["fused_tail"]}',
          f'cold_exits={total["cold_exits"]}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
