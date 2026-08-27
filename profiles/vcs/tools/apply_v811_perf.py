#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
import re
import sys
from dataclasses import asdict, dataclass
from pathlib import Path

STAGE = "V8.11 linked local dispatch + compact entry maps"
RUNTIME_DECL_MARKER = "continue_generated_local_dispatch"
RUNTIME_IMPL_MARKER = "PSPRECOMP_V811_LOCAL_REDISPATCH"
COMPACT_MARKER = "PSPRECOMP_V811_COMPACT_DISPATCH"
LOCAL_MARKER = "PSPRECOMP_V811_LOCAL_LINK"

TABLE_RE = re.compile(
    r"static const std::uint16_t (?P<name>kEntryIds_[A-Za-z0-9_]+)\[(?P<count>\d+)\] = \{\n"
    r"(?P<body>.*?)\n\};\n",
    re.DOTALL,
)
NOP_RE = re.compile(r"(?m)^[ \t]*// nop\r?\n")


@dataclass
class UnitStats:
    path: str
    bytes_before: int
    bytes_after: int
    dense_tables: int
    dense_slots: int
    compact_metadata_bytes: int
    local_links: int
    nops_removed: int
    adjacent_gotos_removed: int


def read(path: Path) -> str:
    return path.read_text(encoding="utf-8", errors="strict")


def write_if_changed(path: Path, old: str, new: str) -> bool:
    if old == new:
        return False
    tmp = path.with_suffix(path.suffix + ".v811tmp")
    tmp.write_text(new, encoding="utf-8", newline="\n")
    tmp.replace(path)
    return True


def require_once(text: str, needle: str, path: Path, description: str) -> None:
    count = text.count(needle)
    if count != 1:
        raise RuntimeError(f"{path}: expected one {description}, found {count}")


def patch_runtime_hpp(path: Path) -> bool:
    old = read(path)
    if RUNTIME_DECL_MARKER in old:
        return False
    anchor = (
        "    [[nodiscard]] bool invoke_chained_unit(AllegrexContext &ctx, std::uint32_t unit_index,\n"
        "                                           GuestMemory::AotFastView *shared_aot_mem = nullptr);\n"
    )
    require_once(old, anchor, path, "invoke_chained_unit declaration")
    declaration = anchor + (
        "\n"
        "    // V8.11: scheduler-exact top-level local redispatch. Generated code keeps\n"
        "    // the proven 256-JR boundary, publishes ctx.pc, and asks Runtime to perform\n"
        "    // the same logical outer-dispatch accounting without paying PC->unit lookup\n"
        "    // and native function return/re-entry when it is safe to remain in-place.\n"
        "    [[nodiscard]] bool continue_generated_local_dispatch(AllegrexContext &ctx);\n"
    )
    text = old.replace(anchor, declaration, 1)
    field_anchor = "    bool chain_context_invalidated_{};\n"
    require_once(text, field_anchor, path, "chain_context_invalidated_ field")
    text = text.replace(
        field_anchor,
        field_anchor
        + "    // Enabled only inside Runtime::run's production outer loop when no outer\n"
        + "    // dispatch observer/heartbeat/progress contract would be skipped.\n"
        + "    bool local_redispatch_fastpath_active_{};\n",
        1,
    )
    return write_if_changed(path, old, text)


