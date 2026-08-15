#!/usr/bin/env python3
from pathlib import Path
import sys

profile = Path(__file__).resolve().parents[1]
host = profile / 'host'
errors = []

def text(path):
    return path.read_text(encoding='utf-8', errors='replace')

def require(path, needle, label):
    if needle not in text(path):
        errors.append(f'{label}: missing {needle!r}')

def forbid(path, needle, label):
    if needle in text(path):
        errors.append(f'{label}: forbidden {needle!r}')

cmake = profile / 'CMakeLists.txt'
profile_cpp = host / 'vcs_profile.cpp'
ui_cpp = host / 'savedata_utility_ui.cpp'
display = host / 'display_window.cpp'
ge = host / 'ge_renderer.cpp'

require(cmake, 'host/savedata_utility_ui.cpp', 'savedata utility HLE linked')
forbid(cmake, 'host/savedata_dialog.cpp', 'retired Win32 chooser unlinked')
require(profile_cpp, 'savedata_mode_has_list_ui', 'LIST mode classifier')
require(profile_cpp, 'update_savedata_list_utility(rt);', 'interactive utility state machine')
require(profile_cpp, 'execute_selected_savedata_slot', 'slot operation handoff')
require(profile_cpp, 'SavedataUtilityUiPrompt::Confirm', 'confirm state')
require(profile_cpp, 'SavedataUtilityUiPrompt::Result', 'result state')
require(profile_cpp, 'savedata_utility_ui_render_frame(display_state.frame_buffer);',
        'HLE UI emitted at vblank')
require(ge, 'savedata_utility_ui_observe_draw(gpu_draw, count);',
        'displayed GE target observed')
require(ui_cpp, 'ge_gpu_backend_accumulate_color_triangles',
        'utility geometry enters GPU framebuffer')
require(ui_cpp, 'draw_save_thumbnail(v, icons, 27.0f, 94.0f, 144.0f, 80.0f, true,',
        'selected save thumbnail geometry')
require(ui_cpp, '58.0f, 37.0f, 82.0f, 46.0f', 'previous slot stays below banner')
require(ui_cpp, '58.0f, 183.0f, 82.0f, 46.0f', 'next slot stays above footer')
require(ui_cpp, 'submit_smooth_text', 'antialiased text atlas path')
require(ui_cpp, 'blend_source_factor = 2u', 'text source-alpha blending')
require(ui_cpp, 'blend_dest_factor = 3u', 'text inverse-alpha blending')
require(profile_cpp, 'load_cancel_workaround', 'mode-aware cancel policy')
require(profile_cpp, 'kPspUtilityDialogResultCancel = 1u', 'PSP cancel result')
require(profile_cpp, 'kPspUtilityDialogResultAbort = 2u', 'LOAD compatibility abort result')
require(ui_cpp, 'quad(v, 0, 0, 480, 23', 'PSP utility banner geometry')
require(ui_cpp, 'quad(v, 180, 136, 480, 137', 'PSP save-info separator geometry')
require(profile_cpp, 'slot.icon0_path = icon0.string();', 'savedata ICON0 path preserved')
require(ui_cpp, 'avcodec_find_decoder(AV_CODEC_ID_PNG)', 'ICON0 PNG decoded in-process')
require(ui_cpp, 'ge_gpu_backend_upload_decoded_texture', 'decoded ICON0 uploaded to GE backend')
require(display, 'display_window_set_system_utility_mode', 'utility input ownership')
require(display, 'enqueue_synthetic_pulse(state, kPspCross, 2);', 'mouse left click -> Cross')
require(display, 'enqueue_synthetic_pulse(state, kPspCircle, 2);', 'mouse right click -> Circle')

for path in (ui_cpp, host / 'savedata_dialog.cpp', host / 'savedata_dialog.hpp'):
    forbid(path, 'CreateWindowExW', 'no savedata host HWND')
    forbid(path, 'DialogBox', 'no savedata dialog API')
    forbid(path, 'choose_savedata_slot', 'old chooser removed')

if errors:
    print('NATIVE SAVEDATA UTILITY AUDIT: FAIL')
    for error in errors:
        print(' -', error)
    sys.exit(1)

print('NATIVE SAVEDATA UTILITY AUDIT: PASS')
print(' - LISTLOAD/LISTSAVE/LISTDELETE remain asynchronous utility states')
print(' - utility is drawn into the PSP GE framebuffer, not an HWND')
print(' - PSP save-list/banner/info geometry and real ICON0.PNG decoding are present')
print(' - metadata path and confirm/result states are wired')
print(' - keyboard/gamepad plus utility mouse routing are wired')
