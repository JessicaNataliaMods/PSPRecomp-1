#pragma once

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace vcs {

struct GeGpuDrawDescriptor;

// Data exposed by the PSP savedata HLE to the system-utility renderer.  These
// strings come from the game's SceUtilitySavedataParam / PARAM.SFO metadata;
// the renderer owns no save-game policy and never opens a desktop window.
struct SavedataSlotEntry {
    std::string save_name;
    bool exists{};
    std::string title;
    std::string savedata_title;
    std::string detail;
    // Host path to the PSP save icon persisted by sceUtilitySavedata. The UI
    // renderer decodes it in-process; it is never a replacement artwork.
    std::string icon0_path;
};

enum class SavedataUtilityUiPrompt : std::uint8_t {
    List,
    Confirm,
    Result,
    NoData,
};

// Starts/stops the PSP system-utility surface. LISTLOAD/LISTSAVE/LISTDELETE use
// this instead of a host HWND; pixels are emitted into the same 480x272 GE
// framebuffer the game is already presenting.
void savedata_utility_ui_begin(std::uint32_t mode,
                               const std::vector<SavedataSlotEntry> &slots,
                               std::size_t selected) noexcept;
void savedata_utility_ui_end() noexcept;
[[nodiscard]] bool savedata_utility_ui_active() noexcept;

void savedata_utility_ui_set_selected(std::size_t selected) noexcept;
void savedata_utility_ui_set_prompt(SavedataUtilityUiPrompt prompt,
                                    const char *message = nullptr,
                                    bool operation_ok = true) noexcept;
void savedata_utility_ui_set_confirm_choice(bool yes) noexcept;

// Track the displayed GE target using ordinary game draws. This is only a
// framebuffer-layout observation; no UI is injected until render_frame().
void savedata_utility_ui_observe_draw(const GeGpuDrawDescriptor &draw,
                                      std::uint32_t vertex_weight) noexcept;

// Called once per vblank immediately before ge_gpu_backend_finish_color_frame.
// The output is an in-frame PSP utility layer, never Win32/GDI/ImGui UI.
void savedata_utility_ui_render_frame(std::uint32_t selected_framebuffer) noexcept;

} // namespace vcs
