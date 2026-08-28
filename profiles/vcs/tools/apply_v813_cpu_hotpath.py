#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
import re
from pathlib import Path

STAGE = "V8.13 CPU hot path"
EXPECTED_UNITS = 234
EXPECTED_ENTRIES = 181789
EXPECTED_JR_SITES = 11299
V812_JUMP_MARKER = "PSPRECOMP_V812_SHARED_SCHED_JUMP"
V813_JR_MARKER = "PSPRECOMP_V813_JR_FAST_EXIT"
V813_JR_BLOCK_MARKER = "PSPRECOMP_V813_SHARED_JR_DISPATCH"
V813_DENSE_MARKER = "PSPRECOMP_V813_HOT_DENSE_DISPATCH"

# Same measured ordering already used by profiles/vcs/CMakeLists.txt.  These 37
# units carry about 80% of the measured cross-unit call traffic.
HOT_UNIT_IDS = {
    23, 24, 97, 30, 11, 91, 84, 43, 67, 163,
    87, 142, 66, 152, 109, 179, 85, 215, 64, 149,
    95, 199, 92, 206, 22, 190, 200, 80, 164, 198,
    88, 155, 213, 154, 169, 35, 89,
}

DISPATCH_ORIGIN_RE = re.compile(
    r"const std::uint32_t entry_delta = local_pc - (?P<origin>0x[0-9A-Fa-f]+)u;"
)
DISPATCH_SPAN_RE = re.compile(
    r"entry_delta < (?P<span>\d+)u && \(entry_delta & 3u\) == 0u"
)
MASK_RE = re.compile(
    r"static constexpr std::uint64_t (?P<name>kEntryMasks_recomp_unit_(?P<unit>\d{4}))"
    r"\[(?P<count>\d+)\] = \{\n(?P<body>.*?)\n\};",
    re.DOTALL,
)
BASES_RE_TEMPLATE = (
    r"static constexpr std::uint16_t kEntryBases_recomp_unit_{unit}\[(?P<count>\d+)\] = \{{\n(?P<body>.*?)\n\}};\n"
)
CASE_RE = re.compile(r"case\s+(?P<id>\d+)u:\s+goto\s+L_(?P<pc>[0-9A-Fa-f]{8});")

# Exact V8.12 JR form. Keep the V8.12 marker in the replacement so the V8.12
# structural checker remains valid on subsequent incremental builds.
OLD_JR_RE = re.compile(
    r"(?P<i>[ \t]*)local_pc = jump_target;\n"
    r"(?P=i)if \(\+\+local_transfers < 256u\) \{ entry_id = 0u; goto LOCAL_DISPATCH; \}\n"
    r"(?P=i)// PSPRECOMP_V812_SHARED_SCHED_JUMP\n"
    r"(?P=i)goto LOCAL_SCHED_BOUNDARY;"
)


def read(path: Path) -> str:
    return path.read_text(encoding="utf-8", errors="strict")


def write_if_changed(path: Path, old: str, new: str) -> bool:
    if old == new:
        return False
    tmp = path.with_suffix(path.suffix + ".v813tmp")
    tmp.write_text(new, encoding="utf-8", newline="\n")
    tmp.replace(path)
    return True


def parse_masks(text: str, path: Path) -> tuple[list[int], int]:
    match = MASK_RE.search(text)
    if not match:
        raise RuntimeError(f"{path.name}: compact entry masks missing")
    declared = int(match.group("count"))
    masks = [int(x, 16) for x in re.findall(r"0x([0-9A-Fa-f]{16})ull", match.group("body"))]
    if len(masks) != declared:
        raise RuntimeError(f"{path.name}: compact mask count mismatch declared={declared} parsed={len(masks)}")
    return masks, sum(x.bit_count() for x in masks)


def parse_window(text: str, path: Path) -> tuple[int, int]:
    origin = DISPATCH_ORIGIN_RE.search(text)
    span = DISPATCH_SPAN_RE.search(text)
    if origin is None or span is None:
        raise RuntimeError(f"{path.name}: compact dispatch origin/span missing")
    return int(origin.group("origin"), 16), int(span.group("span"))


