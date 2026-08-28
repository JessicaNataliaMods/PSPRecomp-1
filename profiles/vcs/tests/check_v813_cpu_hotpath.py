#!/usr/bin/env python3
from __future__ import annotations

import pathlib
import sys

ROOT = pathlib.Path(__file__).resolve().parents[3]
TOOLS = ROOT / "profiles" / "vcs" / "tools"
sys.path.insert(0, str(TOOLS))

try:
    import apply_v813_cpu_hotpath as v813
    summary = v813.validate(ROOT)
except Exception as exc:
    print("V8.13 CHECK FAILED")
    print(" -", exc)
    raise SystemExit(1)

print(
    "V8.13 CHECK OK: "
    f"units={summary['units']} entries={summary['entries']} "
    f"jr_fast_sites={summary['jr_sites']} shared_jr_units={summary['shared_jr_units']} "
    f"hot_dense_units={summary['hot_dense_units']} hot_dense_entries={summary['hot_dense_entries']} "
    f"generated_cpp={summary['generated_cpp_bytes'] / (1024*1024):.2f} MiB"
)
