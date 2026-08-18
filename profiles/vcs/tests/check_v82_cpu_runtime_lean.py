#!/usr/bin/env python3
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]
PROFILE = ROOT / 'profiles' / 'vcs'

def require(cond, msg):
    if not cond:
        raise SystemExit('V8.2 CPU RUNTIME LEAN CHECK FAILED: ' + msg)

runtime_h = (ROOT / 'include' / 'psprecomp' / 'runtime.hpp').read_text()
runtime_cpp = (ROOT / 'src' / 'runtime.cpp').read_text()
cmake = (ROOT / 'CMakeLists.txt').read_text()
log = (PROFILE / 'host' / 'vcs_runtime_log.cpp').read_text()
boundary = (PROFILE / 'host' / 'vcs_tier2_cluster_boundary.cpp').read_text()
geometry = (PROFILE / 'host' / 'vcs_tier2_cluster_geometry.cpp').read_text()
world = (PROFILE / 'host' / 'vcs_tier2_cluster_world.cpp').read_text()

require('PSPRECOMP_RUNTIME_CHAIN_TELEMETRY' in cmake, 'missing generic chain telemetry build option')
require(runtime_h.count('#if defined(PSPRECOMP_RUNTIME_CHAIN_TELEMETRY)') >= 3,
        'direct/Tier2 chain telemetry is not compiled behind the build switch')
require(runtime_cpp.count('#if defined(PSPRECOMP_RUNTIME_CHAIN_TELEMETRY)') >= 4,
        'dynamic chain telemetry is not compiled behind the build switch')
require('const std::uint64_t starvation_interval = g_runtime_starvation_interval_fast;' in runtime_h,
        'scheduler interval load was removed from inlined-leaf accounting')
require('if (++dispatches_since_import_ < starvation_interval) return true;' in runtime_h,
        'scheduler dispatch cadence changed')
require('return run_starvation_boundary(ctx);' in runtime_h,
        'scheduler safe-point call missing')
require(any(stage in log for stage in ('stage=perf-v8.2-cpu-runtime-lean-2026-08-17', 'stage=correctness-v8.2.2-recovery-save-audio-news-2026-08-17', 'stage=correctness-v8.2.3-news-audio-fix-2026-08-17', 'stage=correctness-v8.2.4-news-pacing-fix-2026-08-18')), 'runtime stage mismatch')
require('runtime_chain_telemetry_default=0' in log, 'runtime telemetry metadata missing')
require('direct_generated_leaf_sites=5' in log, 'Boundary direct-leaf metadata mismatch')
require(boundary.count('account_inlined_generated_leaf(ctx)') == 5,
        'expected exactly five Boundary direct generated leaf call sites')
require(geometry.count('account_inlined_generated_leaf(ctx)') == 0,
        'Geometry must remain V8.1 CPU LEAN shape')
require(world.count('account_inlined_generated_leaf(ctx)') == 0,
        'World direct-leaf experiment must remain disabled')
require(geometry.count('SB_L_') > 300 and world.count('SB_L_') > 300,
        'Tier2 hot cluster bodies unexpectedly missing')
print('V8.2 CPU RUNTIME LEAN CHECK PASS: chain telemetry compiled out by default; Boundary leaves=5; Geometry/World protected')