def patch_runtime_cpp(path: Path) -> bool:
    old = read(path)
    text = old
    if RUNTIME_IMPL_MARKER not in text:
        anchor = (
            "bool Runtime::account_dispatch_work(AllegrexContext &ctx, bool allow_preemption) {\n"
            "#if !defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)\n"
            "    if (track_dispatch_counters_) ++dispatch_work_count_;\n"
            "#endif\n"
            "    const std::uint64_t interval = g_runtime_starvation_interval_fast;\n"
            "    if (interval == 0u) return true;\n"
            "    ++dispatches_since_import_;\n"
            "    if (!allow_preemption || dispatches_since_import_ < interval) return true;\n"
            "    return run_starvation_boundary(ctx);\n"
            "}\n"
        )
        require_once(text, anchor, path, "account_dispatch_work implementation")
        impl = anchor + (
            "\n"
            "// PSPRECOMP_V811_LOCAL_REDISPATCH\n"
            "bool Runtime::continue_generated_local_dispatch(AllegrexContext &ctx) {\n"
            "#if !defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)\n"
            "    (void)ctx;\n"
            "    return false;\n"
            "#else\n"
            "    // Do not retain a nested native chain frame across a boundary that the\n"
            "    // old implementation used to unwind. Top-level only keeps chain-depth\n"
            "    // semantics identical while removing the redundant outer trampoline.\n"
            "    if (!local_redispatch_fastpath_active_ || stopped_ || chain_depth_ != 0u ||\n"
            "        chain_context_invalidated_) return false;\n"
            "    if (!account_dispatch_work(ctx, true)) return false;\n"
            "    return !stopped_ && !chain_context_invalidated_;\n"
            "#endif\n"
            "}\n"
        )
        text = text.replace(anchor, impl, 1)

    gate_marker = "PSPRECOMP_V811_LOCAL_REDISPATCH_GATE"
    if gate_marker not in text:
        anchor = (
            "        const RuntimeStarvationHook starvation = g_starvation_hook;\n"
            "        const std::uint64_t starvation_every = starvation != nullptr ? g_starvation_interval : 0u;\n"
            "        std::uint64_t executed_dispatches = 0u;\n"
        )
        require_once(text, anchor, path, "production outer-loop timing setup")
        replacement = (
            "        const RuntimeStarvationHook starvation = g_starvation_hook;\n"
            "        const std::uint64_t starvation_every = starvation != nullptr ? g_starvation_interval : 0u;\n"
            "        // PSPRECOMP_V811_LOCAL_REDISPATCH_GATE\n"
            "#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)\n"
            "        local_redispatch_fastpath_active_ =\n"
            "            progress_every == 0u && heartbeat_every == 0u &&\n"
            "            g_pre_dispatch_hook == nullptr && g_post_dispatch_hook == nullptr &&\n"
            "            std::getenv(\"PSPRECOMP_REPORT_DISPATCH_COUNT\") == nullptr;\n"
            "#else\n"
            "        local_redispatch_fastpath_active_ = false;\n"
            "#endif\n"
            "        struct LocalRedispatchResetGuard {\n"
            "            bool &flag;\n"
            "            ~LocalRedispatchResetGuard() { flag = false; }\n"
            "        } local_redispatch_reset_guard{local_redispatch_fastpath_active_};\n"
            "        std::uint64_t executed_dispatches = 0u;\n"
        )
        text = text.replace(anchor, replacement, 1)

    return write_if_changed(path, old, text)


def patch_codegen_nops(path: Path) -> bool:
    old = read(path)
    text = old
    # Source-size cleanup for future regenerations. A guest NOP has no host-side
    # semantic statement, so emitting a comment per instruction only inflates the corpus.
    text = text.replace(
        '    case psprecomp::OpcodeKind::Nop: out << "    // nop\\n"; break;\n',
        '    case psprecomp::OpcodeKind::Nop: break;\n',
    )
    return write_if_changed(path, old, text)


def patch_regcache_tool(path: Path) -> bool:
    """Teach future V8.9 reapplications that the V8.11 helper is scheduler-visible."""
    old = read(path)
    if "continue_generated_local_dispatch" in old:
        return False
    text = old
    # Expand both canonical boundary matcher and strip matcher. The patterns in
    # this tool are intentionally single-line raw strings in temp-edits-1.
    needle1 = "r'(rt\\.invoke_(?:chained_trusted_direct|chained_direct|compact_generated_leaf)<[^;\\n]+?>\\(ctx, &aot_mem\\)|rt\\.invoke_chained_call\\(ctx, &aot_mem\\))')"
    replacement1 = "r'(rt\\.invoke_(?:chained_trusted_direct|chained_direct|compact_generated_leaf)<[^;\\n]+?>\\(ctx, &aot_mem\\)|rt\\.invoke_chained_call\\(ctx, &aot_mem\\)|rt\\.continue_generated_local_dispatch\\(ctx\\))')"
    if needle1 not in text:
        raise RuntimeError(f"{path}: V8.9 CHAIN_RE anchor changed")
    text = text.replace(needle1, replacement1, 1)

    needle2 = "(rt\\.invoke_(?:chained_trusted_direct|chained_direct|compact_generated_leaf)<[^;\\n]+?>\\(ctx, &aot_mem\\)|rt\\.invoke_chained_call\\(ctx, &aot_mem\\))"
    replacement2 = "(rt\\.invoke_(?:chained_trusted_direct|chained_direct|compact_generated_leaf)<[^;\\n]+?>\\(ctx, &aot_mem\\)|rt\\.invoke_chained_call\\(ctx, &aot_mem\\)|rt\\.continue_generated_local_dispatch\\(ctx\\))"
    if needle2 not in text:
        raise RuntimeError(f"{path}: V8.9 CHAIN_WRAP_RE anchor changed")
    text = text.replace(needle2, replacement2, 1)
    return write_if_changed(path, old, text)


