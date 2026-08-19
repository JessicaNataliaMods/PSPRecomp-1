#include "vcs_compact_leaves.hpp"

#include <bit>
#include <cstdint>

namespace psprecomp {

void vcs_compact_leaf_08960424(AllegrexContext &ctx, GuestMemory::AotFastView &aot_mem) noexcept {
    ctx.gpr[4] = aot_mem.aot_direct_load8(ctx.gpr[28] + 7800u);
    ctx.gpr[5] = ctx.gpr[4] + ctx.gpr[4];
    ctx.gpr[6] = ctx.gpr[4] << 8u;
    ctx.gpr[4] = ctx.gpr[4] + ctx.gpr[5];
    ctx.gpr[4] <<= 5u;
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = ctx.gpr[6] + ctx.gpr[4];
    ctx.gpr[5] += static_cast<std::uint32_t>(-6992);
    ctx.gpr[4] += ctx.gpr[5];
    ctx.gpr[2] = aot_mem.aot_direct_load32(ctx.gpr[4]);
    ctx.pc = ctx.gpr[31];
}

void vcs_compact_leaf_0898B428(AllegrexContext &ctx, GuestMemory::AotFastView &) noexcept {
    ctx.gpr[5] = ctx.gpr[4] << 5u;
    ctx.gpr[4] = ctx.gpr[5] - ctx.gpr[4];
    ctx.gpr[4] <<= 3u;
    ctx.gpr[2] = ctx.gpr[4] - ctx.gpr[5];
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[4] += static_cast<std::uint32_t>(-6640);
    ctx.gpr[2] += ctx.gpr[4];
    ctx.pc = ctx.gpr[31];
}

void vcs_compact_leaf_08AFEF7C(AllegrexContext &ctx, GuestMemory::AotFastView &aot_mem) noexcept {
    ctx.gpr[4] += 904u;
    ctx.gpr[5] <<= 2u;
    ctx.gpr[4] += ctx.gpr[5];
    ctx.gpr[2] = aot_mem.aot_direct_load32(ctx.gpr[4]);
    ctx.pc = ctx.gpr[31];
}

void vcs_compact_leaf_08A931B8(AllegrexContext &ctx, GuestMemory::AotFastView &aot_mem) noexcept {
    {
        std::uint32_t words[4]{};
        aot_mem.aot_direct_load32_block(ctx.gpr[4], words);
        float value[4]{std::bit_cast<float>(words[0]), std::bit_cast<float>(words[1]),
                       std::bit_cast<float>(words[2]), std::bit_cast<float>(words[3])};
        ctx.write_vfpu_vector_ct<0u, 4u>(value);
    }
    {
        std::uint32_t words[4]{};
        aot_mem.aot_direct_load32_block(ctx.gpr[5], words);
        float value[4]{std::bit_cast<float>(words[0]), std::bit_cast<float>(words[1]),
                       std::bit_cast<float>(words[2]), std::bit_cast<float>(words[3])};
        ctx.write_vfpu_vector_ct<1u, 4u>(value);
    }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    {
        float value[4]{};
        ctx.read_vfpu_vector_ct<0u, 4u>(value);
        const std::uint32_t words[4]{std::bit_cast<std::uint32_t>(value[0]),
                                     std::bit_cast<std::uint32_t>(value[1]),
                                     std::bit_cast<std::uint32_t>(value[2]),
                                     std::bit_cast<std::uint32_t>(value[3])};
        aot_mem.aot_direct_store32_block(ctx.gpr[4], words);
    }
    ctx.gpr[2] = ctx.gpr[4];
    ctx.pc = ctx.gpr[31];
}

} // namespace psprecomp
