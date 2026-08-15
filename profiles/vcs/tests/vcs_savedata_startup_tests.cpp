#include "vcs_savedata_startup.hpp"

#include <chrono>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <stdexcept>

namespace {
void require(bool condition, const char *message) {
    if (!condition) throw std::runtime_error(message);
}

void write_file(const std::filesystem::path &path, const char *data) {
    std::filesystem::create_directories(path.parent_path());
    std::ofstream out(path, std::ios::binary | std::ios::trunc);
    out << data;
}
}

int main() {
    try {
        const auto root = std::filesystem::temp_directory_path() / "vcs_savedata_startup_test";
        std::filesystem::remove_all(root);
        const auto a = root / "ULUS10160SLOT_A";
        const auto b = root / "ULUS10160SLOT_B";
        const auto invalid = root / "ULUS10160BROKEN";
        write_file(a / "DATA.BIN", "old");
        write_file(b / "DATA.BIN", "new");
        write_file(invalid / "ICON0.PNG", "art only");

        const auto base = std::filesystem::file_time_type::clock::now();
        std::filesystem::last_write_time(a / "DATA.BIN", base - std::chrono::seconds(20));
        std::filesystem::last_write_time(b / "DATA.BIN", base - std::chrono::seconds(5));

        std::vector<vcs::StartupSaveCandidate> candidates{
            {"SLOT_A", a}, {"SLOT_B", b}, {"BROKEN", invalid}
        };
        auto choice = vcs::choose_latest_startup_save(candidates, "DATA.BIN");
        require(choice.kind == vcs::StartupSaveChoiceKind::Latest,
                "newest valid save was not selected");
        require(choice.save_name == "SLOT_B", "wrong newest save selected");
        require(choice.valid_count == 2u, "invalid directory counted as a save");

        // Many-save case: selection must still be timestamp-based rather than
        // slot-number-based. Add 40 more slots with older times and one truly
        // newest slot whose name sorts near the beginning.
        for (int i = 0; i < 40; ++i) {
            const auto dir = root / ("ULUS10160MANY_" + std::to_string(i));
            write_file(dir / "DATA.BIN", "bulk");
            std::filesystem::last_write_time(
                dir / "DATA.BIN", base - std::chrono::seconds(100 + i));
            candidates.push_back({"MANY_" + std::to_string(i), dir});
        }
        const auto newest_dir = root / "ULUS10160AA_NEWEST";
        write_file(newest_dir / "DATA.BIN", "latest");
        std::filesystem::last_write_time(newest_dir / "DATA.BIN", base);
        candidates.push_back({"AA_NEWEST", newest_dir});
        choice = vcs::choose_latest_startup_save(candidates, "DATA.BIN");
        require(choice.kind == vcs::StartupSaveChoiceKind::Latest &&
                choice.save_name == "AA_NEWEST",
                "many-save selection used slot/name ordering instead of timestamp");

        // Exact timestamp ties are intentionally ambiguous: do not guess based
        // on slot number/name when a copied save set has identical mtimes.
        std::filesystem::last_write_time(a / "DATA.BIN", base);
        choice = vcs::choose_latest_startup_save(candidates, "DATA.BIN");
        require(choice.kind == vcs::StartupSaveChoiceKind::AmbiguousLatest,
                "equal newest timestamps should open the picker");

        for (const auto &candidate : candidates)
            std::filesystem::remove(candidate.directory / "DATA.BIN");
        choice = vcs::choose_latest_startup_save(candidates, "DATA.BIN");
        require(choice.kind == vcs::StartupSaveChoiceKind::NoValidSaves,
                "no valid data files should mean New Game fallback");

        std::filesystem::remove_all(root);
        std::cout << "vcs_savedata_startup_tests: PASS\n";
        return 0;
    } catch (const std::exception &error) {
        std::cerr << "vcs_savedata_startup_tests: FAIL: " << error.what() << "\n";
        return 1;
    }
}
