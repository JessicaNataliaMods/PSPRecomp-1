#pragma once

#include <cstddef>
#include <filesystem>
#include <string>
#include <string_view>
#include <vector>

namespace vcs {

struct StartupSaveCandidate {
    std::string save_name;
    std::filesystem::path directory;
};

enum class StartupSaveChoiceKind {
    NoValidSaves,
    Latest,
    AmbiguousLatest,
};

struct StartupSaveChoice {
    StartupSaveChoiceKind kind{StartupSaveChoiceKind::NoValidSaves};
    std::string save_name;
    std::size_t valid_count{};
};

// Select the newest *valid* save for startup autoload.  The requested game data
// file (for VCS this is supplied by SceUtilitySavedataParam::fileName) is used
// as the authoritative timestamp and validity check, so ICON0/PARAM.SFO copies
// cannot accidentally make an older slot look newer.  If two valid slots have
// exactly the same newest timestamp, do not guess: return AmbiguousLatest and
// let the user choose in the Load Game list.
[[nodiscard]] StartupSaveChoice choose_latest_startup_save(
    const std::vector<StartupSaveCandidate> &candidates,
    std::string_view requested_file_name) noexcept;

} // namespace vcs
