#pragma once
#include "psprecomp/runtime.hpp"

#include <cstdint>
#include <string>

namespace vcs {
void install_profile(psprecomp::Runtime &runtime, std::uint32_t user_arena_start);
// Restores the persistent V8.2.6 post-mission save-repro checkpoint when
// PSPRECOMP_SAVE_REPRO_AUTO_RESTORE=1. Returns true only when a checkpoint
// was requested and restored successfully; `error` is populated on failure.
bool restore_save_repro_checkpoint_if_requested(psprecomp::Runtime &runtime, std::string &error);

// Feeds the display window a dispatch/vblank heartbeat so long synchronous
// guest phases still show progress instead of looking frozen.
void install_display_heartbeat();

// Installs the timer-interrupt stand-in that keeps a purely computational guest
// loop from starving the PSP threads it is waiting on.
void install_starvation_preemption();

// Prints how much of the emulated UMD was served from real files and how much
// was silently zero-filled because no registered file covered the sector.
void report_disc_read_stats();

// Prints how each vblank reached the window: the Vulkan swapchain, or a GDI
// blit of the guest framebuffer the software GE filled.  The second number is
// what decides whether PSPRECOMP_GE_GPU_SKIP_DISPLAYED_RASTER is safe.
void report_present_stats();
[[nodiscard]] bool run_profile_self_tests(std::string &error);
}
