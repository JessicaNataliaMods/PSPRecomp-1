#!/usr/bin/env python3
from pathlib import Path
import re
import sys

root = Path(__file__).resolve().parents[3]
profile = root / 'profiles' / 'vcs'
cmake_path = profile / 'CMakeLists.txt'
host = profile / 'host'
canonical = [
    'host/vcs_tier2_cluster_entity.cpp',
    'host/vcs_tier2_cluster_geometry.cpp',
    'host/vcs_tier2_cluster_boundary.cpp',
    'host/vcs_tier2_cluster_matrix.cpp',
    'host/vcs_tier2_cluster_physics.cpp',
    'host/vcs_tier2_cluster_world.cpp',
    'host/vcs_tier2_cluster_edge43.cpp',
]

def fail(msg: str) -> None:
    print('FAIL:', msg)
    raise SystemExit(1)

def ok(msg: str) -> None:
    print('PASS:', msg)

text = cmake_path.read_text(encoding='utf-8', errors='strict')
match = re.search(r'set\(VCS_TIER2_CLUSTER_SOURCES\s*(.*?)\n\)', text, re.S)
if not match:
    fail('VCS_TIER2_CLUSTER_SOURCES block missing from profiles/vcs/CMakeLists.txt')
entries = re.findall(r'host/vcs_tier2_cluster_[A-Za-z0-9_]+\.cpp', match.group(1))
if entries != canonical:
    fail('CMake Tier2 source set is stale: got ' + ', '.join(entries))
ok('CMake Tier2 source set is exactly the 7 canonical V8.7 clusters')

all_refs = sorted(set(re.findall(r'host/vcs_tier2_cluster_[A-Za-z0-9_]+\.cpp', text)))
if all_refs != sorted(canonical):
    fail('CMake contains stale Tier2 cluster references: ' + ', '.join(all_refs))
ok('CMake contains no stale Tier2 cluster references')

existing = sorted('host/' + p.name for p in host.glob('vcs_tier2_cluster_*.cpp'))
if existing != sorted(canonical):
    extra = sorted(set(existing) - set(canonical))
    missing = sorted(set(canonical) - set(existing))
    fail('Tier2 host source set mismatch; extra=' + ','.join(extra) + ' missing=' + ','.join(missing))
ok('Tier2 host directory contains exactly the 7 canonical cluster files')

print('V8.7.1D CMAKE SOURCE-SET audit PASS')