def parse_dense_values(body: str) -> list[int]:
    residue = re.sub(r"[0-9,\s]", "", body)
    if residue:
        raise RuntimeError(f"unexpected token in dense entry table: {residue[:40]!r}")
    return [int(x) for x in re.findall(r"\d+", body)]


def compact_table(table_name: str, values: list[int]) -> tuple[str, str, str, int]:
    nonzero = [x for x in values if x != 0]
    if nonzero != list(range(1, len(nonzero) + 1)):
        raise RuntimeError(f"{table_name}: entry ids are not monotonic 1..N")
    suffix = table_name[len("kEntryIds_") :]
    mask_name = f"kEntryMasks_{suffix}"
    base_name = f"kEntryBases_{suffix}"
    masks: list[int] = []
    bases: list[int] = []
    next_id = 1
    for group_start in range(0, len(values), 64):
        bases.append(next_id)
        mask = 0
        for bit, value in enumerate(values[group_start : group_start + 64]):
            if value:
                mask |= 1 << bit
                next_id += 1
        masks.append(mask)

    lines = [f"// {COMPACT_MARKER}: 64-slot occupancy masks + per-group base id."]
    lines.append(f"static constexpr std::uint64_t {mask_name}[{len(masks)}] = {{")
    for i in range(0, len(masks), 4):
        lines.append("    " + " ".join(f"0x{x:016X}ull," for x in masks[i : i + 4]))
    lines.append("};")
    lines.append(f"static constexpr std::uint16_t {base_name}[{len(bases)}] = {{")
    for i in range(0, len(bases), 16):
        lines.append("    " + " ".join(f"{x}u," for x in bases[i : i + 16]))
    lines.append("};")
    lines.append("")
    return "\n".join(lines), mask_name, base_name, len(masks) * 8 + len(bases) * 2


def replace_dense_lookup(text: str, table_name: str, mask_name: str, base_name: str) -> str:
    pattern = re.compile(
        r"(?P<indent>[ \t]*)entry_id = \(entry_delta < (?P<span>\d+)u && "
        r"\(entry_delta & 3u\) == 0u\) \? "
        + re.escape(table_name)
        + r"\[entry_delta >> 2u\] : 0u;"
    )
    matches = list(pattern.finditer(text))
    if len(matches) != 1:
        raise RuntimeError(f"{table_name}: expected exactly one dense lookup, found {len(matches)}")
    m = matches[0]
    indent = m.group("indent")
    span = m.group("span")
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
    return text[: m.start()] + replacement + text[m.end() :]


def add_local_round_counter(text: str) -> str:
    if "local_redispatch_rounds" in text:
        return text
    anchor = "    std::uint32_t local_transfers = 0u;\n"
    if anchor not in text:
        return text
    return text.replace(anchor, anchor + "    std::uint32_t local_redispatch_rounds = 0u;\n", 1)


def rewrite_local_boundaries(text: str) -> tuple[str, int]:
    if LOCAL_MARKER in text:
        return text, text.count(LOCAL_MARKER)
    text = add_local_round_counter(text)
    count = 0

    # V8.9 register-resident form. Synchronize the architectural context before
    # Runtime can run a scheduler hook, then reload native register locals only
    # when the same PSP context remains active.
    reg_pattern = re.compile(
        r"(?P<indent>[ \t]*)ctx\.pc = jump_target;\n"
        r"(?P=indent)AOT_REGCACHE_SYNC_OUT\(\); return;"
    )
    def reg_repl(m: re.Match[str]) -> str:
        nonlocal count
        count += 1
        i = m.group("indent")
        return (
            f"{i}ctx.pc = jump_target;\n"
            f"{i}AOT_REGCACHE_SYNC_OUT();\n"
            f"{i}// {LOCAL_MARKER}: preserve the 256-transfer scheduler boundary, skip outer trampoline.\n"
            f"{i}if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {{\n"
            f"{i}    ++local_redispatch_rounds;\n"
            f"{i}    AOT_REGCACHE_SYNC_IN();\n"
            f"{i}    local_transfers = 0u;\n"
            f"{i}    local_pc = ctx.pc;\n"
            f"{i}    entry_id = 0u;\n"
            f"{i}    goto LOCAL_DISPATCH;\n"
            f"{i}}}\n"
            f"{i}return;"
        )
    text = reg_pattern.sub(reg_repl, text)

    # Canonical/non-regcache form.
    plain_pattern = re.compile(
        r"(?P<indent>[ \t]*)ctx\.pc = jump_target;\n"
        r"(?P=indent)return;"
    )
    def plain_repl(m: re.Match[str]) -> str:
        nonlocal count
        count += 1
        i = m.group("indent")
        return (
            f"{i}ctx.pc = jump_target;\n"
            f"{i}// {LOCAL_MARKER}: preserve the 256-transfer scheduler boundary, skip outer trampoline.\n"
            f"{i}if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {{\n"
            f"{i}    ++local_redispatch_rounds;\n"
            f"{i}    local_transfers = 0u;\n"
            f"{i}    local_pc = ctx.pc;\n"
            f"{i}    entry_id = 0u;\n"
            f"{i}    goto LOCAL_DISPATCH;\n"
            f"{i}}}\n"
            f"{i}return;"
        )
    text = plain_pattern.sub(plain_repl, text)
    return text, count


