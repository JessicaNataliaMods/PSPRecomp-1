#include "propershaders/ProperShadersBridge.hpp"

namespace vcs {
bool proper_shaders_private_available() noexcept { return false; }
std::string proper_shaders_make_pipe_hlsl(GeShaderPipe, std::string_view native_ge_hlsl, bool) {
    return std::string(native_ge_hlsl);
}
const char *proper_shaders_volumetric_clouds_hlsl() noexcept { return nullptr; }
const char *proper_shaders_realtime_shadows_hlsl() noexcept { return nullptr; }
const char *proper_shaders_material_shadow_hlsl() noexcept { return nullptr; }
} // namespace vcs
