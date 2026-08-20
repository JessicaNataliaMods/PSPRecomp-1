#pragma once

#include <cstdint>
#include <filesystem>

namespace psprecomp { class Runtime; }

namespace vcs {

struct DrawDistanceRuntimeScales {
    float world{1.0f};
    float entity{1.0f};
    float vehicles{1.0f};
    float npcs{1.0f};
};

struct DrawDistanceRuntimeTelemetry {
    std::uint64_t far_clip_set_hits{};
    std::uint64_t actor_lod_hits{};
    std::uint64_t npc_constant_hits{};
    std::uint64_t vehicle_dynamic_hits{};
    std::uint64_t vehicle_fallback_hits{};
    std::uint64_t world_table_patch_hits{};
    std::uint64_t world_models_patched{};
};

// Scales are read-only after profile installation. Generated AOT code reads
// them directly at exact local labels that Runtime function hooks cannot
// intercept. Telemetry counters are incremented by those same sites.
extern DrawDistanceRuntimeScales g_draw_distance_runtime_scales;
extern DrawDistanceRuntimeTelemetry g_draw_distance_runtime_telemetry;

void install_draw_distance_patch(psprecomp::Runtime &runtime,
                                 const std::filesystem::path &ini_path);

// Streaming refresh/telemetry point. The authoritative far-clip write itself
// is patched at its generated AOT setter.
void draw_distance_vblank_tick(psprecomp::Runtime &runtime,
                               std::uint32_t guest_gp,
                               std::uint64_t vblank_index) noexcept;

// Called by generated VCS AOT at the exact completion point of the IDE/model
// info table initializer. This avoids relying on a vblank-time GP snapshot.
void draw_distance_world_table_ready(psprecomp::Runtime &runtime,
                                     std::uint32_t guest_gp) noexcept;

} // namespace vcs
