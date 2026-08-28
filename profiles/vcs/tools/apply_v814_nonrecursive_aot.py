#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
import re
from pathlib import Path

STAGE = "V8.14 non-recursive AOT link engine"
MARKER = "PSPRECOMP_V814_NONRECURSIVE_AOT"
RUNTIME_MARKER = "PSPRECOMP_V814_AOT_CONTINUATION_ENGINE"
OUTER_CLEAR_MARKER = "PSPRECOMP_V814_CLEAR_CONTINUATIONS_AT_OUTER_DISPATCH"
SCHED_MARKER = "PSPRECOMP_V814_BATCHED_SCHEDULER_CLOCK"
RETURN_HOOK_MARKER = "PSPRECOMP_V814_CONTINUATION_RETURN"
CALL_MARKER = "PSPRECOMP_V814_LINKED_CALL"
EXPECTED_UNITS = 234
POISONABLE_UNITS = {44, 197, 212, 216, 219}

CASE_RE = re.compile(r"case\s+(?P<id>\d+)u:\s+goto\s+L_(?P<pc>[0-9A-Fa-f]{8});")
UNIT_RE = re.compile(r"generated_unit_(\d{4})\.cpp$")

CALL_EXPR = (
    r"rt\.invoke_chained_trusted_direct<&recomp_unit_(?P<target_name>\d{4})_entry,\s*"
    r"(?P<target_unit>\d+)u,\s*(?P<target_entry>\d+)u,\s*"
    r"(?P<target_pc>0x[0-9A-Fa-f]+)u>\(ctx,\s*&aot_mem\)"
)

REGCACHE_CALL_RE = re.compile(
    r"(?P<indent>[ \t]*)if \(\(\[&\]\(\) \{ AOT_REGCACHE_SYNC_OUT\(\); "
    r"const bool aot_regcache_same_ = \((?P<call>" + CALL_EXPR + r")\); "
    r"if \(aot_regcache_same_\) AOT_REGCACHE_SYNC_IN\(\); else aot_regcache_valid = false; "
    r"return aot_regcache_same_; \}\(\)\) && ctx\.pc == (?P<return_pc>0x[0-9A-Fa-f]+)u\) "
    r"goto L_(?P<return_label>[0-9A-Fa-f]{8});\n"
    r"(?P=indent)AOT_REGCACHE_SYNC_OUT\(\); return;"
)

PLAIN_CALL_RE = re.compile(
    r"(?P<indent>[ \t]*)if \(\((?P<call>" + CALL_EXPR + r")\) && "
    r"ctx\.pc == (?P<return_pc>0x[0-9A-Fa-f]+)u\) goto L_(?P<return_label>[0-9A-Fa-f]{8});\n"
    r"(?P=indent)return;"
)

# V8.13 shared dynamic-JR dispatcher. This is the one safe place to recognize
# a guest return that leaves the current 16 KiB unit and resume an explicit
# continuation without growing the native C++ call stack.
JR_BLOCK_RE = re.compile(
    r"(?P<prefix>// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit\.\n"
    r"LOCAL_JR_DISPATCH:\n"
    r"    \{\n"
    r"        const std::uint32_t local_delta_v813 = jump_target - (?P<origin>0x[0-9A-Fa-f]+)u;\n"
    r"        if \(local_delta_v813 >= (?P<span>\d+)u \|\| \(local_delta_v813 & 3u\) != 0u\) \{\n"
    r"            ctx\.pc = jump_target;\n)"
    r"(?P<sync>            AOT_REGCACHE_SYNC_OUT\(\);\n)?"
    r"            return;\n"
    r"        \}\n"
    r"    \}\n"
    r"    local_pc = jump_target;\n"
    r"    entry_id = 0u;\n"
    r"    goto LOCAL_DISPATCH;"
)


def read(path: Path) -> str:
    return path.read_text(encoding="utf-8", errors="strict")


