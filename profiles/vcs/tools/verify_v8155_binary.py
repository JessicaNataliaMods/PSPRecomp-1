#!/usr/bin/env python3
from __future__ import annotations
import argparse
from pathlib import Path

REQUIRED=[
 b'perf-v8.15.5-hard-force-async-ge-2026-08-27',
 b'v8155 hard_force_async=',
 b'v8151 activation ge_async_env=',
 b'v8151 ge_async_worker_started=1',
 b'PSPRECOMP_V8155_ENABLE_ASYNC',
 b'PSPRECOMP_GE_ASYNC',
 b'PSPRECOMP_GE_PARALLEL_VERTEX_DECODE',
]

def main()->int:
    ap=argparse.ArgumentParser(); ap.add_argument('exe'); ns=ap.parse_args()
    p=Path(ns.exe)
    if not p.is_file(): raise SystemExit(f'V8.15.5 VERIFY FAIL: missing {p}')
    data=p.read_bytes()
    missing=[x.decode('ascii') for x in REQUIRED if x not in data]
    if missing:
        raise SystemExit('V8.15.5 VERIFY FAIL: built EXE missing markers: '+', '.join(missing))
    print(f'V8.15.5 BINARY VERIFY OK: {p} size={len(data)} bytes; async opt-in markers present')
    return 0
if __name__=='__main__': raise SystemExit(main())