def remove_adjacent_gotos(text: str) -> tuple[str, int]:
    removed = 0
    # Only remove a goto when the *very next source line* is its target label.
    # No instruction, sync, hook or declaration can be skipped by this rule.
    pattern = re.compile(
        r"(?m)^(?P<indent>[ \t]*)goto (?P<label>L_[0-9A-Fa-f]+);\r?\n"
        r"(?P=indent)(?P=label):\r?\n"
    )
    while True:
        text, n = pattern.subn(lambda m: f"{m.group('indent')}{m.group('label')}:\n", text)
        removed += n
        if n == 0:
            return text, removed


def transform_unit(path: Path) -> UnitStats:
    old = read(path)
    text = old
    dense_tables = dense_slots = compact_bytes = 0

    while True:
        m = TABLE_RE.search(text)
        if not m:
            break
        values = parse_dense_values(m.group("body"))
        declared = int(m.group("count"))
        if len(values) != declared:
            raise RuntimeError(f"{path}: {m.group('name')} declared {declared}, parsed {len(values)}")
        replacement, mask, base, estimate = compact_table(m.group("name"), values)
        table_name = m.group("name")
        text = text[: m.start()] + replacement + text[m.end() :]
        text = replace_dense_lookup(text, table_name, mask, base)
        dense_tables += 1
        dense_slots += declared
        compact_bytes += estimate

    text, local_links = rewrite_local_boundaries(text)
    nops = len(NOP_RE.findall(text))
    text = NOP_RE.sub("", text)
    text, gotos = remove_adjacent_gotos(text)
    write_if_changed(path, old, text)
    return UnitStats(
        path=path.name,
        bytes_before=len(old.encode("utf-8")),
        bytes_after=len(text.encode("utf-8")),
        dense_tables=dense_tables,
        dense_slots=dense_slots,
        compact_metadata_bytes=compact_bytes,
        local_links=local_links,
        nops_removed=nops,
        adjacent_gotos_removed=gotos,
    )



def patch_ge_renderer_clangcl(path: Path) -> bool:
    """Fix a clang-cl rejection in the fragment-state cache without changing behavior.

    MSVC accepts regs.size() as the non-type template argument inside the local
    Cache class, while clang-cl rejects referencing the enclosing local variable
    from that local class. The register list is deliberately fixed at 23 entries,
    so spelling the identical compile-time extent directly is portable.
    """
    old = read(path)
    text = old
    anchor = "constexpr std::array<std::uint8_t, 23> regs{{"
    if anchor not in text:
        raise RuntimeError(f"{path}: fragment cache register-list anchor changed")
    target = "std::array<std::uint32_t, regs.size()> values{};"
    count = text.count(target)
    if count == 0:
        # Already patched is fine. Require the portable form to exist twice so a
        # partially edited source cannot silently pass this stage.
        portable = "std::array<std::uint32_t, 23> values{};"
        if text.count(portable) < 2:
            raise RuntimeError(f"{path}: clang-cl cache extent neither original nor fully patched")
        return False
    if count != 2:
        raise RuntimeError(f"{path}: expected two regs.size() cache extents, found {count}")
    text = text.replace(target, "std::array<std::uint32_t, 23> values{};")
    return write_if_changed(path, old, text)