def write(path: Path, text: str) -> None:
    tmp = path.with_suffix(path.suffix + ".v814tmp")
    tmp.write_text(text, encoding="utf-8", newline="\n")
    tmp.replace(path)


def switch_entries(text: str) -> dict[int, int]:
    return {int(m.group("pc"), 16): int(m.group("id")) for m in CASE_RE.finditer(text)}


def patch_runtime_hpp(path: Path) -> bool:
    old = read(path)
    if RUNTIME_MARKER in old:
        return False
    text = old
    if "#include <array>" not in text:
        anchor = "#include <cstdint>\n"
        if anchor not in text:
            raise RuntimeError(f"{path}: cstdint include anchor missing")
        text = text.replace(anchor, "#include <array>\n" + anchor, 1)
    if "#include <cstddef>" not in text:
        anchor = "#include <cstdint>\n"
        if anchor not in text:
            raise RuntimeError(f"{path}: cstdint include anchor missing for cstddef")
        text = text.replace(anchor, "#include <cstddef>\n" + anchor, 1)

    insert_anchor = "    // Profile-selected compact generated leaves. Unlike V8.7 body inlining,\n"
    if insert_anchor not in text:
        raise RuntimeError(f"{path}: compact-leaf insertion anchor missing")
    methods = r'''    // PSPRECOMP_V814_AOT_CONTINUATION_ENGINE
    // Flatten compile-time-known generated calls into explicit guest continuations.
    // The normal path no longer nests giant generated C++ frames: the caller
    // publishes architectural registers, stores its exact return entry, and the
    // generated target is reached by a clang tail jump. A guest `jr $ra` pops the
    // continuation and tail-jumps back. Any outer Runtime/HLE boundary discards
    // the optimization stack and resumes through the canonical PC dispatcher.
    struct AotTailContinuation {
        RecompiledEntryFunction function{};
        std::uint16_t entry_id{};
        std::uint16_t reserved{};
        std::uint32_t return_pc{};
        std::uint64_t switch_generation{};
    };
    static constexpr std::size_t kAotTailContinuationCapacity = 256u;

    [[nodiscard]] PSPRECOMP_RUNTIME_FORCEINLINE bool prepare_aot_linked_call(
        AllegrexContext &ctx, RecompiledEntryFunction return_function,
        std::uint16_t return_entry_id, std::uint32_t return_pc,
        std::uint32_t target_pc) {
#if !defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
        (void)return_function; (void)return_entry_id; (void)return_pc;
        ctx.pc = target_pc;
        return false;
#else
        // Observed/instrumented runs deliberately fall back to Runtime so their
        // dispatch boundaries remain visible. Capacity exhaustion is also a
        // correctness-preserving outer-dispatch fallback, never a recursive call.
        if (g_runtime_chain_observers_active || return_function == nullptr ||
            aot_tail_continuation_depth_ >= kAotTailContinuationCapacity || stopped_ ||
            chain_context_invalidated_) {
            ctx.pc = target_pc;
            return false;
        }
        ctx.pc = target_pc;
        // Charge exactly one logical chained dispatch. Keep the hot no-boundary
        // case entirely inline: an out-of-line account_dispatch_work() here would
        // simply replace one wrapper with another at every linked call site.
        const std::uint64_t interval = g_runtime_starvation_interval_fast;
        if (interval != 0u) {
            ++dispatches_since_import_;
            if (dispatches_since_import_ >= interval && !run_starvation_boundary(ctx))
                return false;
        }
        if (stopped_ || chain_context_invalidated_) return false;
        AotTailContinuation &slot = aot_tail_continuations_[aot_tail_continuation_depth_++];
        slot.function = return_function;
        slot.entry_id = return_entry_id;
        slot.return_pc = return_pc;
        slot.switch_generation = g_runtime_thread_switch_generation_fast;
        return true;
#endif
    }

    [[nodiscard]] PSPRECOMP_RUNTIME_FORCEINLINE bool take_aot_tail_continuation(
        std::uint32_t return_pc, AotTailContinuation &out) noexcept {
#if !defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
        (void)return_pc; (void)out;
        return false;
#else
        if (aot_tail_continuation_depth_ == 0u) return false;
        const AotTailContinuation &slot = aot_tail_continuations_[aot_tail_continuation_depth_ - 1u];
        // A PSP ownership transition invalidates every native continuation. The
        // guest PC/$ra state remains authoritative, so dropping the optimization
        // stack simply falls back to normal outer dispatch.
        if (slot.switch_generation != g_runtime_thread_switch_generation_fast) {
            aot_tail_continuation_depth_ = 0u;
            return false;
        }
        if (slot.return_pc != return_pc || slot.function == nullptr) return false;
        out = slot;
        --aot_tail_continuation_depth_;
        return true;
#endif
    }

    PSPRECOMP_RUNTIME_FORCEINLINE void clear_aot_tail_continuations() noexcept {
        aot_tail_continuation_depth_ = 0u;
    }

'''
    text = text.replace(insert_anchor, methods + insert_anchor, 1)

    field_anchor = "    std::uint32_t chain_depth_{};\n"
    if field_anchor not in text:
        raise RuntimeError(f"{path}: chain depth field anchor missing")
    fields = (
        "    std::array<AotTailContinuation, kAotTailContinuationCapacity> aot_tail_continuations_{};\n"
        "    std::uint32_t aot_tail_continuation_depth_{};\n"
    )
    text = text.replace(field_anchor, fields + field_anchor, 1)
    write(path, text)
    return True


