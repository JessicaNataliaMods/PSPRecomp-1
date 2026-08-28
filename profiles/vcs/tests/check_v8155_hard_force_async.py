#!/usr/bin/env python3
from pathlib import Path
import sys

root = Path(__file__).resolve().parents[3]
sys.path.insert(0, str(root / 'profiles' / 'vcs' / 'tools'))
import apply_v8155_hard_force_async as v8155

v8155.check(root)
print('V8.15.5 regression CHECK OK')
