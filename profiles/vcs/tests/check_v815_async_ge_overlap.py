#!/usr/bin/env python3
from pathlib import Path
import subprocess
import sys
root = Path(__file__).resolve().parents[3]
script = root / "profiles/vcs/tools/apply_v815_async_ge_overlap.py"
raise SystemExit(subprocess.call([sys.executable, str(script), str(root), "--check"]))