def patch_runtime_cpp(path: Path) -> bool:
    old = read(path)
    if OUTER_CLEAR_MARKER in old:
        return False
    anchor = (
        "        for (; executed_dispatches < max_dispatches && !stopped_; ++executed_dispatches) {\n"
        "            const std::uint32_t before = cpu_.pc;\n"
    )
    if anchor not in old:
        raise RuntimeError(f"{path}: production outer-loop anchor missing")
    replacement = (
        "        for (; executed_dispatches < max_dispatches && !stopped_; ++executed_dispatches) {\n"
        f"            // {OUTER_CLEAR_MARKER}\n"
        "            // Reaching Runtime is an architectural boundary. Any optimized\n"
        "            // native continuation still present must be discarded so HLE,\n"
        "            // yields, long jumps and thread switches cannot retain stale frames.\n"
        "            clear_aot_tail_continuations();\n"
        "            const std::uint32_t before = cpu_.pc;\n"
    )
    text = old.replace(anchor, replacement, 1)
    write(path, text)
    return True


def patch_scheduler(path: Path) -> bool:
    old = read(path)
    if SCHED_MARKER in old:
        return False
    anchor = '    const std::uint64_t interval = parse_environment_u64("PSPRECOMP_TIME_TICK_DISPATCHES", 256u);\n'
    if anchor not in old:
        raise RuntimeError(f"{path}: scheduler interval anchor missing")
    replacement = (
        f"    // {SCHED_MARKER}: batch the same virtual-time slope into fewer host callbacks.\n"
        "    // tick_us remains interval/4, so guest time advances at the same 0.25 us per\n"
        "    // logical dispatch; only preemption polling granularity changes (64 -> 256 us).\n"
        '    const std::uint64_t interval = parse_environment_u64("PSPRECOMP_TIME_TICK_DISPATCHES", 1024u);\n'
    )
    text = old.replace(anchor, replacement, 1)
    write(path, text)
    return True


