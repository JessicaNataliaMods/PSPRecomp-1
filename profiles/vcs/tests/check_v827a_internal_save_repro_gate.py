#!/usr/bin/env python3
from pathlib import Path

root = Path(__file__).resolve().parents[3]
profile = root / 'profiles' / 'vcs'
host = profile / 'host'
config_h = (host / 'vcs_config.hpp').read_text(encoding='utf-8')
config_cpp = (host / 'vcs_config.cpp').read_text(encoding='utf-8')
profile_cpp = (host / 'vcs_profile.cpp').read_text(encoding='utf-8')
display_cpp = (host / 'display_window.cpp').read_text(encoding='utf-8')
log = (host / 'vcs_runtime_log.cpp').read_text(encoding='utf-8')
ini = (profile / 'config' / 'VCSNative.ini').read_text(encoding='utf-8')
restore = (profile / 'RESTORE_SAVE_REPRO.bat').read_text(encoding='utf-8')
config_tests = (profile / 'tests' / 'vcs_config_tests.cpp').read_text(encoding='utf-8')

def need(cond, msg):
    if not cond:
        print('FAIL:', msg)
        raise SystemExit(1)
    print('PASS:', msg)

need(('stage=correctness-v8.2.7a-internal-save-repro-gate-2026-08-18' in log) or
     ('stage=perf-v8.4-aggressive-cpu-direct-2026-08-18' in log) or
     ('stage=perf-v8.5-aggressive-vfpu-fastlane-2026-08-18' in log) or
     ('stage=perf-v8.6-radio-identity-vfpu-ct2-2026-08-18' in log) or
     ('stage=perf-v8.8-extreme-cpu-trusted-dispatch-2026-08-18' in log) or
     ('stage=perf-v8.9-extreme-cpu-register-residency-2026-08-18' in log) or ('stage=perf-v8.10-extreme-cpu-resident-regions-2026-08-18' in log),
     'V8.2.7A correctness lineage runtime stage')
need(('correctness_revision=8271' in log) or ('correctness_revision=8272' in log), 'V8.2.7A correctness revision')
need('save_repro_internal_ini_gate=1' in log and 'save_repro_default_enabled=0' in log,
     'internal-only gate metadata')
need('struct TestingConfiguration' in config_h and 'bool save_repro{false};' in config_h,
     'SAVE_REPRO configuration defaults off in code')
need('[Testing]' in ini and 'SaveRepro=false' in ini,
     'shipped INI disables SAVE_REPRO')
need('INTERNAL DEVELOPER TOOL ONLY' in ini and 'not a general gameplay save-state' in ini,
     'INI labels SAVE_REPRO as internal diagnostics')
need('apply_testing_key' in config_cpp and 'Testing.SaveRepro expects true/false' in config_cpp,
     'Testing.SaveRepro parser exists')
need('else if (section == "testing")' in config_cpp and 'apply_testing_key(config, key, value, line_number);' in config_cpp,
     '[Testing] section is accepted')
need('bool save_repro_testing_enabled() noexcept' in config_cpp and
     'return config.initialized && config.testing.save_repro;' in config_cpp,
     'resolved runtime gate is a cheap config boolean')
need('PSPRECOMP_SAVE_REPRO_TESTING' in config_cpp and 'PSPRECOMP_SAVE_REPRO_AUTO_RESTORE' in config_cpp,
     'explicit internal environment paths can opt in before runtime')
need('if (save_repro_testing_enabled() &&' in display_cpp,
     'WndProc ignores F8/F10 while diagnostics are disabled')
need('if (!save_repro_testing_enabled()) return;' in profile_cpp,
     'vblank checkpoint path exits before touching command queue when disabled')
need('if (!save_repro_testing_enabled()) return false;' in profile_cpp,
     'auto-restore refuses non-testing runs')
need('set "PSPRECOMP_SAVE_REPRO_TESTING=1"' in restore and
     'set "PSPRECOMP_SAVE_REPRO_AUTO_RESTORE=1"' in restore,
     'internal restore script explicitly opts the harness in')
need('SaveRepro=true' in config_tests and 'SAVE_REPRO must be disabled by default' in config_tests,
     'configuration tests cover opt-in and safe default')
# Protected correctness/performance guards.
for token, label in [
    ('save_exitdelete_semantics=1', 'Save memory lifecycle fix preserved'),
    ('atrac_nonloop_resident=-2', 'NEWS non-loop ATRAC sentinel preserved'),
    ('atrac_loop_resident=-3', 'NEWS loop ATRAC sentinel preserved'),
    ('output2_late_catchup=0', 'rejected Output2 pacing remains off'),
    ('hot_blocks=1060', 'V8.2 CPU shape preserved'),
    ('geometry_fusion_rollback=1', 'Geometry rollback preserved'),
]:
    need(token in log, label)
print('V8.2.7A INTERNAL SAVE_REPRO GATE audit PASS')
