// Retired on 2026-08-15.
//
// LISTLOAD/LISTSAVE/LISTDELETE no longer create a Win32/host dialog. The PSP
// firmware utility HLE lives in savedata_utility_ui.cpp and renders into the
// game's GE framebuffer. This tombstone intentionally contains no UI code so a
// hotfix extracted over an older tree also erases the rejected implementation.
