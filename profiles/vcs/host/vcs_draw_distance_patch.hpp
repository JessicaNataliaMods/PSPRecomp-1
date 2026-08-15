#pragma once

#include <cstdint>
#include <filesystem>

namespace psprecomp { class Runtime; }

namespace vcs {

struct DrawDistanceRuntimeScales {
    float entity{1.0f};
    float vehicles{1.0f};
    float npcs{1.0f};
};

// Read-only after profile installation. Generated AOT code reads these three
// values directly at the exact local labels that the old Runtime hook could
// not intercept.
extern DrawDistanceRuntimeScales g_draw_distance_runtime_scales;

void install_draw_distance_patch(psprecomp::Runtime &runtime,
                                 const std::filesystem::path &ini_path);

// Authoritative world-distance maintenance point. Called once per display
// vblank so it cannot be bypassed by generated AOT local gotos.
void draw_distance_vblank_tick(psprecomp::Runtime &runtime,
                               std::uint32_t guest_gp,
                               std::uint64_t vblank_index) noexcept;

} // namespace vcs
