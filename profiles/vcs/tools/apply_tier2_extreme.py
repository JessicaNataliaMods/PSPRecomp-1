#!/usr/bin/env python3
"""Reapply VCS Tier-2 lowerings that are boot-semantics-safe.

This BOOTFIX deliberately does NOT rewrite control-flow cadence or architectural
GPR/FPR lifetime.  The black-screen regression appeared only after the extreme
pass also changed scheduler-visible local chaining, cross-unit tail chaining,
and block-local register promotion.  Those three transforms are therefore kept
out of the default generated corpus until they are individually profiled and
validated on Windows gameplay.

Still applied:
  * AotFastView lowering for LWL/LWR/SWL/SWR.
  * Direct FCR31 condition-bit lowering.
  * Compile-time VFPU lowerings on the measured hot 37 units.

The pass is idempotent and safe to run after AOT regeneration.
"""
from __future__ import annotations
import argparse
import importlib.util
import pathlib
import sys

sys.dont_write_bytecode = True

HOT_IDS = """0023 0024 0097 0030 0011 0091 0084 0043 0067 0163
0087 0142 0066 0152 0109 0179 0085 0215 0064 0149
0095 0199 0092 0206 0022 0190 0200 0080 0164 0198
0088 0155 0213 0154 0169 0035 0089""".split()


def load_module(path: pathlib.Path, name: str):
    spec = importlib.util.spec_from_file_location(name, path)
    if spec is None or spec.loader is None:
        raise RuntimeError(f"cannot load {path}")
    module = importlib.util.module_from_spec(spec)
    sys.modules[name] = module
    spec.loader.exec_module(module)
    return module


def lower_fpu_condition_accesses(text: str) -> tuple[str, int, int]:
    needle = "ctx.set_fpu_condition("
    search = 0
    sets = 0
    while True:
        start = text.find(needle, search)
        if start < 0:
            break
        expression_begin = start + len(needle)
        cursor = expression_begin
        depth = 1
        in_string = in_char = escaped = False
        close = None
        while cursor < len(text):
            ch = text[cursor]
            if escaped:
                escaped = False
                cursor += 1
                continue
            if (in_string or in_char) and ch == "\\":
                escaped = True
                cursor += 1
                continue
            if not in_char and ch == '"':
                in_string = not in_string
                cursor += 1
                continue
            if not in_string and ch == "'":
                in_char = not in_char
                cursor += 1
                continue
            if not (in_string or in_char):
                if ch == "(":
                    depth += 1
                elif ch == ")":
                    depth -= 1
                    if depth == 0:
                        close = cursor
                        break
            cursor += 1
        if close is None:
            search = start + len(needle)
            continue
        expression = text[expression_begin:close].strip()
        replacement = (
            "ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | ((" + expression +
            ") ? 0x00800000u : 0u)"
        )
        text = text[:start] + replacement + text[close + 1:]
        search = start + len(replacement)
        sets += 1
    gets = text.count("ctx.fpu_condition()")
    text = text.replace("ctx.fpu_condition()", "((ctx.fcr31 & 0x00800000u) != 0u)")
    return text, sets, gets


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("generated", nargs="?", type=pathlib.Path,
                    default=pathlib.Path(__file__).resolve().parents[1] / "generated")
    ap.add_argument("--check", action="store_true")
    args = ap.parse_args()
    generated = args.generated.resolve()
    tools = pathlib.Path(__file__).resolve().parent
    vfpu = load_module(tools / "optimize_generated_vfpu_hot.py", "vcs_tier2_vfpu_bootfix")

    structural_files = structural_caps = structural_unaligned = structural_fpu_sets = structural_fpu_gets = 0
    for path in sorted(generated.glob("generated_unit_*.cpp")):
        original = path.read_text(encoding="utf-8")
        text = original.replace("local_transfers < 2048u", "local_transfers < 256u")
        structural_caps += original.count("local_transfers < 2048u")
        for op in ("load", "store"):
            for side in ("left", "right"):
                old_word = f"rt.memory().aot_{op}_word_{side}("
                new_word = f"aot_mem.aot_{op}_word_{side}("
                structural_unaligned += text.count(old_word)
                text = text.replace(old_word, new_word)
        text, fpu_sets, fpu_gets = lower_fpu_condition_accesses(text)
        structural_fpu_sets += fpu_sets
        structural_fpu_gets += fpu_gets
        if text != original:
            structural_files += 1
            if not args.check:
                path.write_text(text, encoding="utf-8", newline="\n")

    vfpu_stats = vfpu.Stats()
    hot_changed = 0
    for unit in HOT_IDS:
        path = generated / f"generated_unit_{unit}.cpp"
        if not path.exists():
            raise FileNotFoundError(path)
        original = path.read_text(encoding="utf-8")
        text, stats = vfpu.transform(original)
        vfpu_stats.add(stats)
        if text != original:
            hot_changed += 1
            if not args.check:
                path.write_text(text, encoding="utf-8", newline="\n")

    print(
        "Tier2 BOOTFIX structural: "
        f"files={structural_files} caps_2048_to_256={structural_caps} unaligned_fastview={structural_unaligned} "
        f"fpu_set_inline={structural_fpu_sets} fpu_get_inline={structural_fpu_gets}"
    )
    print("Tier2 BOOTFIX disabled-by-design: local_cap_2048=0 tail_chain=0 gpr_cache=0 fpr_cache=0")
    print(f"Tier2 BOOTFIX hot VFPU: changed={hot_changed}")
    print("VFPU:", " ".join(f"{n}={getattr(vfpu_stats,n)}" for n in vfpu_stats.__dataclass_fields__))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
