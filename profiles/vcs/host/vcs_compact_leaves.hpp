#pragma once

#include "psprecomp/allegrex_context.hpp"
#include "psprecomp/guest_memory.hpp"

namespace psprecomp {

void vcs_compact_leaf_08960424(AllegrexContext &ctx, GuestMemory::AotFastView &aot_mem) noexcept;
void vcs_compact_leaf_0898B428(AllegrexContext &ctx, GuestMemory::AotFastView &aot_mem) noexcept;
void vcs_compact_leaf_08AFEF7C(AllegrexContext &ctx, GuestMemory::AotFastView &aot_mem) noexcept;
void vcs_compact_leaf_08A931B8(AllegrexContext &ctx, GuestMemory::AotFastView &aot_mem) noexcept;

} // namespace psprecomp