def linked_replacement_reg(match: re.Match[str], caller_unit: int, return_entry: int) -> str:
    i = match.group("indent")
    target_unit = int(match.group("target_unit"))
    target_name = int(match.group("target_name"))
    target_entry = int(match.group("target_entry"))
    target_pc = int(match.group("target_pc"), 16)
    return_pc = int(match.group("return_pc"), 16)
    return_label = int(match.group("return_label"), 16)
    if target_unit != target_name:
        raise RuntimeError(f"target symbol/unit mismatch {target_name}!={target_unit}")
    if target_unit in POISONABLE_UNITS:
        raise RuntimeError(f"trusted call unexpectedly points at poisonable unit {target_unit}")
    if return_pc != return_label:
        raise RuntimeError(f"return label mismatch {return_pc:#x}!={return_label:#x}")
    old_block = match.group(0)
    return (
        f"{i}// {CALL_MARKER}: non-recursive generated call {caller_unit:04d}->{target_unit:04d}.\n"
        f"#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)\n"
        f"{i}AOT_REGCACHE_SYNC_OUT();\n"
        f"{i}if (rt.prepare_aot_linked_call(ctx, &recomp_unit_{caller_unit:04d}_entry, "
        f"{return_entry}u, 0x{return_pc:08X}u, 0x{target_pc:08X}u)) {{\n"
        f"#if defined(__clang__)\n"
        f"{i}    [[clang::musttail]] return recomp_unit_{target_unit:04d}_entry(rt, ctx, {target_entry}u, aot_mem);\n"
        f"#else\n"
        f"{i}    recomp_unit_{target_unit:04d}_entry(rt, ctx, {target_entry}u, aot_mem); return;\n"
        f"#endif\n"
        f"{i}}}\n"
        f"{i}return;\n"
        f"#else\n"
        f"{old_block}\n"
        f"#endif"
    )


def linked_replacement_plain(match: re.Match[str], caller_unit: int, return_entry: int) -> str:
    i = match.group("indent")
    target_unit = int(match.group("target_unit"))
    target_name = int(match.group("target_name"))
    target_entry = int(match.group("target_entry"))
    target_pc = int(match.group("target_pc"), 16)
    return_pc = int(match.group("return_pc"), 16)
    return_label = int(match.group("return_label"), 16)
    if target_unit != target_name or return_pc != return_label or target_unit in POISONABLE_UNITS:
        raise RuntimeError("plain trusted-call metadata mismatch")
    old_block = match.group(0)
    return (
        f"{i}// {CALL_MARKER}: non-recursive generated call {caller_unit:04d}->{target_unit:04d}.\n"
        f"#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)\n"
        f"{i}if (rt.prepare_aot_linked_call(ctx, &recomp_unit_{caller_unit:04d}_entry, "
        f"{return_entry}u, 0x{return_pc:08X}u, 0x{target_pc:08X}u)) {{\n"
        f"#if defined(__clang__)\n"
        f"{i}    [[clang::musttail]] return recomp_unit_{target_unit:04d}_entry(rt, ctx, {target_entry}u, aot_mem);\n"
        f"#else\n"
        f"{i}    recomp_unit_{target_unit:04d}_entry(rt, ctx, {target_entry}u, aot_mem); return;\n"
        f"#endif\n"
        f"{i}}}\n"
        f"{i}return;\n"
        f"#else\n"
        f"{old_block}\n"
        f"#endif"
    )


