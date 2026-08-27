#!/usr/bin/env python3
from __future__ import annotations

import argparse
from pathlib import Path

MARKER = "PSPRECOMP_V8123_GE_PROBE_RUNTIME_GLOBALS"
SOURCE = "        tools/dx12_ge_probe_runtime_globals.cpp\n"


def read(path: Path) -> str:
    return path.read_text(encoding="utf-8", errors="strict")


def write_if_changed(path: Path, old: str, new: str) -> bool:
    if old == new:
        return False
    tmp = path.with_suffix(path.suffix + ".v8123tmp")
    tmp.write_text(new, encoding="utf-8", newline="\n")
    tmp.replace(path)
    return True


def ge_probe_block(text: str) -> tuple[int, int, str]:
    start = text.find("    add_executable(vcs_dx12_ge_probe\n")
    if start < 0:
        raise RuntimeError("CMakeLists.txt: target vcs_dx12_ge_probe not found")
    end = text.find(")\n", start)
    if end < 0:
        raise RuntimeError("CMakeLists.txt: vcs_dx12_ge_probe add_executable block malformed")
    end += 2
    return start, end, text[start:end]


def apply(repo: Path, check: bool) -> int:
    profile = repo / "profiles" / "vcs"
    cmake = profile / "CMakeLists.txt"
    probe_globals = profile / "tools" / "dx12_ge_probe_runtime_globals.cpp"
    if not cmake.exists():
        raise RuntimeError(f"missing {cmake}")
    if not probe_globals.exists():
        raise RuntimeError(f"missing {probe_globals}")

    globals_text = read(probe_globals)
    for symbol in ("g_draw_distance_runtime_scales", "g_draw_distance_runtime_telemetry"):
        if globals_text.count(symbol) != 1:
            raise RuntimeError(f"{probe_globals}: expected one definition of {symbol}")

    old = read(cmake)
    text = old
    start, end, block = ge_probe_block(text)

    # Do not solve a probe-only state dependency by pulling the full gameplay
    # draw-distance patch into the probe. That source owns Runtime hooks and is
    # intentionally absent from this isolated renderer test.
    if "host/vcs_draw_distance_patch.cpp" in block:
        raise RuntimeError(
            "CMakeLists.txt: vcs_dx12_ge_probe unexpectedly links the full draw-distance patch"
        )

    changed = False
    if "tools/dx12_ge_probe_runtime_globals.cpp" not in block:
        needle = "        tools/dx12_ge_probe_main.cpp\n"
        if block.count(needle) != 1:
            raise RuntimeError(
                "CMakeLists.txt: expected one dx12_ge_probe_main.cpp entry in vcs_dx12_ge_probe"
            )
        patched = block.replace(needle, needle + SOURCE, 1)
        text = text[:start] + patched + text[end:]
        changed = True

    if MARKER not in text:
        anchor = "    add_executable(vcs_dx12_ge_probe\n"
        if anchor not in text:
            raise RuntimeError("CMakeLists.txt: GE probe marker anchor changed")
        text = text.replace(
            anchor,
            f"    # {MARKER}: isolated GE probe gets neutral draw-distance runtime globals.\n"
            + anchor,
            1,
        )
        changed = True

    _, _, final_block = ge_probe_block(text)
    if final_block.count("tools/dx12_ge_probe_runtime_globals.cpp") != 1:
        raise RuntimeError("CMakeLists.txt: GE probe runtime-globals source check failed")

    if check:
        if text != old:
            print("V8.12.3 CHECK FAILED: GE probe globals fix is not fully applied")
            return 2
        print(
            "V8.12.3 CHECK OK: vcs_dx12_ge_probe links neutral "
            "draw-distance runtime globals"
        )
        return 0

    if write_if_changed(cmake, old, text):
        print(
            "V8.12.3 GE-probe globals fix applied: "
            "source=tools/dx12_ge_probe_runtime_globals.cpp"
        )
    else:
        print("V8.12.3 GE-probe globals fix already applied")
    return 0


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("repo", type=Path)
    ap.add_argument("--check", action="store_true")
    args = ap.parse_args()
    try:
        return apply(args.repo.resolve(), args.check)
    except Exception as exc:
        print(f"V8.12.3 ERROR: {exc}")
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
