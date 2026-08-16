#pragma once

#include "psprecomp/guest_memory.hpp"
#include <cstdint>

namespace psprecomp {
class Runtime;
struct AllegrexContext;
}

namespace vcs {

bool tier2_superblocks_enabled() noexcept;
void tier2_superblock_154_155(psprecomp::Runtime &rt,
                              psprecomp::AllegrexContext &ctx,
                              psprecomp::GuestMemory::AotFastView &aot_mem,
                              std::uint32_t entry_pc);

} // namespace vcs
