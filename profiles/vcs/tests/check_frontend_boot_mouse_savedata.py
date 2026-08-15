from pathlib import Path
import sys
root = Path(__file__).resolve().parents[1]
cmake=(root/'CMakeLists.txt').read_text(encoding='utf-8')
main=(root/'host/main.cpp').read_text(encoding='utf-8')
profile=(root/'host/vcs_profile.cpp').read_text(encoding='utf-8')
u127=(root/'generated/generated_unit_0127.cpp').read_text(encoding='utf-8')
u172=(root/'generated/generated_unit_0172.cpp').read_text(encoding='utf-8')
ini=(root/'config/VCSNative.ini').read_text(encoding='utf-8')
display=(root/'host/display_window.cpp').read_text(encoding='utf-8')

def fail(msg):
    print('LOAD-ONLY STARTUP AUDIT: FAIL - '+msg)
    sys.exit(1)
if 'host/native_frontend_boot.cpp' in cmake: fail('retired native frontend hook still linked')
if 'native_frontend_boot_arm' in main: fail('main still arms native GAME frontend')
if 'native_frontend_boot_' in u127 or 'native_frontend_boot_' in u172: fail('generated AOT still contains V8 autoload hooks')
if 'startup_load_picker_consumed' not in profile or 'savedata_utility.startup_picker = true' not in profile:
    fail('first AUTOLOAD/LOAD is not promoted to load picker')
if 'savedata_utility.mode = 4u' not in profile: fail('startup picker is not host-side LISTLOAD')
if 'guest_mode == 0u' not in profile or 'guest_mode == 2u' not in profile: fail('AUTOLOAD/LOAD modes not covered')
if 'if (!savedata_utility.startup_picker)' not in profile: fail('startup picker cancellation guard missing')
if 'load_cancel_workaround' not in profile or 'kPspUtilityDialogResultAbort' not in profile:
    fail('promoted LOAD picker cancel compatibility path missing')
if 'kPspUtilityDialogResultCancel = 1u' not in profile:
    fail('PSP user-cancel result is not defined for non-load dialogs')
if 'MouseMenu=false' not in ini: fail('mouse menu is not disabled by default')
if 'if (mouse_menu_enabled()) enqueue_synthetic_pulse(state, kPspCross, 2);' not in display:
    fail('savedata mouse click is not gated by MouseMenu')
print('LOAD-ONLY STARTUP AUDIT: PASS')
print(' - native GAME frontend boot hook is unlinked')
print(' - V8 generated autoload interception is removed')
print(' - first AUTOLOAD and every explicit LOAD become the in-frame Load Game picker')
print(' - LOAD cancel keeps the proven abort compatibility path; SAVE uses PSP CANCEL')
print(' - menu mouse remains disabled by default and gates savedata clicks')
