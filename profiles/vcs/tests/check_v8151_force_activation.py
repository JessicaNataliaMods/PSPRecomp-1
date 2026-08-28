#!/usr/bin/env python3
from pathlib import Path
import subprocess, sys
root=Path(__file__).resolve().parents[3]
script=root/'profiles/vcs/tools/apply_v8151_force_activation.py'
raise SystemExit(subprocess.call([sys.executable,str(script),str(root),'--check']))
