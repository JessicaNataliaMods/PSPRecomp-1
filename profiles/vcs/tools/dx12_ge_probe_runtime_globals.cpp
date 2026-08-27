// Probe-only definitions for renderer state that is owned by the full VCS
// profile during normal gameplay.  The DX12 GE probe links the renderer in
// isolation, without installing the gameplay draw-distance patch, so it needs
// neutral defaults for the renderer's read-only scale inputs.
#include "vcs_draw_distance_patch.hpp"

namespace vcs {

DrawDistanceRuntimeScales g_draw_distance_runtime_scales{};
DrawDistanceRuntimeTelemetry g_draw_distance_runtime_telemetry{};

} // namespace vcs
