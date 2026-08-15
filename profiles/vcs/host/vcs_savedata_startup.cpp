#include "vcs_savedata_startup.hpp"

#include <algorithm>
#include <cctype>
#include <system_error>

namespace vcs {
namespace {

bool is_auxiliary_savedata_file(std::string name) {
    std::transform(name.begin(), name.end(), name.begin(),
                   [](unsigned char ch) { return static_cast<char>(std::toupper(ch)); });
    return name == "ICON0.PNG" || name == "ICON1.PMF" || name == "PIC1.PNG" ||
           name == "SND0.AT3" || name == "PARAM.SFO" || name == "VCSNATIVE.META";
}

bool regular_nonempty(const std::filesystem::path &path,
                      std::filesystem::file_time_type &time) noexcept {
    std::error_code error;
    if (!std::filesystem::is_regular_file(path, error) || error) return false;
    const auto size = std::filesystem::file_size(path, error);
    if (error || size == 0u) return false;
    time = std::filesystem::last_write_time(path, error);
    return !error;
}

bool candidate_time(const StartupSaveCandidate &candidate,
                    std::string_view requested_file_name,
                    std::filesystem::file_time_type &time) noexcept {
    try {
        if (!requested_file_name.empty())
            return regular_nonempty(candidate.directory / std::string(requested_file_name), time);

        // Generic safety fallback for titles that leave fileName blank: use the
        // newest non-auxiliary regular file in the save directory.
        std::error_code error;
        if (!std::filesystem::is_directory(candidate.directory, error) || error) return false;
        bool found = false;
        for (std::filesystem::directory_iterator it(candidate.directory, error), end;
             it != end && !error; it.increment(error)) {
            if (!it->is_regular_file(error) || error) continue;
            if (is_auxiliary_savedata_file(it->path().filename().string())) continue;
            std::filesystem::file_time_type current{};
            if (!regular_nonempty(it->path(), current)) continue;
            if (!found || current > time) {
                time = current;
                found = true;
            }
        }
        return found;
    } catch (...) {
        return false;
    }
}

} // namespace

StartupSaveChoice choose_latest_startup_save(
    const std::vector<StartupSaveCandidate> &candidates,
    std::string_view requested_file_name) noexcept {
    StartupSaveChoice result;
    std::filesystem::file_time_type newest{};
    bool have_newest = false;
    bool ambiguous = false;

    for (const StartupSaveCandidate &candidate : candidates) {
        if (candidate.save_name.empty() || candidate.directory.empty()) continue;
        std::filesystem::file_time_type time{};
        if (!candidate_time(candidate, requested_file_name, time)) continue;
        ++result.valid_count;
        if (!have_newest || time > newest) {
            newest = time;
            result.save_name = candidate.save_name;
            have_newest = true;
            ambiguous = false;
        } else if (time == newest && candidate.save_name != result.save_name) {
            ambiguous = true;
        }
    }

    if (!have_newest) {
        result.kind = StartupSaveChoiceKind::NoValidSaves;
        result.save_name.clear();
    } else if (ambiguous) {
        result.kind = StartupSaveChoiceKind::AmbiguousLatest;
        result.save_name.clear();
    } else {
        result.kind = StartupSaveChoiceKind::Latest;
    }
    return result;
}

} // namespace vcs