def patch_all(repo: Path) -> dict:
    runtime_hpp = repo / "include" / "psprecomp" / "runtime.hpp"
    runtime_cpp = repo / "src" / "runtime.cpp"
    generic_codegen = repo / "tools" / "codegen_main.cpp"
    vcs_codegen = repo / "profiles" / "vcs" / "tools" / "vcs_codegen_main.cpp"
    regcache_tool = repo / "tools" / "optimize_generated_register_residency.py"
    ge_renderer = repo / "profiles" / "vcs" / "host" / "ge_renderer.cpp"
    generated = repo / "profiles" / "vcs" / "generated"
    for p in (runtime_hpp, runtime_cpp, generic_codegen, vcs_codegen, regcache_tool, ge_renderer, generated):
        if not p.exists():
            raise FileNotFoundError(p)

    source_changes = {
        "runtime_hpp": patch_runtime_hpp(runtime_hpp),
        "runtime_cpp": patch_runtime_cpp(runtime_cpp),
        "generic_codegen": patch_codegen_nops(generic_codegen),
        "vcs_codegen": patch_codegen_nops(vcs_codegen),
        "regcache_tool": patch_regcache_tool(regcache_tool),
        "ge_renderer_clangcl": patch_ge_renderer_clangcl(ge_renderer),
    }

    units = sorted(generated.glob("generated_unit_*.cpp"))
    if len(units) < 200:
        raise RuntimeError(f"expected VCS AOT corpus, found only {len(units)} units")
    stats = [transform_unit(p) for p in units]
    before = sum(x.bytes_before for x in stats)
    after = sum(x.bytes_after for x in stats)
    manifest = {
        "stage": STAGE,
        "unit_count": len(stats),
        "source_changes": source_changes,
        "dense_tables_rewritten": sum(x.dense_tables for x in stats),
        "dense_slots_removed": sum(x.dense_slots for x in stats),
        "compact_metadata_bytes_estimate": sum(x.compact_metadata_bytes for x in stats),
        "local_link_sites": sum(x.local_links for x in stats),
        "nops_removed": sum(x.nops_removed for x in stats),
        "adjacent_gotos_removed": sum(x.adjacent_gotos_removed for x in stats),
        "generated_source_bytes_before_this_run": before,
        "generated_source_bytes_after_this_run": after,
        "generated_source_bytes_saved_this_run": before - after,
        "units": [asdict(x) for x in stats if x.dense_tables or x.nops_removed or x.adjacent_gotos_removed],
    }
    out = generated / "v811_perf_manifest.json"
    out.write_text(json.dumps(manifest, indent=2) + "\n", encoding="utf-8")
    return manifest


def check(repo: Path) -> int:
    runtime_hpp = read(repo / "include" / "psprecomp" / "runtime.hpp")
    runtime_cpp = read(repo / "src" / "runtime.cpp")
    if RUNTIME_DECL_MARKER not in runtime_hpp or RUNTIME_IMPL_MARKER not in runtime_cpp:
        print("V8.11 runtime fast path is not installed", file=sys.stderr)
        return 2
    generated = repo / "profiles" / "vcs" / "generated"
    files = sorted(generated.glob("generated_unit_*.cpp"))
    dense = local = 0
    for p in files:
        t = read(p)
        dense += t.count("static const std::uint16_t kEntryIds_")
        local += t.count(LOCAL_MARKER)
    if dense:
        print(f"V8.11 check failed: {dense} dense entry maps remain", file=sys.stderr)
        return 3
    if local == 0:
        print("V8.11 check failed: no scheduler-safe local links found", file=sys.stderr)
        return 4
    print(f"V8.11 check OK: units={len(files)} local_links={local} dense_maps=0")
    return 0


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("repo", nargs="?", type=Path,
                    default=Path(__file__).resolve().parents[3])
    ap.add_argument("--check", action="store_true")
    ns = ap.parse_args()
    repo = ns.repo.resolve()
    try:
        if ns.check:
            return check(repo)
        m = patch_all(repo)
    except Exception as exc:
        print(f"ERROR: {exc}", file=sys.stderr)
        return 1
    print(
        "V8.11 performance pass applied: "
        f"units={m['unit_count']} tables={m['dense_tables_rewritten']} "
        f"slots={m['dense_slots_removed']} local_links={m['local_link_sites']} "
        f"nops={m['nops_removed']} adjacent_gotos={m['adjacent_gotos_removed']} "
        f"source_saved={m['generated_source_bytes_saved_this_run'] / (1024*1024):.2f} MiB"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
