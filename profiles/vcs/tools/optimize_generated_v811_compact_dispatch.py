#!/usr/bin/env python3
"""VCS V8.11: compact generated AOT entry dispatch and harmless source noise.

The checked-in VCS corpus currently emits one dense uint16_t PC->entry-id table
per 16 KiB generated unit.  Most slots are zero.  This pass replaces each dense
map with 64-bit occupancy masks plus a base id per 64-slot group.  Entry ids are
assigned in increasing-PC order by the code generator, so the original id is:

    group_base + popcount(mask bits preceding slot)

This preserves the exact accepted PC set while shrinking the hot dispatch
metadata by roughly an order of magnitude.  It also removes standalone NOP
comments and gotos that jump to the immediately following label; both are
semantically inert and only inflate the generated source.

The pass is intentionally textual and conservative.  A table is changed only
when its values are proven to be a monotonic 1..N entry-id sequence and the
corresponding lookup expression is found exactly once.
"""
from __future__ import annotations

import argparse
import json
import re
import sys
from dataclasses import dataclass, asdict
from pathlib import Path

TABLE_RE = re.compile(
    r"static const std::uint16_t (?P<name>kEntryIds_[A-Za-z0-9_]+)\[(?P<count>\d+)\] = \{\n"
    r"(?P<body>.*?)\n\};\n",
    re.DOTALL,
)
NOP_RE = re.compile(r"(?m)^[ \t]*// nop\r?\n")
ADJACENT_GOTO_RE = re.compile(r"(?m)^(?P<indent>[ \t]*)goto (L_[0-9A-Fa-f]+);\r?\n(?P=indent)?(?P<label>L_[0-9A-Fa-f]+):\r?$", re.MULTILINE)


@dataclass
class FileStats:
    path: str
    bytes_before: int
    bytes_after: int
    dense_tables: int
    dense_slots: int
    compact_bytes_estimate: int
    nops_removed: int
    adjacent_gotos_removed: int


def _numbers(body: str) -> list[int]:
    # Dense table bodies contain only decimal ids, commas and whitespace.
    stripped = re.sub(r"[0-9,\s]", "", body)
    if stripped:
        raise ValueError(f"unexpected token(s) in dense entry table: {stripped[:40]!r}")
    return [int(x) for x in re.findall(r"\d+", body)]


def _validate_ids(values: list[int], path: Path, table_name: str) -> None:
    nonzero = [value for value in values if value != 0]
    expected = list(range(1, len(nonzero) + 1))
    if nonzero != expected:
        raise RuntimeError(
            f"{path}: {table_name} entry ids are not monotonic 1..N; refusing unsafe rewrite"
        )


def _format_u64_array(name: str, values: list[int]) -> str:
    lines = [f"static constexpr std::uint64_t {name}[{len(values)}] = {{"]
    for i in range(0, len(values), 4):
        chunk = values[i : i + 4]
        lines.append("    " + " ".join(f"0x{value:016X}ull," for value in chunk))
    lines.append("};")
    return "\n".join(lines)


def _format_u16_array(name: str, values: list[int]) -> str:
    lines = [f"static constexpr std::uint16_t {name}[{len(values)}] = {{"]
    for i in range(0, len(values), 16):
        chunk = values[i : i + 16]
        lines.append("    " + " ".join(f"{value}u," for value in chunk))
    lines.append("};")
    return "\n".join(lines)


def _compact_table(table_name: str, values: list[int]) -> tuple[str, str, str, int]:
    suffix = table_name[len("kEntryIds_") :]
    mask_name = f"kEntryMasks_{suffix}"
    base_name = f"kEntryBases_{suffix}"
    groups = (len(values) + 63) // 64
    masks: list[int] = []
    bases: list[int] = []
    next_id = 1
    for group in range(groups):
        bases.append(next_id)
        mask = 0
        start = group * 64
        for bit in range(64):
            slot = start + bit
            if slot >= len(values):
                break
            if values[slot] != 0:
                mask |= 1 << bit
                next_id += 1
        masks.append(mask)

    text = (
        "// PSPRECOMP_V811_COMPACT_DISPATCH: sparse PC->entry map kept cache-resident.\n"
        + _format_u64_array(mask_name, masks)
        + "\n"
        + _format_u16_array(base_name, bases)
        + "\n"
    )
    estimate = len(masks) * 8 + len(bases) * 2
    return text, mask_name, base_name, estimate


def _replace_lookup(text: str, table_name: str, mask_name: str, base_name: str) -> tuple[str, int]:
    # Capture the exact dense span from the generated expression instead of
    # assuming a full 16 KiB unit.  Some edge units are shorter.
    pattern = re.compile(
        r"(?P<indent>[ \t]*)entry_id = \(entry_delta < (?P<span>\d+)u && "
        r"\(entry_delta & 3u\) == 0u\) \? "
        + re.escape(table_name)
        + r"\[entry_delta >> 2u\] : 0u;"
    )
    matches = list(pattern.finditer(text))
    if len(matches) != 1:
        raise RuntimeError(
            f"{table_name}: expected exactly one dense lookup, found {len(matches)}"
        )
    match = matches[0]
    indent = match.group("indent")
    span = match.group("span")
    replacement = (
        f"{indent}entry_id = 0u;\n"
        f"{indent}if (entry_delta < {span}u && (entry_delta & 3u) == 0u) {{\n"
        f"{indent}    const std::uint32_t entry_slot = entry_delta >> 2u;\n"
        f"{indent}    const std::uint32_t entry_group = entry_slot >> 6u;\n"
        f"{indent}    const std::uint64_t entry_mask = {mask_name}[entry_group];\n"
        f"{indent}    const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);\n"
        f"{indent}    if ((entry_mask & entry_bit) != 0u) {{\n"
        f"{indent}        entry_id = static_cast<std::uint16_t>(\n"
        f"{indent}            {base_name}[entry_group] +\n"
        f"{indent}            std::popcount(entry_mask & (entry_bit - 1ull)));\n"
        f"{indent}    }}\n"
        f"{indent}}}"
    )
    return text[: match.start()] + replacement + text[match.end() :], 1