def switch_entries(text: str) -> dict[int, int]:
    # generated-unit entry switch is the only case-N -> L_guest form in this corpus.
    return {int(m.group("pc"), 16): int(m.group("id")) for m in CASE_RE.finditer(text)}


def insert_shared_jr_dispatch(text: str, path: Path, origin: int, span: int, has_regcache: bool) -> str:
    if V813_JR_BLOCK_MARKER in text:
        return text
    anchor = "// PSPRECOMP_V812_SHARED_SCHED_BLOCK: one scheduler-exact slow boundary per unit.\n"
    pos = text.find(anchor)
    if pos < 0:
        raise RuntimeError(f"{path.name}: V8.12 shared scheduler block anchor missing")
    sync = "            AOT_REGCACHE_SYNC_OUT();\n" if has_regcache else ""
    block = (
        f"// {V813_JR_BLOCK_MARKER}: one dynamic-JR reject/redispatch path per unit.\n"
        "LOCAL_JR_DISPATCH:\n"
        "    {\n"
        f"        const std::uint32_t local_delta_v813 = jump_target - 0x{origin:08X}u;\n"
        f"        if (local_delta_v813 >= {span}u || (local_delta_v813 & 3u) != 0u) {{\n"
        "            ctx.pc = jump_target;\n"
        f"{sync}"
        "            return;\n"
        "        }\n"
        "    }\n"
        "    local_pc = jump_target;\n"
        "    entry_id = 0u;\n"
        "    goto LOCAL_DISPATCH;\n"
        "\n"
    )
    return text[:pos] + block + text[pos:]


def rewrite_jr_sites(text: str, path: Path) -> tuple[str, int]:
    if V813_JR_MARKER in text:
        # Idempotent path: marker is emitted once per rewritten site.
        return text, text.count(V813_JR_MARKER)
    count = 0

    def repl(match: re.Match[str]) -> str:
        nonlocal count
        count += 1
        i = match.group("i")
        return (
            f"{i}// {V813_JR_MARKER}: preserve the exact 256-transfer boundary; common JR path is shared.\n"
            f"{i}if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;\n"
            f"{i}// {V812_JUMP_MARKER}\n"
            f"{i}goto LOCAL_SCHED_BOUNDARY;"
        )

    text = OLD_JR_RE.sub(repl, text)
    if count == 0 and V812_JUMP_MARKER in text:
        raise RuntimeError(f"{path.name}: V8.12 JR sites exist but expected rewrite form was not found")
    return text, count


def ensure_prefix_bases(text: str, path: Path, unit: int, masks: list[int]) -> str:
    """Keep V8.12 prefix metadata canonical even though V8.13 hot lookup does not read it.

    The first V8.13 package incorrectly assumed every compact mask had 64 groups and
    removed kEntryBases from already-transformed hot units.  Real VCS units have
    variable group counts (for example unit 0067 has 59).  Reconstructing this table
    from the occupancy masks is exact and makes partial V8.13 application recoverable.
    """
    expected = []
    next_id = 1
    for mask in masks:
        expected.append(next_id)
        next_id += mask.bit_count()

    bases_re = re.compile(BASES_RE_TEMPLATE.format(unit=f"{unit:04d}"), re.DOTALL)
    match = bases_re.search(text)
    if match is not None:
        values = [int(x) for x in re.findall(r"\b(\d+)u\b", match.group("body"))]
        declared = int(match.group("count"))
        if declared != len(masks) or values != expected:
            raise RuntimeError(
                f"{path.name}: kEntryBases mismatch declared={declared} groups={len(masks)}"
            )
        return text

    mask_match = MASK_RE.search(text)
    if mask_match is None:
        raise RuntimeError(f"{path.name}: mask table insertion anchor missing")
    lines = [
        f"\nstatic constexpr std::uint16_t kEntryBases_recomp_unit_{unit:04d}[{len(masks)}] = {{"
    ]
    for idx in range(0, len(expected), 16):
        lines.append("    " + ", ".join(f"{x}u" for x in expected[idx:idx + 16]) + ",")
    lines.append("};\n")
    insertion = mask_match.end()
    return text[:insertion] + "\n".join(lines) + text[insertion:]


