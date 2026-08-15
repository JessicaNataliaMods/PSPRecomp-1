#pragma once

#include <string>
#include <string_view>
#include <vector>

namespace vcs {

struct SavedataSlotEntry {
    std::string save_name;
    bool exists{};
};

struct SavedataDialogChoice {
    bool confirmed{};
    std::string save_name;
};

// Native replacement for the PSP LISTLOAD/LISTSAVE system utility screen.
// On Windows a small host dialog is shown. On non-Windows/headless validation
// the choice is deterministic so automated tests never block on UI.
[[nodiscard]] SavedataDialogChoice choose_savedata_slot(
    const std::vector<SavedataSlotEntry> &slots,
    bool saving,
    std::string_view current_save_name);

} // namespace vcs
