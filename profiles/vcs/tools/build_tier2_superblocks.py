#!/usr/bin/env python3
"""Generate the profile-guided VCS Tier-2 hot superblock V1.

The second layer deliberately duplicates only the physically hot region, not
whole 16 KiB AOT units.  Cold exits resume the original generated unit at
its existing direct-entry id without creating a new logical chain frame.
Logical cross-unit tail frames retain Runtime chain-depth and starvation
accounting through tier2_enter_fused_transfer/tier2_complete_fused_transfers.
"""
from __future__ import annotations
import argparse
import pathlib
import re

U154_START = 0x08A6E894
U154_END   = 0x08A6ED98  # cold exit label, excluded
U155_START = 0x08A71100
U155_END   = 0x08A71214  # cold epilogue, excluded
HOOK_PCS = {
    154: (0x08A6E894, 0x08A6E8A4),
    155: (0x08A71100, 0x08A711E0, 0x08A711EC),
}
HOOK_BEGIN = '// TIER2_SUPERBLOCK_V1_HOOK_BEGIN\n'
HOOK_END = '// TIER2_SUPERBLOCK_V1_HOOK_END\n'


def strip_old_hooks(text: str) -> str:
    text = re.sub(
        re.escape(HOOK_BEGIN) + r'.*?' + re.escape(HOOK_END),
        '', text, flags=re.S)
    return text


def region(text: str, start: int, end: int) -> str:
    a = text.find(f'L_{start:08X}:')
    b = text.find(f'L_{end:08X}:')
    if a < 0 or b < 0 or b <= a:
        raise RuntimeError(f'cannot extract region {start:08X}-{end:08X}')
    return text[a:b]


def direct_entry_map(full_text: str) -> dict[int, int]:
    return {int(pc, 16): int(entry_id) for entry_id, pc in re.findall(
        r'case (\d+)u: goto L_([0-9A-F]{8});', full_text)}


def transform_region(text: str, unit: int, partner: int,
                     start: int, end: int,
                     partner_start: int, partner_end: int,
                     self_entries: dict[int, int]) -> tuple[str, int, int, int]:
    # Namespace labels so both source regions can live in one function.
    text = re.sub(r'\bL_([0-9A-F]{8})\b', r'SB_L_\1', text)

    fused = 0
    # Only tail edges between the two selected regions are fused.  JALs to other
    # units remain invoke_chained_direct so HLE/thread-switch semantics are exact.
    tail = re.compile(
        rf'    \(void\)rt\.invoke_chained_direct<&recomp_unit_{partner:04d}_entry, {partner}u, '
        r'(\d+)u, (0x[0-9A-F]+)u>\(ctx, &aot_mem\); return;'
    )

    def tail_repl(m: re.Match[str]) -> str:
        nonlocal fused
        entry_id = int(m.group(1))
        target = int(m.group(2), 16)
        if not (partner_start <= target < partner_end):
            return m.group(0)
        fused += 1
        return (
            f'    if (!rt.tier2_enter_fused_transfer<{partner}u, 0x{target:08X}u>(ctx)) {{\n'
            f'        ctx.pc = 0x{target:08X}u;\n'
            f'        TIER2_SB_RETURN();\n'
            f'    }}\n'
            f'    ++tier2_pending_transfers;\n'
            f'    goto SB_L_{target:08X};'
        )

    text = tail.sub(tail_repl, text)

    # Any ordinary local branch that leaves the selected hot region resumes the
    # original generated unit at its existing direct-entry id.  This is an
    # ordinary native call, *not* invoke_chained_direct: the original local goto
    # did not create a logical chain frame or scheduler work item either.
    cold_exits: set[int] = set()
    cold_dispatch_fallbacks: set[int] = set()
    goto_re = re.compile(r'goto SB_L_([0-9A-F]{8});')

    def goto_repl(m: re.Match[str]) -> str:
        target = int(m.group(1), 16)
        in_self = start <= target < end
        in_partner = partner_start <= target < partner_end
        if in_self or in_partner:
            return m.group(0)
        cold_exits.add(target)
        entry_id = self_entries.get(target)
        if entry_id is not None:
            return (f'recomp_unit_{unit:04d}_entry(rt, ctx, {entry_id}u, aot_mem); '
                    f'TIER2_SB_RETURN();')
        cold_dispatch_fallbacks.add(target)
        return f'ctx.pc = 0x{target:08X}u; TIER2_SB_RETURN();'

    text = goto_re.sub(goto_repl, text)

    # Remaining returns are exits caused by non-fused calls, unsupported paths,
    # or chain fallback.  Unwind the logical fused tail frames first.
    text = text.replace('return;', 'TIER2_SB_RETURN();')
    return text, fused, len(cold_exits), len(cold_dispatch_fallbacks)


