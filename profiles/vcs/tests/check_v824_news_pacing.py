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

# Stable V8.2.2/V8.2.3 correctness base must remain intact.
need('stage=correctness-v8.2.4-news-pacing-fix-2026-08-18' in log, 'V8.2.4 runtime stage')
need('correctness_revision=824' in log, 'V8.2.4 correctness revision')
need('recovery_from_821=1' in log and 'save_lifecycle_v82=1' in log, 'V8.2.2 lifecycle recovery preserved')
need('sas_endflag_latched=1' in log and 'sas_loop_history_restore=1' in log, 'SAS correctness preserved')
need('atrac_virtual_source=1' in log and 'atrac_stall_diag=1' in log, 'ATRAC source path preserved')
need('output2_success_zero=1' in log and 'output2_master_watermark=1' in log, 'V8.2.3 Output2 fixes preserved')
need('output2_late_catchup=1' in log and 'output2_late_grace_buffers=8' in log, 'V8.2.4 pacing metadata')

# New pacing fix: only Output2 opts into short-lateness absorption.
need('bool absorb_short_lateness = false' in source, 'short-lateness policy is opt-in')
need('audio_queue_buffer(state, state.sample_count, true);' in source, 'Output2 opts into late catch-up')
need('audio_queue_buffer(state, state.sample_count);' in source, 'normal audio channels keep legacy queue policy')
need('late_grace_frames' in source and 'frames) * 8u' in source and '4096u' in source, 'bounded eight-buffer late grace')
need('OUTPUT2_PACING absorbed=' in source and 'OUTPUT2_PACING reanchor=1' in source, 'pacing diagnostics present')
need('short Output2 lateness was converted into a silence gap' in source, 'single-late-block regression self-test')
need('repeated short Output2 lateness stretched the audio timeline' in source, 'repeated-lateness regression self-test')
need('long Output2 stall incorrectly remained on the old timeline' in source, 'long-stall reanchor self-test')

# Do not regress prior audio correctness or host watermark behavior.
need('audio_resample_output(rt, ctx, false);' in source, 'Output2 zero-success ABI still selected')
need('sceAudioOutput2OutputBlocking success must be zero' in source, 'Output2 success ABI test preserved')
need('audio_output_master_seal_frame' in output_h, 'Output2 watermark helper preserved')
need('sealed_frame = audio_output_master_seal_frame(' in output, 'host watermark remains active')
need('producer_grace' in output and 'prebuffer_blocks' in output, 'host watermark remains bounded')

# Critical non-audio architecture must not be touched by this fix.
need('geometry_fusion_rollback=1' in log and 'hot_blocks=1060' in log, 'V8.2 CPU/Geometry baseline preserved')
need('ge_async_quarantined=1' in log and 'parallel_vertex_decode_quarantined=1' in log, 'unstable GE paths remain quarantined')
print('V8.2.4 NEWS pacing audit PASS')
