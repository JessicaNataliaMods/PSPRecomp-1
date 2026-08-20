#pragma once

#include "ge_gpu_backend.hpp"

#include <cstdint>
#include <string>
#include <string_view>

namespace vcs {

// Host semantic classification. It is deliberately small and game-profile
// local: the generic PSP renderer only knows GE state, while VCS decides which
// custom pipe a draw belongs to.
[[nodiscard]] GeShaderPipe proper_shaders_classify_draw(GeGpuDrawDescriptor &draw,
                                                         bool skinned) noexcept;
void proper_shaders_begin_frame(std::uint64_t frame_epoch) noexcept;

// Optional private shader module. Public/GitHub builds link the stubs and keep
// the native PSP shader unchanged.
[[nodiscard]] bool proper_shaders_private_available() noexcept;
[[nodiscard]] std::string proper_shaders_make_pipe_hlsl(
    GeShaderPipe pipe, std::string_view native_ge_hlsl,
    bool material_shadows = true);
[[nodiscard]] const char *proper_shaders_volumetric_clouds_hlsl() noexcept;
[[nodiscard]] const char *proper_shaders_realtime_shadows_hlsl() noexcept;
[[nodiscard]] const char *proper_shaders_material_shadow_hlsl() noexcept;

} // namespace vcs
