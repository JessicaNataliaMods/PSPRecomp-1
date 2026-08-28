#!/usr/bin/env python3
from __future__ import annotations
import argparse
from pathlib import Path

NEEDLES = ('vcs_profile', 'vcs_runtime_log', 'main', 'ge_renderer')

def main() -> int:
    ap=argparse.ArgumentParser(); ap.add_argument('build'); ns=ap.parse_args()
    build=Path(ns.build).resolve(); removed=[]
    if build.exists():
        for pattern in ('*.obj','*.o'):
            for p in build.rglob(pattern):
                low=p.name.lower()
                if any(n in low for n in NEEDLES):
                    try: p.unlink(); removed.append(str(p))
                    except FileNotFoundError: pass
        for rel in ('bin/Release/VCSNative.exe','bin/VCSNative.exe'):
            p=build/rel
            if p.exists(): p.unlink(); removed.append(str(p))
    print(f'V8.15.5 invalidation: removed={len(removed)} build={build}')
    return 0
if __name__=='__main__': raise SystemExit(main())
