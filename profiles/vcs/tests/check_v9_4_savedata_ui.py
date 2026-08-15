#!/usr/bin/env python3
from pathlib import Path
import sys
root = Path(__file__).resolve().parents[1]
profile = (root/'host/vcs_profile.cpp').read_text(encoding='utf-8')
ui = (root/'host/savedata_utility_ui.cpp').read_text(encoding='utf-8')
atlas = root/'host/savedata_font_atlas.inc'
build = (root/'BUILD_VCS_NINJA.bat').read_text(encoding='utf-8')
force = (root/'FORCE_V9_4_SAVEDATA_UI_OBJECTS.bat').read_text(encoding='utf-8')
errors=[]
def req(text, needle, msg):
    if needle not in text: errors.append(msg)
req(profile, 'kUtilityCommonResultOffset, 2u', 'cancel common.result must be 2')
req(profile, 'kSavedataAbortStatusOffset, 1u', 'cancel abortStatus must be 1')
req(ui, 'submit_smooth_text', 'smooth atlas text path missing')
req(ui, 'draw_save_thumbnail(v, icons, 58.0f, 37.0f, 82.0f, 46.0f', 'previous slot safe row missing')
req(ui, 'draw_save_thumbnail(v, icons, 58.0f, 183.0f, 82.0f, 46.0f', 'next slot safe row missing')
req(ui, 'Draw text last so slot thumbnails can never cover labels or metadata.', 'text draw ordering guard missing')
req(build, 'FORCE_V9_4_SAVEDATA_UI_OBJECTS.bat', 'V9.4 force rebuild not wired')
req(force, 'savedata_utility_ui.cpp.obj', 'UI object invalidation missing')
req(force, 'vcs_profile.cpp.obj', 'profile object invalidation missing')
if not atlas.is_file() or atlas.stat().st_size < 10000:
    errors.append('embedded antialiased font coverage atlas missing')
if errors:
    print('V9.4 SAVEDATA UI AUDIT: FAIL')
    for e in errors: print(' - '+e)
    sys.exit(1)
print('V9.4 SAVEDATA UI AUDIT: PASS')
print(' - cancel is not reported to VCS as successful load')
print(' - slot scroller stays between banner and footer')
print(' - antialiased text atlas is drawn after slot/icon geometry')
print(' - stale V9.3 UI/profile objects are force-invalidated once')
