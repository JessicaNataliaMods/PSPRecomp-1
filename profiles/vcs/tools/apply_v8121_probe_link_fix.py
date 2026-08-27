#!/usr/bin/env python3
from __future__ import annotations

import argparse
from pathlib import Path

MARKER = "PSPRECOMP_V8121_PROBE_TIER2_LINK_FIX"
SOURCE = "        host/vcs_tier2_superblocks.cpp\n"

def read(path: Path) -> str:
    return path.read_text(encoding="utf-8", errors="strict")

def write_if_changed(path: Path, old: str, new: str) -> bool:
    if old == new:
        return False
    tmp = path.with_suffix(path.suffix + ".v8121tmp")
    tmp.write_text(new, encoding="utf-8", newline="\n")
    tmp.replace(path)
    return True

def patch_probe_block(text: str, target: str) -> tuple[str, bool]:
    start = text.find(f"    add_executable({target}\n")
    if start < 0:
        raise RuntimeError(f"CMakeLists.txt: target {target} not found")
    end = text.find(")\n", start)
    if end < 0:
        raise RuntimeError(f"CMakeLists.txt: target {target} add_executable block is malformed")
    end += 2
    block = text[start:end]

    if "host/vcs_runtime_log.cpp" not in block:
        raise RuntimeError(f"CMakeLists.txt: {target} no longer contains vcs_runtime_log.cpp")
    if "host/vcs_tier2_superblocks.cpp" in block:
        return text, False

    needle = "        host/vcs_runtime_log.cpp\n"
    if block.count(needle) != 1:
        raise RuntimeError(
            f"CMakeLists.txt: expected one vcs_runtime_log.cpp entry in {target}, "
            f"found {block.count(needle)}"
        )
    patched = block.replace(
        needle,
        needle + SOURCE,
        1,
    )
    return text[:start] + patched + text[end:], True

def apply(repo: Path, check: bool) -> int:
    cmake = repo / "profiles" / "vcs" / "CMakeLists.txt"
    if not cmake.exists():
        raise RuntimeError(f"missing {cmake}")

    old = read(cmake)
    text = old
    changed_targets = 0
    for target in ("vcs_dx12_probe", "vcs_dx12_ge_probe"):
        text, changed = patch_probe_block(text, target)
        changed_targets += int(changed)

    # A comment outside the target source lists makes the local fix easy to identify,
    # but it is deliberately not required for correctness/idempotency.
    if MARKER not in text:
        anchor = "if(WIN32)\n    add_executable(vcs_dx12_probe\n"
        if anchor not in text:
            raise RuntimeError("CMakeLists.txt: Windows probe section anchor changed")
        text = text.replace(
            anchor,
            f"if(WIN32)\n    # {MARKER}: vcs_runtime_log uses Tier-2 state in both DX12 probes.\n"
            "    add_executable(vcs_dx12_probe\n",
            1,
        )

    for target in ("vcs_dx12_probe", "vcs_dx12_ge_probe"):
        start = text.find(f"    add_executable({target}\n")
        end = text.find(")\n", start) + 2
        block = text[start:end]
        if block.count("host/vcs_tier2_superblocks.cpp") != 1:
            raise RuntimeError(f"CMakeLists.txt: {target} Tier-2 link source check failed")

    if check:
        if text != old:
            print("V8.12.1 CHECK FAILED: fix is not fully applied")
            return 2
        print("V8.12.1 CHECK OK: both DX12 probes link vcs_tier2_superblocks.cpp")
        return 0

    changed = write_if_changed(cmake, old, text)
    if changed:
        print(
            "V8.12.1 probe-link fix applied: "
            f"targets_patched={changed_targets} "
            "source=host/vcs_tier2_superblocks.cpp"
        )
    else:
        print("V8.12.1 probe-link fix already applied")
    return 0

def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("repo", type=Path)
    ap.add_argument("--check", action="store_true")
    args = ap.parse_args()
    try:
        return apply(args.repo.resolve(), args.check)
    except Exception as exc:
        print(f"V8.12.1 ERROR: {exc}")
        return 1

if __name__ == "__main__":
    raise SystemExit(main())
