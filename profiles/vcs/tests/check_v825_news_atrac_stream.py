#!/usr/bin/env python3
from pathlib import Path

root = Path(__file__).resolve().parents[3]
profile = root / 'profiles' / 'vcs'
host = profile / 'host'
source = (host / 'vcs_profile.cpp').read_text(encoding='utf-8')
output = (host / 'audio_output.cpp').read_text(encoding='utf-8')
log = (host / 'vcs_runtime_log.cpp').read_text(encoding='utf-8')
guest = (profile / 'generated' / 'generated_unit_0170.cpp').read_text(encoding='utf-8')

def need(cond, msg):
    if not cond:
        print('FAIL:', msg)
        raise SystemExit(1)
    print('PASS:', msg)

need('stage=correctness-v8.2.5-news-atrac-stream-fix-2026-08-18' in log, 'V8.2.5 runtime stage')
need('correctness_revision=825' in log, 'V8.2.5 correctness revision')
need('recovery_from_821=1' in log and 'save_lifecycle_v82=1' in log, 'interior/save lifecycle recovery preserved')
need('output2_success_zero=1' in log and 'output2_master_watermark=1' in log, 'V8.2.3 Output2 correctness preserved')
need('output2_late_catchup=0' in log, 'rejected V8.2.4 pacing experiment rolled back')
need('atrac_stream_resident_status=1' in log and 'atrac_nonloop_resident=-2' in log and 'atrac_loop_resident=-3' in log, 'ATRAC resident-state metadata')

need('kAtracRemainNonLoopOnMemory = 0xFFFFFFFEu' in source, 'non-loop resident sentinel is -2')
need('kAtracRemainLoopOnMemory = 0xFFFFFFFDu' in source, 'loop resident sentinel is -3')
need('atrac_remain_frame_status(*state)' in source, 'Decode/GetRemain share resident-state helper')
need(source.count('atrac_remain_frame_status(*state)') >= 3, 'resident status used by EOF decode, normal decode, and GetRemainFrame')
need('if (samples != 0u && state->header.block_align != 0u)' in source, 'encoded frame is consumed only when PCM was produced')
need('ATRAC_NEWS_META source=' in source, 'NEWS stream metadata diagnostic present')
need('fully-fed non-loop halfway stream must report -2' in source, 'non-loop resident regression test')
need('fully-fed looping halfway stream must report -3' in source, 'loop resident regression test')

# The game itself branches on -1 and -2 immediately after DecodeData's
# outRemainFrame. This audit makes the contract explicit so future HLE cleanup
# cannot silently replace the sentinel with zero again.
need('static_cast<std::uint32_t>(-1)' in guest and 'static_cast<std::uint32_t>(-2)' in guest,
     'VCS guest explicitly recognizes -1/-2 ATRAC remain values')

need('bool absorb_short_lateness = false' not in source, 'V8.2.4 catch-up implementation removed')
need('OUTPUT2_PACING absorbed=' not in source, 'V8.2.4 pacing diagnostic removed')
need('audio_queue_buffer(state, state.sample_count, true)' not in source, 'Output2 no longer opts into rejected catch-up')
need('audio_queue_buffer(state, state.sample_count);' in source, 'Output2 uses stable queue policy')

need('audio_output_master_seal_frame' in output, 'host Output2 watermark preserved')
need('geometry_fusion_rollback=1' in log and 'hot_blocks=1060' in log, 'V8.2 CPU/Geometry baseline preserved')
need('ge_async_quarantined=1' in log and 'parallel_vertex_decode_quarantined=1' in log, 'unstable GE paths remain quarantined')
print('V8.2.5 NEWS ATRAC stream audit PASS')
