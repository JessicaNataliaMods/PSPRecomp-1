#!/usr/bin/env python3
from __future__ import annotations

import argparse
import re
from pathlib import Path

STAGE = "V8.12.5 compact-registration origin + VFPU VDOT bit-exact fix"
EXPECTED_UNITS = 234
EXPECTED_ENTRIES = 181789
REG_MARKER = "PSPRECOMP_V812_COMPACT_REGISTRATION"

MASK_RE = re.compile(
    r"static constexpr std::uint64_t (?P<name>kEntryMasks_recomp_unit_(?P<unit>\d{4}))"
    r"\[(?P<count>\d+)\] = \{\n(?P<body>.*?)\n\};",
    re.DOTALL,
)
DISPATCH_ORIGIN_RE = re.compile(
    r"const std::uint32_t entry_delta = local_pc - (?P<origin>0x[0-9A-Fa-f]+)u;"
)
COMPACT_CALL_RE = re.compile(
    r"runtime\.register_generated_entry_mask\((?P<origin>0x[0-9A-Fa-f]+)u,\s*"
    r"&(?P<fn>recomp_unit_(?P<unit>\d{4})),\s*\"(?P=fn)\",\s*"
    r"(?P<mask>kEntryMasks_recomp_unit_\d{4}),\s*(?P<groups>\d+)u\);",
    re.DOTALL,
)
SWITCH_PC_RE = re.compile(r"case\s+\d+u:\s+goto\s+L_([0-9A-Fa-f]{8});")

VDOT_DEFAULT_OLD = "            float sum = vfpu[s0i] * vfpu[t0i];"
VDOT_DEFAULT_NEW = """            // Preserve the architectural accumulation order exactly, including
            // signed-zero behavior. clang-cl exposed a bit difference when the
            // first product was used as the accumulator seed.
            float sum = 0.0f;
            sum += vfpu[s0i] * vfpu[t0i];"""

VDOT_FALLBACK_OLD = """        const float result[1]{
            source[0] * target[0] + source[1] * target[1] +
            source[2] * target[2] + source[3] * target[3]
        };"""
VDOT_FALLBACK_NEW = """        float result[1]{0.0f};
        // Match execute_vfpu_vdot() lane-by-lane so /O2 cannot change the
        // bit-visible grouping of the PSP VFPU dot product.
        for (std::uint32_t lane = 0u; lane < 4u; ++lane)
            result[0] += source[lane] * target[lane];"""


def read(path: Path) -> str:
    return path.read_text(encoding="utf-8", errors="strict")


def write(path: Path, text: str) -> None:
    path.write_text(text, encoding="utf-8", newline="\n")


def parse_masks(text: str, path: Path) -> tuple[str, list[int]]:
    m = MASK_RE.search(text)
    if not m:
        raise RuntimeError(f"{path.name}: compact masks missing")
    declared = int(m.group("count"))
    masks = [int(x, 16) for x in re.findall(r"0x([0-9A-Fa-f]{16})ull", m.group("body"))]
    if len(masks) != declared:
        raise RuntimeError(f"{path.name}: mask count mismatch {len(masks)} != {declared}")
    return m.group("name"), masks


def expected_mask_pcs(origin: int, masks: list[int]) -> set[int]:
    return {
        origin + (group * 64 + bit) * 4
        for group, mask in enumerate(masks)
        for bit in range(64)
        if (mask >> bit) & 1
    }


def patch_registration_origins(root: Path) -> tuple[int, int, int]:
    generated = root / "profiles" / "vcs" / "generated"
    units = sorted(generated.glob("generated_unit_*.cpp"))
    if len(units) != EXPECTED_UNITS:
        raise RuntimeError(f"expected {EXPECTED_UNITS} generated units, found {len(units)}")

    changed = 0
    offset_units = 0
    total_entries = 0

    for path in units:
        text = read(path)
        if REG_MARKER not in text:
            raise RuntimeError(f"{path.name}: V8.12 compact-registration marker missing")
        mask_name, masks = parse_masks(text, path)
        total_entries += sum(mask.bit_count() for mask in masks)

        origin_match = DISPATCH_ORIGIN_RE.search(text)
        call_match = COMPACT_CALL_RE.search(text)
        if origin_match is None or call_match is None:
            raise RuntimeError(f"{path.name}: dispatch origin/compact registration call parse failed")

        dispatch_origin_text = origin_match.group("origin")
        call_origin_text = call_match.group("origin")
        dispatch_origin = int(dispatch_origin_text, 16)
        call_origin = int(call_origin_text, 16)

        if call_match.group("mask") != mask_name:
            raise RuntimeError(f"{path.name}: compact registration mask mismatch")
        if int(call_match.group("groups")) != len(masks):
            raise RuntimeError(f"{path.name}: compact registration group-count mismatch")

        switch_pcs = {int(x, 16) for x in SWITCH_PC_RE.findall(text)}
        mask_pcs = expected_mask_pcs(dispatch_origin, masks)
        if switch_pcs != mask_pcs:
            missing = [hex(x) for x in sorted(switch_pcs - mask_pcs)[:8]]
            extra = [hex(x) for x in sorted(mask_pcs - switch_pcs)[:8]]
            raise RuntimeError(
                f"{path.name}: dispatch masks do not match switch PCs "
                f"missing={missing} extra={extra}"
            )

        if call_origin != dispatch_origin:
            offset_units += 1
            start, end = call_match.span("origin")
            text = text[:start] + dispatch_origin_text + text[end:]
            write(path, text)
            changed += 1

    if total_entries != EXPECTED_ENTRIES:
        raise RuntimeError(f"entry population changed: {total_entries} != {EXPECTED_ENTRIES}")
    return changed, offset_units, total_entries