def patch_return_hook(text: str, path: Path) -> tuple[str, int]:
    if RETURN_HOOK_MARKER in text:
        return text, text.count(RETURN_HOOK_MARKER)
    match = JR_BLOCK_RE.search(text)
    if match is None:
        # Some generated units contain no dynamic JR boundary and therefore no
        # V8.13 shared block. They cannot pop a continuation locally; any return
        # from them already goes through Runtime and safely drops the fast stack.
        return text, 0
    sync = match.group("sync") or ""
    replacement = (
        match.group("prefix") + sync +
        f"            // {RETURN_HOOK_MARKER}\n"
        "            Runtime::AotTailContinuation aot_cont_v814{};\n"
        "            if (rt.take_aot_tail_continuation(jump_target, aot_cont_v814)) {\n"
        "#if defined(__clang__) && defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)\n"
        "                [[clang::musttail]] return aot_cont_v814.function(\n"
        "                    rt, ctx, aot_cont_v814.entry_id, aot_mem);\n"
        "#else\n"
        "                aot_cont_v814.function(rt, ctx, aot_cont_v814.entry_id, aot_mem); return;\n"
        "#endif\n"
        "            }\n"
        "            return;\n"
        "        }\n"
        "    }\n"
        "    local_pc = jump_target;\n"
        "    entry_id = 0u;\n"
        "    goto LOCAL_DISPATCH;"
    )
    text = text[:match.start()] + replacement + text[match.end():]
    return text, 1


def transform_generated(path: Path) -> tuple[str, dict]:
    old = read(path)
    munit = UNIT_RE.search(path.name)
    if not munit:
        raise RuntimeError(f"bad generated unit filename: {path.name}")
    unit = int(munit.group(1))
    entries = switch_entries(old)
    if not entries:
        raise RuntimeError(f"{path.name}: generated entry switch missing")

    if CALL_MARKER in old:
        text, return_hooks = patch_return_hook(old, path)
        return text, {
            "unit": unit,
            "linked_calls": old.count(CALL_MARKER),
            "return_hooks": return_hooks,
            "changed": text != old,
        }

    text = old
    linked = 0

    def reg_repl(match: re.Match[str]) -> str:
        nonlocal linked
        ret = int(match.group("return_pc"), 16)
        if ret not in entries:
            raise RuntimeError(f"{path.name}: linked return PC 0x{ret:08X} missing from entry switch")
        linked += 1
        return linked_replacement_reg(match, unit, entries[ret])

    text = REGCACHE_CALL_RE.sub(reg_repl, text)

    def plain_repl(match: re.Match[str]) -> str:
        nonlocal linked
        ret = int(match.group("return_pc"), 16)
        if ret not in entries:
            raise RuntimeError(f"{path.name}: plain linked return PC 0x{ret:08X} missing from entry switch")
        linked += 1
        return linked_replacement_plain(match, unit, entries[ret])

    text = PLAIN_CALL_RE.sub(plain_repl, text)
    text, return_hooks = patch_return_hook(text, path)
    return text, {"unit": unit, "linked_calls": linked, "return_hooks": return_hooks, "changed": text != old}


def patch_all_generated(root: Path) -> dict:
    generated = root / "profiles" / "vcs" / "generated"
    units = sorted(generated.glob("generated_unit_*.cpp"))
    if len(units) != EXPECTED_UNITS:
        raise RuntimeError(f"expected {EXPECTED_UNITS} generated units, found {len(units)}")
    if not any("PSPRECOMP_V813_SHARED_JR_DISPATCH" in read(p) for p in units):
        raise RuntimeError("V8.13.1 shared JR dispatch is required before V8.14")

    staged: list[tuple[Path, str, dict]] = []
    total_linked = 0
    total_hooks = 0
    for p in units:
        new, stat = transform_generated(p)
        staged.append((p, new, stat))
        total_linked += stat["linked_calls"]
        total_hooks += stat["return_hooks"]

    # A pattern miss should never silently ship another no-op performance pass.
    # The current VCS corpus contains tens of thousands of trusted chain sites;
    # requiring a substantial matched population makes source drift fail loudly.
    if total_linked < 1000:
        raise RuntimeError(
            f"V8.14 matched only {total_linked} resumable trusted calls; expected >=1000. "
            "Generated call shape changed; refusing a cosmetic/no-op pass."
        )
    if total_hooks < 150:
        raise RuntimeError(f"V8.14 found only {total_hooks} shared JR return hooks; expected >=150")

    for p, new, _ in staged:
        if new != read(p):
            write(p, new)
    return {
        "units": len(units),
        "linked_calls": total_linked,
        "return_hook_units": total_hooks,
        "generated_cpp_bytes": sum(p.stat().st_size for p in units),
    }


