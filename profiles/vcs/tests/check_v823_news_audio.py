#!/usr/bin/env python3
from pathlib import Path

root = Path(__file__).resolve().parents[3]
profile = root / 'profiles' / 'vcs'
host = profile / 'host'
source = (host / 'vcs_profile.cpp').read_text(encoding='utf-8')
output = (host / 'audio_output.cpp').read_text(encoding='utf-8')
output_h = (host / 'audio_output.hpp').read_text(encoding='utf-8')
log = (host / 'vcs_runtime_log.cpp').read_text(encoding='utf-8')

def need(cond, msg):
    if not cond:
        print('FAIL:', msg)
        raise SystemExit(1)
    print('PASS:', msg)

# Preserve the V8.2.2 recovery invariants.
need(('stage=correctness-v8.2.3-news-audio-fix-2026-08-17' in log) or ('stage=correctness-v8.2.4-news-pacing-fix-2026-08-18' in log), 'V8.2.3+ runtime stage')
need('recovery_from_821=1' in log and 'save_lifecycle_v82=1' in log, 'V8.2 lifecycle recovery metadata')
need('sas_endflag_latched=1' in log and 'sas_loop_history_restore=1' in log, 'SAS correctness metadata')
need('atrac_virtual_source=1' in log and 'atrac_stall_diag=1' in log, 'ATRAC source metadata')
need('output2_success_zero=1' in log and 'output2_master_watermark=1' in log, 'Output2 NEWS fix metadata')
need('std::uint32_t end_flags{0xFFFFFFFFu};' in source, 'SAS latched end flags stored')
need('voice.history1 = voice.loop_start_history1;' in source and 'voice.history2 = voice.loop_start_history2;' in source, 'VAG loop predictor restored')
need('struct SavedataPendingWrite' in source and 'commit_savedata_writes(writes)' in source, 'transactional savedata commit preserved')
need('utility retained until shutdown' not in source, 'speculative V8.2.1 savedata lifecycle remains removed')
need('recent_atrac_reads[dst]' in source and 'virtual_disc_file_at_offset' in source, 'virtual UMD ATRAC mapping preserved')

# V8.2.3 NEWS path.
need('audio_resample_success_value(return_queued_samples, state.sample_count)' in source, 'Output2/SRC success ABI split active')
need('audio_resample_output(rt, ctx, false);' in source, 'Output2 explicitly selects zero-success ABI')
need('audio_resample_output(rt, ctx, true);' in source, 'SRC retains queued-sample ABI')
need('sceAudioOutput2OutputBlocking success must be zero' in source, 'Output2 ABI regression self-test present')
need('audio_output_master_seal_frame' in output_h, 'Output2 watermark helper present')
need('kOutput2Channel = 8u' in output, 'Output2 master channel is explicit')
need('sealed_frame = audio_output_master_seal_frame(' in output, 'host timeline uses Output2 producer watermark')
need('output2_seal_clamps' in output and 'output2_clamps=' in output, 'watermark diagnostics present')
need('producer_grace' in output and 'prebuffer_blocks' in output, 'watermark is bounded by device prebuffer')
print('V8.2.3 NEWS audio audit PASS')
