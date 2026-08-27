#!/usr/bin/env python3
from __future__ import annotations
import json
import pathlib
import sys

ROOT = pathlib.Path(__file__).resolve().parents[3]
GEN = ROOT / "profiles" / "vcs" / "generated"
manifest = GEN / "v811_perf_manifest.json"
errors=[]
if not manifest.exists(): errors.append("v811 manifest missing")
else:
    data=json.loads(manifest.read_text(encoding="utf-8"))
    if data.get("unit_count",0) < 200: errors.append("unexpectedly small AOT corpus")
for p in sorted(GEN.glob("generated_unit_*.cpp")):
    t=p.read_text(encoding="utf-8",errors="ignore")
    if "static const std::uint16_t kEntryIds_" in t: errors.append(f"dense map remains: {p.name}")
if "continue_generated_local_dispatch" not in (ROOT/"include"/"psprecomp"/"runtime.hpp").read_text(encoding="utf-8"):
    errors.append("runtime declaration missing")
if "PSPRECOMP_V811_LOCAL_REDISPATCH" not in (ROOT/"src"/"runtime.cpp").read_text(encoding="utf-8"):
    errors.append("runtime implementation missing")
if errors:
    print("V8.11 CHECK FAILED")
    for e in errors[:20]: print(" -",e)
    sys.exit(1)
print("V8.11 CHECK OK")
