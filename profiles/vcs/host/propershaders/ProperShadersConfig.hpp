#pragma once

#include <cstdint>
#include <filesystem>
#include <string>
#include <vector>

namespace vcs {

struct ShaderPipeConfiguration {
    bool enabled{true};

    // Diagnostic proof that this is a real material shader pipe. When enabled,
    // ApplyProperPipePixel replaces RGB on the surface in the private HLSL.
    bool debug_color{false};
    float debug_r{1.0f};
    float debug_g{0.0f};
    float debug_b{1.0f};
};

struct VehiclePipeConfiguration : ShaderPipeConfiguration {
    // VCS recolours cars by rewriting CLUT data while keeping the same texture.
    // Tracking that mutation gives the native GE frontend a semantic vehicle tag
    // without baking game-model IDs into the renderer.
    bool palette_classifier{true};
};

struct RealtimeShadowsConfiguration {
    bool enabled{true};

    // Stable camera-centred directional shadow map. The private DX12 layer uses
    // the same world matrices as the Building/Skin/Vehicle material pipes.
    std::uint32_t map_resolution{2048u};
    float world_radius{140.0f};
    float depth_range{420.0f};
    float map_bias{0.0015f};
    std::uint32_t pcf_radius{1u};

    // Hardware depth bias on the caster pass. This is the coarse term; the
    // receiver-side normal-offset bias below is what actually fixes banding on
    // walls the sun grazes.
    std::uint32_t depth_bias_constant{500u};
    float depth_bias_slope{4.0f};

    // Alpha-tested casters. Without this, fences and foliage cast solid blocks
    // because a depth-only caster pass has no pixel shader to test the cutout.
    bool alpha_test_casters{true};

    // PCSS: blocker search then a penumbra-sized PCF, so contact stays sharp and
    // distant projections soften. Replaces the fixed pcf_radius filter.
    bool pcss{true};
    // tan of the sun's angular radius. The physical sun is ~0.00465; larger
    // reads better at this map resolution.
    float pcss_sun_tan{0.0105f};
    float pcss_search_texels{12.0f};
    float pcss_max_radius_texels{16.0f};

    // Generated normals. The PSP vertex stream has none, so the receiver
    // reconstructs a face normal from screen-space derivatives, the same way
    // the Vice City ProperShaders does in LitPrelight.fx. This is what drives
    // the normal-offset bias; normal_bias_scale is the equivalent of that
    // project's NormalBiasMult master knob.
    float normal_bias_scale{1.5f};
    bool auto_orient_normals{true};
    bool use_cloud_sun_direction{true};
    float light_direction_x{0.38f};
    float light_direction_y{-0.28f};
    float light_direction_z{0.88f};
    float strength{0.58f};

    // Shadow diagnostics. 0=normal, 1=raw shadow map fullscreen,
    // 2=receiver shadow mask, 3=light UV/frustum coverage,
    // 4=sampled map depth, 5=receiver light depth, 6=lit/blocked compare.
    std::uint32_t debug_mode{0u};

    // Legacy fullscreen contact-shadow controls are retained for INI
    // compatibility only. The DX12 path now receives directional shadows in
    // Building/Skin/Vehicle material shaders, so the ghost-prone composite is
    // disabled by default and is not used as the world-shadow implementation.
    bool contact_shadows{false};
    std::uint32_t steps{12u};
    float max_distance_pixels{28.0f};
    float thickness{0.0025f};
    float contact_strength{0.22f};
    float light_screen_x{-0.55f};
    float light_screen_y{0.75f};
};

struct VolumetricCloudsConfiguration {
    bool enabled{false};
    std::uint32_t downscale_div{2u};
    std::uint32_t layers{2u};
    std::uint32_t shadow_steps{8u};
    float coverage_low{0.35f};
    float coverage_mid{0.25f};
    float coverage_high{0.18f};
    float opacity{1.0f};
    float speed{0.0f};
    float brightness{1.0f};
    float random_seed{0.0f};
    float sun_direction_x{0.38f};
    float sun_direction_y{-0.28f};
    float sun_direction_z{0.88f};
    float sun_color_r{1.0f};
    float sun_color_g{0.97f};
    float sun_color_b{0.88f};
    float cloud_base_color_r{0.70f};
    float cloud_base_color_g{0.70f};
    float cloud_base_color_b{0.70f};
    float atmosphere_density{0.0f};
    float mist{0.50f};
    float fog_color_r{0.58f};
    float fog_color_g{0.68f};
    float fog_color_b{0.78f};
    float fog_start{4500.0f};
    float day_progression{0.88f};
    float temporal_blend{0.50f};
    float temporal_denoise{1.0f};
    float temporal_clamp{1.0f};
};

struct ProperShadersConfiguration {
    bool enabled{true};
    ShaderPipeConfiguration building_pipe{};
    ShaderPipeConfiguration skin_pipe{};
    VehiclePipeConfiguration vehicle_pipe{};
    RealtimeShadowsConfiguration realtime_shadows{};
    VolumetricCloudsConfiguration volumetric_clouds{};
};

// Parses only ProperShaders.ini. Unknown sections/keys are reported through
// warnings so shader configuration never pollutes VCSNative.ini.
void load_proper_shaders_configuration(ProperShadersConfiguration &config,
                                       const std::filesystem::path &path,
                                       std::vector<std::string> &warnings);

} // namespace vcs
