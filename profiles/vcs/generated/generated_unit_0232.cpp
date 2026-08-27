#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0232[64] = {
    0x0150000040000001ull, 0x0400400020004400ull, 0x0060000001105401ull, 0x5555555440180400ull,
    0x5555555555555555ull, 0x5555555555555555ull, 0x5555555555555555ull, 0x0000000155555555ull,
    0x1000002210004020ull, 0x0004000000001002ull, 0x0010000400000000ull, 0x0000000040000000ull,
    0x0000000000100000ull, 0x0000000010004010ull, 0x0000000000000110ull, 0x0440000000000000ull,
    0x0001000001000000ull, 0x0000000100000000ull, 0x0000000000400000ull, 0x09000CA000004000ull,
    0x0004000000000040ull, 0x0000110000000000ull, 0x0000000000000004ull, 0x0010000000400000ull,
    0x0100000010000011ull, 0x0001000001001001ull, 0x0000000000004000ull, 0x0000000000010000ull,
    0x1000000000440000ull, 0x0000000000000004ull, 0x0010080000000000ull, 0x0000040000000001ull,
    0x0400004000000100ull, 0x0040040040040040ull, 0x0000000001100000ull, 0x4000000000004000ull,
    0x0000040000000000ull, 0x0000000100000000ull, 0x0000000000000000ull, 0x0000000000040000ull,
    0x0000000000100000ull, 0x0000000000000011ull, 0x0040000000000000ull, 0x0000100000000000ull,
    0x0010000010000000ull, 0x0000000000000000ull, 0x0010000440000000ull, 0x1000040001000040ull,
    0x0000000100004000ull, 0x0400000000000440ull, 0x0001000000000000ull, 0x0004000000000000ull,
    0x0010000000000010ull, 0x0000000440000000ull, 0x0000000000000000ull, 0x0000000000010000ull,
    0x0400000000000440ull, 0x0001000040400200ull, 0x0004000004000000ull, 0x0000010000000000ull,
    0x0000001001000000ull, 0x4000000000004000ull, 0x0010000000000000ull, 0x0400000000001000ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0232[64] = {
    1u, 6u, 11u, 19u, 38u, 70u, 102u, 134u, 151u, 157u, 160u, 162u, 163u, 164u, 167u, 169u,
    171u, 173u, 174u, 175u, 182u, 184u, 186u, 187u, 189u, 193u, 197u, 198u, 199u, 202u, 203u, 205u,
    207u, 210u, 215u, 217u, 219u, 220u, 221u, 221u, 222u, 223u, 225u, 226u, 227u, 229u, 229u, 232u,
    236u, 238u, 241u, 242u, 243u, 245u, 247u, 247u, 248u, 251u, 255u, 257u, 258u, 260u, 262u, 263u,
};
void recomp_unit_0232_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=16,1,25,12,31,18 fprs= gpr_occ=32 fpr_occ=0 gpr_total=56 fpr_total=0
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_1 = ctx.gpr[1];
    std::uint32_t aot_gpr_25 = ctx.gpr[25];
    std::uint32_t aot_gpr_12 = ctx.gpr[12];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_18 = ctx.gpr[18];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[16] = aot_gpr_16; ctx.gpr[1] = aot_gpr_1; ctx.gpr[25] = aot_gpr_25; ctx.gpr[12] = aot_gpr_12; ctx.gpr[31] = aot_gpr_31; ctx.gpr[18] = aot_gpr_18; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_16 = ctx.gpr[16]; aot_gpr_1 = ctx.gpr[1]; aot_gpr_25 = ctx.gpr[25]; aot_gpr_12 = ctx.gpr[12]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_18 = ctx.gpr[18]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08BA4000u;
        entry_id = 0u;
        if (entry_delta < 16364u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0232[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0232[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08BA4000;
    case 2u: goto L_08BA4078;
    case 3u: goto L_08BA40D0;
    case 4u: goto L_08BA40D8;
    case 5u: goto L_08BA40E0;
    case 6u: goto L_08BA4128;
    case 7u: goto L_08BA4138;
    case 8u: goto L_08BA4174;
    case 9u: goto L_08BA41B8;
    case 10u: goto L_08BA41E8;
    case 11u: goto L_08BA4200;
    case 12u: goto L_08BA4228;
    case 13u: goto L_08BA4230;
    case 14u: goto L_08BA4238;
    case 15u: goto L_08BA4250;
    case 16u: goto L_08BA4260;
    case 17u: goto L_08BA42D4;
    case 18u: goto L_08BA42D8;
    case 19u: goto L_08BA4328;
    case 20u: goto L_08BA434C;
    case 21u: goto L_08BA4350;
    case 22u: goto L_08BA4378;
    case 23u: goto L_08BA4388;
    case 24u: goto L_08BA4390;
    case 25u: goto L_08BA4398;
    case 26u: goto L_08BA43A0;
    case 27u: goto L_08BA43A8;
    case 28u: goto L_08BA43B0;
    case 29u: goto L_08BA43B8;
    case 30u: goto L_08BA43C0;
    case 31u: goto L_08BA43C8;
    case 32u: goto L_08BA43D0;
    case 33u: goto L_08BA43D8;
    case 34u: goto L_08BA43E0;
    case 35u: goto L_08BA43E8;
    case 36u: goto L_08BA43F0;
    case 37u: goto L_08BA43F8;
    case 38u: goto L_08BA4400;
    case 39u: goto L_08BA4408;
    case 40u: goto L_08BA4410;
    case 41u: goto L_08BA4418;
    case 42u: goto L_08BA4420;
    case 43u: goto L_08BA4428;
    case 44u: goto L_08BA4430;
    case 45u: goto L_08BA4438;
    case 46u: goto L_08BA4440;
    case 47u: goto L_08BA4448;
    case 48u: goto L_08BA4450;
    case 49u: goto L_08BA4458;
    case 50u: goto L_08BA4460;
    case 51u: goto L_08BA4468;
    case 52u: goto L_08BA4470;
    case 53u: goto L_08BA4478;
    case 54u: goto L_08BA4480;
    case 55u: goto L_08BA4488;
    case 56u: goto L_08BA4490;
    case 57u: goto L_08BA4498;
    case 58u: goto L_08BA44A0;
    case 59u: goto L_08BA44A8;
    case 60u: goto L_08BA44B0;
    case 61u: goto L_08BA44B8;
    case 62u: goto L_08BA44C0;
    case 63u: goto L_08BA44C8;
    case 64u: goto L_08BA44D0;
    case 65u: goto L_08BA44D8;
    case 66u: goto L_08BA44E0;
    case 67u: goto L_08BA44E8;
    case 68u: goto L_08BA44F0;
    case 69u: goto L_08BA44F8;
    case 70u: goto L_08BA4500;
    case 71u: goto L_08BA4508;
    case 72u: goto L_08BA4510;
    case 73u: goto L_08BA4518;
    case 74u: goto L_08BA4520;
    case 75u: goto L_08BA4528;
    case 76u: goto L_08BA4530;
    case 77u: goto L_08BA4538;
    case 78u: goto L_08BA4540;
    case 79u: goto L_08BA4548;
    case 80u: goto L_08BA4550;
    case 81u: goto L_08BA4558;
    case 82u: goto L_08BA4560;
    case 83u: goto L_08BA4568;
    case 84u: goto L_08BA4570;
    case 85u: goto L_08BA4578;
    case 86u: goto L_08BA4580;
    case 87u: goto L_08BA4588;
    case 88u: goto L_08BA4590;
    case 89u: goto L_08BA4598;
    case 90u: goto L_08BA45A0;
    case 91u: goto L_08BA45A8;
    case 92u: goto L_08BA45B0;
    case 93u: goto L_08BA45B8;
    case 94u: goto L_08BA45C0;
    case 95u: goto L_08BA45C8;
    case 96u: goto L_08BA45D0;
    case 97u: goto L_08BA45D8;
    case 98u: goto L_08BA45E0;
    case 99u: goto L_08BA45E8;
    case 100u: goto L_08BA45F0;
    case 101u: goto L_08BA45F8;
    case 102u: goto L_08BA4600;
    case 103u: goto L_08BA4608;
    case 104u: goto L_08BA4610;
    case 105u: goto L_08BA4618;
    case 106u: goto L_08BA4620;
    case 107u: goto L_08BA4628;
    case 108u: goto L_08BA4630;
    case 109u: goto L_08BA4638;
    case 110u: goto L_08BA4640;
    case 111u: goto L_08BA4648;
    case 112u: goto L_08BA4650;
    case 113u: goto L_08BA4658;
    case 114u: goto L_08BA4660;
    case 115u: goto L_08BA4668;
    case 116u: goto L_08BA4670;
    case 117u: goto L_08BA4678;
    case 118u: goto L_08BA4680;
    case 119u: goto L_08BA4688;
    case 120u: goto L_08BA4690;
    case 121u: goto L_08BA4698;
    case 122u: goto L_08BA46A0;
    case 123u: goto L_08BA46A8;
    case 124u: goto L_08BA46B0;
    case 125u: goto L_08BA46B8;
    case 126u: goto L_08BA46C0;
    case 127u: goto L_08BA46C8;
    case 128u: goto L_08BA46D0;
    case 129u: goto L_08BA46D8;
    case 130u: goto L_08BA46E0;
    case 131u: goto L_08BA46E8;
    case 132u: goto L_08BA46F0;
    case 133u: goto L_08BA46F8;
    case 134u: goto L_08BA4700;
    case 135u: goto L_08BA4708;
    case 136u: goto L_08BA4710;
    case 137u: goto L_08BA4718;
    case 138u: goto L_08BA4720;
    case 139u: goto L_08BA4728;
    case 140u: goto L_08BA4730;
    case 141u: goto L_08BA4738;
    case 142u: goto L_08BA4740;
    case 143u: goto L_08BA4748;
    case 144u: goto L_08BA4750;
    case 145u: goto L_08BA4758;
    case 146u: goto L_08BA4760;
    case 147u: goto L_08BA4768;
    case 148u: goto L_08BA4770;
    case 149u: goto L_08BA4778;
    case 150u: goto L_08BA4780;
    case 151u: goto L_08BA4814;
    case 152u: goto L_08BA4838;
    case 153u: goto L_08BA4870;
    case 154u: goto L_08BA4884;
    case 155u: goto L_08BA4894;
    case 156u: goto L_08BA48F0;
    case 157u: goto L_08BA4904;
    case 158u: goto L_08BA4930;
    case 159u: goto L_08BA49C8;
    case 160u: goto L_08BA4A88;
    case 161u: goto L_08BA4AD0;
    case 162u: goto L_08BA4B78;
    case 163u: goto L_08BA4C50;
    case 164u: goto L_08BA4D10;
    case 165u: goto L_08BA4D38;
    case 166u: goto L_08BA4D70;
    case 167u: goto L_08BA4E10;
    case 168u: goto L_08BA4E20;
    case 169u: goto L_08BA4FD8;
    case 170u: goto L_08BA4FE8;
    case 171u: goto L_08BA5060;
    case 172u: goto L_08BA50C0;
    case 173u: goto L_08BA5180;
    case 174u: goto L_08BA5258;
    case 175u: goto L_08BA5338;
    case 176u: goto L_08BA5394;
    case 177u: goto L_08BA539C;
    case 178u: goto L_08BA53A8;
    case 179u: goto L_08BA53AC;
    case 180u: goto L_08BA53E0;
    case 181u: goto L_08BA53EC;
    case 182u: goto L_08BA5418;
    case 183u: goto L_08BA54C8;
    case 184u: goto L_08BA55A0;
    case 185u: goto L_08BA55B0;
    case 186u: goto L_08BA5608;
    case 187u: goto L_08BA5758;
    case 188u: goto L_08BA57D0;
    case 189u: goto L_08BA5800;
    case 190u: goto L_08BA5810;
    case 191u: goto L_08BA5870;
    case 192u: goto L_08BA58E0;
    case 193u: goto L_08BA5900;
    case 194u: goto L_08BA5930;
    case 195u: goto L_08BA5960;
    case 196u: goto L_08BA59C0;
    case 197u: goto L_08BA5A38;
    case 198u: goto L_08BA5B40;
    case 199u: goto L_08BA5C48;
    case 200u: goto L_08BA5C58;
    case 201u: goto L_08BA5CF0;
    case 202u: goto L_08BA5D08;
    case 203u: goto L_08BA5EAC;
    case 204u: goto L_08BA5ED0;
    case 205u: goto L_08BA5F00;
    case 206u: goto L_08BA5FA8;
    case 207u: goto L_08BA6020;
    case 208u: goto L_08BA6098;
    case 209u: goto L_08BA60E8;
    case 210u: goto L_08BA6118;
    case 211u: goto L_08BA6148;
    case 212u: goto L_08BA6178;
    case 213u: goto L_08BA61A8;
    case 214u: goto L_08BA61D8;
    case 215u: goto L_08BA6250;
    case 216u: goto L_08BA6260;
    case 217u: goto L_08BA6338;
    case 218u: goto L_08BA63F8;
    case 219u: goto L_08BA64A8;
    case 220u: goto L_08BA6580;
    case 221u: goto L_08BA6748;
    case 222u: goto L_08BA6850;
    case 223u: goto L_08BA6900;
    case 224u: goto L_08BA6910;
    case 225u: goto L_08BA6AD8;
    case 226u: goto L_08BA6BB0;
    case 227u: goto L_08BA6C70;
    case 228u: goto L_08BA6CD0;
    case 229u: goto L_08BA6E78;
    case 230u: goto L_08BA6E88;
    case 231u: goto L_08BA6ED0;
    case 232u: goto L_08BA6F18;
    case 233u: goto L_08BA6F60;
    case 234u: goto L_08BA6FA8;
    case 235u: goto L_08BA6FF0;
    case 236u: goto L_08BA7038;
    case 237u: goto L_08BA7080;
    case 238u: goto L_08BA7118;
    case 239u: goto L_08BA7128;
    case 240u: goto L_08BA71E8;
    case 241u: goto L_08BA72C0;
    case 242u: goto L_08BA73C8;
    case 243u: goto L_08BA7410;
    case 244u: goto L_08BA74D0;
    case 245u: goto L_08BA7578;
    case 246u: goto L_08BA7588;
    case 247u: goto L_08BA7740;
    case 248u: goto L_08BA7818;
    case 249u: goto L_08BA7828;
    case 250u: goto L_08BA78E8;
    case 251u: goto L_08BA7924;
    case 252u: goto L_08BA7958;
    case 253u: goto L_08BA7978;
    case 254u: goto L_08BA79C0;
    case 255u: goto L_08BA7A68;
    case 256u: goto L_08BA7AC8;
    case 257u: goto L_08BA7BA0;
    case 258u: goto L_08BA7C60;
    case 259u: goto L_08BA7C90;
    case 260u: goto L_08BA7D38;
    case 261u: goto L_08BA7DF8;
    case 262u: goto L_08BA7ED0;
    case 263u: goto L_08BA7F30;
    case 264u: goto L_08BA7FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08BA4000:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4044u, 0x40000000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4078:
    aot_gpr_18 = (aot_gpr_25 & 12592u);
    ctx.gpr[22] = (aot_gpr_25 | 13620u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4080u, 0x62613938u, "vfpu0 not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA40D0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA40D0u, 0x20202020u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA40D8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA40D8u, 0x20202020u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA40E0:
    aot_gpr_16 = (aot_gpr_1 & 12336u);
    aot_gpr_16 = (aot_gpr_1 & 12336u);
    aot_gpr_16 = (aot_gpr_1 & 12336u);
    aot_gpr_16 = (aot_gpr_1 & 12336u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA40FCu, 0xC0100000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4128:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4128u, 0x20202020u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4138:
    aot_gpr_16 = (aot_gpr_1 & 12336u);
    aot_gpr_16 = (aot_gpr_1 & 12336u);
    aot_gpr_16 = (aot_gpr_1 & 12336u);
    aot_gpr_16 = (aot_gpr_1 & 12336u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4158u, 0x00000030u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4174:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4178u, 0x08B89C6Cu, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA41B8:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(0u + static_cast<std::uint32_t>(0))))));
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.gpr[6] = (11842u << 16u);
    aot_gpr_25 = (ctx.gpr[11] | 15478u);
    ctx.gpr[10] = (14831u << 16u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA41DCu, 0x43500000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA41E8:
    ctx.gpr[23] = (aot_mem.aot_direct_load_word_right(aot_gpr_12 + static_cast<std::uint32_t>(-1532), ctx.gpr[23]));
    aot_gpr_25 = (39321u << 16u);
    ctx.gpr[2] = (aot_mem.aot_direct_load16(aot_gpr_1 + static_cast<std::uint32_t>(-27815)));
    aot_gpr_18 = (18724u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_12) > 0;
    aot_gpr_12 = (29125u << 16u);
      if (branch_taken) {
          ctx.pc = 0x08BC24B8u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08BA4200;
    }
L_08BA4200:
    ctx.gpr[11] = (aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(990)));
    ctx.gpr[7] = (18020u << 16u);
    { const float vfpu_constant = std::bit_cast<float>(0x00000000u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<31u, 4u>(vfpu_value); }
    ctx.gpr[3] = (39433u << 16u);
    { const float vfpu_value[1]{static_cast<float>(21060)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<62u, 1u>(vfpu_value); }
    ctx.gpr[2] = (61714u << 16u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    ctx.gpr[27] = (52091u << 16u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0230_entry, 230u, 17u, 0x08B9D65Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08BA4228;
    }
L_08BA4228:
    if (ctx.gpr[4] == aot_gpr_31) {
    ctx.gpr[19] = (17427u << 16u);
        ctx.pc = 0x08BBC22Cu; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08BA4230;
L_08BA4230:
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[17];
    aot_gpr_25 = (65267u << 16u);
      if (branch_taken) {
          ctx.pc = 0x08BAEF0Cu; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08BA4238;
    }
L_08BA4238:
    aot_gpr_16 = ((aot_gpr_31 >> 0u) & 0x00000001u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4244u, 0xC3500000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4250:
    (void)(0u << 16u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA425Cu, 0x40000000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4260:
    aot_gpr_16 = (0u << 16u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA426Cu, 0x40240000u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA42D4:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA42D4u, 0x42D6BCC4u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA42D8:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(0));
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA42DCu, 0x430C6BF5u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4328:
    (void)(aot_gpr_31 | 32768u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA432Cu, 0x4341C379u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA434C:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA434Cu, 0x75154FDDu, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4350:
    ctx.gpr[24] = (aot_mem.aot_direct_load16(ctx.gpr[30] + static_cast<std::uint32_t>(-30276)));
    ctx.gpr[28] = (53938u << 16u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4358u, 0xD5A8A733u, "vfpu not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4378:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4378u, 0x00000005u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4388:
    goto L_08BA4390;
L_08BA4390:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4394u, 0x08BA4388u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4398:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA439Cu, 0x08BA4390u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA43A0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA43A4u, 0x08BA4398u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA43A8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA43ACu, 0x08BA43A0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA43B0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA43B4u, 0x08BA43A8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA43B8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA43BCu, 0x08BA43B0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA43C0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA43C4u, 0x08BA43B8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA43C8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA43CCu, 0x08BA43C0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA43D0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA43D4u, 0x08BA43C8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA43D8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA43DCu, 0x08BA43D0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA43E0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA43E4u, 0x08BA43D8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA43E8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA43ECu, 0x08BA43E0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA43F0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA43F4u, 0x08BA43E8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA43F8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA43FCu, 0x08BA43F0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4400:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4404u, 0x08BA43F8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4408:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA440Cu, 0x08BA4400u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4410:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4414u, 0x08BA4408u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4418:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA441Cu, 0x08BA4410u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4420:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4424u, 0x08BA4418u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4428:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA442Cu, 0x08BA4420u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4430:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4434u, 0x08BA4428u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4438:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA443Cu, 0x08BA4430u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4440:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4444u, 0x08BA4438u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4448:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA444Cu, 0x08BA4440u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4450:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4454u, 0x08BA4448u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4458:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA445Cu, 0x08BA4450u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4460:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4464u, 0x08BA4458u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4468:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA446Cu, 0x08BA4460u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4470:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4474u, 0x08BA4468u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4478:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA447Cu, 0x08BA4470u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4480:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4484u, 0x08BA4478u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4488:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA448Cu, 0x08BA4480u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4490:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4494u, 0x08BA4488u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4498:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA449Cu, 0x08BA4490u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA44A0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA44A4u, 0x08BA4498u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA44A8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA44ACu, 0x08BA44A0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA44B0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA44B4u, 0x08BA44A8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA44B8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA44BCu, 0x08BA44B0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA44C0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA44C4u, 0x08BA44B8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA44C8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA44CCu, 0x08BA44C0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA44D0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA44D4u, 0x08BA44C8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA44D8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA44DCu, 0x08BA44D0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA44E0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA44E4u, 0x08BA44D8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA44E8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA44ECu, 0x08BA44E0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA44F0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA44F4u, 0x08BA44E8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA44F8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA44FCu, 0x08BA44F0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4500:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4504u, 0x08BA44F8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4508:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA450Cu, 0x08BA4500u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4510:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4514u, 0x08BA4508u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4518:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA451Cu, 0x08BA4510u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4520:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4524u, 0x08BA4518u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4528:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA452Cu, 0x08BA4520u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4530:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4534u, 0x08BA4528u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4538:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA453Cu, 0x08BA4530u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4540:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4544u, 0x08BA4538u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4548:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA454Cu, 0x08BA4540u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4550:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4554u, 0x08BA4548u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4558:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA455Cu, 0x08BA4550u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4560:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4564u, 0x08BA4558u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4568:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA456Cu, 0x08BA4560u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4570:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4574u, 0x08BA4568u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4578:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA457Cu, 0x08BA4570u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4580:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4584u, 0x08BA4578u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4588:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA458Cu, 0x08BA4580u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4590:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4594u, 0x08BA4588u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4598:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA459Cu, 0x08BA4590u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA45A0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA45A4u, 0x08BA4598u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA45A8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA45ACu, 0x08BA45A0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA45B0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA45B4u, 0x08BA45A8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA45B8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA45BCu, 0x08BA45B0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA45C0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA45C4u, 0x08BA45B8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA45C8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA45CCu, 0x08BA45C0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA45D0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA45D4u, 0x08BA45C8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA45D8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA45DCu, 0x08BA45D0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA45E0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA45E4u, 0x08BA45D8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA45E8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA45ECu, 0x08BA45E0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA45F0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA45F4u, 0x08BA45E8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA45F8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA45FCu, 0x08BA45F0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4600:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4604u, 0x08BA45F8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4608:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA460Cu, 0x08BA4600u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4610:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4614u, 0x08BA4608u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4618:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA461Cu, 0x08BA4610u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4620:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4624u, 0x08BA4618u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4628:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA462Cu, 0x08BA4620u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4630:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4634u, 0x08BA4628u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4638:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA463Cu, 0x08BA4630u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4640:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4644u, 0x08BA4638u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4648:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA464Cu, 0x08BA4640u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4650:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4654u, 0x08BA4648u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4658:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA465Cu, 0x08BA4650u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4660:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4664u, 0x08BA4658u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4668:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA466Cu, 0x08BA4660u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4670:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4674u, 0x08BA4668u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4678:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA467Cu, 0x08BA4670u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4680:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4684u, 0x08BA4678u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4688:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA468Cu, 0x08BA4680u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4690:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4694u, 0x08BA4688u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4698:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA469Cu, 0x08BA4690u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA46A0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA46A4u, 0x08BA4698u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA46A8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA46ACu, 0x08BA46A0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA46B0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA46B4u, 0x08BA46A8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA46B8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA46BCu, 0x08BA46B0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA46C0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA46C4u, 0x08BA46B8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA46C8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA46CCu, 0x08BA46C0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA46D0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA46D4u, 0x08BA46C8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA46D8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA46DCu, 0x08BA46D0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA46E0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA46E4u, 0x08BA46D8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA46E8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA46ECu, 0x08BA46E0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA46F0:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA46F4u, 0x08BA46E8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA46F8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA46FCu, 0x08BA46F0u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4700:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4704u, 0x08BA46F8u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4708:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA470Cu, 0x08BA4700u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4710:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4714u, 0x08BA4708u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4718:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA471Cu, 0x08BA4710u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4720:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4724u, 0x08BA4718u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4728:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA472Cu, 0x08BA4720u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4730:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4734u, 0x08BA4728u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4738:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA473Cu, 0x08BA4730u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4740:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4744u, 0x08BA4738u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4748:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA474Cu, 0x08BA4740u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4750:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4754u, 0x08BA4748u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4758:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA475Cu, 0x08BA4750u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4760:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4764u, 0x08BA4758u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4768:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA476Cu, 0x08BA4760u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4770:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4774u, 0x08BA4768u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4778:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA477Cu, 0x08BA4770u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4780:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA4784u, 0x08BA4778u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4814:
    (void)(0u << 1u);
    (void)(0u << 1u);
    (void)(0u << 1u);
    (void)(0u << 1u);
    (void)(0u << 1u);
    (void)(0u << 1u);
    goto L_08BA4838;
L_08BA4838:
    ctx.pc = 0x02AC02D0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4870:
    ctx.pc = 0x02B3EE70u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4884:
    ctx.pc = 0x02B3FF40u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4894:
    ctx.pc = 0x02B418F0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA48F0:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4904:
    ctx.pc = 0x02997DE0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4930:
    ctx.pc = 0x02B3F2E0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA49C8:
    ctx.pc = 0x0206BD60u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4A88:
    ctx.pc = 0x02D81FF0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4AD0:
    ctx.pc = 0x0208DC70u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4B78:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4C50:
    ctx.pc = 0x02096F10u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4D10:
    ctx.pc = 0x0209C8C0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4D38:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4D70:
    ctx.pc = 0x02B3EE70u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4E10:
    ctx.pc = 0x02D9B040u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4E20:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4FD8:
    ctx.pc = 0x02132130u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA4FE8:
    ctx.pc = 0x0213A590u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5060:
    ctx.pc = 0x02D9B860u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA50C0:
    ctx.pc = 0x021AED00u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5180:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5258:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5338:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA5338u, 0x00000035u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5394:
    { const bool branch_taken = static_cast<std::int32_t>(0u) <= 0;
    (void)(0u & 89u);
      if (branch_taken) {
          goto L_08BA53AC;
      }
      goto L_08BA539C;
    }
L_08BA539C:
    ctx.execute_vfpu_vec3_ct<5u, 0u, 0u, 1u, 0u>();
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08BA53A0u, 0xC0000001u, "unknown not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA53A8:
    goto L_08BA53AC;
L_08BA53AC:
    ctx.pc = 0x0221DAF0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA53E0:
    goto L_08BA53EC;
L_08BA53EC:
    ctx.pc = 0x0221EA40u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5418:
    ctx.pc = 0x022394A0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA54C8:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA55A0:
    ctx.pc = 0x02279D10u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA55B0:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5608:
    ctx.pc = 0x0228CB90u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5758:
    ctx.pc = 0x022E2570u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA57D0:
    ctx.pc = 0x022EAED0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5800:
    ctx.pc = 0x02316640u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5810:
    ctx.pc = 0x0237DBB0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5870:
    ctx.pc = 0x023E0800u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA58E0:
    ctx.pc = 0x02DA8EC0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5900:
    ctx.pc = 0x023E6D10u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5930:
    ctx.pc = 0x023E8E40u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5960:
    ctx.pc = 0x0240CF60u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA59C0:
    ctx.pc = 0x024106E0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5A38:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5B40:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5C48:
    ctx.pc = 0x02DAF340u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5C58:
    ctx.pc = 0x02594DB0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5CF0:
    ctx.pc = 0x02A6E690u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5D08:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5EAC:
    ctx.pc = 0x02993780u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5ED0:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5F00:
    ctx.pc = 0x02B3E9C0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA5FA8:
    ctx.pc = 0x025C7B50u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6020:
    ctx.pc = 0x025ED2F0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6098:
    ctx.pc = 0x02601A50u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA60E8:
    ctx.pc = 0x02610F10u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6118:
    ctx.pc = 0x02613290u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6148:
    ctx.pc = 0x02614850u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6178:
    ctx.pc = 0x026150F0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA61A8:
    ctx.pc = 0x02615CD0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA61D8:
    ctx.pc = 0x026E7350u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6250:
    ctx.pc = 0x02718EC0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6260:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6338:
    ctx.pc = 0x027387A0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA63F8:
    ctx.pc = 0x02749D20u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA64A8:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6580:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6748:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6850:
    ctx.pc = 0x0279FD50u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6900:
    ctx.pc = 0x027AECA0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6910:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6AD8:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6BB0:
    ctx.pc = 0x027DC800u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6C70:
    ctx.pc = 0x02DB64B0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6CD0:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6E78:
    ctx.pc = 0x02801680u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6E88:
    ctx.pc = 0x028060C0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6ED0:
    ctx.pc = 0x028060C0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6F18:
    ctx.pc = 0x028060C0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6F60:
    ctx.pc = 0x028060C0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6FA8:
    ctx.pc = 0x028099F0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA6FF0:
    ctx.pc = 0x028060C0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7038:
    ctx.pc = 0x028060C0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7080:
    ctx.pc = 0x02827E10u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7118:
    ctx.pc = 0x02A6E690u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7128:
    ctx.pc = 0x02B44E30u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA71E8:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA72C0:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA73C8:
    ctx.pc = 0x028E6DD0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7410:
    ctx.pc = 0x02B44E30u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA74D0:
    ctx.pc = 0x028FACD0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7578:
    ctx.pc = 0x0294AE90u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7588:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7740:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7818:
    ctx.pc = 0x02DB7300u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7828:
    ctx.pc = 0x029FEAC0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA78E8:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7924:
    ctx.pc = 0x02B3EE70u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7958:
    ctx.pc = 0x02B41950u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7978:
    ctx.pc = 0x029EE8A0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA79C0:
    ctx.pc = 0x02A69B60u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7A68:
    ctx.pc = 0x02DC1510u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7AC8:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7BA0:
    ctx.pc = 0x02A92630u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7C60:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7C90:
    ctx.pc = 0x02B3E9C0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7D38:
    ctx.pc = 0x02AB29B0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7DF8:
    ctx.pc = 0x029A3390u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7ED0:
    ctx.pc = 0x02DA8C40u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7F30:
    ctx.pc = 0x02AC02D0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08BA7FE8:
    ctx.pc = 0x02ACD090u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0232(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0232_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_232(Runtime &runtime) {
    runtime.register_generated_unit(232u, 0x08BA4000u, 16384u, &recomp_unit_0232, &recomp_unit_0232_entry);
    runtime.register_function(0x08BA4000u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4078u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA40D0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA40D8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA40E0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4128u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4138u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4174u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA41B8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA41E8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4200u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4228u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4230u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4238u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4250u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4260u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA42D4u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA42D8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4328u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA434Cu, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4350u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4378u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4388u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4390u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4398u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43A0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43A8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43B0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43B8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43C0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43C8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43D0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43D8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43E0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43E8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43F0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43F8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4400u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4408u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4410u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4418u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4420u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4428u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4430u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4438u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4440u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4448u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4450u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4458u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4460u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4468u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4470u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4478u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4480u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4488u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4490u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4498u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44A0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44A8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44B0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44B8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44C0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44C8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44D0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44D8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44E0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44E8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44F0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44F8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4500u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4508u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4510u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4518u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4520u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4528u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4530u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4538u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4540u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4548u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4550u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4558u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4560u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4568u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4570u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4578u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4580u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4588u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4590u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4598u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45A0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45A8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45B0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45B8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45C0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45C8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45D0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45D8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45E0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45E8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45F0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45F8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4600u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4608u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4610u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4618u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4620u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4628u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4630u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4638u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4640u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4648u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4650u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4658u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4660u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4668u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4670u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4678u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4680u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4688u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4690u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4698u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46A0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46A8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46B0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46B8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46C0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46C8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46D0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46D8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46E0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46E8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46F0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46F8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4700u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4708u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4710u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4718u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4720u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4728u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4730u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4738u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4740u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4748u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4750u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4758u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4760u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4768u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4770u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4778u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4780u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4814u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4838u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4870u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4884u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4894u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA48F0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4904u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4930u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA49C8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4A88u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4AD0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4B78u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4C50u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4D10u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4D38u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4D70u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4E10u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4E20u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4FD8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4FE8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5060u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA50C0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5180u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5258u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5338u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5394u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA539Cu, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA53A8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA53ACu, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA53E0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA53ECu, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5418u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA54C8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA55A0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA55B0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5608u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5758u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA57D0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5800u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5810u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5870u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA58E0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5900u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5930u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5960u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA59C0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5A38u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5B40u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5C48u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5C58u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5CF0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5D08u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5EACu, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5ED0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5F00u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5FA8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6020u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6098u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA60E8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6118u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6148u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6178u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA61A8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA61D8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6250u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6260u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6338u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA63F8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA64A8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6580u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6748u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6850u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6900u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6910u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6AD8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6BB0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6C70u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6CD0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6E78u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6E88u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6ED0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6F18u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6F60u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6FA8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6FF0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7038u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7080u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7118u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7128u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA71E8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA72C0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA73C8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7410u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA74D0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7578u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7588u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7740u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7818u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7828u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA78E8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7924u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7958u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7978u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA79C0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7A68u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7AC8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7BA0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7C60u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7C90u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7D38u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7DF8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7ED0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7F30u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7FE8u, &recomp_unit_0232, "recomp_unit_0232");
}
} // namespace psprecomp