def build_hot_dense_table(text: str, path: Path, unit: int, origin: int, span: int, masks: list[int]) -> tuple[str, int]:
    if unit not in HOT_UNIT_IDS:
        return text, 0
    entries = switch_entries(text)
    if not entries:
        raise RuntimeError(f"{path.name}: no generated entry switch cases found")

    # Preserve/restore the canonical V8.12 prefix-base metadata.  It is tiny, not
    # on the V8.13 runtime lookup path, and keeping it avoids making future tooling
    # depend on whether a unit was transformed before a failed incremental run.
    text = ensure_prefix_bases(text, path, unit, masks)

    slots = (span + 3) // 4
    dense = [0] * slots
    for pc, entry_id in entries.items():
        delta = pc - origin
        if delta < 0 or delta >= span or (delta & 3):
            raise RuntimeError(f"{path.name}: entry {pc:#010x} outside dispatch window")
        idx = delta >> 2
        if dense[idx] != 0 and dense[idx] != entry_id:
            raise RuntimeError(f"{path.name}: duplicate dense entry slot {idx}")
        dense[idx] = entry_id

    table_name = f"kEntryIdsV813_recomp_unit_{unit:04d}"
    if V813_DENSE_MARKER not in text:
        mask_match = MASK_RE.search(text)
        if mask_match is None:
            raise RuntimeError(f"{path.name}: mask table insertion anchor missing")
        # Insert after the prefix-base table when present so V8.11/V8.12 metadata
        # remains grouped together and readable.
        bases_match = re.compile(BASES_RE_TEMPLATE.format(unit=f"{unit:04d}"), re.DOTALL).search(text)
        insertion = bases_match.end() if bases_match is not None else mask_match.end()
        lines = [
            f"\n// {V813_DENSE_MARKER}: one indexed load on the measured hot units;",
            "// masks remain for exact registration/correctness proof.",
            f"alignas(64) static constexpr std::uint16_t {table_name}[{slots}] = {{",
        ]
        for idx in range(0, slots, 32):
            lines.append("    " + ", ".join(f"{x}u" for x in dense[idx:idx + 32]) + ",")
        lines.append("};\n")
        text = text[:insertion] + "\n".join(lines) + text[insertion:]

        dispatch = text.find("LOCAL_DISPATCH:\n")
        if dispatch < 0:
            raise RuntimeError(f"{path.name}: LOCAL_DISPATCH missing")
        lookup_start = text.find("    if (entry_id == 0u) {\n", dispatch)
        switch_pos = text.find("    switch (entry_id) {\n", lookup_start)
        if lookup_start < 0 or switch_pos < 0:
            raise RuntimeError(f"{path.name}: compact lookup block not recognized")
        lookup = (
            "    if (entry_id == 0u) {\n"
            f"        const std::uint32_t entry_delta = local_pc - 0x{origin:08X}u;\n"
            f"        entry_id = (entry_delta < {span}u && (entry_delta & 3u) == 0u)\n"
            f"            ? {table_name}[entry_delta >> 2u] : 0u;\n"
            "    }\n"
        )
        text = text[:lookup_start] + lookup + text[switch_pos:]
    return text, len(entries)


def transform_unit(path: Path) -> dict:
    old = read(path)
    text = old
    unit_match = re.search(r"generated_unit_(\d{4})\.cpp$", path.name)
    if not unit_match:
        raise RuntimeError(f"bad generated unit name: {path.name}")
    unit = int(unit_match.group(1))
    masks, entry_count = parse_masks(text, path)
    origin, span = parse_window(text, path)
    entries = switch_entries(text)
    mask_pcs = {
        origin + (group * 64 + bit) * 4
        for group, mask in enumerate(masks)
        for bit in range(64)
        if (mask >> bit) & 1
    }
    if set(entries) != mask_pcs:
        raise RuntimeError(f"{path.name}: pre-transform mask/switch entry set mismatch")

    has_regcache = "#define AOT_REGCACHE_SYNC_OUT()" in text
    text, jr_sites = rewrite_jr_sites(text, path)
    if jr_sites:
        text = insert_shared_jr_dispatch(text, path, origin, span, has_regcache)
    text, dense_entries = build_hot_dense_table(text, path, unit, origin, span, masks)

    write_if_changed(path, old, text)
    return {
        "unit": unit,
        "path": path.name,
        "entries": entry_count,
        "jr_sites": jr_sites,
        "hot_dense_entries": dense_entries,
        "bytes_before": len(old.encode("utf-8")),
        "bytes_after": len(text.encode("utf-8")),
    }