def patch_future_codegen(root: Path) -> bool:
    path = root / "profiles" / "vcs" / "tools" / "apply_v812_code_density.py"
    text = read(path)
    # V8.12.5 copy of this tool contains the corrected implementation and a
    # strict origin-vs-switch validator. This check prevents an older copy from
    # silently reintroducing the boot regression.
    required = [
        "entry_origin = origin_match.group(\"origin\")",
        "runtime.register_generated_entry_mask({entry_origin}u",
        "compact registration origin",
        "compact mask/switch PC mismatch",
    ]
    missing = [needle for needle in required if needle not in text]
    if missing:
        raise RuntimeError(
            "apply_v812_code_density.py is not V8.12.5-corrected; missing " + repr(missing)
        )
    return False


def patch_vdot(root: Path) -> tuple[bool, bool]:
    path = root / "include" / "psprecomp" / "allegrex_context.hpp"
    text = read(path)
    changed_default = changed_fallback = False

    if VDOT_DEFAULT_OLD in text:
        if text.count(VDOT_DEFAULT_OLD) != 1:
            raise RuntimeError("VDOT default accumulator anchor duplicated")
        text = text.replace(VDOT_DEFAULT_OLD, VDOT_DEFAULT_NEW, 1)
        changed_default = True
    elif VDOT_DEFAULT_NEW not in text:
        raise RuntimeError("VDOT default accumulator anchor not recognized")

    if VDOT_FALLBACK_OLD in text:
        if text.count(VDOT_FALLBACK_OLD) != 1:
            raise RuntimeError("VDOT fallback accumulator anchor duplicated")
        text = text.replace(VDOT_FALLBACK_OLD, VDOT_FALLBACK_NEW, 1)
        changed_fallback = True
    elif VDOT_FALLBACK_NEW not in text:
        raise RuntimeError("VDOT fallback accumulator anchor not recognized")

    if changed_default or changed_fallback:
        write(path, text)
    return changed_default, changed_fallback


def validate(root: Path) -> tuple[int, int, int]:
    generated = root / "profiles" / "vcs" / "generated"
    units = sorted(generated.glob("generated_unit_*.cpp"))
    if len(units) != EXPECTED_UNITS:
        raise RuntimeError(f"expected {EXPECTED_UNITS} generated units, found {len(units)}")

    total_entries = 0
    corrected = 0
    for path in units:
        text = read(path)
        mask_name, masks = parse_masks(text, path)
        total_entries += sum(mask.bit_count() for mask in masks)
        origin_match = DISPATCH_ORIGIN_RE.search(text)
        call_match = COMPACT_CALL_RE.search(text)
        if origin_match is None or call_match is None:
            raise RuntimeError(f"{path.name}: origin/call missing")
        dispatch_origin = int(origin_match.group("origin"), 16)
        registration_origin = int(call_match.group("origin"), 16)
        if registration_origin != dispatch_origin:
            raise RuntimeError(
                f"{path.name}: registration origin {registration_origin:#010x} "
                f"!= dispatch origin {dispatch_origin:#010x}"
            )
        if call_match.group("mask") != mask_name or int(call_match.group("groups")) != len(masks):
            raise RuntimeError(f"{path.name}: mask/group mismatch")
        switch_pcs = {int(x, 16) for x in SWITCH_PC_RE.findall(text)}
        mask_pcs = expected_mask_pcs(dispatch_origin, masks)
        if switch_pcs != mask_pcs:
            raise RuntimeError(f"{path.name}: switch/mask PC set mismatch")
        corrected += 1

    if total_entries != EXPECTED_ENTRIES:
        raise RuntimeError(f"entry population changed: {total_entries} != {EXPECTED_ENTRIES}")

    # Explicitly guard the exact boot PC that exposed the bug.
    boot_pc = 0x088B5310
    boot_unit = root / "profiles" / "vcs" / "generated" / "generated_unit_0044.cpp"
    bt = read(boot_unit)
    bm = DISPATCH_ORIGIN_RE.search(bt)
    _, masks = parse_masks(bt, boot_unit)
    if bm is None or boot_pc not in expected_mask_pcs(int(bm.group("origin"), 16), masks):
        raise RuntimeError("boot PC 0x088B5310 is not represented by unit 0044 compact mask")

    ctx = read(root / "include" / "psprecomp" / "allegrex_context.hpp")
    if VDOT_DEFAULT_NEW not in ctx or VDOT_FALLBACK_NEW not in ctx:
        raise RuntimeError("VDOT bit-exact accumulation fix missing")
    return corrected, total_entries, boot_pc


def main() -> int:
    ap = argparse.ArgumentParser(description=STAGE)
    ap.add_argument("root", nargs="?", default=".")
    ap.add_argument("--check", action="store_true")
    ns = ap.parse_args()
    root = Path(ns.root).resolve()
    if not (root / "CMakeLists.txt").is_file():
        raise RuntimeError(f"not PSPRecomp root: {root}")

    if ns.check:
        units, entries, boot_pc = validate(root)
        print(
            f"V8.12.5 CHECK OK: units={units} entries={entries} "
            f"boot_pc={boot_pc:#010x}=registered VDOT=bit-exact"
        )
        return 0

    patch_future_codegen(root)
    changed, offset_units, entries = patch_registration_origins(root)
    vdot_default, vdot_fallback = patch_vdot(root)
    validate(root)
    print(
        "V8.12.5 registration/VFPU fix applied: "
        f"registration_units_changed={changed} origin_mismatch_units={offset_units} "
        f"entries={entries} vdot_default={'patched' if vdot_default else 'ok'} "
        f"vdot_fallback={'patched' if vdot_fallback else 'ok'}"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
