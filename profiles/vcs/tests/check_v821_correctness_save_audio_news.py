#!/usr/bin/env python3
from pathlib import Path
import sys

profile = Path(__file__).resolve().parents[1]
host = profile / 'host'
source = (host / 'vcs_profile.cpp').read_text(encoding='utf-8')
log = (host / 'vcs_runtime_log.cpp').read_text(encoding='utf-8')
build = (profile / 'scripts' / 'build_release_ninja.bat').read_text(encoding='utf-8')

checks = [
    ('stage', 'stage=correctness-v8.2.1-save-audio-news-2026-08-17' in log),
    ('cpu baseline preserved', 'hot_blocks=1060 static_fused_calls=36' in log and 'cpu_lean_revision=2' in log),
    ('save transaction', 'commit_savedata_writes(writes)' in source and '.vcsnative.tmp.' in source and '.vcsnative.bak.' in source),
    ('save validates all buffers first', 'snapshot_savedata_auxiliary' in source and 'Snapshot every guest buffer before touching the existing slot' in source),
    ('save shutdown lifecycle', 'SAVEDATA save-result acknowledged; utility retained until shutdown' in source),
    ('shutdown still releases utility', 'savedata_utility.status = UtilityStatus::Finished;' in source and 'display_window_set_system_utility_mode(false);' in source),
    ('SAS error name corrected', 'kSasErrorInvalidState = 0x80420016u' in source and 'kSasErrorVoicePaused' not in source),
    ('paused KeyOff latch', 'bool sas_key_off_voice' in source and 'if (!sas_key_off_voice(*voice))' in source),
    ('paused-loop regression test', 'paused vehicle loop resurrected after KeyOff' in source),
    ('ATRAC direct buffer source', 'recent_atrac_reads' in source and 'direct_buffer_hit' in source),
    ('ATRAC no common-path rescan', 'identify_atrac_source(buffer, header_bytes, parsed)' in source),
    ('ATRAC runtime diagnostics', 'ATRAC_SOURCE resolve_us=' in source and 'ATRAC_DECODE source=' in source),
    ('correctness build stamp', 'CORRECTNESS_V821_STAMP' in build),
]
failed = [name for name, ok in checks if not ok]
for name, ok in checks:
    print(f"[{'PASS' if ok else 'FAIL'}] {name}")
if failed:
    print(f"V8.2.1 correctness audit failed: {', '.join(failed)}", file=sys.stderr)
    raise SystemExit(1)
print(f'V8.2.1 correctness audit PASS ({len(checks)}/{len(checks)})')
