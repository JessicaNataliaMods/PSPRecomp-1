#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0230[61] = {
    0x0002000000000001ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0400000000020000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000400000000001ull, 0x0000000000000000ull,
    0x0000000010000400ull, 0x0000000080000000ull, 0x0001000000000000ull, 0x0000800000000000ull,
    0x0000000400400080ull, 0x0000000000000000ull, 0x0000000000100000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000800000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000800000ull, 0x0000000000000000ull,
    0x0010000000000200ull, 0x0000008000000000ull, 0x0200000000000000ull, 0x0040100000000080ull,
    0x1000000010140480ull, 0x0000001000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000020000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000040000ull, 0x0000000000000000ull, 0x0000000000100010ull,
    0x0000100000000000ull, 0x2000000200000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000001000000ull,
    0x0200000000000000ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0230[61] = {
    1u, 3u, 3u, 3u, 5u, 5u, 5u, 7u, 7u, 9u, 10u, 11u, 12u, 15u, 15u, 16u,
    16u, 16u, 16u, 16u, 17u, 17u, 17u, 18u, 18u, 20u, 21u, 22u, 25u, 31u, 32u, 32u,
    32u, 32u, 32u, 32u, 32u, 33u, 33u, 33u, 33u, 33u, 33u, 33u, 33u, 33u, 34u, 34u,
    36u, 37u, 39u, 39u, 39u, 39u, 39u, 39u, 39u, 39u, 39u, 39u, 40u,
};
void recomp_unit_0230_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=25,12,1 fprs= gpr_occ=5 fpr_occ=0 gpr_total=5 fpr_total=0
    std::uint32_t aot_gpr_25 = ctx.gpr[25];
    std::uint32_t aot_gpr_12 = ctx.gpr[12];
    std::uint32_t aot_gpr_1 = ctx.gpr[1];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[25] = aot_gpr_25; ctx.gpr[12] = aot_gpr_12; ctx.gpr[1] = aot_gpr_1; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_25 = ctx.gpr[25]; aot_gpr_12 = ctx.gpr[12]; aot_gpr_1 = ctx.gpr[1]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B9C000u;
        entry_id = 0u;
        if (entry_delta < 15592u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0230[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0230[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08B9C000;
    case 2u: goto L_08B9C0C4;
    case 3u: goto L_08B9C344;
    case 4u: goto L_08B9C3E8;
    case 5u: goto L_08B9C600;
    case 6u: goto L_08B9C6B8;
    case 7u: goto L_08B9C828;
    case 8u: goto L_08B9C870;
    case 9u: goto L_08B9C97C;
    case 10u: goto L_08B9CAC0;
    case 11u: goto L_08B9CBBC;
    case 12u: goto L_08B9CC1C;
    case 13u: goto L_08B9CC58;
    case 14u: goto L_08B9CC88;
    case 15u: goto L_08B9CE50;
    case 16u: goto L_08B9D3BC;
    case 17u: goto L_08B9D65C;
    case 18u: goto L_08B9D824;
    case 19u: goto L_08B9D8D0;
    case 20u: goto L_08B9D99C;
    case 21u: goto L_08B9DAE4;
    case 22u: goto L_08B9DB1C;
    case 23u: goto L_08B9DBB0;
    case 24u: goto L_08B9DBD8;
    case 25u: goto L_08B9DC1C;
    case 26u: goto L_08B9DC28;
    case 27u: goto L_08B9DC48;
    case 28u: goto L_08B9DC50;
    case 29u: goto L_08B9DC70;
    case 30u: goto L_08B9DCF0;
    case 31u: goto L_08B9DD90;
    case 32u: goto L_08B9E444;
    case 33u: goto L_08B9ED48;
    case 34u: goto L_08B9EF10;
    case 35u: goto L_08B9EF50;
    case 36u: goto L_08B9F0B0;
    case 37u: goto L_08B9F184;
    case 38u: goto L_08B9F1F4;
    case 39u: goto L_08B9FB60;
    case 40u: goto L_08B9FCE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08B9C000:
    goto L_08B9C0C4;
L_08B9C0C4:
    goto L_08B9C344;
L_08B9C344:
    goto L_08B9C3E8;
L_08B9C3E8:
    goto L_08B9C600;
L_08B9C600:
    goto L_08B9C6B8;
L_08B9C6B8:
    goto L_08B9C828;
L_08B9C828:
    goto L_08B9C870;
L_08B9C870:
    goto L_08B9C97C;
L_08B9C97C:
    goto L_08B9CAC0;
L_08B9CAC0:
    goto L_08B9CBBC;
L_08B9CBBC:
    goto L_08B9CC1C;
L_08B9CC1C:
    goto L_08B9CC58;
L_08B9CC58:
    goto L_08B9CC88;
L_08B9CC88:
    goto L_08B9CE50;
L_08B9CE50:
    goto L_08B9D3BC;
L_08B9D3BC:
    goto L_08B9D65C;
L_08B9D65C:
    goto L_08B9D824;
L_08B9D824:
    goto L_08B9D8D0;
L_08B9D8D0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B9D8D0u, 0x6B6F6D73u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B9D99C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B9D99Cu, 0x00003630u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B9DAE4:
    (void)(0u >> 0u);
    (void)(0u >> (0u & 31u));
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_25 = (39322u << 16u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B9DB00u, 0x00000001u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B9DB1C:
    // PSP CACHE is a no-op in coherent host memory.
    (void)(0u << 16u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B9DB30u, 0x00000001u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B9DBB0:
    aot_gpr_25 = (39322u << 16u);
    aot_gpr_25 = (39322u << 16u);
    if (0u == 0u) (void)(0u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B9DBC4u, 0x00000005u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B9DBD8:
    (void)(0u < 0u ? 1u : 0u);
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B9DBE4u, 0x000000EEu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B9DC1C:
    if (0u != 0u) (void)(0u);
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B9DC28;
L_08B9DC28:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B9DC30u, 0x08BAD118u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B9DC48:
    goto L_08B9DC50;
L_08B9DC50:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B9DC50u, 0x00000001u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B9DC70:
    (void)(aot_gpr_1 << 0u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B9DC74u, 0x00020001u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B9DCF0:
    goto L_08B9DD90;
L_08B9DD90:
    goto L_08B9E444;
L_08B9E444:
    goto L_08B9ED48;
L_08B9ED48:
    goto L_08B9EF10;
L_08B9EF10:
    goto L_08B9EF50;
L_08B9EF50:
    goto L_08B9F0B0;
L_08B9F0B0:
    goto L_08B9F184;
L_08B9F184:
    goto L_08B9F1F4;
L_08B9F1F4:
    goto L_08B9FB60;
L_08B9FB60:
    goto L_08B9FCE4;
L_08B9FCE4:
    ctx.pc = 0x08BA0000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0230(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0230_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_230(Runtime &runtime) {
    runtime.register_generated_unit(230u, 0x08B9C000u, 16384u, &recomp_unit_0230, &recomp_unit_0230_entry);
    runtime.register_function(0x08B9C000u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9C0C4u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9C344u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9C3E8u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9C600u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9C6B8u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9C828u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9C870u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9C97Cu, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9CAC0u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9CBBCu, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9CC1Cu, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9CC58u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9CC88u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9CE50u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9D3BCu, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9D65Cu, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9D824u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9D8D0u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9D99Cu, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9DAE4u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9DB1Cu, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9DBB0u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9DBD8u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9DC1Cu, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9DC28u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9DC48u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9DC50u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9DC70u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9DCF0u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9DD90u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9E444u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9ED48u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9EF10u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9EF50u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9F0B0u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9F184u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9F1F4u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9FB60u, &recomp_unit_0230, "recomp_unit_0230");
    runtime.register_function(0x08B9FCE4u, &recomp_unit_0230, "recomp_unit_0230");
}
} // namespace psprecomp
