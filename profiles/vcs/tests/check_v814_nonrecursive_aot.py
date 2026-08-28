#!/usr/bin/env python3
from pathlib import Path
import subprocess, sys
root = Path(__file__).resolve().parents[3]
tool = root / 'profiles' / 'vcs' / 'tools' / 'apply_v814_nonrecursive_aot.py'
raise SystemExit(subprocess.call([sys.executable, str(tool), str(root), '--check']))
