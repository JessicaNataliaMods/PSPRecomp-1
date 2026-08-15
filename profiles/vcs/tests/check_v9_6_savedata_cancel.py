#!/usr/bin/env python3
from pathlib import Path
import sys
root = Path(__file__).resolve().parents[1]
profile = (root / 'host/vcs_profile.cpp').read_text(encoding='utf-8', errors='replace')
build = (root / 'BUILD_VCS_NINJA.bat').read_text(encoding='utf-8', errors='replace')
force_path = root / 'FORCE_V9_6_SAVEDATA_CANCEL_OBJECTS.bat'
force = force_path.read_text(encoding='utf-8', errors='replace') if force_path.is_file() else ''
errors = []
def req(text, needle, msg):
    if needle not in text:
        errors.append(msg)
req(profile, 'kPspUtilityDialogResultCancel = 1u', 'PSP CANCEL must be 1')
req(profile, 'kPspUtilityDialogResultAbort = 2u', 'PSP ABORT must be 2')
req(profile, 'const bool load_cancel_workaround = savedata_utility.mode == 4u', 'LISTLOAD compatibility policy missing')
req(profile, '? kPspUtilityDialogResultAbort', 'LOAD cancel must use ABORT compatibility result')
req(profile, ': kPspUtilityDialogResultCancel', 'SAVE/DELETE cancel must use PSP CANCEL')
req(profile, 'const std::uint32_t abort_status = load_cancel_workaround ? 1u : 0u;', 'SAVE/DELETE abortStatus must remain zero')
req(profile, 'policy=psp-user-cancel', 'physical SAVE cancel diagnostic missing')
req(build, 'FORCE_V9_6_SAVEDATA_CANCEL_OBJECTS.bat', 'V9.6 object invalidation not wired')
req(force, 'vcs_profile.cpp.obj', 'vcs_profile object invalidation missing')
if errors:
    print('V9.6 SAVEDATA CANCEL AUDIT: FAIL')
    for e in errors:
        print(' - ' + e)
    sys.exit(1)
print('V9.6 SAVEDATA CANCEL AUDIT: PASS')
print(' - LISTLOAD retains the physically-proven VCS abort compatibility path')
print(' - LISTSAVE/LISTDELETE use real PSP common.result=CANCEL (1), abortStatus=0')
print(' - vcs_profile.cpp is force-invalidated once for existing Ninja trees')
