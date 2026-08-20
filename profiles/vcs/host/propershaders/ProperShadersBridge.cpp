#include "propershaders/ProperShadersBridge.hpp"
#include "vcs_config.hpp"

#include <unordered_map>

namespace vcs {
namespace {
struct PaletteIdentity {
    std::uint32_t checksum{};
    bool mutated{};
    std::uint64_t last_epoch{};
};
std::unordered_map<std::uint64_t, PaletteIdentity> g_palettes;
std::uint64_t g_epoch{};

std::uint64_t palette_key(const GeGpuDrawDescriptor &draw) noexcept {
    std::uint64_t key = static_cast<std::uint64_t>(draw.texture_address) << 32u;
    key ^= static_cast<std::uint64_t>(draw.clut_address);
    key ^= static_cast<std::uint64_t>(draw.texture_format & 0xFu) << 60u;
    return key;
}
} // namespace

void proper_shaders_begin_frame(std::uint64_t frame_epoch) noexcept {
    g_epoch = frame_epoch;
    // Streaming constantly changes addresses. Keep the classifier bounded.
    if ((frame_epoch % 600u) == 0u && g_palettes.size() > 4096u) g_palettes.clear();
}

GeShaderPipe proper_shaders_classify_draw(GeGpuDrawDescriptor &draw, bool skinned) noexcept {
    draw.shader_pipe = GeShaderPipe::Native;
    const auto &cfg = vcs_configuration().proper_shaders;
    if (!cfg.enabled || !proper_shaders_private_available() ||
        draw.through || draw.clear_mode || draw.primitive < 3u || draw.primitive > 5u)
        return draw.shader_pipe;

    if (skinned && cfg.skin_pipe.enabled) {
        draw.shader_pipe = GeShaderPipe::Skin;
        return draw.shader_pipe;
    }

    if (cfg.vehicle_pipe.enabled && cfg.vehicle_pipe.palette_classifier &&
        draw.texture_enabled && draw.texture_format >= 4u && draw.texture_format <= 7u &&
        draw.clut_address != 0u && draw.clut_checksum != 0u) {
        auto &identity = g_palettes[palette_key(draw)];
        if (identity.checksum != 0u && identity.checksum != draw.clut_checksum)
            identity.mutated = true;
        identity.checksum = draw.clut_checksum;
        identity.last_epoch = g_epoch;
        if (identity.mutated) {
            draw.shader_pipe = GeShaderPipe::Vehicle;
            return draw.shader_pipe;
        }
    }

    if (cfg.building_pipe.enabled) draw.shader_pipe = GeShaderPipe::Building;
    return draw.shader_pipe;
}

} // namespace vcs