def validate(root: Path) -> dict:
    hpp = read(root / "include" / "psprecomp" / "runtime.hpp")
    cpp = read(root / "src" / "runtime.cpp")
    profile = read(root / "profiles" / "vcs" / "host" / "vcs_profile.cpp")
    if RUNTIME_MARKER not in hpp or "prepare_aot_linked_call" not in hpp or "take_aot_tail_continuation" not in hpp:
        raise RuntimeError("V8.14 Runtime continuation engine missing")
    if OUTER_CLEAR_MARKER not in cpp or "clear_aot_tail_continuations();" not in cpp:
        raise RuntimeError("V8.14 outer-dispatch continuation reset missing")
    if SCHED_MARKER not in profile or 'PSPRECOMP_TIME_TICK_DISPATCHES", 1024u' not in profile:
        raise RuntimeError("V8.14 batched scheduler default missing")

    generated = root / "profiles" / "vcs" / "generated"
    units = sorted(generated.glob("generated_unit_*.cpp"))
    if len(units) != EXPECTED_UNITS:
        raise RuntimeError(f"expected {EXPECTED_UNITS} units, found {len(units)}")
    calls = 0
    hooks = 0
    for p in units:
        text = read(p)
        calls += text.count(CALL_MARKER)
        hooks += text.count(RETURN_HOOK_MARKER)
        if CALL_MARKER in text and "prepare_aot_linked_call" not in text:
            raise RuntimeError(f"{p.name}: linked-call marker without prepare helper")
        if RETURN_HOOK_MARKER in text and "take_aot_tail_continuation" not in text:
            raise RuntimeError(f"{p.name}: return hook marker without continuation pop")
    if calls < 1000:
        raise RuntimeError(f"V8.14 linked call population too small: {calls}")
    if hooks < 150:
        raise RuntimeError(f"V8.14 return-hook unit population too small: {hooks}")
    return {"units": len(units), "linked_calls": calls, "return_hook_units": hooks,
            "generated_cpp_bytes": sum(p.stat().st_size for p in units)}


def main() -> int:
    ap = argparse.ArgumentParser(description=STAGE)
    ap.add_argument("root", nargs="?", default=".")
    ap.add_argument("--check", action="store_true")
    args = ap.parse_args()
    root = Path(args.root).resolve()
    if not (root / "CMakeLists.txt").is_file():
        raise RuntimeError(f"not PSPRecomp root: {root}")

    if args.check:
        s = validate(root)
        print(f"V8.14 CHECK OK: units={s['units']} linked_calls={s['linked_calls']} "
              f"return_hook_units={s['return_hook_units']} generated_cpp={s['generated_cpp_bytes']/1048576:.2f} MiB")
        return 0

    patch_runtime_hpp(root / "include" / "psprecomp" / "runtime.hpp")
    patch_runtime_cpp(root / "src" / "runtime.cpp")
    patch_scheduler(root / "profiles" / "vcs" / "host" / "vcs_profile.cpp")
    s = patch_all_generated(root)
    manifest = {
        "stage": STAGE,
        **s,
        "scheduler_dispatch_interval_default": 1024,
        "scheduler_tick_us_default": 256,
        "native_call_stack_flattened": True,
    }
    manifest_path = root / "profiles" / "vcs" / "generated" / "v814_nonrecursive_aot_manifest.json"
    manifest_path.write_text(json.dumps(manifest, indent=2) + "\n", encoding="utf-8")
    validate(root)
    print(f"V8.14 non-recursive AOT applied: units={s['units']} linked_calls={s['linked_calls']} "
          f"return_hook_units={s['return_hook_units']} scheduler=1024/256us "
          f"generated_cpp={s['generated_cpp_bytes']/1048576:.2f} MiB")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