def validate(root: Path) -> dict:
    generated = root / "profiles" / "vcs" / "generated"
    units = sorted(generated.glob("generated_unit_*.cpp"))
    if len(units) != EXPECTED_UNITS:
        raise RuntimeError(f"expected {EXPECTED_UNITS} generated units, found {len(units)}")

    total_entries = 0
    total_v812_markers = 0
    total_v813_sites = 0
    shared_jr_units = 0
    hot_dense_units = 0
    hot_dense_entries = 0
    total_bytes = 0

    for path in units:
        text = read(path)
        unit = int(path.stem.rsplit("_", 1)[1])
        masks, entries_count = parse_masks(text, path)
        origin, span = parse_window(text, path)
        entries = switch_entries(text)
        bases_match = re.compile(BASES_RE_TEMPLATE.format(unit=f"{unit:04d}"), re.DOTALL).search(text)
        if bases_match is None:
            raise RuntimeError(f"{path.name}: canonical kEntryBases metadata missing")
        base_values = [int(x) for x in re.findall(r"\b(\d+)u\b", bases_match.group("body"))]
        expected_bases = []
        next_base = 1
        for mask in masks:
            expected_bases.append(next_base)
            next_base += mask.bit_count()
        if int(bases_match.group("count")) != len(masks) or base_values != expected_bases:
            raise RuntimeError(f"{path.name}: canonical kEntryBases metadata mismatch")
        mask_pcs = {
            origin + (group * 64 + bit) * 4
            for group, mask in enumerate(masks)
            for bit in range(64)
            if (mask >> bit) & 1
        }
        if set(entries) != mask_pcs:
            raise RuntimeError(f"{path.name}: mask/switch PC set changed")
        if len(entries) != entries_count:
            raise RuntimeError(f"{path.name}: switch/mask entry count mismatch")

        v812 = text.count(V812_JUMP_MARKER)
        v813 = text.count(V813_JR_MARKER)
        total_v812_markers += v812
        total_v813_sites += v813
        if v812 != v813:
            raise RuntimeError(f"{path.name}: every V8.12 shared JR marker must have one V8.13 fast-site marker ({v812}!={v813})")
        if v813:
            if text.count(V813_JR_BLOCK_MARKER) != 1 or text.count("LOCAL_JR_DISPATCH:") != 1:
                raise RuntimeError(f"{path.name}: shared V8.13 JR dispatcher missing/duplicated")
            if OLD_JR_RE.search(text):
                raise RuntimeError(f"{path.name}: stale V8.12 per-site local_pc dispatch remains")
            expected_window = f"const std::uint32_t local_delta_v813 = jump_target - 0x{origin:08X}u;"
            if expected_window not in text or f"local_delta_v813 >= {span}u" not in text:
                raise RuntimeError(f"{path.name}: V8.13 JR dispatcher window mismatch")
            shared_jr_units += 1

        dense = text.count(V813_DENSE_MARKER)
        if unit in HOT_UNIT_IDS:
            if dense != 1:
                raise RuntimeError(f"{path.name}: measured hot unit is missing dense V8.13 dispatch")
            table_name = f"kEntryIdsV813_recomp_unit_{unit:04d}"
            table_re = re.compile(
                rf"{re.escape(table_name)}\[(\d+)\] = \{{\n(?P<body>.*?)\n\}};",
                re.DOTALL,
            )
            tm = table_re.search(text)
            if tm is None:
                raise RuntimeError(f"{path.name}: dense table body not found")
            values = [int(x) for x in re.findall(r"\b(\d+)u\b", tm.group("body"))]
            expected_slots = (span + 3) // 4
            if int(tm.group(1)) != expected_slots or len(values) != expected_slots:
                raise RuntimeError(f"{path.name}: dense table size mismatch")
            reconstructed = {
                origin + idx * 4: value
                for idx, value in enumerate(values)
                if value != 0
            }
            if reconstructed != entries:
                raise RuntimeError(f"{path.name}: dense table is not exactly the switch entry map")
            if f"? {table_name}[entry_delta >> 2u] : 0u;" not in text:
                raise RuntimeError(f"{path.name}: hot lookup is not using the dense table")
            hot_dense_units += 1
            hot_dense_entries += len(entries)
        elif dense:
            raise RuntimeError(f"{path.name}: dense table unexpectedly emitted for cold unit")

        total_entries += entries_count
        total_bytes += len(text.encode("utf-8"))

    if total_entries != EXPECTED_ENTRIES:
        raise RuntimeError(f"entry population changed: expected {EXPECTED_ENTRIES}, found {total_entries}")
    if total_v812_markers != EXPECTED_JR_SITES:
        raise RuntimeError(f"V8.12 JR marker population changed: expected {EXPECTED_JR_SITES}, found {total_v812_markers}")
    if total_v813_sites != EXPECTED_JR_SITES:
        raise RuntimeError(f"V8.13 JR site population incomplete: expected {EXPECTED_JR_SITES}, found {total_v813_sites}")
    if hot_dense_units != len(HOT_UNIT_IDS):
        raise RuntimeError(f"hot dense unit population incomplete: {hot_dense_units}/{len(HOT_UNIT_IDS)}")

    return {
        "units": len(units),
        "entries": total_entries,
        "jr_sites": total_v813_sites,
        "shared_jr_units": shared_jr_units,
        "hot_dense_units": hot_dense_units,
        "hot_dense_entries": hot_dense_entries,
        "generated_cpp_bytes": total_bytes,
    }


