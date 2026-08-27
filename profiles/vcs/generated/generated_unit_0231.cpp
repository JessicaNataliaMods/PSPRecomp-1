#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0231[63] = {
    0x0000001041000001ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000800000000ull, 0x0000410020180001ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x1000100000000000ull, 0x0000101010000100ull, 0x000000000000000Dull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0020010010000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0008040000000000ull, 0x0800000090820008ull, 0x0000000842000000ull, 0x0002101004000000ull,
    0x0408000041000020ull, 0x0000000100000000ull, 0x0000000000000000ull, 0x8000004101010000ull,
    0x0000100040000080ull, 0x0000210000000000ull, 0x1000000000000800ull, 0x0004000000000100ull,
    0x1000104104104100ull, 0x0400800100110001ull, 0x120001040100F1CAull, 0x0000000040100000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000100000ull,
    0x0400000000000002ull, 0x0000000000000000ull, 0x0000000020000000ull, 0x0000010000010002ull,
    0x0000000000008000ull, 0x9400000000000000ull, 0x0000000080000924ull, 0x0000040000000000ull,
    0x0000000100000000ull, 0x0000800002000020ull, 0x0001000800000000ull, 0x0000000000000000ull,
    0x0040080000000000ull, 0x0000000800000000ull, 0x1001000000050000ull, 0x0400020001001000ull,
    0x0000000101000010ull, 0x0000041010000100ull, 0x0000001000000000ull, 0x0000000000000000ull,
    0x4500400020400000ull, 0x0001000000008080ull, 0x0010000021040000ull, 0x8000020000104104ull,
    0x0040100000200000ull, 0x0000000000000000ull, 0x0000000400000000ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0231[63] = {
    1u, 5u, 5u, 5u, 5u, 6u, 12u, 12u, 12u, 14u, 18u, 21u, 21u, 21u, 24u, 24u,
    24u, 26u, 32u, 35u, 39u, 44u, 45u, 45u, 50u, 53u, 55u, 57u, 59u, 67u, 73u, 87u,
    89u, 89u, 89u, 89u, 90u, 92u, 92u, 93u, 96u, 97u, 100u, 105u, 106u, 107u, 110u, 112u,
    112u, 114u, 115u, 119u, 123u, 126u, 130u, 131u, 131u, 137u, 140u, 144u, 150u, 153u, 153u,
};
void recomp_unit_0231_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=12,25,6,19,3,9 fprs= gpr_occ=94 fpr_occ=0 gpr_total=139 fpr_total=0
    std::uint32_t aot_gpr_12 = ctx.gpr[12];
    std::uint32_t aot_gpr_25 = ctx.gpr[25];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_19 = ctx.gpr[19];
    std::uint32_t aot_gpr_3 = ctx.gpr[3];
    std::uint32_t aot_gpr_9 = ctx.gpr[9];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[12] = aot_gpr_12; ctx.gpr[25] = aot_gpr_25; ctx.gpr[6] = aot_gpr_6; ctx.gpr[19] = aot_gpr_19; ctx.gpr[3] = aot_gpr_3; ctx.gpr[9] = aot_gpr_9; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_12 = ctx.gpr[12]; aot_gpr_25 = ctx.gpr[25]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_19 = ctx.gpr[19]; aot_gpr_3 = ctx.gpr[3]; aot_gpr_9 = ctx.gpr[9]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08BA0000u;
        entry_id = 0u;
        if (entry_delta < 16012u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0231[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0231[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08BA0000;
    case 2u: goto L_08BA0060;
    case 3u: goto L_08BA0078;
    case 4u: goto L_08BA0090;
    case 5u: goto L_08BA048C;
    case 6u: goto L_08BA0500;
    case 7u: goto L_08BA054C;
    case 8u: goto L_08BA0550;
    case 9u: goto L_08BA0574;
    case 10u: goto L_08BA05A0;
    case 11u: goto L_08BA05B8;
    case 12u: goto L_08BA08B0;
    case 13u: goto L_08BA08F0;
    case 14u: goto L_08BA0920;
    case 15u: goto L_08BA0970;
    case 16u: goto L_08BA0990;
    case 17u: goto L_08BA09B0;
    case 18u: goto L_08BA0A00;
    case 19u: goto L_08BA0A08;
    case 20u: goto L_08BA0A0C;
    case 21u: goto L_08BA0D70;
    case 22u: goto L_08BA0DA0;
    case 23u: goto L_08BA0DD4;
    case 24u: goto L_08BA10A8;
    case 25u: goto L_08BA10CC;
    case 26u: goto L_08BA110C;
    case 27u: goto L_08BA1144;
    case 28u: goto L_08BA115C;
    case 29u: goto L_08BA1170;
    case 30u: goto L_08BA117C;
    case 31u: goto L_08BA11EC;
    case 32u: goto L_08BA1264;
    case 33u: goto L_08BA1278;
    case 34u: goto L_08BA128C;
    case 35u: goto L_08BA1368;
    case 36u: goto L_08BA1390;
    case 37u: goto L_08BA13B0;
    case 38u: goto L_08BA13C4;
    case 39u: goto L_08BA1414;
    case 40u: goto L_08BA1460;
    case 41u: goto L_08BA1478;
    case 42u: goto L_08BA14CC;
    case 43u: goto L_08BA14E8;
    case 44u: goto L_08BA1580;
    case 45u: goto L_08BA1740;
    case 46u: goto L_08BA1760;
    case 47u: goto L_08BA1780;
    case 48u: goto L_08BA1798;
    case 49u: goto L_08BA17FC;
    case 50u: goto L_08BA181C;
    case 51u: goto L_08BA1878;
    case 52u: goto L_08BA18B0;
    case 53u: goto L_08BA19A0;
    case 54u: goto L_08BA19B4;
    case 55u: goto L_08BA1A2C;
    case 56u: goto L_08BA1AF0;
    case 57u: goto L_08BA1B20;
    case 58u: goto L_08BA1BC8;
    case 59u: goto L_08BA1C20;
    case 60u: goto L_08BA1C38;
    case 61u: goto L_08BA1C50;
    case 62u: goto L_08BA1C68;
    case 63u: goto L_08BA1C80;
    case 64u: goto L_08BA1C98;
    case 65u: goto L_08BA1CB0;
    case 66u: goto L_08BA1CF0;
    case 67u: goto L_08BA1D00;
    case 68u: goto L_08BA1D40;
    case 69u: goto L_08BA1D50;
    case 70u: goto L_08BA1D80;
    case 71u: goto L_08BA1DBC;
    case 72u: goto L_08BA1DE8;
    case 73u: goto L_08BA1E04;
    case 74u: goto L_08BA1E0C;
    case 75u: goto L_08BA1E18;
    case 76u: goto L_08BA1E1C;
    case 77u: goto L_08BA1E20;
    case 78u: goto L_08BA1E30;
    case 79u: goto L_08BA1E34;
    case 80u: goto L_08BA1E38;
    case 81u: goto L_08BA1E3C;
    case 82u: goto L_08BA1E60;
    case 83u: goto L_08BA1E88;
    case 84u: goto L_08BA1EA0;
    case 85u: goto L_08BA1EE4;
    case 86u: goto L_08BA1EF0;
    case 87u: goto L_08BA1F50;
    case 88u: goto L_08BA1F78;
    case 89u: goto L_08BA2350;
    case 90u: goto L_08BA2404;
    case 91u: goto L_08BA24E8;
    case 92u: goto L_08BA2674;
    case 93u: goto L_08BA2704;
    case 94u: goto L_08BA2740;
    case 95u: goto L_08BA27A0;
    case 96u: goto L_08BA283C;
    case 97u: goto L_08BA29E8;
    case 98u: goto L_08BA29F0;
    case 99u: goto L_08BA29FC;
    case 100u: goto L_08BA2A08;
    case 101u: goto L_08BA2A14;
    case 102u: goto L_08BA2A20;
    case 103u: goto L_08BA2A2C;
    case 104u: goto L_08BA2A7C;
    case 105u: goto L_08BA2BA8;
    case 106u: goto L_08BA2C80;
    case 107u: goto L_08BA2D14;
    case 108u: goto L_08BA2D64;
    case 109u: goto L_08BA2DBC;
    case 110u: goto L_08BA2E8C;
    case 111u: goto L_08BA2EC0;
    case 112u: goto L_08BA30AC;
    case 113u: goto L_08BA30D8;
    case 114u: goto L_08BA318C;
    case 115u: goto L_08BA3240;
    case 116u: goto L_08BA3248;
    case 117u: goto L_08BA32C0;
    case 118u: goto L_08BA32F0;
    case 119u: goto L_08BA3330;
    case 120u: goto L_08BA3360;
    case 121u: goto L_08BA33A4;
    case 122u: goto L_08BA33E8;
    case 123u: goto L_08BA3410;
    case 124u: goto L_08BA3460;
    case 125u: goto L_08BA3480;
    case 126u: goto L_08BA3520;
    case 127u: goto L_08BA3570;
    case 128u: goto L_08BA3590;
    case 129u: goto L_08BA35A8;
    case 130u: goto L_08BA3690;
    case 131u: goto L_08BA3858;
    case 132u: goto L_08BA3874;
    case 133u: goto L_08BA38B8;
    case 134u: goto L_08BA38E0;
    case 135u: goto L_08BA38E8;
    case 136u: goto L_08BA38F8;
    case 137u: goto L_08BA391C;
    case 138u: goto L_08BA393C;
    case 139u: goto L_08BA39C0;
    case 140u: goto L_08BA3A48;
    case 141u: goto L_08BA3A60;
    case 142u: goto L_08BA3A74;
    case 143u: goto L_08BA3AD0;
    case 144u: goto L_08BA3B08;
    case 145u: goto L_08BA3B20;
    case 146u: goto L_08BA3B38;
    case 147u: goto L_08BA3B50;
    case 148u: goto L_08BA3BA4;
    case 149u: goto L_08BA3BFC;
    case 150u: goto L_08BA3C54;
    case 151u: goto L_08BA3CB0;
    case 152u: goto L_08BA3CD8;
    case 153u: goto L_08BA3E88;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V812_SHARED_SCHED_BLOCK: one scheduler-exact slow boundary per unit.
LOCAL_SCHED_BOUNDARY:
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08BA0000:
    goto L_08BA0060;
L_08BA0060:
    goto L_08BA0078;
L_08BA0078:
    goto L_08BA0090;
L_08BA0090:
    goto L_08BA048C;
L_08BA048C:
    goto L_08BA0500;
L_08BA0500:
    goto L_08BA054C;
L_08BA054C:
    goto L_08BA0550;
L_08BA0550:
    goto L_08BA0574;
L_08BA0574:
    goto L_08BA05A0;
L_08BA05A0:
    goto L_08BA05B8;
L_08BA05B8:
    goto L_08BA08B0;
L_08BA08B0:
    goto L_08BA08F0;
L_08BA08F0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA08F0u, 0x40800000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA0920:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA0920u, 0x41200000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA0970:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA0970u, 0x42C80000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA0990:
    goto L_08BA09B0;
L_08BA09B0:
    goto L_08BA0A00;
L_08BA0A00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
      if (branch_taken) {
          goto L_08BA0A08;
      }
      goto L_08BA0A0C;
    }
L_08BA0A08:
    goto L_08BA0A0C;
L_08BA0A0C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA0A10u, 0x0A1F0A1Fu, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA0D70:
    goto L_08BA0DA0;
L_08BA0DA0:
    goto L_08BA0DD4;
L_08BA0DD4:
    if (!([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_ok_ = ctx.execute_signed_add(4u, 0u, 0u); AOT_REGCACHE_SYNC_IN(); return aot_regcache_ok_; }())) { rt.arithmetic_overflow(0x08BA10A0u, 0x00002020u); AOT_REGCACHE_SYNC_OUT(); return; }
    goto L_08BA10A8;
L_08BA10A8:
    goto L_08BA10CC;
L_08BA10CC:
    ctx.execute_vfpu_compare3_ct<99u, 111u, 114u, 1u, 6u>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA10D0u, 0x7473616Eu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA110C:
    ctx.execute_vfpu_compare3_ct<99u, 111u, 114u, 1u, 6u>();
    ctx.execute_vfpu_compare3_ct<110u, 97u, 109u, 1u, 6u>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1114u, 0x00006E6Fu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1144:
    ctx.execute_vfpu_compare3_ct<99u, 111u, 114u, 1u, 6u>();
    ctx.execute_vfpu_vscl_ct<110u, 97u, 104u, 1u>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1154u, 0x696C6461u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA115C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA115Cu, 0x00656E69u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1170:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 104u, 1u>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1174u, 0x00000078u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA117C:
    ctx.execute_vfpu_compare3_ct<99u, 111u, 114u, 1u, 6u>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1190u, 0x6963616Eu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA11EC:
    // PSP CACHE is a no-op in coherent host memory.
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA11F0u, 0x41700000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1264:
    aot_gpr_6 = (26214u << 16u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1268u, 0x40F00000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1278:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1280u, 0x00FF00FFu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA128C:
    // PSP CACHE is a no-op in coherent host memory.
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1290u, 0x41780000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1368:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA136Cu, 0x08CB2400u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1390:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1394u, 0x08C46D40u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA13B0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA13B4u, 0x08C46D40u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA13C4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA13C8u, 0x08C46D40u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1414:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1460u, 0x08CABC00u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1460:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1464u, 0x08CABC00u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1478:
    (void)(0u << 16u);
    aot_gpr_12 = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    aot_gpr_9 = (4059u << 16u);
    ctx.gpr[18] = (47299u << 16u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1494u, 0x40800000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA14CC:
    aot_gpr_25 = (39322u << 16u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA14D0u, 0x40000000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA14E8:
    (void)(0u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_3 = (55050u << 16u);
    (void)(0u << 16u);
    aot_gpr_9 = (4059u << 16u);
    ctx.gpr[29] = (58446u << 16u);
    aot_gpr_25 = (39322u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_25 = (39322u << 16u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1514u, 0x40000000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1580:
    aot_gpr_6 = (26214u << 16u);
    (void)(0u << 16u);
    aot_gpr_12 = (52429u << 16u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA158Cu, 0x41200000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1740:
    (void)(0u << 16u);
    (void)(0u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_3 = (ctx.gpr[29] ^ 55050u);
    aot_gpr_12 = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[18] = (47299u << 16u);
    ctx.gpr[28] = (25003u << 16u);
    goto L_08BA1760;
L_08BA1760:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1760u, 0x0000003Fu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1780:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_3) >> 12u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_3) >> 12u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_3) >> 12u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 20u));
    if (static_cast<std::int32_t>(ctx.gpr[8]) >= 0) {
    (void)(ctx.gpr[1] >> 8u);
        goto L_08BA2BA8;
    }
    goto L_08BA1798;
L_08BA1798:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_3) >> 4u));
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA179Cu, 0x00010101u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA17FC:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA17FCu, 0x01020201u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA181C:
    (void)(0u >> (0u & 31u));
    (void)(aot_gpr_3 << 0u);
    (void)(ctx.gpr[1] << 4u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA183Cu, 0x01030101u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1878:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1878u, 0x22211F1Eu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA18B0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA18B4u, 0x08BAEA10u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA19A0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA19A4u, 0x08BAEC08u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA19B4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA19B8u, 0x08BAEB20u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1A2C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1A30u, 0x08BAEB48u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1AF0:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    // PSP CACHE is a no-op in coherent host memory.
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1AF8u, 0xCFCFFFFFu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1B20:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1B24u, 0x08BAF3B8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1BC8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1BCCu, 0x08BAF3B8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1C20:
    aot_gpr_9 = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    aot_gpr_6 = (2706u << 16u);
    aot_gpr_9 = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[14] = (64053u << 16u);
    goto L_08BA1C38;
L_08BA1C38:
    aot_gpr_9 = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[18] = (47299u << 16u);
    aot_gpr_9 = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[18] = (47299u << 16u);
    goto L_08BA1C50;
L_08BA1C50:
    ctx.gpr[31] = (26355u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[14] = (64053u << 16u);
    aot_gpr_9 = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[18] = (47299u << 16u);
    goto L_08BA1C68;
L_08BA1C68:
    ctx.gpr[18] = (47299u << 16u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1C6Cu, 0xC0060A92u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1C80:
    aot_gpr_6 = (2706u << 16u);
    aot_gpr_6 = (2706u << 16u);
    aot_gpr_9 = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[18] = (47299u << 16u);
    goto L_08BA1C98;
L_08BA1C98:
    aot_gpr_12 = (52429u << 16u);
    (void)(0u << 16u);
    aot_gpr_25 = (39322u << 16u);
    aot_gpr_6 = (26214u << 16u);
    aot_gpr_25 = (39322u << 16u);
    aot_gpr_25 = (39322u << 16u);
    goto L_08BA1CB0;
L_08BA1CB0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1CB4u, 0x08BAFA9Cu, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1CF0:
    goto L_08BA1D00;
L_08BA1D00:
    goto L_08BA1D40;
L_08BA1D40:
    goto L_08BA1D50;
L_08BA1D50:
    goto L_08BA1D80;
L_08BA1D80:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1D84u, 0x00000015u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1DBC:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1DBCu, 0x00000005u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1DE8:
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::uint32_t dividend = 0u; ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; }
    (void)(static_cast<std::uint32_t>(std::countl_one(0u)));
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1DF4u, 0x00000014u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1E04:
    jump_target = 0u;
    ctx.gpr[31] = (0x08BA1E0Cu);
    if (0u == 0u) (void)(0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08BA1E0Cu) goto L_08BA1E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1E0C:
    if (0u != 0u) (void)(0u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1E10u, 0x0000000Cu, "syscall not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1E18:
    if (!([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_ok_ = ctx.execute_signed_add(9u, 0u, 0u); AOT_REGCACHE_SYNC_IN(); return aot_regcache_ok_; }())) { rt.arithmetic_overflow(0x08BA1E18u, 0x00004E20u); AOT_REGCACHE_SYNC_OUT(); return; }
    goto L_08BA1E1C;
L_08BA1E1C:
    ctx.gpr[4] = (ctx.hi);
    goto L_08BA1E20;
L_08BA1E20:
    jump_target = 0u;
    ctx.gpr[4] = (ctx.hi);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08BA1E30:
    if (!([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_ok_ = ctx.execute_signed_add(5u, 0u, 0u); AOT_REGCACHE_SYNC_IN(); return aot_regcache_ok_; }())) { rt.arithmetic_overflow(0x08BA1E30u, 0x00002EE0u); AOT_REGCACHE_SYNC_OUT(); return; }
    goto L_08BA1E34;
L_08BA1E34:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08BA1E38;
L_08BA1E38:
    jump_target = 0u;
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1E3Cu, 0x40400000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08BA1E3C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1E3Cu, 0x40400000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1E60:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1E60u, 0x42F00000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1E88:
    (void)(0u << 16u);
    aot_gpr_19 = (13107u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    aot_gpr_19 = (13107u << 16u);
    goto L_08BA1EA0;
L_08BA1EA0:
    goto L_08BA1EE4;
L_08BA1EE4:
    goto L_08BA1EF0;
L_08BA1EF0:
    goto L_08BA1F50;
L_08BA1F50:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1F54u, 0x77073096u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA1F78:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA1F78u, 0xE0D5E91Eu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA2350:
    aot_gpr_12 = (52429u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    (void)(0u << 16u);
    ctx.gpr[23] = (2621u << 16u);
    ctx.gpr[17] = (60293u << 16u);
    ctx.gpr[14] = (5243u << 16u);
    aot_gpr_12 = (52429u << 16u);
    ctx.gpr[28] = (10486u << 16u);
    aot_gpr_6 = (26214u << 16u);
    ctx.gpr[14] = (5243u << 16u);
    goto L_08BA2404;
L_08BA2404:
    aot_gpr_19 = (13107u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[24] = (20972u << 16u);
    ctx.gpr[26] = (57672u << 16u);
    ctx.gpr[29] = (28836u << 16u);
    (void)(0u << 16u);
    aot_gpr_25 = (39322u << 16u);
    aot_gpr_19 = (13107u << 16u);
    aot_gpr_25 = (39322u << 16u);
    aot_gpr_6 = (26214u << 16u);
    aot_gpr_25 = (39322u << 16u);
    (void)(0u << 16u);
    aot_gpr_6 = (26214u << 16u);
    aot_gpr_25 = (39322u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_19 = (13107u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_25 = (39322u << 16u);
    aot_gpr_6 = (26214u << 16u);
    aot_gpr_25 = (39322u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_12 = (52429u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    (void)(0u << 16u);
    ctx.gpr[23] = (2621u << 16u);
    ctx.gpr[17] = (60293u << 16u);
    ctx.gpr[14] = (5243u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_19 = (13107u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_19 = (13107u << 16u);
    ctx.gpr[23] = (2621u << 16u);
    aot_gpr_19 = (13107u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_6 = (26214u << 16u);
    aot_gpr_3 = (55050u << 16u);
    (void)(0u << 16u);
    aot_gpr_25 = (39322u << 16u);
    aot_gpr_19 = (13107u << 16u);
    aot_gpr_25 = (39322u << 16u);
    aot_gpr_6 = (26214u << 16u);
    aot_gpr_25 = (39322u << 16u);
    (void)(0u << 16u);
    aot_gpr_6 = (26214u << 16u);
    aot_gpr_25 = (39322u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_19 = (13107u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_25 = (39322u << 16u);
    aot_gpr_6 = (26214u << 16u);
    aot_gpr_25 = (39322u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_12 = (52429u << 16u);
    goto L_08BA24E8;
L_08BA24E8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA24ECu, 0x00000001u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
    ctx.pc = 0x02EC2D60u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA2674:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA2678u, 0x00000001u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
    ctx.pc = 0x02EC3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA2704:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA2708u, 0x00000001u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
    ctx.pc = 0x02EC3570u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA2740:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA2744u, 0x00000001u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
    ctx.pc = 0x02EC3610u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA27A0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA27A4u, 0x00000001u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
    ctx.pc = 0x02E09980u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA283C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA2840u, 0x00000001u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
    ctx.pc = 0x02EC2D60u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA29E8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA29ECu, 0x08BB0F3Cu, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA29F0:
    if (0u == 0u) (void)(0u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA29F8u, 0x08BB0F4Cu, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA29FC:
    if (0u != 0u) (void)(0u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA2A04u, 0x08BB0F58u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA2A08:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA2A08u, 0x0000000Cu, "syscall not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA2A14:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA2A14u, 0x0000000Du, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA2A20:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA2A20u, 0x0000000Eu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA2A2C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA2A30u, 0x00000601u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA2A7C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA2A80u, 0x00000001u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
    ctx.pc = 0x02EC2D60u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA2BA8:
    (void)(0u >> 0u);
    ctx.pc = 0x02EC3C10u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA2C80:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA2C84u, 0x00000001u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
    ctx.pc = 0x02EC3570u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA2D14:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA2D18u, 0x00000601u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA2D64:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA2D68u, 0x00000001u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
    ctx.pc = 0x02EC3570u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA2DBC:
    jump_target = 0u;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08BA2E8C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA2E8Cu, 0x00000601u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA2EC0:
    (void)(0u >> 0u);
    ctx.pc = 0x02EC40E0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA30AC:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA30B0u, 0x08BA2674u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA30D8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA30D8u, 0x46323953u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA318C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA318Cu, 0x0000304Du, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA3240:
    if (ctx.gpr[2] != ctx.gpr[15]) {
        ctx.pc = 0x08BB6390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08BA3248;
L_08BA3248:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA3260u, 0x45464153u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA32C0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA32C0u, 0x45464153u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA32F0:
    (void)(0u << 16u);
    (void)(0u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_19 = (13107u << 16u);
    aot_gpr_12 = (52429u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    aot_gpr_25 = (39322u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_12 = (52429u << 16u);
    aot_gpr_19 = (13107u << 16u);
    aot_gpr_25 = (39322u << 16u);
    aot_gpr_25 = (39322u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    aot_gpr_12 = (52429u << 16u);
    goto L_08BA3330;
L_08BA3330:
    goto L_08BA3360;
L_08BA3360:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA3364u, 0x08BB1DD8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA33A4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA33A8u, 0x08BB1E5Cu, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA33E8:
    (void)(0u << 16u);
    aot_gpr_19 = (13107u << 16u);
    (void)(0u << 16u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA33FCu, 0x40000000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA3410:
    goto L_08BA3460;
L_08BA3460:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA3460u, 0x40200000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA3480:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08BA3520;
L_08BA3520:
    (void)(ctx.gpr[26] << 0u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA3548u, 0x009600FAu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA3570:
    aot_gpr_6 = (26214u << 16u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA3574u, 0x40000000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA3590:
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA3598u, 0x000000E8u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA35A8:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA35B4u, 0x000000D4u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA3690:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA3694u, 0x00000035u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
    ctx.pc = 0x02ECBD00u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA3858:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA3858u, 0x000000CDu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA3874:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA3874u, 0x000000FEu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA38B8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA38B8u, 0x20202000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA38E0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA38E4u, 0x10101010u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA38E8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA38E8u, 0x04040410u, "regimm? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA38F8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA38F8u, 0x41411010u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA391C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA391Cu, 0x42424242u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA393C:
    goto L_08BA39C0;
L_08BA39C0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA39C8u, 0x08BA3BFCu, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA3A48:
    goto L_08BA3A60;
L_08BA3A60:
    goto L_08BA3A74;
L_08BA3A74:
    goto L_08BA3AD0;
L_08BA3AD0:
    goto L_08BA3B08;
L_08BA3B08:
    goto L_08BA3B20;
L_08BA3B20:
    goto L_08BA3B38;
L_08BA3B38:
    goto L_08BA3B50;
L_08BA3B50:
    goto L_08BA3BA4;
L_08BA3BA4:
    goto L_08BA3BFC;
L_08BA3BFC:
    goto L_08BA3C54;
L_08BA3C54:
    if (ctx.gpr[1] == 0u) (void)(0u);
    ctx.pc = 0x02E8E700u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA3CB0:
    if (ctx.gpr[1] == 0u) (void)(0u);
    (void)(aot_gpr_3 >> 0u);
    (void)(ctx.gpr[5] << (0u & 31u));
    (void)(ctx.gpr[7] >> (0u & 31u));
    jump_target = 0u;
    if (ctx.gpr[11] == 0u) (void)(0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08BA3CD8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA3CD8u, 0x00000001u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA3E88:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA3E88u, 0x00000005u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0231(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0231_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_231(Runtime &runtime) {
    runtime.register_generated_unit(231u, 0x08BA0000u, 16384u, &recomp_unit_0231, &recomp_unit_0231_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08BA0000u, &recomp_unit_0231, "recomp_unit_0231",
                                          kEntryMasks_recomp_unit_0231, 63u);
}
} // namespace psprecomp
