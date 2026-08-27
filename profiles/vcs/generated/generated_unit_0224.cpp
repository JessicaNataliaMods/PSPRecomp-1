#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0224[64] = {
    0x0000000000050101ull, 0x212AAD6B19479214ull, 0x00000000A4400420ull, 0x0000000000000000ull,
    0x4000000000000000ull, 0x0000000000000000ull, 0x0100000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000200ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000800000ull, 0x0000000004000000ull, 0x0000010000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0002000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000080ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x9240000000000000ull, 0xA34D28A849A524A6ull, 0x92512294C62A6891ull,
    0x9014418A64892222ull, 0x421122A54AD53144ull, 0x4000000000000008ull, 0x0000000000004500ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000400000400ull, 0xA241040000000000ull,
    0x000000000020C528ull, 0x1041084A00000000ull, 0x608A0810AD850842ull, 0x104253094C04081Aull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0224[64] = {
    1u, 5u, 32u, 38u, 38u, 39u, 39u, 40u, 40u, 40u, 40u, 40u, 40u, 41u, 41u, 41u,
    41u, 41u, 41u, 41u, 41u, 41u, 41u, 41u, 41u, 41u, 42u, 43u, 44u, 44u, 44u, 44u,
    44u, 44u, 44u, 44u, 44u, 44u, 44u, 45u, 45u, 45u, 46u, 46u, 46u, 46u, 46u, 46u,
    46u, 46u, 50u, 76u, 100u, 119u, 142u, 144u, 147u, 147u, 147u, 149u, 155u, 162u, 169u, 187u,
};
void recomp_unit_0224_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=19,26,3,2,20,12 fprs= gpr_occ=54 fpr_occ=0 gpr_total=71 fpr_total=0
    std::uint32_t aot_gpr_19 = ctx.gpr[19];
    std::uint32_t aot_gpr_26 = ctx.gpr[26];
    std::uint32_t aot_gpr_3 = ctx.gpr[3];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_20 = ctx.gpr[20];
    std::uint32_t aot_gpr_12 = ctx.gpr[12];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[19] = aot_gpr_19; ctx.gpr[26] = aot_gpr_26; ctx.gpr[3] = aot_gpr_3; ctx.gpr[2] = aot_gpr_2; ctx.gpr[20] = aot_gpr_20; ctx.gpr[12] = aot_gpr_12; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_19 = ctx.gpr[19]; aot_gpr_26 = ctx.gpr[26]; aot_gpr_3 = ctx.gpr[3]; aot_gpr_2 = ctx.gpr[2]; aot_gpr_20 = ctx.gpr[20]; aot_gpr_12 = ctx.gpr[12]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B84000u;
        entry_id = 0u;
        if (entry_delta < 16372u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0224[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0224[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08B84000;
    case 2u: goto L_08B84020;
    case 3u: goto L_08B84040;
    case 4u: goto L_08B84048;
    case 5u: goto L_08B84108;
    case 6u: goto L_08B84110;
    case 7u: goto L_08B84124;
    case 8u: goto L_08B84130;
    case 9u: goto L_08B8413C;
    case 10u: goto L_08B84140;
    case 11u: goto L_08B84144;
    case 12u: goto L_08B84148;
    case 13u: goto L_08B84158;
    case 14u: goto L_08B84160;
    case 15u: goto L_08B8416C;
    case 16u: goto L_08B84170;
    case 17u: goto L_08B84180;
    case 18u: goto L_08B84184;
    case 19u: goto L_08B8418C;
    case 20u: goto L_08B84194;
    case 21u: goto L_08B84198;
    case 22u: goto L_08B841A0;
    case 23u: goto L_08B841A8;
    case 24u: goto L_08B841AC;
    case 25u: goto L_08B841B4;
    case 26u: goto L_08B841BC;
    case 27u: goto L_08B841C4;
    case 28u: goto L_08B841CC;
    case 29u: goto L_08B841D4;
    case 30u: goto L_08B841E0;
    case 31u: goto L_08B841F4;
    case 32u: goto L_08B84214;
    case 33u: goto L_08B84228;
    case 34u: goto L_08B84258;
    case 35u: goto L_08B84268;
    case 36u: goto L_08B84274;
    case 37u: goto L_08B8427C;
    case 38u: goto L_08B844F8;
    case 39u: goto L_08B846E0;
    case 40u: goto L_08B84C24;
    case 41u: goto L_08B8595C;
    case 42u: goto L_08B85A68;
    case 43u: goto L_08B85BA0;
    case 44u: goto L_08B866C4;
    case 45u: goto L_08B8691C;
    case 46u: goto L_08B871D8;
    case 47u: goto L_08B871E4;
    case 48u: goto L_08B871F0;
    case 49u: goto L_08B871FC;
    case 50u: goto L_08B87204;
    case 51u: goto L_08B87208;
    case 52u: goto L_08B87214;
    case 53u: goto L_08B8721C;
    case 54u: goto L_08B87228;
    case 55u: goto L_08B87234;
    case 56u: goto L_08B87240;
    case 57u: goto L_08B87248;
    case 58u: goto L_08B87254;
    case 59u: goto L_08B8725C;
    case 60u: goto L_08B87260;
    case 61u: goto L_08B8726C;
    case 62u: goto L_08B87278;
    case 63u: goto L_08B8728C;
    case 64u: goto L_08B87294;
    case 65u: goto L_08B8729C;
    case 66u: goto L_08B872AC;
    case 67u: goto L_08B872B4;
    case 68u: goto L_08B872C0;
    case 69u: goto L_08B872C8;
    case 70u: goto L_08B872CC;
    case 71u: goto L_08B872D8;
    case 72u: goto L_08B872E0;
    case 73u: goto L_08B872E4;
    case 74u: goto L_08B872F4;
    case 75u: goto L_08B872FC;
    case 76u: goto L_08B87300;
    case 77u: goto L_08B87310;
    case 78u: goto L_08B8731C;
    case 79u: goto L_08B8732C;
    case 80u: goto L_08B87334;
    case 81u: goto L_08B87338;
    case 82u: goto L_08B87344;
    case 83u: goto L_08B8734C;
    case 84u: goto L_08B87354;
    case 85u: goto L_08B87364;
    case 86u: goto L_08B87368;
    case 87u: goto L_08B87378;
    case 88u: goto L_08B8737C;
    case 89u: goto L_08B87388;
    case 90u: goto L_08B87390;
    case 91u: goto L_08B8739C;
    case 92u: goto L_08B873A4;
    case 93u: goto L_08B873B4;
    case 94u: goto L_08B873C0;
    case 95u: goto L_08B873D0;
    case 96u: goto L_08B873D8;
    case 97u: goto L_08B873E4;
    case 98u: goto L_08B873F0;
    case 99u: goto L_08B873FC;
    case 100u: goto L_08B87404;
    case 101u: goto L_08B87414;
    case 102u: goto L_08B87424;
    case 103u: goto L_08B87434;
    case 104u: goto L_08B87440;
    case 105u: goto L_08B8744C;
    case 106u: goto L_08B8745C;
    case 107u: goto L_08B87468;
    case 108u: goto L_08B87474;
    case 109u: goto L_08B87478;
    case 110u: goto L_08B87484;
    case 111u: goto L_08B8748C;
    case 112u: goto L_08B8749C;
    case 113u: goto L_08B874A0;
    case 114u: goto L_08B874B8;
    case 115u: goto L_08B874C8;
    case 116u: goto L_08B874D0;
    case 117u: goto L_08B874F0;
    case 118u: goto L_08B874FC;
    case 119u: goto L_08B87508;
    case 120u: goto L_08B87518;
    case 121u: goto L_08B87520;
    case 122u: goto L_08B87530;
    case 123u: goto L_08B87534;
    case 124u: goto L_08B87540;
    case 125u: goto L_08B87548;
    case 126u: goto L_08B87550;
    case 127u: goto L_08B87558;
    case 128u: goto L_08B8755C;
    case 129u: goto L_08B87564;
    case 130u: goto L_08B8756C;
    case 131u: goto L_08B87578;
    case 132u: goto L_08B87580;
    case 133u: goto L_08B87588;
    case 134u: goto L_08B87594;
    case 135u: goto L_08B8759C;
    case 136u: goto L_08B875A4;
    case 137u: goto L_08B875B4;
    case 138u: goto L_08B875C0;
    case 139u: goto L_08B875D0;
    case 140u: goto L_08B875E4;
    case 141u: goto L_08B875F8;
    case 142u: goto L_08B8760C;
    case 143u: goto L_08B876F8;
    case 144u: goto L_08B87720;
    case 145u: goto L_08B87728;
    case 146u: goto L_08B87738;
    case 147u: goto L_08B87A28;
    case 148u: goto L_08B87A88;
    case 149u: goto L_08B87BA8;
    case 150u: goto L_08B87BC0;
    case 151u: goto L_08B87BD8;
    case 152u: goto L_08B87BE4;
    case 153u: goto L_08B87BF4;
    case 154u: goto L_08B87BFC;
    case 155u: goto L_08B87C0C;
    case 156u: goto L_08B87C14;
    case 157u: goto L_08B87C20;
    case 158u: goto L_08B87C28;
    case 159u: goto L_08B87C38;
    case 160u: goto L_08B87C3C;
    case 161u: goto L_08B87C54;
    case 162u: goto L_08B87D84;
    case 163u: goto L_08B87D8C;
    case 164u: goto L_08B87D98;
    case 165u: goto L_08B87DAC;
    case 166u: goto L_08B87DC0;
    case 167u: goto L_08B87DD8;
    case 168u: goto L_08B87DF0;
    case 169u: goto L_08B87E04;
    case 170u: goto L_08B87E18;
    case 171u: goto L_08B87E2C;
    case 172u: goto L_08B87E40;
    case 173u: goto L_08B87E48;
    case 174u: goto L_08B87E5C;
    case 175u: goto L_08B87E60;
    case 176u: goto L_08B87E68;
    case 177u: goto L_08B87E6C;
    case 178u: goto L_08B87E74;
    case 179u: goto L_08B87E7C;
    case 180u: goto L_08B87E90;
    case 181u: goto L_08B87EAC;
    case 182u: goto L_08B87EC4;
    case 183u: goto L_08B87ECC;
    case 184u: goto L_08B87EDC;
    case 185u: goto L_08B87EF4;
    case 186u: goto L_08B87EF8;
    case 187u: goto L_08B87F04;
    case 188u: goto L_08B87F0C;
    case 189u: goto L_08B87F10;
    case 190u: goto L_08B87F2C;
    case 191u: goto L_08B87F48;
    case 192u: goto L_08B87F68;
    case 193u: goto L_08B87F6C;
    case 194u: goto L_08B87F78;
    case 195u: goto L_08B87F80;
    case 196u: goto L_08B87F8C;
    case 197u: goto L_08B87FA0;
    case 198u: goto L_08B87FA4;
    case 199u: goto L_08B87FB0;
    case 200u: goto L_08B87FB8;
    case 201u: goto L_08B87FC4;
    case 202u: goto L_08B87FD8;
    case 203u: goto L_08B87FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08B84000:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84004u, 0x08ADA14Cu, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B84020:
    ctx.execute_vfpu_vscl_ct<99u, 111u, 114u, 1u>();
    aot_gpr_2 = (aot_gpr_19 ^ 26956u);
    ctx.execute_vfpu_vminmax_ct<67u, 111u, 109u, 1u, false>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8402Cu, 0x61746E65u, "vfpu0 not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B84040:
    aot_gpr_20 = (aot_gpr_26 + static_cast<std::uint32_t>(17989));
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84044u, 0x00000029u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B84048:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84048u, 0x69676552u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B84108:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8410Cu, 0x5441444Eu, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B84110:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84110u, 0x72462F41u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B84124:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84124u, 0x43534944u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B84130:
    ctx.gpr[5] = (aot_gpr_26 < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84134u, 0x44525355u, "unsupported CFC1 control register"); AOT_REGCACHE_SYNC_OUT(); return;
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8413Cu, 0x55527325u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8413C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84140u, 0x5441444Eu, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B84140:
    if (aot_gpr_2 != ctx.gpr[1]) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84144u, 0x72462F41u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0228_entry, 228u, 14u, 0x08B9527Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B84148;
L_08B84144:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84144u, 0x72462F41u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B84148:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84148u, 0x45746E6Fu, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B84158:
    if (aot_gpr_2 != aot_gpr_12) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8415Cu, 0x41545349u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0229_entry, 229u, 43u, 0x08B99690u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B84160;
L_08B84160:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84160u, 0x4D5F4554u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8416C:
    goto L_08B84170;
L_08B84170:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84170u, 0x44494C53u, "unsupported CFC1 control register"); AOT_REGCACHE_SYNC_OUT(); return;
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84174u, 0x4D5F5245u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B84180:
    goto L_08B84184;
L_08B84184:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84188u, 0x5F4C4F52u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8418C:
    if (static_cast<std::int32_t>(aot_gpr_26) > 0) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84190u, 0x4D455449u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0228_entry, 228u, 8u, 0x08B946D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B84194;
L_08B84194:
    goto L_08B84198;
L_08B84198:
    if (aot_gpr_2 != aot_gpr_19) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8419Cu, 0x495F4D4Fu, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0229_entry, 229u, 44u, 0x08B996A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B841A0;
L_08B841A0:
    if (static_cast<std::int32_t>(aot_gpr_26) > 0) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B841A4u, 0x43415254u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0228_entry, 228u, 19u, 0x08B956F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B841A8;
L_08B841A8:
    if (0u != 0u) ctx.gpr[10] = (0u);
    goto L_08B841AC;
L_08B841AC:
    if (aot_gpr_2 != aot_gpr_19) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B841B0u, 0x495F4D4Fu, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0229_entry, 229u, 45u, 0x08B996BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B841B4;
L_08B841B4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B841B8u, 0x544C554Du, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B841BC:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B841BCu, 0x414C5049u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B841C4:
    if (aot_gpr_2 != aot_gpr_19) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B841C8u, 0x495F4D4Fu, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0229_entry, 229u, 46u, 0x08B996D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B841CC;
L_08B841CC:
    if (static_cast<std::int32_t>(aot_gpr_26) > 0) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B841D0u, 0x49444152u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0228_entry, 228u, 21u, 0x08B95720u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B841D4;
L_08B841D4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B841D4u, 0x43495F4Fu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B841E0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B841E0u, 0x4E414843u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B841F4:
    ctx.execute_vfpu_compare3_ct<67u, 111u, 108u, 1u, 6u>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B841F8u, 0x20737275u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B84214:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84214u, 0x4E414843u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B84228:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84228u, 0x202D2054u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B84258:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84258u, 0x4E414843u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B84268:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84268u, 0x4F435F54u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B84274:
    if (ctx.gpr[1] != 0u) {
    ctx.execute_vfpu_vscl_ct<104u, 101u, 114u, 1u>();
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0226_entry, 226u, 125u, 0x08B8F6F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B8427C;
L_08B8427C:
    ctx.execute_vfpu_vscl_ct<32u, 97u, 114u, 1u>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84280u, 0x20642520u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B844F8:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B84514u, 0x00000001u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B846E0:
    ctx.pc = 0x02AEC130u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08B84C24:
    ctx.pc = 0x02B92FC0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8595C:
    ctx.pc = 0x0277B880u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08B85A68:
    ctx.pc = 0x02CAAA30u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08B85BA0:
    ctx.pc = 0x02CAB900u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08B866C4:
    ctx.pc = 0x027615F0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8691C:
    ctx.pc = 0x02BA9E70u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08B871D8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B871D8u, 0x47495254u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B871E4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B871E4u, 0x4552505Fu, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B871F0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B871F0u, 0x47495254u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B871FC:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87200u, 0x45535345u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0230_entry, 230u, 35u, 0x08B9EF50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87204;
L_08B87204:
    (void)(0u << (0u & 31u));
    goto L_08B87208;
L_08B87208:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87208u, 0x47495254u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87214:
    if (aot_gpr_26 == aot_gpr_19) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87218u, 0x00004445u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0229_entry, 229u, 16u, 0x08B98760u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B8721C;
L_08B8721C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8721Cu, 0x47495254u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87228:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87228u, 0x4552505Fu, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87234:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87234u, 0x47495254u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87240:
    if (aot_gpr_26 == aot_gpr_19) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87244u, 0x00004445u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0229_entry, 229u, 19u, 0x08B9878Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87248;
L_08B87248:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87248u, 0x47495254u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87254:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87258u, 0x53534552u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8725C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8725Cu, 0x00004445u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87260:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87260u, 0x47495254u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8726C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8726Cu, 0x4C484749u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87278:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87278u, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8728C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87290u, 0x5F59425Fu, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87294:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87294u, 0x454D414Eu, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8729C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8729Cu, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B872AC:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B872ACu, 0x4154535Fu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B872B4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B872B4u, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B872C0:
    if (ctx.gpr[10] != ctx.gpr[14]) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B872C4u, 0x4154535Fu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0229_entry, 229u, 22u, 0x08B987F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B872C8;
L_08B872C8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B872C8u, 0x00004554u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B872CC:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B872CCu, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B872D8:
    if (ctx.gpr[18] != ctx.gpr[9]) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B872DCu, 0x41505F45u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0230_entry, 230u, 4u, 0x08B9C3E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B872E0;
L_08B872E0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    goto L_08B872E4;
L_08B872E4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B872E4u, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B872F4:
    if (static_cast<std::int32_t>(aot_gpr_26) > 0) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B872F8u, 0x45474150u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0230_entry, 230u, 12u, 0x08B9CC1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B872FC;
L_08B872FC:
    goto L_08B87300;
L_08B87300:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87300u, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87310:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87310u, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8731C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8731Cu, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8732C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87330u, 0x505F5245u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87334:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87334u, 0x00454741u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87338:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87338u, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87344:
    if (ctx.gpr[18] == aot_gpr_3) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87348u, 0x494C4C4Fu, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0230_entry, 230u, 2u, 0x08B9C0C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B8734C;
L_08B8734C:
    if (aot_gpr_2 != ctx.gpr[31]) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87350u, 0x00545845u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0229_entry, 229u, 40u, 0x08B99088u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87354;
L_08B87354:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87354u, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87364:
    goto L_08B87368;
L_08B87368:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87368u, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87378:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87378u, 0x0000454Du, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8737C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8737Cu, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87388:
    if (aot_gpr_2 == ctx.gpr[31]) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8738Cu, 0x00454741u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0229_entry, 229u, 42u, 0x08B994D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87390;
L_08B87390:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87390u, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8739C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B873A0u, 0x5049544Cu, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B873A4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B873A4u, 0x4559414Cu, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B873B4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B873B4u, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B873C0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B873C0u, 0x44454D41u, "unsupported CFC1 control register"); AOT_REGCACHE_SYNC_OUT(); return;
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B873C4u, 0x454C455Fu, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B873D0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B873D0u, 0x454C4249u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B873D8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B873D8u, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B873E4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B873E4u, 0x4F545F4Eu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B873F0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B873F0u, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B873FC:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B873FCu, 0x454D4147u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87404:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87404u, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87414:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87414u, 0x4E4F435Fu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87424:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87424u, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87434:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87434u, 0x4E4F435Fu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87440:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87440u, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8744C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8744Cu, 0x4F545455u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8745C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8745Cu, 0x49544341u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87468:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87468u, 0x4D41475Fu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87474:
    ctx.lo = 0u;
    goto L_08B87478;
L_08B87478:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87478u, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87484:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87484u, 0x4D554C4Fu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8748C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8748Cu, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8749C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8749Cu, 0x0053454Cu, "syscall not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B874A0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B874A0u, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B874B8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B874B8u, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B874C8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B874C8u, 0x4B4F4F4Cu, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B874D0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B874D0u, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B874F0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B874F0u, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B874FC:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B874FCu, 0x4E4F5F57u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87508:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87508u, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87518:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87518u, 0x43415254u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87520:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87520u, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87530:
    rt.memory().memory_barrier();
    goto L_08B87534;
L_08B87534:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87534u, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87540:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87540u, 0x474E4952u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87548:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8754Cu, 0x554F535Fu, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87550:
    if (static_cast<std::int32_t>(aot_gpr_26) > 0) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87554u, 0x454E4F4Eu, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0229_entry, 229u, 6u, 0x08B9829Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87558;
L_08B87558:
    goto L_08B8755C;
L_08B8755C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87560u, 0x554F535Fu, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87564:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87568u, 0x54415453u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8756C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8756Cu, 0x49545F53u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87578:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8757Cu, 0x554F535Fu, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87580:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87584u, 0x54415453u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87588:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87588u, 0x41565F53u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87594:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87598u, 0x554F535Fu, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8759C:
    if (static_cast<std::int32_t>(aot_gpr_26) > 0) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B875A0u, 0x45495242u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0229_entry, 229u, 9u, 0x08B982E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B875A4;
L_08B875A4:
    (void)(std::rotr(0u, static_cast<int>(0u & 31u)));
    if (0u != 0u) ctx.gpr[10] = (0u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B875ACu, 0x48534E45u, "cop2/vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B875B4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B875B4u, 0x74696E49u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B875C0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B875C0u, 0x6867696Cu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B875D0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B875D0u, 0x756E614Du, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B875E4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B875E4u, 0x436D754Eu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B875F8:
    ctx.execute_vfpu_vhdp_ct<67u, 111u, 110u, 1u>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B875FCu, 0x72416769u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8760C:
    ctx.execute_vfpu_vhdp_ct<67u, 111u, 110u, 1u>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87610u, 0x72416769u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B876F8:
    ctx.execute_vfpu_vscl_ct<119u, 97u, 116u, 1u>();
    ctx.execute_vfpu_vhdp_ct<114u, 114u, 101u, 1u>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87700u, 0x7463656Cu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87720:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87720u, 0x0000594Eu, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87728:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87728u, 0x4745504Du, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87738:
    (void)(0u & 0u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87740u, 0x7070632Eu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87A28:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87A2Cu, 0x08B0D3C8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87A88:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87A8Cu, 0x08B0C9A4u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87BA8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87BACu, 0x08B1108Cu, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87BC0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87BC0u, 0x61655743u, "vfpu0 not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87BD8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87BD8u, 0x74696157u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87BE4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87BE4u, 0x43646E41u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87BF4:
    if (aot_gpr_19 == aot_gpr_20) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87BF8u, 0x72616461u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0231_entry, 231u, 27u, 0x08BA1144u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87BFC;
L_08B87BFC:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87BFCu, 0x70696C42u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87C0C:
    if (aot_gpr_19 == aot_gpr_20) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87C10u, 0x72616461u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0231_entry, 231u, 28u, 0x08BA115Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87C14;
L_08B87C14:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87C14u, 0x70696C42u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87C20:
    if (aot_gpr_19 == aot_gpr_20) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87C24u, 0x72616461u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0231_entry, 231u, 29u, 0x08BA1170u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87C28;
L_08B87C28:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87C28u, 0x70696C42u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87C38:
    goto L_08B87C3C;
L_08B87C3C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87C3Cu, 0x43746553u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87C54:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87C58u, 0x08B15770u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87D84:
    if (aot_gpr_3 == aot_gpr_12) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0231_entry, 231u, 110u, 0x08BA2E8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87D8C;
L_08B87D8C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87D8Cu, 0x78457372u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87D98:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87D98u, 0x70726157u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87DAC:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87DACu, 0x79616C50u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87DC0:
    ctx.execute_vfpu_vcmp_ct<115u, 80u, 1u, 9u>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87DC4u, 0x72657961u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87DD8:
    ctx.execute_vfpu_vcmp_ct<115u, 80u, 1u, 9u>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87DDCu, 0x72657961u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87DF0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87DF0u, 0x61636F4Cu, "vfpu0 not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87E04:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87E04u, 0x61636F4Cu, "vfpu0 not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87E18:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87E18u, 0x79616C50u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87E2C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87E2Cu, 0x79616C50u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87E40:
    if (aot_gpr_3 == aot_gpr_20) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0231_entry, 231u, 36u, 0x08BA1390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87E48;
L_08B87E48:
    ctx.execute_vfpu_vec3_ct<114u, 82u, 97u, 1u, 2u>();
    ctx.execute_vfpu_vcmp_ct<114u, 66u, 1u, 1u>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87E50u, 0x68537069u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87E5C:
    goto L_08B87E60;
L_08B87E60:
    if (aot_gpr_3 == aot_gpr_20) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0231_entry, 231u, 37u, 0x08BA13B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87E68;
L_08B87E68:
    ctx.execute_vfpu_vec3_ct<114u, 82u, 97u, 1u, 2u>();
    goto L_08B87E6C;
L_08B87E6C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87E6Cu, 0x63497261u, "vfpu0 not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87E74:
    if (aot_gpr_3 == aot_gpr_20) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0231_entry, 231u, 38u, 0x08BA13C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87E7C;
L_08B87E7C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87E7Cu, 0x696C4272u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87E90:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87E90u, 0x4D746553u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87EAC:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87EACu, 0x61706552u, "vfpu0 not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87EC4:
    if (aot_gpr_3 == aot_gpr_20) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0231_entry, 231u, 39u, 0x08BA1414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87ECC;
L_08B87ECC:
    ctx.execute_vfpu_vscl_ct<114u, 115u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87ED4u, 0x466E4F65u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87EDC:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87EDCu, 0x73727542u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87EF4:
    aot_gpr_12 = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B87EF8;
L_08B87EF8:
    ctx.execute_vfpu_compare3_ct<73u, 115u, 76u, 1u, 6u>();
    if (aot_gpr_3 == aot_gpr_12) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0231_entry, 231u, 5u, 0x08BA048Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87F04;
L_08B87F04:
    if (aot_gpr_19 != ctx.gpr[14]) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87F08u, 0x63696865u, "vfpu0 not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0229_entry, 229u, 58u, 0x08B9A4D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87F0C;
L_08B87F0C:
    aot_gpr_12 = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B87F10;
L_08B87F10:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87F10u, 0x61636F4Cu, "vfpu0 not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87F2C:
    ctx.execute_vfpu_vscl_ct<71u, 105u, 118u, 1u>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87F30u, 0x79616C50u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87F48:
    ctx.execute_vfpu_vscl_ct<71u, 105u, 118u, 1u>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87F4Cu, 0x61636F4Cu, "vfpu0 not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87F68:
    ctx.execute_vfpu_compare3_ct<82u, 101u, 109u, 1u, 6u>();
    goto L_08B87F6C;
L_08B87F6C:
    ctx.execute_vfpu_compare3_ct<118u, 101u, 76u, 1u, 6u>();
    if (aot_gpr_3 == aot_gpr_12) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0231_entry, 231u, 6u, 0x08BA0500u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87F78;
L_08B87F78:
    if (aot_gpr_19 == ctx.gpr[15]) {
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87F7Cu, 0x72616461u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0229_entry, 229u, 81u, 0x08B9B944u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87F80;
L_08B87F80:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87F80u, 0x45726F46u, "cop1? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87F8C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87F8Cu, 0x4C746547u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87FA0:
    aot_gpr_12 = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B87FA4;
L_08B87FA4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87FA4u, 0x74696E49u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87FB0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87FB0u, 0x6E696F50u, "vfpu3 not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87FB8:
    ctx.execute_vfpu_compare3_ct<73u, 115u, 76u, 1u, 6u>();
    if (aot_gpr_3 == aot_gpr_12) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0231_entry, 231u, 7u, 0x08BA054Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B87FC4;
L_08B87FC4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87FC4u, 0x746E4572u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87FD8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87FD8u, 0x61656C43u, "vfpu0 not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B87FF0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B87FF0u, 0x72417349u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0224(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0224_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_224(Runtime &runtime) {
    runtime.register_generated_unit(224u, 0x08B84000u, 16384u, &recomp_unit_0224, &recomp_unit_0224_entry);
    runtime.register_function(0x08B84000u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84020u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84040u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84048u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84108u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84110u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84124u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84130u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8413Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84140u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84144u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84148u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84158u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84160u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8416Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84170u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84180u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84184u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8418Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84194u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84198u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841A0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841A8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841ACu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841B4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841BCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841C4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841CCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841D4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841E0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841F4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84214u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84228u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84258u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84268u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84274u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8427Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B844F8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B846E0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84C24u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8595Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B85A68u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B85BA0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B866C4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8691Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B871D8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B871E4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B871F0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B871FCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87204u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87208u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87214u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8721Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87228u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87234u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87240u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87248u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87254u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8725Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87260u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8726Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87278u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8728Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87294u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8729Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872ACu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872B4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872C0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872C8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872CCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872D8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872E0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872E4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872F4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872FCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87300u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87310u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8731Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8732Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87334u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87338u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87344u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8734Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87354u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87364u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87368u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87378u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8737Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87388u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87390u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8739Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B873A4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B873B4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B873C0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B873D0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B873D8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B873E4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B873F0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B873FCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87404u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87414u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87424u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87434u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87440u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8744Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8745Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87468u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87474u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87478u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87484u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8748Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8749Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B874A0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B874B8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B874C8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B874D0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B874F0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B874FCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87508u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87518u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87520u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87530u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87534u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87540u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87548u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87550u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87558u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8755Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87564u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8756Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87578u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87580u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87588u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87594u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8759Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B875A4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B875B4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B875C0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B875D0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B875E4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B875F8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8760Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B876F8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87720u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87728u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87738u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87A28u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87A88u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87BA8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87BC0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87BD8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87BE4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87BF4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87BFCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87C0Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87C14u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87C20u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87C28u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87C38u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87C3Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87C54u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87D84u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87D8Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87D98u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87DACu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87DC0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87DD8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87DF0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E04u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E18u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E2Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E40u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E48u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E5Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E60u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E68u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E6Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E74u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E7Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E90u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87EACu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87EC4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87ECCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87EDCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87EF4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87EF8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F04u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F0Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F10u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F2Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F48u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F68u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F6Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F78u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F80u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F8Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87FA0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87FA4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87FB0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87FB8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87FC4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87FD8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87FF0u, &recomp_unit_0224, "recomp_unit_0224");
}
} // namespace psprecomp
