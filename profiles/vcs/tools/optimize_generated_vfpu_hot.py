#!/usr/bin/env python3
"""Profile-guided Tier-2 VFPU lowering for generated VCS AOT units.

Only files explicitly passed on the command line are changed.  The pass turns
literal VFPU operands into AllegrexContext compile-time helpers so hot units do
not redo vector/matrix layout decoding and tiny dynamic loops at runtime.
"""
from __future__ import annotations
import argparse
import pathlib
import re
from dataclasses import dataclass

@dataclass
class Stats:
    matrix_reads: int = 0
    matrix_writes: int = 0
    destination_prefix_side: int = 0
    cross_quat: int = 0
    vh2f: int = 0
    vhdp: int = 0
    vx2i: int = 0
    vminmax: int = 0
    compare3: int = 0
    vrot: int = 0
    vf2h: int = 0
    horizontal: int = 0
    vocp: int = 0
    vmscl: int = 0
    vmmov: int = 0
    matrix_init: int = 0

    def add(self, other: "Stats") -> None:
        for name in self.__dataclass_fields__:
            setattr(self, name, getattr(self, name) + getattr(other, name))


def sub_count(pattern: str, replacement: str, text: str) -> tuple[str, int]:
    return re.subn(pattern, replacement, text)


def transform(text: str) -> tuple[str, Stats]:
    st = Stats()
    text, st.matrix_reads = sub_count(
        r"ctx\.read_vfpu_matrix\(([A-Za-z_][A-Za-z0-9_]*), ([0-9]+)u, ([1-4])u\);",
        r"ctx.read_vfpu_matrix_ct<\2u, \3u>(\1);", text)
    text, st.matrix_writes = sub_count(
        r"ctx\.write_vfpu_matrix\(([A-Za-z_][A-Za-z0-9_]*), ([0-9]+)u, ([1-4])u\);",
        r"ctx.write_vfpu_matrix_ct<\2u, \3u>(\1);", text)
    # Matrix-transform emission stores its side in a constexpr local because the
    # surrounding scalar loops use the same value. Recover that compile-time
    # constant at the final destination-prefix write as well; otherwise this
    # single generic helper survives inside otherwise fully lowered hot blocks.
    side_pattern = re.compile(
        r"(constexpr std::uint32_t vfpu_side = ([1-4])u;"
        r"(?:(?!constexpr std::uint32_t vfpu_side).){0,3000}?)"
        r"ctx\.write_vfpu_vector_with_destination_prefix\("
        r"([A-Za-z_][A-Za-z0-9_]*), ([0-9]+)u, vfpu_side\);", re.S)
    text, st.destination_prefix_side = side_pattern.subn(
        lambda m: m.group(1) +
        f"ctx.write_vfpu_vector_with_destination_prefix_ct<{m.group(4)}u, {m.group(2)}u>({m.group(3)});",
        text)
    text, st.cross_quat = sub_count(
        r"ctx\.execute_vfpu_cross_quat\(([0-9]+)u, ([0-9]+)u, ([0-9]+)u, ([1-4])u\);",
        r"ctx.execute_vfpu_cross_quat_ct<\1u, \2u, \3u, \4u>();", text)
    text, st.vh2f = sub_count(
        r"ctx\.execute_vfpu_vh2f\(([0-9]+)u, ([0-9]+)u, ([1-4])u\);",
        r"ctx.execute_vfpu_vh2f_ct<\1u, \2u, \3u>();", text)
    text, st.vhdp = sub_count(
        r"ctx\.execute_vfpu_vhdp\(([0-9]+)u, ([0-9]+)u, ([0-9]+)u, ([1-4])u\);",
        r"ctx.execute_vfpu_vhdp_ct<\1u, \2u, \3u, \4u>();", text)
    text, st.vx2i = sub_count(
        r"ctx\.execute_vfpu_vx2i\(([0-9]+)u, ([0-9]+)u, ([1-4])u, ([0-3])u\);",
        r"ctx.execute_vfpu_vx2i_ct<\1u, \2u, \3u, \4u>();", text)
    text, st.vminmax = sub_count(
        r"ctx\.execute_vfpu_vminmax\(([0-9]+)u, ([0-9]+)u, ([0-9]+)u, ([1-4])u, (true|false)\);",
        r"ctx.execute_vfpu_vminmax_ct<\1u, \2u, \3u, \4u, \5>();", text)
    text, st.compare3 = sub_count(
        r"ctx\.execute_vfpu_compare3\(([0-9]+)u, ([0-9]+)u, ([0-9]+)u, ([1-4])u, ([5-7])u\);",
        r"ctx.execute_vfpu_compare3_ct<\1u, \2u, \3u, \4u, \5u>();", text)
    text, st.vrot = sub_count(
        r"ctx\.execute_vfpu_vrot\(([0-9]+)u, ([0-9]+)u, ([1-4])u, ([0-9]+)u\);",
        r"ctx.execute_vfpu_vrot_ct<\1u, \2u, \3u, \4u>();", text)
    text, st.vf2h = sub_count(
        r"ctx\.execute_vfpu_vf2h\(([0-9]+)u, ([0-9]+)u, ([1-4])u\);",
        r"ctx.execute_vfpu_vf2h_ct<\1u, \2u, \3u>();", text)
    text, st.horizontal = sub_count(
        r"ctx\.execute_vfpu_horizontal\(([0-9]+)u, ([0-9]+)u, ([1-4])u, (true|false)\);",
        r"ctx.execute_vfpu_horizontal_ct<\1u, \2u, \3u, \4>();", text)
    text, st.vocp = sub_count(
        r"ctx\.execute_vfpu_vocp\(([0-9]+)u, ([0-9]+)u, ([1-4])u\);",
        r"ctx.execute_vfpu_vocp_ct<\1u, \2u, \3u>();", text)
    text, st.vmscl = sub_count(
        r"ctx\.execute_vfpu_vmscl\(([0-9]+)u, ([0-9]+)u, ([0-9]+)u, ([1-4])u\);",
        r"ctx.execute_vfpu_vmscl_ct<\1u, \2u, \3u, \4u>();", text)
    text, st.vmmov = sub_count(
        r"ctx\.execute_vfpu_vmmov\(([0-9]+)u, ([0-9]+)u, ([1-4])u\);",
        r"ctx.execute_vfpu_vmmov_ct<\1u, \2u, \3u>();", text)
    text, st.matrix_init = sub_count(
        r"ctx\.execute_vfpu_matrix_init\(([0-9]+)u, ([1-4])u, ([367])u\);",
        r"ctx.execute_vfpu_matrix_init_ct<\1u, \2u, \3u>();", text)
    return text, st


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("paths", nargs="+", type=pathlib.Path)
    ap.add_argument("--check", action="store_true")
    args = ap.parse_args()
    files: list[pathlib.Path] = []
    for path in args.paths:
        files.extend(sorted(path.glob("generated_unit_*.cpp")) if path.is_dir() else [path])
    total = Stats()
    for path in files:
        original = path.read_text(encoding="utf-8")
        transformed, stats = transform(original)
        total.add(stats)
        if not args.check and transformed != original:
            path.write_text(transformed, encoding="utf-8", newline="\n")
    fields = " ".join(f"{name}={getattr(total, name)}" for name in total.__dataclass_fields__)
    print(f"VFPU Tier2: files={len(files)} {fields} check={int(args.check)}")
    return 0

if __name__ == "__main__":
    raise SystemExit(main())