def main() -> int:
    parser = argparse.ArgumentParser(description=STAGE)
    parser.add_argument("root", nargs="?", default=".")
    parser.add_argument("--check", action="store_true")
    args = parser.parse_args()
    root = Path(args.root).resolve()
    generated = root / "profiles" / "vcs" / "generated"
    if not (root / "CMakeLists.txt").is_file() or not generated.is_dir():
        raise RuntimeError(f"not PSPRecomp VCS root: {root}")

    manifest_path = generated / "v813_cpu_hotpath_manifest.json"
    if args.check:
        summary = validate(root)
        print(
            "V8.13 CHECK OK: "
            f"units={summary['units']} entries={summary['entries']} "
            f"jr_fast_sites={summary['jr_sites']} shared_jr_units={summary['shared_jr_units']} "
            f"hot_dense_units={summary['hot_dense_units']} hot_dense_entries={summary['hot_dense_entries']} "
            f"generated_cpp={summary['generated_cpp_bytes'] / 1048576:.2f} MiB"
        )
        return 0

    units = sorted(generated.glob("generated_unit_*.cpp"))
    if len(units) != EXPECTED_UNITS:
        raise RuntimeError(f"expected {EXPECTED_UNITS} generated units, found {len(units)}")
    if any('#include "generated_source_pack.hpp"' in read(path) for path in units):
        raise RuntimeError(
            "V8.12.7 source-pack format detected. V8.13 intentionally works on canonical generated C++; "
            "unpack/revert V8.12.7 before applying this CPU pass."
        )
    before = sum(p.stat().st_size for p in units)
    stats = [transform_unit(path) for path in units]
    summary = validate(root)
    after = sum(p.stat().st_size for p in units)
    manifest = {
        "stage": STAGE,
        "generated_cpp_bytes_before": before,
        "generated_cpp_bytes_after": after,
        "generated_cpp_delta": after - before,
        **summary,
        "units_changed_this_run": sum(1 for x in stats if x["bytes_before"] != x["bytes_after"]),
        "jr_sites_rewritten_this_run": sum(x["jr_sites"] for x in stats if x["bytes_before"] != x["bytes_after"]),
        "hot_units": sorted(HOT_UNIT_IDS),
    }
    manifest_path.write_text(json.dumps(manifest, indent=2) + "\n", encoding="utf-8")
    print(
        "V8.13 CPU hot path applied: "
        f"units={summary['units']} entries={summary['entries']} "
        f"jr_fast_sites={summary['jr_sites']} shared_jr_units={summary['shared_jr_units']} "
        f"hot_dense_units={summary['hot_dense_units']} hot_dense_entries={summary['hot_dense_entries']} "
        f"generated_cpp={after / 1048576:.2f} MiB delta={(after-before) / 1048576:+.2f} MiB"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