def patch_hooks(text: str, unit: int) -> str:
    text = strip_old_hooks(text)
    if '#include "vcs_tier2_superblocks.hpp"' not in text:
        text = text.replace('#include "generated_units.hpp"\n',
                            '#include "generated_units.hpp"\n#include "vcs_tier2_superblocks.hpp"\n', 1)
    for pc in HOOK_PCS[unit]:
        label = f'L_{pc:08X}:\n'
        if label not in text:
            raise RuntimeError(f'missing hook label {pc:08X} in unit {unit:04d}')
        hook = (
            label + HOOK_BEGIN +
            '    if (vcs::tier2_superblocks_enabled()) {\n'
            f'        vcs::tier2_superblock_154_155(rt, ctx, aot_mem, 0x{pc:08X}u);\n'
            '        return;\n'
            '    }\n' + HOOK_END
        )
        text = text.replace(label, hook, 1)
    return text


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument('profile', nargs='?', type=pathlib.Path,
                    default=pathlib.Path(__file__).resolve().parents[1])
    args = ap.parse_args()
    profile = args.profile.resolve()
    generated = profile / 'generated'
    host = profile / 'host'

    raw154 = strip_old_hooks((generated/'generated_unit_0154.cpp').read_text(encoding='utf-8'))
    raw155 = strip_old_hooks((generated/'generated_unit_0155.cpp').read_text(encoding='utf-8'))
    r154 = region(raw154, U154_START, U154_END)
    r155 = region(raw155, U155_START, U155_END)
    e154 = direct_entry_map(raw154)
    e155 = direct_entry_map(raw155)
    t154, f154, c154, d154 = transform_region(
        r154, 154, 155, U154_START, U154_END, U155_START, U155_END, e154)
    t155, f155, c155, d155 = transform_region(
        r155, 155, 154, U155_START, U155_END, U154_START, U154_END, e155)

    cpp = f'''// AUTO-GENERATED by profiles/vcs/tools/build_tier2_superblocks.py.
// Profile-guided second-layer superblock: 0154/0155 dominant entity loop.
#include "vcs_tier2_superblocks.hpp"
#include "vcs_runtime_log.hpp"
#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"

#include <cstdlib>
#include <cstring>

namespace vcs {{

// Generated AOT call targets are declared in namespace psprecomp. The copied
// region text intentionally stays byte-close to the original units, so make
// those names visible here instead of rewriting every external helper target.
using namespace psprecomp;

bool tier2_superblocks_enabled() noexcept {{
    static const bool enabled = [] {{
        const char *value = std::getenv("PSPRECOMP_TIER2_SUPERBLOCKS");
        return value == nullptr || std::strcmp(value, "0") != 0;
    }}();
    return enabled;
}}

void tier2_superblock_154_155(psprecomp::Runtime &rt,
                              psprecomp::AllegrexContext &ctx,
                              psprecomp::GuestMemory::AotFastView &aot_mem,
                              std::uint32_t entry_pc) {{
    std::uint32_t tier2_pending_transfers = 0u;
#define TIER2_SB_RETURN() do {{ \\
        if (tier2_pending_transfers != 0u) {{ \\
            (void)rt.tier2_complete_fused_transfers(ctx, tier2_pending_transfers); \\
            tier2_pending_transfers = 0u; \\
        }} \\
        return; \\
    }} while (false)

    switch (entry_pc) {{
    case 0x08A6E894u: goto SB_L_08A6E894;
    case 0x08A6E8A4u: goto SB_L_08A6E8A4;
    case 0x08A71100u: goto SB_L_08A71100;
    case 0x08A711E0u: goto SB_L_08A711E0;
    case 0x08A711ECu: goto SB_L_08A711EC;
    default: ctx.pc = entry_pc; TIER2_SB_RETURN();
    }}

{t154}
{t155}
#undef TIER2_SB_RETURN
}}

}} // namespace vcs
'''
    out = host/'vcs_tier2_superblocks.cpp'
    changed_cpp = not out.exists() or out.read_text(encoding='utf-8') != cpp
    if changed_cpp:
        out.write_text(cpp, encoding='utf-8', newline='\n')

    changes = 0
    for unit, raw in ((154, raw154), (155, raw155)):
        patched = patch_hooks(raw, unit)
        p = generated/f'generated_unit_{unit:04d}.cpp'
        if p.read_text(encoding='utf-8') != patched:
            p.write_text(patched, encoding='utf-8', newline='\n')
            changes += 1

    print('Tier2 SUPERBLOCK V1:',
          f'host_changed={int(changed_cpp)} hook_units_changed={changes}',
          f'fused_tail_edges={f154+f155} cold_exit_labels={c154+c155}',
          f'cold_dispatch_fallbacks={d154+d155} lines={len(cpp.splitlines())}')
    return 0

if __name__ == '__main__':
    raise SystemExit(main())
