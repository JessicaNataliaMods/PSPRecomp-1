#!/usr/bin/env python3
from __future__ import annotations

import pathlib
import sys

ROOT = pathlib.Path(__file__).resolve().parents[3]
TOOLS = ROOT / "profiles" / "vcs" / "tools"
sys.path.insert(0, str(TOOLS))

try:
    import apply_v812_code_density as v812
    summary = v812.validate(ROOT)
except Exception as exc:
    print("V8.12 CHECK FAILED")
    print(" -", exc)
    raise SystemExit(1)

print(
    "V8.12 CHECK OK: "
    f"units={summary['units']} "
    f"entries={summary['entry_count']} "
    f"shared_jumps={summary['shared_local_jumps']} "
    f"compact_registration_units={summary['compact_registration_units']} "
    f"generated_cpp={summary['generated_cpp_bytes'] / (1024*1024):.2f} MiB"
)
