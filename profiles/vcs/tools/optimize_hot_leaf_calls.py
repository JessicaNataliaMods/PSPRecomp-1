#!/usr/bin/env python3
"""Profile-guided lowering of tiny, side-effect-known VCS AOT leaf helpers.

These helpers were confirmed from the generated corpus and the 2026-08-16
GUESTHOT trace.  They contain only one RAM load/store (or one masked flag test)
plus the guest return.  Replacing the cross-unit call with the exact leaf
semantics removes Runtime chaining/local-dispatch overhead while preserving the
same starvation-boundary accounting via account_inlined_generated_leaf(). The continuation PC is materialized first, exactly as the original generated callee does on return.

The pass is intentionally exact and idempotent: only the known generated call
shapes are rewritten.
"""
from __future__ import annotations
import argparse
import pathlib
import re

MARKER = "// PSPRECOMP_VCS_HOT_LEAF_LOWERING_V1"

# (target unit, entry id, target PC) -> statement body before scheduler account.
LEAVES = {
    (152, 432, 0x08A65EA0): (
        "ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));\n"
        "    ctx.gpr[4] = (ctx.gpr[4] & 14u);\n"
        "    ctx.gpr[2] = ((ctx.gpr[4] ^ 6u) < static_cast<std::uint32_t>(1) ? 1u : 0u);"
    ),
    (152, 433, 0x08A65EB4): (
        "ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));\n"
        "    ctx.gpr[4] = (ctx.gpr[4] & 14u);\n"
        "    ctx.gpr[2] = ((ctx.gpr[4] ^ 8u) < static_cast<std::uint32_t>(1) ? 1u : 0u);"
    ),
    (153, 100, 0x08A68CBC):
        "ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(444)));",
    (153, 101, 0x08A68CC4):
        "aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);",
    (153, 102, 0x08A68CCC):
        "ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(448)));",
    (153, 103, 0x08A68CD4):
        "ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2116)));",
    (153, 104, 0x08A68CDC):
        "aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2116), ctx.gpr[5]);",
    (44, 665, 0x088B7AD8): (
        "ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));\n"
        "    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));"
    ),
}

CALL_RE = re.compile(
    r"^(?P<indent>\s*)if \(rt\.invoke_chained_direct<&recomp_unit_(?P<sym>\d+)_entry, "
    r"(?P<unit>\d+)u, (?P<entry>\d+)u, 0x(?P<pc>[0-9A-F]+)u>\(ctx, &aot_mem\) && "
    r"ctx\.pc == 0x(?P<ret>[0-9A-F]+)u\) goto L_(?P=ret);\s*$",
    re.M,
)

def transform(text: str) -> tuple[str, int]:
    if MARKER in text:
        return text, 0
    count = 0
    def repl(m: re.Match[str]) -> str:
        nonlocal count
        key=(int(m.group('unit')), int(m.group('entry')), int(m.group('pc'),16))
        body=LEAVES.get(key)
        if body is None:
            return m.group(0)
        count += 1
        indent=m.group('indent')
        ret=m.group('ret')
        body=body.replace('\n    ', '\n'+indent)
        return (f"{indent}{{ // Tier-2 inlined generated leaf {key[0]}:{key[1]}\n"
                f"{indent}  {body}\n"
                f"{indent}  ctx.pc = 0x{ret}u;\n"
                f"{indent}  if (!rt.account_inlined_generated_leaf(ctx)) return;\n"
                f"{indent}  goto L_{ret};\n"
                f"{indent}}}")
    out=CALL_RE.sub(repl,text)
    if count:
        out=MARKER+'\n'+out
    return out,count

def main() -> int:
    ap=argparse.ArgumentParser()
    ap.add_argument('generated',type=pathlib.Path)
    ap.add_argument('--check',action='store_true')
    args=ap.parse_args()
    total=files=0
    for name in ('generated_unit_0155.cpp','generated_unit_0085.cpp'):
        p=args.generated/name
        if not p.exists():
            raise FileNotFoundError(p)
        src=p.read_text(encoding='utf-8')
        out,n=transform(src)
        total += n
        files += int(n>0)
        if n and not args.check:
            p.write_text(out,encoding='utf-8',newline='\n')
    print(f'hot_leaf_lowering: files={files} calls_inlined={total} check={int(args.check)}')
    return 0

if __name__=='__main__':
    raise SystemExit(main())