def _remove_adjacent_gotos(text: str) -> tuple[str, int]:
    # Only remove a goto when its target is literally the next source label and
    # indentation matches.  Repeat because removing one can expose another.
    removed = 0
    while True:
        changed = False
        out: list[str] = []
        pos = 0
        # Simpler line-wise rule avoids regex ambiguity around indentation.
        lines = text.splitlines(keepends=True)
        new_lines: list[str] = []
        i = 0
        while i < len(lines):
            line = lines[i]
            if i + 1 < len(lines):
                m = re.fullmatch(r"([ \t]*)goto (L_[0-9A-Fa-f]+);\r?\n?", line)
                n = re.fullmatch(r"([ \t]*)(L_[0-9A-Fa-f]+):\r?\n?", lines[i + 1])
                if m and n and m.group(2) == n.group(2):
                    removed += 1
                    changed = True
                    i += 1
                    continue
            new_lines.append(line)
            i += 1
        text = "".join(new_lines)
        if not changed:
            return text, removed


def transform(path: Path, *, write: bool) -> FileStats:
    original = path.read_text(encoding="utf-8")
    text = original
    dense_tables = 0
    dense_slots = 0
    compact_bytes = 0

    # Process one match at a time because replacing a table shifts offsets.
    while True:
        match = TABLE_RE.search(text)
        if not match:
            break
        table_name = match.group("name")
        count = int(match.group("count"))
        values = _numbers(match.group("body"))
        if len(values) != count:
            raise RuntimeError(
                f"{path}: {table_name} declares {count} entries but contains {len(values)}"
            )
        _validate_ids(values, path, table_name)
        compact, mask_name, base_name, estimate = _compact_table(table_name, values)
        text = text[: match.start()] + compact + text[match.end() :]
        text, _ = _replace_lookup(text, table_name, mask_name, base_name)
        dense_tables += 1
        dense_slots += count
        compact_bytes += estimate

    nops = len(NOP_RE.findall(text))
    text = NOP_RE.sub("", text)
    text, adjacent = _remove_adjacent_gotos(text)

    if write and text != original:
        tmp = path.with_suffix(path.suffix + ".tmp")
        tmp.write_text(text, encoding="utf-8", newline="\n")
        tmp.replace(path)

    return FileStats(
        path=path.name,
        bytes_before=len(original.encode("utf-8")),
        bytes_after=len(text.encode("utf-8")),
        dense_tables=dense_tables,
        dense_slots=dense_slots,
        compact_bytes_estimate=compact_bytes,
        nops_removed=nops,
        adjacent_gotos_removed=adjacent,
    )


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("generated", type=Path, help="profiles/vcs/generated directory")
    parser.add_argument("--check", action="store_true", help="validate only; do not write")
    parser.add_argument("--stats", type=Path, help="optional JSON manifest path")
    args = parser.parse_args()

    generated = args.generated.resolve()
    files = sorted(generated.glob("generated_unit_*.cpp"))
    if not files:
        print(f"ERROR: no generated_unit_*.cpp files under {generated}", file=sys.stderr)
        return 2

    stats: list[FileStats] = []
    try:
        for path in files:
            stats.append(transform(path, write=not args.check))
    except (OSError, ValueError, RuntimeError) as exc:
        print(f"ERROR: {exc}", file=sys.stderr)
        return 3

    before = sum(s.bytes_before for s in stats)
    after = sum(s.bytes_after for s in stats)
    tables = sum(s.dense_tables for s in stats)
    slots = sum(s.dense_slots for s in stats)
    compact = sum(s.compact_bytes_estimate for s in stats)
    nops = sum(s.nops_removed for s in stats)
    adjacent = sum(s.adjacent_gotos_removed for s in stats)

    manifest = {
        "stage": "V8.11 compact AOT dispatch",
        "files": len(stats),
        "dense_tables_rewritten": tables,
        "dense_slots_removed": slots,
        "compact_dispatch_bytes_estimate": compact,
        "nops_removed": nops,
        "adjacent_gotos_removed": adjacent,
        "source_bytes_before": before,
        "source_bytes_after": after,
        "source_bytes_saved": before - after,
        "details": [asdict(s) for s in stats if s.dense_tables or s.nops_removed or s.adjacent_gotos_removed],
    }
    if args.stats:
        args.stats.parent.mkdir(parents=True, exist_ok=True)
        args.stats.write_text(json.dumps(manifest, indent=2) + "\n", encoding="utf-8")

    mode = "CHECK" if args.check else "APPLY"
    print(
        f"[V8.11 {mode}] files={len(stats)} tables={tables} slots={slots} "
        f"nops={nops} adjacent_gotos={adjacent} "
        f"source={before / (1024*1024):.2f}MiB->{after / (1024*1024):.2f}MiB "
        f"saved={(before-after) / (1024*1024):.2f}MiB"
    )
    if args.check and tables != 0:
        print("ERROR: dense entry tables remain; run without --check first", file=sys.stderr)
        return 4
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
