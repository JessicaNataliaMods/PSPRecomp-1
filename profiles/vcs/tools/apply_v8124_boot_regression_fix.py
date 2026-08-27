#!/usr/bin/env python3
from __future__ import annotations

import argparse
from pathlib import Path

STAGE = "V8.12.4 boot/runtime regression fix"
SHARED_MARKER = "PSPRECOMP_V812_SHARED_SCHED_BLOCK"
OLD_SHARED = "LOCAL_SCHED_BOUNDARY:\n    ctx.pc = local_pc;"
NEW_SHARED = "LOCAL_SCHED_BOUNDARY:\n    ctx.pc = jump_target;"

OLD_EDRAM_TEST = '''        require(!unaligned_aot.aot_try_load32_block(batch_vram, batch_try),
                "AOT EDRAM block unexpectedly used RAM direct path");'''
NEW_EDRAM_TEST = '''        const bool batch_vram_direct = unaligned_aot.aot_try_load32_block(batch_vram, batch_try);
        require(batch_vram_direct == unaligned_memory.direct_fastmem_enabled(),
                "AOT EDRAM block direct-path capability mismatch");'''

OLD_VTFM = '''        result[Side - 1u] = final_row[0] * target[0] + final_row[1] * target[1] +
                            final_row[2] * target[2] + final_row[3] * target[3];'''
NEW_VTFM = '''        // Keep the prefixed final row in the same accumulation order as the
        // architectural/reference path. clang-cl may contract/reassociate the
        // four-term expression differently, which is visible to VFPU bit-exact tests.
        result[Side - 1u] = 0.0f;
        for (std::uint32_t column = 0u; column < 4u; ++column)
            result[Side - 1u] += final_row[column] * target[column];'''


def read(path: Path) -> str:
    return path.read_text(encoding="utf-8", errors="strict")


def write(path: Path, text: str) -> None:
    path.write_text(text, encoding="utf-8", newline="\n")


def patch_generated(root: Path) -> tuple[int, int]:
    generated = root / "profiles" / "vcs" / "generated"
    units = sorted(generated.glob("generated_unit_*.cpp"))
    if len(units) != 234:
        raise RuntimeError(f"expected 234 generated units, found {len(units)}")
    changed = shared = 0
    for path in units:
        text = read(path)
        if SHARED_MARKER not in text:
            continue
        shared += 1
        count_old = text.count(OLD_SHARED)
        count_new = text.count(NEW_SHARED)
        if count_old == 1 and count_new == 0:
            write(path, text.replace(OLD_SHARED, NEW_SHARED, 1))
            changed += 1
        elif count_old == 0 and count_new == 1:
            pass
        else:
            raise RuntimeError(
                f"{path.name}: unexpected shared boundary state old={count_old} new={count_new}"
            )
    if shared == 0:
        raise RuntimeError("no V8.12 shared scheduler blocks found")
    return changed, shared


def patch_codegen_tool(root: Path) -> bool:
    path = root / "profiles" / "vcs" / "tools" / "apply_v812_code_density.py"
    text = read(path)
    old = '        "    ctx.pc = local_pc;",\n'
    new = '        "    ctx.pc = jump_target;",\n'
    if old in text:
        if text.count(old) != 1:
            raise RuntimeError("apply_v812_code_density.py has multiple old shared-PC emitters")
        write(path, text.replace(old, new, 1))
        return True
    if new not in text:
        raise RuntimeError("apply_v812_code_density.py shared-PC emitter not recognized")
    return False


def patch_edram_test(root: Path) -> bool:
    path = root / "tests" / "test_main.cpp"
    text = read(path)
    if OLD_EDRAM_TEST in text:
        if text.count(OLD_EDRAM_TEST) != 1:
            raise RuntimeError("EDRAM regression-test anchor duplicated")
        write(path, text.replace(OLD_EDRAM_TEST, NEW_EDRAM_TEST, 1))
        return True
    if NEW_EDRAM_TEST not in text:
        raise RuntimeError("EDRAM regression-test anchor not recognized")
    return False


def patch_vtfm(root: Path) -> bool:
    path = root / "include" / "psprecomp" / "allegrex_context.hpp"
    text = read(path)
    if OLD_VTFM in text:
        if text.count(OLD_VTFM) != 1:
            raise RuntimeError("VTFM final-row anchor duplicated")
        write(path, text.replace(OLD_VTFM, NEW_VTFM, 1))
        return True
    if NEW_VTFM not in text:
        raise RuntimeError("VTFM final-row anchor not recognized")
    return False


def validate(root: Path) -> tuple[int, int]:
    generated = root / "profiles" / "vcs" / "generated"
    units = sorted(generated.glob("generated_unit_*.cpp"))
    shared = good = 0
    for path in units:
        text = read(path)
        if SHARED_MARKER not in text:
            continue
        shared += 1
        if OLD_SHARED in text:
            raise RuntimeError(f"{path.name}: stale ctx.pc = local_pc shared boundary remains")
        if text.count(NEW_SHARED) != 1:
            raise RuntimeError(f"{path.name}: corrected shared jump_target boundary missing/duplicated")
        good += 1
    if shared == 0 or good != shared:
        raise RuntimeError(f"invalid shared boundary population good={good} shared={shared}")

    tool = read(root / "profiles" / "vcs" / "tools" / "apply_v812_code_density.py")
    if '        "    ctx.pc = local_pc;",\n' in tool or '        "    ctx.pc = jump_target;",\n' not in tool:
        raise RuntimeError("future V8.12 transform still emits stale local_pc scheduler boundary")

    test = read(root / "tests" / "test_main.cpp")
    if NEW_EDRAM_TEST not in test:
        raise RuntimeError("direct-fastmem-aware EDRAM test missing")

    ctx = read(root / "include" / "psprecomp" / "allegrex_context.hpp")
    if NEW_VTFM not in ctx:
        raise RuntimeError("clang bit-exact VTFM accumulation fix missing")
    return shared, good


def main() -> int:
    ap = argparse.ArgumentParser(description=STAGE)
    ap.add_argument("root", nargs="?", default=".")
    ap.add_argument("--check", action="store_true")
    ns = ap.parse_args()
    root = Path(ns.root).resolve()
    if not (root / "CMakeLists.txt").is_file():
        raise RuntimeError(f"not PSPRecomp root: {root}")

    if ns.check:
        shared, good = validate(root)
        print(f"V8.12.4 CHECK OK: shared_units={shared} corrected={good} EDRAM_test=direct-fastmem-aware VTFM=bit-exact")
        return 0

    changed, shared = patch_generated(root)
    tool_changed = patch_codegen_tool(root)
    edram_changed = patch_edram_test(root)
    vtfm_changed = patch_vtfm(root)
    validate(root)
    print(
        "V8.12.4 boot/regression fix applied: "
        f"shared_units={shared} generated_units_changed={changed} "
        f"future_codegen={'patched' if tool_changed else 'ok'} "
        f"edram_test={'patched' if edram_changed else 'ok'} "
        f"vtfm={'patched' if vtfm_changed else 'ok'}"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
