#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0060[64] = {
    0x2A254580A80154A1ull, 0x820A8960D0AA1500ull, 0xA50A2090222A0820ull, 0x969129111000882Aull,
    0x0D22C14348A48254ull, 0x0000105A82082091ull, 0x8115043208000086ull, 0x69220502C1112420ull,
    0x0111282228C44448ull, 0x85252C8805452A4Aull, 0x00028A4104428420ull, 0x5520544222000001ull,
    0x7249449648954489ull, 0x00000002A1000002ull, 0x00000A8400005400ull, 0x0041090842100000ull,
    0x020000800A404840ull, 0x9111445528000040ull, 0x40002082AA822248ull, 0xAA2AA10408480A8Aull,
    0xA6510A0115532884ull, 0x508228488088A28Aull, 0x8880508A12A514A2ull, 0x2A90240002A80904ull,
    0xA000800282549695ull, 0x4041128254969121ull, 0x4A2A89510000800Dull, 0x9449451282D128B4ull,
    0x0128528055000000ull, 0x2000004014225290ull, 0x42848A82222AA2A1ull, 0x4242424221090842ull,
    0xA424242211088442ull, 0x001506294314A022ull, 0x0000001000000000ull, 0x0900000002040000ull,
    0x8000000000028000ull, 0x0001400000000002ull, 0x4000440000490410ull, 0x0402000000020001ull,
    0x8800000000004008ull, 0x000001219006A008ull, 0x2420008010000200ull, 0x100000200549A452ull,
    0x0200100000800001ull, 0x0005100000000080ull, 0x0000040004000100ull, 0xA491510452408000ull,
    0x492D4925A9259056ull, 0xD4925A924B52496Aull, 0x25A924B52496A492ull, 0x924B52496A492D49ull,
    0x080040808002AA5Aull, 0x0051444444401004ull, 0x5121500140005140ull, 0x0022D492A5164444ull,
    0x201A0004C10B10C2ull, 0x400086945A925450ull, 0x86910000010AAAA9ull, 0x8655401420215554ull,
    0x0215240400A00000ull, 0x1000A08100050400ull, 0x0001080000000000ull, 0x0000000008100002ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0060[64] = {
    1u, 21u, 40u, 56u, 74u, 95u, 107u, 120u, 137u, 153u, 175u, 187u, 200u, 224u, 229u, 236u,
    244u, 252u, 266u, 280u, 299u, 320u, 337u, 356u, 370u, 387u, 406u, 422u, 445u, 456u, 467u, 487u,
    502u, 518u, 535u, 536u, 540u, 543u, 546u, 554u, 558u, 562u, 572u, 578u, 591u, 595u, 599u, 602u,
    617u, 643u, 671u, 697u, 724u, 737u, 749u, 762u, 782u, 797u, 816u, 833u, 853u, 862u, 870u, 872u,
};
void recomp_unit_0060_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,6,2,28 fprs=12,13,14,22 gpr_occ=3759 fpr_occ=567 gpr_total=5613 fpr_total=731
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_28 = ctx.gpr[28];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_22 = ctx.fpr[22];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[6] = aot_gpr_6; ctx.gpr[2] = aot_gpr_2; ctx.gpr[28] = aot_gpr_28; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[22] = aot_fpr_22; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_2 = ctx.gpr[2]; aot_gpr_28 = ctx.gpr[28]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_22 = ctx.fpr[22]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088F4000u;
        entry_id = 0u;
        if (entry_delta < 16240u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0060[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0060[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_088F4000;
    case 2u: goto L_088F4014;
    case 3u: goto L_088F401C;
    case 4u: goto L_088F4028;
    case 5u: goto L_088F4030;
    case 6u: goto L_088F4038;
    case 7u: goto L_088F4040;
    case 8u: goto L_088F406C;
    case 9u: goto L_088F4074;
    case 10u: goto L_088F407C;
    case 11u: goto L_088F409C;
    case 12u: goto L_088F40A0;
    case 13u: goto L_088F40A8;
    case 14u: goto L_088F40B8;
    case 15u: goto L_088F40C0;
    case 16u: goto L_088F40C8;
    case 17u: goto L_088F40D4;
    case 18u: goto L_088F40E4;
    case 19u: goto L_088F40EC;
    case 20u: goto L_088F40F4;
    case 21u: goto L_088F4120;
    case 22u: goto L_088F4128;
    case 23u: goto L_088F4130;
    case 24u: goto L_088F4144;
    case 25u: goto L_088F414C;
    case 26u: goto L_088F4154;
    case 27u: goto L_088F415C;
    case 28u: goto L_088F4170;
    case 29u: goto L_088F4178;
    case 30u: goto L_088F417C;
    case 31u: goto L_088F4194;
    case 32u: goto L_088F4198;
    case 33u: goto L_088F41A0;
    case 34u: goto L_088F41AC;
    case 35u: goto L_088F41BC;
    case 36u: goto L_088F41C4;
    case 37u: goto L_088F41CC;
    case 38u: goto L_088F41E4;
    case 39u: goto L_088F41FC;
    case 40u: goto L_088F4214;
    case 41u: goto L_088F422C;
    case 42u: goto L_088F4244;
    case 43u: goto L_088F424C;
    case 44u: goto L_088F4254;
    case 45u: goto L_088F4264;
    case 46u: goto L_088F4274;
    case 47u: goto L_088F4290;
    case 48u: goto L_088F429C;
    case 49u: goto L_088F42B4;
    case 50u: goto L_088F42C4;
    case 51u: goto L_088F42CC;
    case 52u: goto L_088F42E0;
    case 53u: goto L_088F42E8;
    case 54u: goto L_088F42F4;
    case 55u: goto L_088F42FC;
    case 56u: goto L_088F4304;
    case 57u: goto L_088F430C;
    case 58u: goto L_088F4314;
    case 59u: goto L_088F432C;
    case 60u: goto L_088F433C;
    case 61u: goto L_088F4370;
    case 62u: goto L_088F4380;
    case 63u: goto L_088F4390;
    case 64u: goto L_088F43A0;
    case 65u: goto L_088F43AC;
    case 66u: goto L_088F43B4;
    case 67u: goto L_088F43C0;
    case 68u: goto L_088F43D0;
    case 69u: goto L_088F43DC;
    case 70u: goto L_088F43E4;
    case 71u: goto L_088F43E8;
    case 72u: goto L_088F43F0;
    case 73u: goto L_088F43FC;
    case 74u: goto L_088F4408;
    case 75u: goto L_088F4410;
    case 76u: goto L_088F4418;
    case 77u: goto L_088F4424;
    case 78u: goto L_088F443C;
    case 79u: goto L_088F4448;
    case 80u: goto L_088F4454;
    case 81u: goto L_088F445C;
    case 82u: goto L_088F446C;
    case 83u: goto L_088F4478;
    case 84u: goto L_088F4480;
    case 85u: goto L_088F4484;
    case 86u: goto L_088F4498;
    case 87u: goto L_088F44A0;
    case 88u: goto L_088F44B8;
    case 89u: goto L_088F44BC;
    case 90u: goto L_088F44C4;
    case 91u: goto L_088F44D4;
    case 92u: goto L_088F44E0;
    case 93u: goto L_088F44E8;
    case 94u: goto L_088F44EC;
    case 95u: goto L_088F4500;
    case 96u: goto L_088F4510;
    case 97u: goto L_088F451C;
    case 98u: goto L_088F4534;
    case 99u: goto L_088F454C;
    case 100u: goto L_088F4564;
    case 101u: goto L_088F457C;
    case 102u: goto L_088F4584;
    case 103u: goto L_088F458C;
    case 104u: goto L_088F4590;
    case 105u: goto L_088F4598;
    case 106u: goto L_088F45B0;
    case 107u: goto L_088F4604;
    case 108u: goto L_088F4608;
    case 109u: goto L_088F461C;
    case 110u: goto L_088F466C;
    case 111u: goto L_088F4684;
    case 112u: goto L_088F4690;
    case 113u: goto L_088F4694;
    case 114u: goto L_088F46A8;
    case 115u: goto L_088F46C0;
    case 116u: goto L_088F46C8;
    case 117u: goto L_088F46D0;
    case 118u: goto L_088F46E0;
    case 119u: goto L_088F46FC;
    case 120u: goto L_088F4714;
    case 121u: goto L_088F4728;
    case 122u: goto L_088F4734;
    case 123u: goto L_088F4740;
    case 124u: goto L_088F4750;
    case 125u: goto L_088F4760;
    case 126u: goto L_088F4778;
    case 127u: goto L_088F477C;
    case 128u: goto L_088F4784;
    case 129u: goto L_088F47A0;
    case 130u: goto L_088F47A8;
    case 131u: goto L_088F47C4;
    case 132u: goto L_088F47D4;
    case 133u: goto L_088F47E0;
    case 134u: goto L_088F47EC;
    case 135u: goto L_088F47F4;
    case 136u: goto L_088F47F8;
    case 137u: goto L_088F480C;
    case 138u: goto L_088F4818;
    case 139u: goto L_088F4828;
    case 140u: goto L_088F4838;
    case 141u: goto L_088F4848;
    case 142u: goto L_088F4858;
    case 143u: goto L_088F485C;
    case 144u: goto L_088F486C;
    case 145u: goto L_088F4874;
    case 146u: goto L_088F4884;
    case 147u: goto L_088F4894;
    case 148u: goto L_088F48AC;
    case 149u: goto L_088F48B4;
    case 150u: goto L_088F48C0;
    case 151u: goto L_088F48D0;
    case 152u: goto L_088F48E0;
    case 153u: goto L_088F4904;
    case 154u: goto L_088F490C;
    case 155u: goto L_088F4918;
    case 156u: goto L_088F4924;
    case 157u: goto L_088F492C;
    case 158u: goto L_088F4934;
    case 159u: goto L_088F4940;
    case 160u: goto L_088F4948;
    case 161u: goto L_088F4958;
    case 162u: goto L_088F4960;
    case 163u: goto L_088F4968;
    case 164u: goto L_088F498C;
    case 165u: goto L_088F499C;
    case 166u: goto L_088F49A8;
    case 167u: goto L_088F49AC;
    case 168u: goto L_088F49B4;
    case 169u: goto L_088F49C0;
    case 170u: goto L_088F49C8;
    case 171u: goto L_088F49D4;
    case 172u: goto L_088F49E0;
    case 173u: goto L_088F49E8;
    case 174u: goto L_088F49FC;
    case 175u: goto L_088F4A14;
    case 176u: goto L_088F4A28;
    case 177u: goto L_088F4A3C;
    case 178u: goto L_088F4A44;
    case 179u: goto L_088F4A58;
    case 180u: goto L_088F4A68;
    case 181u: goto L_088F4A80;
    case 182u: goto L_088F4A98;
    case 183u: goto L_088F4AA4;
    case 184u: goto L_088F4AAC;
    case 185u: goto L_088F4ABC;
    case 186u: goto L_088F4AC4;
    case 187u: goto L_088F4B00;
    case 188u: goto L_088F4B64;
    case 189u: goto L_088F4B74;
    case 190u: goto L_088F4B84;
    case 191u: goto L_088F4B98;
    case 192u: goto L_088F4BA8;
    case 193u: goto L_088F4BB0;
    case 194u: goto L_088F4BB8;
    case 195u: goto L_088F4BD4;
    case 196u: goto L_088F4BE0;
    case 197u: goto L_088F4BE8;
    case 198u: goto L_088F4BF0;
    case 199u: goto L_088F4BF8;
    case 200u: goto L_088F4C00;
    case 201u: goto L_088F4C0C;
    case 202u: goto L_088F4C1C;
    case 203u: goto L_088F4C28;
    case 204u: goto L_088F4C38;
    case 205u: goto L_088F4C40;
    case 206u: goto L_088F4C48;
    case 207u: goto L_088F4C50;
    case 208u: goto L_088F4C5C;
    case 209u: goto L_088F4C6C;
    case 210u: goto L_088F4C78;
    case 211u: goto L_088F4C84;
    case 212u: goto L_088F4C88;
    case 213u: goto L_088F4C90;
    case 214u: goto L_088F4C9C;
    case 215u: goto L_088F4CA8;
    case 216u: goto L_088F4CB8;
    case 217u: goto L_088F4CC0;
    case 218u: goto L_088F4CCC;
    case 219u: goto L_088F4CD8;
    case 220u: goto L_088F4CE4;
    case 221u: goto L_088F4CF0;
    case 222u: goto L_088F4CF4;
    case 223u: goto L_088F4CF8;
    case 224u: goto L_088F4D04;
    case 225u: goto L_088F4D60;
    case 226u: goto L_088F4D74;
    case 227u: goto L_088F4D7C;
    case 228u: goto L_088F4D84;
    case 229u: goto L_088F4E28;
    case 230u: goto L_088F4E30;
    case 231u: goto L_088F4E38;
    case 232u: goto L_088F4E88;
    case 233u: goto L_088F4E9C;
    case 234u: goto L_088F4EA4;
    case 235u: goto L_088F4EAC;
    case 236u: goto L_088F4F50;
    case 237u: goto L_088F4F64;
    case 238u: goto L_088F4F78;
    case 239u: goto L_088F4F8C;
    case 240u: goto L_088F4FA0;
    case 241u: goto L_088F4FAC;
    case 242u: goto L_088F4FC0;
    case 243u: goto L_088F4FD8;
    case 244u: goto L_088F5018;
    case 245u: goto L_088F502C;
    case 246u: goto L_088F5038;
    case 247u: goto L_088F5058;
    case 248u: goto L_088F5064;
    case 249u: goto L_088F506C;
    case 250u: goto L_088F509C;
    case 251u: goto L_088F50E4;
    case 252u: goto L_088F5118;
    case 253u: goto L_088F516C;
    case 254u: goto L_088F5174;
    case 255u: goto L_088F5180;
    case 256u: goto L_088F5188;
    case 257u: goto L_088F5190;
    case 258u: goto L_088F5198;
    case 259u: goto L_088F51A8;
    case 260u: goto L_088F51B8;
    case 261u: goto L_088F51C0;
    case 262u: goto L_088F51D0;
    case 263u: goto L_088F51E0;
    case 264u: goto L_088F51F0;
    case 265u: goto L_088F51FC;
    case 266u: goto L_088F520C;
    case 267u: goto L_088F5218;
    case 268u: goto L_088F5224;
    case 269u: goto L_088F5234;
    case 270u: goto L_088F5244;
    case 271u: goto L_088F525C;
    case 272u: goto L_088F5264;
    case 273u: goto L_088F526C;
    case 274u: goto L_088F5274;
    case 275u: goto L_088F527C;
    case 276u: goto L_088F5284;
    case 277u: goto L_088F529C;
    case 278u: goto L_088F52B4;
    case 279u: goto L_088F52F8;
    case 280u: goto L_088F5304;
    case 281u: goto L_088F530C;
    case 282u: goto L_088F531C;
    case 283u: goto L_088F5324;
    case 284u: goto L_088F532C;
    case 285u: goto L_088F534C;
    case 286u: goto L_088F5358;
    case 287u: goto L_088F536C;
    case 288u: goto L_088F5388;
    case 289u: goto L_088F53A0;
    case 290u: goto L_088F53B4;
    case 291u: goto L_088F53BC;
    case 292u: goto L_088F53C4;
    case 293u: goto L_088F53CC;
    case 294u: goto L_088F53D4;
    case 295u: goto L_088F53E4;
    case 296u: goto L_088F53EC;
    case 297u: goto L_088F53F4;
    case 298u: goto L_088F53FC;
    case 299u: goto L_088F5408;
    case 300u: goto L_088F541C;
    case 301u: goto L_088F542C;
    case 302u: goto L_088F5434;
    case 303u: goto L_088F5440;
    case 304u: goto L_088F5444;
    case 305u: goto L_088F5450;
    case 306u: goto L_088F5458;
    case 307u: goto L_088F5460;
    case 308u: goto L_088F5468;
    case 309u: goto L_088F5470;
    case 310u: goto L_088F5480;
    case 311u: goto L_088F54A4;
    case 312u: goto L_088F54AC;
    case 313u: goto L_088F54C0;
    case 314u: goto L_088F54D0;
    case 315u: goto L_088F54D8;
    case 316u: goto L_088F54E4;
    case 317u: goto L_088F54E8;
    case 318u: goto L_088F54F4;
    case 319u: goto L_088F54FC;
    case 320u: goto L_088F5504;
    case 321u: goto L_088F550C;
    case 322u: goto L_088F551C;
    case 323u: goto L_088F5524;
    case 324u: goto L_088F5534;
    case 325u: goto L_088F553C;
    case 326u: goto L_088F554C;
    case 327u: goto L_088F555C;
    case 328u: goto L_088F557C;
    case 329u: goto L_088F558C;
    case 330u: goto L_088F5598;
    case 331u: goto L_088F55AC;
    case 332u: goto L_088F55B4;
    case 333u: goto L_088F55C4;
    case 334u: goto L_088F55DC;
    case 335u: goto L_088F55F0;
    case 336u: goto L_088F55F8;
    case 337u: goto L_088F5604;
    case 338u: goto L_088F5614;
    case 339u: goto L_088F561C;
    case 340u: goto L_088F5628;
    case 341u: goto L_088F5630;
    case 342u: goto L_088F5640;
    case 343u: goto L_088F5648;
    case 344u: goto L_088F5654;
    case 345u: goto L_088F565C;
    case 346u: goto L_088F5664;
    case 347u: goto L_088F5670;
    case 348u: goto L_088F5684;
    case 349u: goto L_088F568C;
    case 350u: goto L_088F569C;
    case 351u: goto L_088F56B0;
    case 352u: goto L_088F56B8;
    case 353u: goto L_088F56DC;
    case 354u: goto L_088F56EC;
    case 355u: goto L_088F56FC;
    case 356u: goto L_088F5708;
    case 357u: goto L_088F5720;
    case 358u: goto L_088F572C;
    case 359u: goto L_088F574C;
    case 360u: goto L_088F5754;
    case 361u: goto L_088F575C;
    case 362u: goto L_088F5764;
    case 363u: goto L_088F57A8;
    case 364u: goto L_088F57B4;
    case 365u: goto L_088F57D0;
    case 366u: goto L_088F57DC;
    case 367u: goto L_088F57E4;
    case 368u: goto L_088F57EC;
    case 369u: goto L_088F57F4;
    case 370u: goto L_088F5800;
    case 371u: goto L_088F5808;
    case 372u: goto L_088F5810;
    case 373u: goto L_088F581C;
    case 374u: goto L_088F5824;
    case 375u: goto L_088F5828;
    case 376u: goto L_088F5830;
    case 377u: goto L_088F583C;
    case 378u: goto L_088F5848;
    case 379u: goto L_088F5850;
    case 380u: goto L_088F5858;
    case 381u: goto L_088F5864;
    case 382u: goto L_088F587C;
    case 383u: goto L_088F5884;
    case 384u: goto L_088F58BC;
    case 385u: goto L_088F58F4;
    case 386u: goto L_088F58FC;
    case 387u: goto L_088F5900;
    case 388u: goto L_088F5914;
    case 389u: goto L_088F5920;
    case 390u: goto L_088F5930;
    case 391u: goto L_088F593C;
    case 392u: goto L_088F5944;
    case 393u: goto L_088F5948;
    case 394u: goto L_088F5950;
    case 395u: goto L_088F595C;
    case 396u: goto L_088F5968;
    case 397u: goto L_088F5970;
    case 398u: goto L_088F5978;
    case 399u: goto L_088F5984;
    case 400u: goto L_088F599C;
    case 401u: goto L_088F59A4;
    case 402u: goto L_088F59B0;
    case 403u: goto L_088F59C0;
    case 404u: goto L_088F59D8;
    case 405u: goto L_088F59F8;
    case 406u: goto L_088F5A00;
    case 407u: goto L_088F5A08;
    case 408u: goto L_088F5A0C;
    case 409u: goto L_088F5A3C;
    case 410u: goto L_088F5A80;
    case 411u: goto L_088F5A90;
    case 412u: goto L_088F5A98;
    case 413u: goto L_088F5AA0;
    case 414u: goto L_088F5AAC;
    case 415u: goto L_088F5ABC;
    case 416u: goto L_088F5AC4;
    case 417u: goto L_088F5ACC;
    case 418u: goto L_088F5AD4;
    case 419u: goto L_088F5AE4;
    case 420u: goto L_088F5AEC;
    case 421u: goto L_088F5AF8;
    case 422u: goto L_088F5B08;
    case 423u: goto L_088F5B10;
    case 424u: goto L_088F5B14;
    case 425u: goto L_088F5B1C;
    case 426u: goto L_088F5B2C;
    case 427u: goto L_088F5B34;
    case 428u: goto L_088F5B40;
    case 429u: goto L_088F5B50;
    case 430u: goto L_088F5B58;
    case 431u: goto L_088F5B5C;
    case 432u: goto L_088F5B64;
    case 433u: goto L_088F5B7C;
    case 434u: goto L_088F5B84;
    case 435u: goto L_088F5B90;
    case 436u: goto L_088F5BA0;
    case 437u: goto L_088F5BA8;
    case 438u: goto L_088F5BB8;
    case 439u: goto L_088F5BC0;
    case 440u: goto L_088F5BCC;
    case 441u: goto L_088F5BD8;
    case 442u: goto L_088F5BE8;
    case 443u: goto L_088F5BF0;
    case 444u: goto L_088F5BFC;
    case 445u: goto L_088F5C60;
    case 446u: goto L_088F5C68;
    case 447u: goto L_088F5C70;
    case 448u: goto L_088F5C78;
    case 449u: goto L_088F5C9C;
    case 450u: goto L_088F5CA4;
    case 451u: goto L_088F5CB0;
    case 452u: goto L_088F5CB8;
    case 453u: goto L_088F5CCC;
    case 454u: goto L_088F5CD4;
    case 455u: goto L_088F5CE0;
    case 456u: goto L_088F5D10;
    case 457u: goto L_088F5D1C;
    case 458u: goto L_088F5D24;
    case 459u: goto L_088F5D30;
    case 460u: goto L_088F5D38;
    case 461u: goto L_088F5D44;
    case 462u: goto L_088F5D54;
    case 463u: goto L_088F5D68;
    case 464u: goto L_088F5D70;
    case 465u: goto L_088F5D98;
    case 466u: goto L_088F5DF4;
    case 467u: goto L_088F5E00;
    case 468u: goto L_088F5E14;
    case 469u: goto L_088F5E1C;
    case 470u: goto L_088F5E24;
    case 471u: goto L_088F5E34;
    case 472u: goto L_088F5E3C;
    case 473u: goto L_088F5E44;
    case 474u: goto L_088F5E4C;
    case 475u: goto L_088F5E54;
    case 476u: goto L_088F5E64;
    case 477u: goto L_088F5E74;
    case 478u: goto L_088F5E84;
    case 479u: goto L_088F5E9C;
    case 480u: goto L_088F5EA4;
    case 481u: goto L_088F5EAC;
    case 482u: goto L_088F5EBC;
    case 483u: goto L_088F5EC8;
    case 484u: goto L_088F5EDC;
    case 485u: goto L_088F5EE4;
    case 486u: goto L_088F5EF8;
    case 487u: goto L_088F5F04;
    case 488u: goto L_088F5F18;
    case 489u: goto L_088F5F2C;
    case 490u: goto L_088F5F40;
    case 491u: goto L_088F5F4C;
    case 492u: goto L_088F5F60;
    case 493u: goto L_088F5F74;
    case 494u: goto L_088F5F84;
    case 495u: goto L_088F5F98;
    case 496u: goto L_088F5FA4;
    case 497u: goto L_088F5FB8;
    case 498u: goto L_088F5FC4;
    case 499u: goto L_088F5FD8;
    case 500u: goto L_088F5FE4;
    case 501u: goto L_088F5FF8;
    case 502u: goto L_088F6004;
    case 503u: goto L_088F6018;
    case 504u: goto L_088F6028;
    case 505u: goto L_088F603C;
    case 506u: goto L_088F604C;
    case 507u: goto L_088F6060;
    case 508u: goto L_088F6070;
    case 509u: goto L_088F6084;
    case 510u: goto L_088F6094;
    case 511u: goto L_088F60A8;
    case 512u: goto L_088F60B4;
    case 513u: goto L_088F60C8;
    case 514u: goto L_088F60D4;
    case 515u: goto L_088F60E8;
    case 516u: goto L_088F60F4;
    case 517u: goto L_088F60FC;
    case 518u: goto L_088F6104;
    case 519u: goto L_088F6114;
    case 520u: goto L_088F6134;
    case 521u: goto L_088F613C;
    case 522u: goto L_088F6148;
    case 523u: goto L_088F6150;
    case 524u: goto L_088F6160;
    case 525u: goto L_088F6164;
    case 526u: goto L_088F6178;
    case 527u: goto L_088F6180;
    case 528u: goto L_088F618C;
    case 529u: goto L_088F6194;
    case 530u: goto L_088F61A4;
    case 531u: goto L_088F61A8;
    case 532u: goto L_088F61C0;
    case 533u: goto L_088F61C8;
    case 534u: goto L_088F61D0;
    case 535u: goto L_088F6290;
    case 536u: goto L_088F6348;
    case 537u: goto L_088F6364;
    case 538u: goto L_088F63E0;
    case 539u: goto L_088F63EC;
    case 540u: goto L_088F643C;
    case 541u: goto L_088F6444;
    case 542u: goto L_088F64FC;
    case 543u: goto L_088F6504;
    case 544u: goto L_088F65B8;
    case 545u: goto L_088F65C0;
    case 546u: goto L_088F6610;
    case 547u: goto L_088F6628;
    case 548u: goto L_088F6640;
    case 549u: goto L_088F664C;
    case 550u: goto L_088F6658;
    case 551u: goto L_088F66A8;
    case 552u: goto L_088F66B8;
    case 553u: goto L_088F66F8;
    case 554u: goto L_088F6700;
    case 555u: goto L_088F6744;
    case 556u: goto L_088F67C4;
    case 557u: goto L_088F67E8;
    case 558u: goto L_088F680C;
    case 559u: goto L_088F6838;
    case 560u: goto L_088F68EC;
    case 561u: goto L_088F68FC;
    case 562u: goto L_088F690C;
    case 563u: goto L_088F6934;
    case 564u: goto L_088F693C;
    case 565u: goto L_088F6944;
    case 566u: goto L_088F6948;
    case 567u: goto L_088F6970;
    case 568u: goto L_088F697C;
    case 569u: goto L_088F6980;
    case 570u: goto L_088F6994;
    case 571u: goto L_088F69A0;
    case 572u: goto L_088F6A24;
    case 573u: goto L_088F6A70;
    case 574u: goto L_088F6A9C;
    case 575u: goto L_088F6AD4;
    case 576u: goto L_088F6AE8;
    case 577u: goto L_088F6AF4;
    case 578u: goto L_088F6B04;
    case 579u: goto L_088F6B10;
    case 580u: goto L_088F6B18;
    case 581u: goto L_088F6B28;
    case 582u: goto L_088F6B34;
    case 583u: goto L_088F6B3C;
    case 584u: goto L_088F6B40;
    case 585u: goto L_088F6B4C;
    case 586u: goto L_088F6B58;
    case 587u: goto L_088F6B60;
    case 588u: goto L_088F6B68;
    case 589u: goto L_088F6B94;
    case 590u: goto L_088F6BF0;
    case 591u: goto L_088F6C00;
    case 592u: goto L_088F6C5C;
    case 593u: goto L_088F6CB0;
    case 594u: goto L_088F6CE4;
    case 595u: goto L_088F6D1C;
    case 596u: goto L_088F6DB0;
    case 597u: goto L_088F6DC0;
    case 598u: goto L_088F6DC8;
    case 599u: goto L_088F6E20;
    case 600u: goto L_088F6E68;
    case 601u: goto L_088F6EA8;
    case 602u: goto L_088F6F3C;
    case 603u: goto L_088F6F58;
    case 604u: goto L_088F6F64;
    case 605u: goto L_088F6F70;
    case 606u: goto L_088F6F78;
    case 607u: goto L_088F6F88;
    case 608u: goto L_088F6FA0;
    case 609u: goto L_088F6FB0;
    case 610u: goto L_088F6FB8;
    case 611u: goto L_088F6FC0;
    case 612u: goto L_088F6FD0;
    case 613u: goto L_088F6FDC;
    case 614u: goto L_088F6FE8;
    case 615u: goto L_088F6FF4;
    case 616u: goto L_088F6FFC;
    case 617u: goto L_088F7004;
    case 618u: goto L_088F7008;
    case 619u: goto L_088F7010;
    case 620u: goto L_088F7018;
    case 621u: goto L_088F7030;
    case 622u: goto L_088F703C;
    case 623u: goto L_088F7040;
    case 624u: goto L_088F7048;
    case 625u: goto L_088F7054;
    case 626u: goto L_088F7060;
    case 627u: goto L_088F706C;
    case 628u: goto L_088F7074;
    case 629u: goto L_088F707C;
    case 630u: goto L_088F7080;
    case 631u: goto L_088F7088;
    case 632u: goto L_088F7094;
    case 633u: goto L_088F70A0;
    case 634u: goto L_088F70AC;
    case 635u: goto L_088F70B8;
    case 636u: goto L_088F70C0;
    case 637u: goto L_088F70C8;
    case 638u: goto L_088F70CC;
    case 639u: goto L_088F70D4;
    case 640u: goto L_088F70E0;
    case 641u: goto L_088F70EC;
    case 642u: goto L_088F70F8;
    case 643u: goto L_088F7104;
    case 644u: goto L_088F710C;
    case 645u: goto L_088F7114;
    case 646u: goto L_088F7118;
    case 647u: goto L_088F7120;
    case 648u: goto L_088F712C;
    case 649u: goto L_088F7138;
    case 650u: goto L_088F7144;
    case 651u: goto L_088F7150;
    case 652u: goto L_088F7158;
    case 653u: goto L_088F7160;
    case 654u: goto L_088F7164;
    case 655u: goto L_088F716C;
    case 656u: goto L_088F7178;
    case 657u: goto L_088F7184;
    case 658u: goto L_088F7190;
    case 659u: goto L_088F719C;
    case 660u: goto L_088F71A4;
    case 661u: goto L_088F71AC;
    case 662u: goto L_088F71B0;
    case 663u: goto L_088F71B8;
    case 664u: goto L_088F71C4;
    case 665u: goto L_088F71D0;
    case 666u: goto L_088F71DC;
    case 667u: goto L_088F71E8;
    case 668u: goto L_088F71F0;
    case 669u: goto L_088F71F8;
    case 670u: goto L_088F71FC;
    case 671u: goto L_088F7204;
    case 672u: goto L_088F7210;
    case 673u: goto L_088F721C;
    case 674u: goto L_088F7228;
    case 675u: goto L_088F7234;
    case 676u: goto L_088F723C;
    case 677u: goto L_088F7244;
    case 678u: goto L_088F7248;
    case 679u: goto L_088F7250;
    case 680u: goto L_088F725C;
    case 681u: goto L_088F7268;
    case 682u: goto L_088F7274;
    case 683u: goto L_088F7280;
    case 684u: goto L_088F7288;
    case 685u: goto L_088F7290;
    case 686u: goto L_088F7294;
    case 687u: goto L_088F729C;
    case 688u: goto L_088F72A8;
    case 689u: goto L_088F72B4;
    case 690u: goto L_088F72C0;
    case 691u: goto L_088F72CC;
    case 692u: goto L_088F72D4;
    case 693u: goto L_088F72DC;
    case 694u: goto L_088F72E0;
    case 695u: goto L_088F72E8;
    case 696u: goto L_088F72F4;
    case 697u: goto L_088F7300;
    case 698u: goto L_088F730C;
    case 699u: goto L_088F7318;
    case 700u: goto L_088F7320;
    case 701u: goto L_088F7328;
    case 702u: goto L_088F732C;
    case 703u: goto L_088F7334;
    case 704u: goto L_088F7340;
    case 705u: goto L_088F734C;
    case 706u: goto L_088F7358;
    case 707u: goto L_088F7364;
    case 708u: goto L_088F736C;
    case 709u: goto L_088F7374;
    case 710u: goto L_088F7378;
    case 711u: goto L_088F7380;
    case 712u: goto L_088F738C;
    case 713u: goto L_088F7398;
    case 714u: goto L_088F73A4;
    case 715u: goto L_088F73B0;
    case 716u: goto L_088F73B8;
    case 717u: goto L_088F73C0;
    case 718u: goto L_088F73C4;
    case 719u: goto L_088F73CC;
    case 720u: goto L_088F73D8;
    case 721u: goto L_088F73E4;
    case 722u: goto L_088F73F0;
    case 723u: goto L_088F73FC;
    case 724u: goto L_088F7404;
    case 725u: goto L_088F740C;
    case 726u: goto L_088F7410;
    case 727u: goto L_088F7418;
    case 728u: goto L_088F7424;
    case 729u: goto L_088F742C;
    case 730u: goto L_088F7434;
    case 731u: goto L_088F743C;
    case 732u: goto L_088F7444;
    case 733u: goto L_088F747C;
    case 734u: goto L_088F749C;
    case 735u: goto L_088F74B8;
    case 736u: goto L_088F74EC;
    case 737u: goto L_088F7508;
    case 738u: goto L_088F7530;
    case 739u: goto L_088F7558;
    case 740u: goto L_088F7568;
    case 741u: goto L_088F7578;
    case 742u: goto L_088F7588;
    case 743u: goto L_088F7598;
    case 744u: goto L_088F75A8;
    case 745u: goto L_088F75B8;
    case 746u: goto L_088F75C0;
    case 747u: goto L_088F75D0;
    case 748u: goto L_088F75D8;
    case 749u: goto L_088F7618;
    case 750u: goto L_088F7620;
    case 751u: goto L_088F7630;
    case 752u: goto L_088F7638;
    case 753u: goto L_088F7678;
    case 754u: goto L_088F7680;
    case 755u: goto L_088F76B0;
    case 756u: goto L_088F76B8;
    case 757u: goto L_088F76C0;
    case 758u: goto L_088F76D4;
    case 759u: goto L_088F76E0;
    case 760u: goto L_088F76F0;
    case 761u: goto L_088F76F8;
    case 762u: goto L_088F7708;
    case 763u: goto L_088F7718;
    case 764u: goto L_088F7728;
    case 765u: goto L_088F7738;
    case 766u: goto L_088F7744;
    case 767u: goto L_088F7748;
    case 768u: goto L_088F7750;
    case 769u: goto L_088F7760;
    case 770u: goto L_088F7768;
    case 771u: goto L_088F7774;
    case 772u: goto L_088F777C;
    case 773u: goto L_088F7784;
    case 774u: goto L_088F7790;
    case 775u: goto L_088F779C;
    case 776u: goto L_088F77A8;
    case 777u: goto L_088F77B0;
    case 778u: goto L_088F77B8;
    case 779u: goto L_088F77BC;
    case 780u: goto L_088F77C4;
    case 781u: goto L_088F77D4;
    case 782u: goto L_088F7804;
    case 783u: goto L_088F7818;
    case 784u: goto L_088F781C;
    case 785u: goto L_088F7830;
    case 786u: goto L_088F7840;
    case 787u: goto L_088F7844;
    case 788u: goto L_088F784C;
    case 789u: goto L_088F7860;
    case 790u: goto L_088F7878;
    case 791u: goto L_088F787C;
    case 792u: goto L_088F7888;
    case 793u: goto L_088F78C4;
    case 794u: goto L_088F78CC;
    case 795u: goto L_088F78D0;
    case 796u: goto L_088F78F4;
    case 797u: goto L_088F7910;
    case 798u: goto L_088F7918;
    case 799u: goto L_088F7928;
    case 800u: goto L_088F7930;
    case 801u: goto L_088F7938;
    case 802u: goto L_088F7944;
    case 803u: goto L_088F7950;
    case 804u: goto L_088F795C;
    case 805u: goto L_088F7964;
    case 806u: goto L_088F796C;
    case 807u: goto L_088F7970;
    case 808u: goto L_088F7978;
    case 809u: goto L_088F7988;
    case 810u: goto L_088F7990;
    case 811u: goto L_088F799C;
    case 812u: goto L_088F79A4;
    case 813u: goto L_088F79A8;
    case 814u: goto L_088F79BC;
    case 815u: goto L_088F79F8;
    case 816u: goto L_088F7A00;
    case 817u: goto L_088F7A0C;
    case 818u: goto L_088F7A14;
    case 819u: goto L_088F7A1C;
    case 820u: goto L_088F7A24;
    case 821u: goto L_088F7A2C;
    case 822u: goto L_088F7A34;
    case 823u: goto L_088F7A3C;
    case 824u: goto L_088F7A44;
    case 825u: goto L_088F7A4C;
    case 826u: goto L_088F7A60;
    case 827u: goto L_088F7AC0;
    case 828u: goto L_088F7AD0;
    case 829u: goto L_088F7ADC;
    case 830u: goto L_088F7AE4;
    case 831u: goto L_088F7AE8;
    case 832u: goto L_088F7AFC;
    case 833u: goto L_088F7B08;
    case 834u: goto L_088F7B10;
    case 835u: goto L_088F7B18;
    case 836u: goto L_088F7B20;
    case 837u: goto L_088F7B28;
    case 838u: goto L_088F7B30;
    case 839u: goto L_088F7B38;
    case 840u: goto L_088F7B40;
    case 841u: goto L_088F7B54;
    case 842u: goto L_088F7B74;
    case 843u: goto L_088F7B88;
    case 844u: goto L_088F7B90;
    case 845u: goto L_088F7BB8;
    case 846u: goto L_088F7BC0;
    case 847u: goto L_088F7BC8;
    case 848u: goto L_088F7BD0;
    case 849u: goto L_088F7BD8;
    case 850u: goto L_088F7BE4;
    case 851u: goto L_088F7BE8;
    case 852u: goto L_088F7BFC;
    case 853u: goto L_088F7C54;
    case 854u: goto L_088F7C5C;
    case 855u: goto L_088F7C88;
    case 856u: goto L_088F7CA8;
    case 857u: goto L_088F7CB4;
    case 858u: goto L_088F7CC0;
    case 859u: goto L_088F7CC8;
    case 860u: goto L_088F7CD0;
    case 861u: goto L_088F7CE4;
    case 862u: goto L_088F7D28;
    case 863u: goto L_088F7D40;
    case 864u: goto L_088F7D48;
    case 865u: goto L_088F7D80;
    case 866u: goto L_088F7D9C;
    case 867u: goto L_088F7DB4;
    case 868u: goto L_088F7DBC;
    case 869u: goto L_088F7DF0;
    case 870u: goto L_088F7EAC;
    case 871u: goto L_088F7EC0;
    case 872u: goto L_088F7F04;
    case 873u: goto L_088F7F50;
    case 874u: goto L_088F7F6C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_088F4000:
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[15];
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x088F4014u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4014u) goto L_088F4014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4014:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F4028;
      }
      goto L_088F401C;
    }
L_088F401C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088F4028;
L_088F4028:
    aot_gpr_31 = (0x088F4030u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4030u) goto L_088F4030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4030:
    aot_gpr_31 = (0x088F4038u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4038u) goto L_088F4038;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4038:
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_088F40A0;
      }
      goto L_088F4040;
    }
L_088F4040:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088F406Cu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 213u, 0x08AD1028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F406Cu) goto L_088F406C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F406C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F40A0;
      }
      goto L_088F4074;
    }
L_088F4074:
    aot_gpr_31 = (0x088F407Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 472u, 0x088F23C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F407Cu) goto L_088F407C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F407C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 89u);
    aot_gpr_31 = (0x088F409Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F409Cu) goto L_088F409C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F409C:
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_088F40A0;
L_088F40A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F480C;
      }
      goto L_088F40A8;
    }
L_088F40A8:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_31 = (0x088F40B8u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 708u, 0x088F39A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F40B8u) goto L_088F40B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F40B8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F4154;
      }
      goto L_088F40C0;
    }
L_088F40C0:
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_088F4130;
      }
      goto L_088F40C8;
    }
L_088F40C8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F40F4;
      }
      goto L_088F40D4;
    }
L_088F40D4:
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088F40E4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 497u, 0x088F2590u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F40E4u) goto L_088F40E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F40E4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F417C;
      }
      goto L_088F40EC;
    }
L_088F40EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_088F417C;
      }
      goto L_088F40F4;
    }
L_088F40F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088F4120u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 213u, 0x08AD1028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4120u) goto L_088F4120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4120:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F417C;
      }
      goto L_088F4128;
    }
L_088F4128:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_088F417C;
      }
      goto L_088F4130;
    }
L_088F4130:
    aot_gpr_4 = (16358u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088F4144u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 497u, 0x088F2590u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4144u) goto L_088F4144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4144:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F417C;
      }
      goto L_088F414C;
    }
L_088F414C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_088F417C;
      }
      goto L_088F4154;
    }
L_088F4154:
    { const bool branch_taken = ctx.gpr[30] != 0u;
      if (branch_taken) {
          goto L_088F417C;
      }
      goto L_088F415C;
    }
L_088F415C:
    aot_gpr_4 = (16358u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088F4170u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 497u, 0x088F2590u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4170u) goto L_088F4170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4170:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F417C;
      }
      goto L_088F4178;
    }
L_088F4178:
    ctx.gpr[22] = (0u | 1u);
    goto L_088F417C;
L_088F417C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1252)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088F4198;
      }
      goto L_088F4194;
    }
L_088F4194:
    ctx.gpr[22] = (0u | 0u);
    goto L_088F4198;
L_088F4198:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_088F44C4;
      }
      goto L_088F41A0;
    }
L_088F41A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_31 = (0x088F41ACu);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 589u, 0x088F2D04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F41ACu) goto L_088F41AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F41AC:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    ctx.gpr[17] = (static_cast<std::int32_t>(ctx.gpr[16]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088F4244;
      }
      goto L_088F41BC;
    }
L_088F41BC:
    aot_gpr_31 = (0x088F41C4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F41C4u) goto L_088F41C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F41C4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F4244;
      }
      goto L_088F41CC;
    }
L_088F41CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(166)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F4244;
      }
      goto L_088F41E4;
    }
L_088F41E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(162)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F4244;
      }
      goto L_088F41FC;
    }
L_088F41FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F4244;
      }
      goto L_088F4214;
    }
L_088F4214:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F4244;
      }
      goto L_088F422C;
    }
L_088F422C:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088F44BC;
      }
      goto L_088F4244;
    }
L_088F4244:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088F44BC;
      }
      goto L_088F424C;
    }
L_088F424C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_088F44BC;
      }
      goto L_088F4254;
    }
L_088F4254:
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(213), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088F4264u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4264u) goto L_088F4264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4264:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr_31 = (0x088F4274u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4274u) goto L_088F4274;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4274:
    ctx.gpr[21] = (ctx.gpr[18] << 5u);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    ctx.gpr[21] = (ctx.gpr[21] - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_2 + ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x088F4290u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4290u) goto L_088F4290;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4290:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088F429Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F429Cu) goto L_088F429C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F429C:
    aot_gpr_4 = (aot_gpr_2 + ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[20] == aot_gpr_4;
    ctx.gpr[22] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(213)));
      if (branch_taken) {
          goto L_088F44BC;
      }
      goto L_088F42B4;
    }
L_088F42B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F42E8;
      }
      goto L_088F42C4;
    }
L_088F42C4:
    aot_gpr_31 = (0x088F42CCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F42CCu) goto L_088F42CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F42CC:
    aot_gpr_4 = (aot_gpr_2 + ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_088F42E8;
      }
      goto L_088F42E0;
    }
L_088F42E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_088F44BC;
      }
      goto L_088F42E8;
    }
L_088F42E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_31 = (0x088F42F4u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F42F4u) goto L_088F42F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F42F4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088F4304;
      }
      goto L_088F42FC;
    }
L_088F42FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_088F44BC;
      }
      goto L_088F4304;
    }
L_088F4304:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_088F433C;
      }
      goto L_088F430C;
    }
L_088F430C:
    aot_gpr_31 = (0x088F4314u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4314u) goto L_088F4314;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4314:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(3252)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1500) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F44BC;
      }
      goto L_088F432C;
    }
L_088F432C:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_4 = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-23116), aot_gpr_4);
      if (branch_taken) {
          goto L_088F44BC;
      }
      goto L_088F433C;
    }
L_088F433C:
    aot_gpr_4 = (0u | 6u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-23116), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (ctx.gpr[18] ^ 5u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[18] ^ 6u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F43C0;
      }
      goto L_088F4370;
    }
L_088F4370:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F43A0;
      }
      goto L_088F4380;
    }
L_088F4380:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F43A0;
      }
      goto L_088F4390;
    }
L_088F4390:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F43C0;
      }
      goto L_088F43A0;
    }
L_088F43A0:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088F43ACu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 483u, 0x088F2464u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F43ACu) goto L_088F43AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F43AC:
    aot_gpr_31 = (0x088F43B4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F43B4u) goto L_088F43B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F43B4:
    aot_gpr_4 = (aot_gpr_2 + ctx.gpr[21]);
    aot_gpr_31 = (0x088F43C0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 212u, 0x08A40FCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F43C0u) goto L_088F43C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F43C0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F4448;
      }
      goto L_088F43D0;
    }
L_088F43D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_088F43E8;
    }
    goto L_088F43DC;
L_088F43DC:
    aot_gpr_31 = (0x088F43E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F43E4u) goto L_088F43E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F43E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_088F43E8;
L_088F43E8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_088F4418;
      }
      goto L_088F43F0;
    }
L_088F43F0:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F43FCu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F43FCu) goto L_088F43FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F43FC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    if (ctx.gpr[18] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F4418;
    }
    goto L_088F4408;
L_088F4408:
    aot_gpr_31 = (0x088F4410u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4410u) goto L_088F4410;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4410:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F4418;
L_088F4418:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x088F4424u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-23104));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4424u) goto L_088F4424;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4424:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088F443Cu);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F443Cu) goto L_088F443C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F443C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088F4448;
L_088F4448:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-23120)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F445C;
      }
      goto L_088F4454;
    }
L_088F4454:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_088F4498;
      }
      goto L_088F445C;
    }
L_088F445C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F4498;
      }
      goto L_088F446C;
    }
L_088F446C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
        goto L_088F4484;
    }
    goto L_088F4478;
L_088F4478:
    aot_gpr_31 = (0x088F4480u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4480u) goto L_088F4480;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4480:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    goto L_088F4484;
L_088F4484:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088F4498u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4498u) goto L_088F4498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4498:
    aot_gpr_31 = (0x088F44A0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F44A0u) goto L_088F44A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F44A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(3252)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1500) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F44BC;
      }
      goto L_088F44B8;
    }
L_088F44B8:
    ctx.gpr[22] = (0u | 0u);
    goto L_088F44BC;
L_088F44BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F4510;
      }
      goto L_088F44C4;
    }
L_088F44C4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F4510;
      }
      goto L_088F44D4;
    }
L_088F44D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
        goto L_088F44EC;
    }
    goto L_088F44E0;
L_088F44E0:
    aot_gpr_31 = (0x088F44E8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F44E8u) goto L_088F44E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F44E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    goto L_088F44EC;
L_088F44EC:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088F4500u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4500u) goto L_088F4500;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4500:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088F4510;
L_088F4510:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F4590;
      }
      goto L_088F451C;
    }
L_088F451C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(146)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F457C;
      }
      goto L_088F4534;
    }
L_088F4534:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F457C;
      }
      goto L_088F454C;
    }
L_088F454C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F457C;
      }
      goto L_088F4564;
    }
L_088F4564:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F4590;
      }
      goto L_088F457C;
    }
L_088F457C:
    aot_gpr_31 = (0x088F4584u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 695u, 0x0894763Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4584u) goto L_088F4584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4584:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F4590;
      }
      goto L_088F458C;
    }
L_088F458C:
    ctx.gpr[22] = (0u | 0u);
    goto L_088F4590;
L_088F4590:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_088F480C;
      }
      goto L_088F4598;
    }
L_088F4598:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(158)));
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
        goto L_088F4608;
    }
    goto L_088F45B0;
L_088F45B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1256)));
    aot_gpr_5 = (aot_gpr_4 << 8u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(337)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088F480C;
      }
      goto L_088F4604;
    }
L_088F4604:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    goto L_088F4608;
L_088F4608:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(162)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_088F466C;
      }
      goto L_088F461C;
    }
L_088F461C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1252)));
    aot_gpr_4 = (ctx.gpr[16] << 8u);
    aot_gpr_5 = (ctx.gpr[16] + ctx.gpr[16]);
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(336)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088F480C;
      }
      goto L_088F466C;
    }
L_088F466C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(166)));
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
        goto L_088F4694;
    }
    goto L_088F4684;
L_088F4684:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F480C;
      }
      goto L_088F4690;
    }
L_088F4690:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    goto L_088F4694;
L_088F4694:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F46C0;
      }
      goto L_088F46A8;
    }
L_088F46A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F46D0;
      }
      goto L_088F46C0;
    }
L_088F46C0:
    aot_gpr_31 = (0x088F46C8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F46C8u) goto L_088F46C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F46C8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088F480C;
      }
      goto L_088F46D0;
    }
L_088F46D0:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F47A8;
      }
      goto L_088F46E0;
    }
L_088F46E0:
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F4714;
      }
      goto L_088F46FC;
    }
L_088F46FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F477C;
      }
      goto L_088F4714;
    }
L_088F4714:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_31 = (0x088F4728u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 16u, 0x08ADC120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4728u) goto L_088F4728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4728:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088F477C;
      }
      goto L_088F4734;
    }
L_088F4734:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_088F4760;
    }
    goto L_088F4740;
L_088F4740:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    aot_gpr_31 = (0x088F4750u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4750u) goto L_088F4750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4750:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_088F4760;
L_088F4760:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    aot_gpr_4 = (aot_gpr_4 ^ 65535u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F477C;
      }
      goto L_088F4778;
    }
L_088F4778:
    ctx.gpr[16] = (0u | 0u);
    goto L_088F477C;
L_088F477C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_088F47A0;
      }
      goto L_088F4784;
    }
L_088F4784:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (0x088F47A0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(96))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 375u, 0x08A0A700u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F47A0u) goto L_088F47A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F47A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F480C;
      }
      goto L_088F47A8;
    }
L_088F47A8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 100u);
    aot_gpr_31 = (0x088F47C4u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088F5118;
L_088F47C4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(aot_gpr_2));
      if (branch_taken) {
          goto L_088F480C;
      }
      goto L_088F47D4;
    }
L_088F47D4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F480C;
      }
      goto L_088F47E0;
    }
L_088F47E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
        goto L_088F47F8;
    }
    goto L_088F47EC;
L_088F47EC:
    aot_gpr_31 = (0x088F47F4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F47F4u) goto L_088F47F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F47F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    goto L_088F47F8;
L_088F47F8:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088F480Cu);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F480Cu) goto L_088F480C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F480C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(57)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F4AC4;
      }
      goto L_088F4818;
    }
L_088F4818:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (0u | 16u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
        goto L_088F485C;
    }
    goto L_088F4828;
L_088F4828:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (0u | 4u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
        goto L_088F485C;
    }
    goto L_088F4838;
L_088F4838:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (0u | 5u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
        goto L_088F485C;
    }
    goto L_088F4848;
L_088F4848:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F4AC4;
      }
      goto L_088F4858;
    }
L_088F4858:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    goto L_088F485C;
L_088F485C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F4AC4;
      }
      goto L_088F486C;
    }
L_088F486C:
    aot_gpr_31 = (0x088F4874u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 472u, 0x088F23C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4874u) goto L_088F4874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4874:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088F4AC4;
      }
      goto L_088F4884;
    }
L_088F4884:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088F48B4;
      }
      goto L_088F4894;
    }
L_088F4894:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088F48B4;
      }
      goto L_088F48AC;
    }
L_088F48AC:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    goto L_088F48B4;
L_088F48B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088F4AC4;
      }
      goto L_088F48C0;
    }
L_088F48C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F4AC4;
      }
      goto L_088F48D0;
    }
L_088F48D0:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F49B4;
      }
      goto L_088F48E0;
    }
L_088F48E0:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[21] = (0u | 1u);
    aot_gpr_4 = (17658u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    goto L_088F4904;
L_088F4904:
    aot_gpr_31 = (0x088F490Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F490Cu) goto L_088F490C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F490C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F49B4;
      }
      goto L_088F4918;
    }
L_088F4918:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088F4924u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4924u) goto L_088F4924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4924:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088F4934;
      }
      goto L_088F492C;
    }
L_088F492C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F49AC;
      }
      goto L_088F4934;
    }
L_088F4934:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088F4940u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4940u) goto L_088F4940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4940:
    aot_gpr_31 = (0x088F4948u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0008_entry, 8u, 19u, 0x08824204u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4948u) goto L_088F4948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4948:
    { const std::uint32_t vfpu_address = aot_gpr_2 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x088F4958u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4958u) goto L_088F4958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4958:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[21];
      if (branch_taken) {
          goto L_088F4968;
      }
      goto L_088F4960;
    }
L_088F4960:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088F498C;
      }
      goto L_088F4968;
    }
L_088F4968:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    goto L_088F498C;
L_088F498C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_22)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088F49A8;
      }
      goto L_088F499C;
    }
L_088F499C:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F49B4;
      }
      goto L_088F49A8;
    }
L_088F49A8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088F49AC;
L_088F49AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F4904;
      }
      goto L_088F49B4;
    }
L_088F49B4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_088F49E0;
      }
      goto L_088F49C0;
    }
L_088F49C0:
    aot_gpr_31 = (0x088F49C8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F49C8u) goto L_088F49C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F49C8:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_088F49E0;
      }
      goto L_088F49D4;
    }
L_088F49D4:
    aot_gpr_4 = (17658u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_088F4A3C;
      }
      goto L_088F49E0;
    }
L_088F49E0:
    aot_gpr_31 = (0x088F49E8u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F49E8u) goto L_088F49E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F49E8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = aot_fpr_12 - aot_fpr_13;
    aot_gpr_31 = (0x088F49FCu);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F49FCu) goto L_088F49FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F49FC:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_gpr_31 = (0x088F4A14u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4A14u) goto L_088F4A14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4A14:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr_22 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_31 = (0x088F4A28u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4A28u) goto L_088F4A28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4A28:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = aot_fpr_22; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    goto L_088F4A3C;
L_088F4A3C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_4 = (17096u << 16u);
      if (branch_taken) {
          goto L_088F4A58;
      }
      goto L_088F4A44;
    }
L_088F4A44:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088F4A80;
      }
      goto L_088F4A58;
    }
L_088F4A58:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (16409u << 16u);
      if (branch_taken) {
          goto L_088F4AC4;
      }
      goto L_088F4A68;
    }
L_088F4A68:
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088F4AC4;
      }
      goto L_088F4A80;
    }
L_088F4A80:
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(36));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x088F4A98u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088F4B00;
L_088F4A98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F4AC4;
      }
      goto L_088F4AA4;
    }
L_088F4AA4:
    aot_gpr_31 = (0x088F4AACu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4AACu) goto L_088F4AAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4AAC:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F4AC4;
      }
      goto L_088F4ABC;
    }
L_088F4ABC:
    aot_gpr_31 = (0x088F4AC4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4AC4u) goto L_088F4AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4AC4:
    aot_gpr_2 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(220), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
      ctx.gpr[16] = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      ctx.gpr[22] = aot_run_words[8];
      ctx.gpr[23] = aot_run_words[9];
      ctx.gpr[30] = aot_run_words[10];
      aot_gpr_31 = aot_run_words[11];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_088F4B00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[11]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(aot_fpr_22), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7656)));
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_088F4B74;
      }
      goto L_088F4B64;
    }
L_088F4B64:
    aot_gpr_4 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088F4B74;
L_088F4B74:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F4BE0;
      }
      goto L_088F4B84;
    }
L_088F4B84:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088F4BA8;
      }
      goto L_088F4B98;
    }
L_088F4B98:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088F4BA8;
L_088F4BA8:
    aot_gpr_31 = (0x088F4BB0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 334u, 0x08B1150Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4BB0u) goto L_088F4BB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4BB0:
    aot_gpr_31 = (0x088F4BB8u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4BB8u) goto L_088F4BB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4BB8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_gpr_5 << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[21] != aot_gpr_5;
      if (branch_taken) {
          goto L_088F4BE0;
      }
      goto L_088F4BD4;
    }
L_088F4BD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_gpr_4 << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    goto L_088F4BE0;
L_088F4BE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
      if (branch_taken) {
          goto L_088F4C90;
      }
      goto L_088F4BE8;
    }
L_088F4BE8:
    aot_gpr_31 = (0x088F4BF0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 2u, 0x08990018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4BF0u) goto L_088F4BF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4BF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
      if (branch_taken) {
          goto L_088F4C00;
      }
      goto L_088F4BF8;
    }
L_088F4BF8:
    aot_gpr_31 = (0x088F4C00u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 2u, 0x08990018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4C00u) goto L_088F4C00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4C00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088F4C40;
      }
      goto L_088F4C0C;
    }
L_088F4C0C:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 << 8u);
    aot_gpr_31 = (0x088F4C1Cu);
    aot_gpr_4 = (0u | 496u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 394u, 0x0882B9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4C1Cu) goto L_088F4C1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4C1C:
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    if (ctx.gpr[22] == 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
        goto L_088F4C40;
    }
    goto L_088F4C28;
L_088F4C28:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088F4C38u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 351u, 0x0882B688u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4C38u) goto L_088F4C38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4C38:
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_088F4C40;
L_088F4C40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F4CF8;
      }
      goto L_088F4C48;
    }
L_088F4C48:
    { const bool branch_taken = ctx.gpr[21] == aot_gpr_4;
      if (branch_taken) {
          goto L_088F4CF8;
      }
      goto L_088F4C50;
    }
L_088F4C50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F4CF8;
      }
      goto L_088F4C5C;
    }
L_088F4C5C:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[20] << 8u);
    aot_gpr_31 = (0x088F4C6Cu);
    aot_gpr_4 = (0u | 496u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 394u, 0x0882B9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4C6Cu) goto L_088F4C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4C6C:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088F4C88;
      }
      goto L_088F4C78;
    }
L_088F4C78:
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088F4C84u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 351u, 0x0882B688u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4C84u) goto L_088F4C84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4C84:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_088F4C88;
L_088F4C88:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_088F4CF8;
      }
      goto L_088F4C90;
    }
L_088F4C90:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x088F4C9Cu);
    aot_gpr_4 = (0u | 496u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4C9Cu) goto L_088F4C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4C9C:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    if (ctx.gpr[20] == 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
        goto L_088F4CC0;
    }
    goto L_088F4CA8;
L_088F4CA8:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088F4CB8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 351u, 0x0882B688u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4CB8u) goto L_088F4CB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4CB8:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_088F4CC0;
L_088F4CC0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[21] == aot_gpr_4;
      if (branch_taken) {
          goto L_088F4CF8;
      }
      goto L_088F4CCC;
    }
L_088F4CCC:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x088F4CD8u);
    aot_gpr_4 = (0u | 496u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4CD8u) goto L_088F4CD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4CD8:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088F4CF4;
      }
      goto L_088F4CE4;
    }
L_088F4CE4:
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088F4CF0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 351u, 0x0882B688u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4CF0u) goto L_088F4CF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4CF0:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_088F4CF4;
L_088F4CF4:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_088F4CF8;
L_088F4CF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F4E30;
      }
      goto L_088F4D04;
    }
L_088F4D04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_run_words); }
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_gpr_4 = (49097u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_31 = (0x088F4D60u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4D60u) goto L_088F4D60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4D60:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x088F4D74u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4D74u) goto L_088F4D74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4D74:
    aot_gpr_31 = (0x088F4D7Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4D7Cu) goto L_088F4D7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4D7C:
    aot_gpr_31 = (0x088F4D84u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4D84u) goto L_088F4D84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4D84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(236)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(236), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (65532u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[20]);
    aot_gpr_6 = (4u << 16u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(482))))));
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[22]);
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(482))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(58))))));
    aot_gpr_6 = (aot_gpr_6 & 1u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[19]);
    aot_gpr_6 = (aot_gpr_6 & 1u);
    aot_gpr_6 = (aot_gpr_6 << 1u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F4E38;
      }
      goto L_088F4E28;
    }
L_088F4E28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F4F50;
      }
      goto L_088F4E30;
    }
L_088F4E30:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F50E4;
      }
      goto L_088F4E38;
    }
L_088F4E38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_run_words); }
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_31 = (0x088F4E88u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4E88u) goto L_088F4E88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4E88:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x088F4E9Cu);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4E9Cu) goto L_088F4E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4E9C:
    aot_gpr_31 = (0x088F4EA4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4EA4u) goto L_088F4EA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4EA4:
    aot_gpr_31 = (0x088F4EACu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F4EACu) goto L_088F4EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F4EAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(236)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(236), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[20]);
    aot_gpr_6 = (4u << 16u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(482))))));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[22]);
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(482))))));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_5 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(482))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(482))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_088F4F50;
L_088F4F50:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F4F78;
      }
      goto L_088F4F64;
    }
L_088F4F64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088F4FAC;
      }
      goto L_088F4F78;
    }
L_088F4F78:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(182)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F4FA0;
      }
      goto L_088F4F8C;
    }
L_088F4F8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088F4FAC;
      }
      goto L_088F4FA0;
    }
L_088F4FA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_088F4FAC;
L_088F4FAC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088F50E4;
      }
      goto L_088F4FC0;
    }
L_088F4FC0:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16000)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_088F4FD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(482))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(482))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(162)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F5058;
      }
      goto L_088F5018;
    }
L_088F5018:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F5058;
      }
      goto L_088F502C;
    }
L_088F502C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088F5038u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 589u, 0x088F2D04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5038u) goto L_088F5038;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5038:
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_2);
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5024));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(468), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088F5064;
      }
      goto L_088F5058;
    }
L_088F5058:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(468), static_cast<std::uint16_t>(aot_gpr_5));
    goto L_088F5064;
L_088F5064:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F50E4;
      }
      goto L_088F506C;
    }
L_088F506C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(482))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(482))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_5));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F50E4;
      }
      goto L_088F509C;
    }
L_088F509C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(482))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(482))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 | 8u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (32u << 16u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F50E4;
      }
      goto L_088F50E4;
    }
L_088F50E4:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
      ctx.gpr[16] = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      ctx.gpr[22] = aot_run_words[8];
      ctx.gpr[23] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_088F5118:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[10]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[21] = (ctx.gpr[8] & 255u);
    ctx.gpr[20] = (ctx.gpr[9] << 16u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[22] = (aot_gpr_6 | 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088F5174;
      }
      goto L_088F516C;
    }
L_088F516C:
    { const bool branch_taken = ctx.gpr[20] == aot_gpr_4;
      if (branch_taken) {
          goto L_088F5188;
      }
      goto L_088F5174;
    }
L_088F5174:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[20] == aot_gpr_4;
      if (branch_taken) {
          goto L_088F5190;
      }
      goto L_088F5180;
    }
L_088F5180:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F5198;
      }
      goto L_088F5188;
    }
L_088F5188:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_088F5A0C;
      }
      goto L_088F5190;
    }
L_088F5190:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    goto L_088F5198;
L_088F5198:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(178)));
    { const bool branch_taken = ctx.gpr[20] == aot_gpr_4;
      if (branch_taken) {
          goto L_088F51D0;
      }
      goto L_088F51A8;
    }
L_088F51A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[20] == aot_gpr_4;
      if (branch_taken) {
          goto L_088F51D0;
      }
      goto L_088F51B8;
    }
L_088F51B8:
    aot_gpr_31 = (0x088F51C0u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F51C0u) goto L_088F51C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F51C0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 120u);
    aot_gpr_31 = (0x088F51D0u);
    aot_gpr_6 = (0u | 100u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 954u, 0x0898BB3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F51D0u) goto L_088F51D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F51D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = ctx.gpr[20] == aot_gpr_4;
      if (branch_taken) {
          goto L_088F51F0;
      }
      goto L_088F51E0;
    }
L_088F51E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[20] != aot_gpr_4;
      if (branch_taken) {
          goto L_088F527C;
      }
      goto L_088F51F0;
    }
L_088F51F0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F527C;
      }
      goto L_088F51FC;
    }
L_088F51FC:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x088F520Cu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 16u, 0x08ADC120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F520Cu) goto L_088F520C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F520C:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_088F525C;
      }
      goto L_088F5218;
    }
L_088F5218:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_088F5244;
    }
    goto L_088F5224;
L_088F5224:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x088F5234u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5234u) goto L_088F5234;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5234:
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_088F5244;
L_088F5244:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    aot_gpr_4 = (aot_gpr_4 ^ 65535u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F5274;
      }
      goto L_088F525C;
    }
L_088F525C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088F527C;
      }
      goto L_088F5264;
    }
L_088F5264:
    aot_gpr_31 = (0x088F526Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F526Cu) goto L_088F526C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F526C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088F527C;
      }
      goto L_088F5274;
    }
L_088F5274:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_088F5A0C;
      }
      goto L_088F527C;
    }
L_088F527C:
    aot_gpr_31 = (0x088F5284u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 589u, 0x088F2D04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5284u) goto L_088F5284;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5284:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088F5A08;
      }
      goto L_088F529C;
    }
L_088F529C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-15936)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_088F52B4:
    aot_gpr_4 = (ctx.gpr[18] << 8u);
    aot_gpr_5 = (ctx.gpr[18] + ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    ctx.gpr[22] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6992));
    ctx.gpr[22] = (ctx.gpr[22] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(172)));
    ctx.gpr[23] = (ctx.gpr[21] + ctx.gpr[21]);
    aot_gpr_5 = (2233u << 16u);
    ctx.gpr[30] = (aot_gpr_5 + static_cast<std::uint32_t>(-5024));
    ctx.gpr[30] = (ctx.gpr[23] + ctx.gpr[30]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[30] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F53A0;
      }
      goto L_088F52F8;
    }
L_088F52F8:
    aot_gpr_4 = (ctx.gpr[20] & 65535u);
    aot_gpr_31 = (0x088F5304u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_088F74EC;
L_088F5304:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088F536C;
      }
      goto L_088F530C;
    }
L_088F530C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088F531Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 630u, 0x08947340u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F531Cu) goto L_088F531C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F531C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088F532C;
      }
      goto L_088F5324;
    }
L_088F5324:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F5A08;
      }
      goto L_088F532C;
    }
L_088F532C:
    aot_gpr_4 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-5184));
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088F534Cu);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F534Cu) goto L_088F534C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F534C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088F5358u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5358u) goto L_088F5358;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5358:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(-342));
    aot_gpr_31 = (0x088F536Cu);
    aot_gpr_5 = (0u | 77u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F536Cu) goto L_088F536C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F536C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(172)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[30] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(172), aot_gpr_4);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_31 = (0x088F5388u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 472u, 0x088F23C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5388u) goto L_088F5388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5388:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(5000));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088F53B4;
      }
      goto L_088F53A0;
    }
L_088F53A0:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-23096));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 6000u);
    aot_gpr_31 = (0x088F53B4u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F53B4u) goto L_088F53B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F53B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F5A08;
      }
      goto L_088F53BC;
    }
L_088F53BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    aot_gpr_4 = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_088F557C;
      }
      goto L_088F53C4;
    }
L_088F53C4:
    aot_gpr_31 = (0x088F53CCu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_088F74EC;
L_088F53CC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088F557C;
      }
      goto L_088F53D4;
    }
L_088F53D4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088F53E4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 630u, 0x08947340u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F53E4u) goto L_088F53E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F53E4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088F53F4;
      }
      goto L_088F53EC;
    }
L_088F53EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F5A08;
      }
      goto L_088F53F4;
    }
L_088F53F4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_088F5524;
      }
      goto L_088F53FC;
    }
L_088F53FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F5470;
      }
      goto L_088F5408;
    }
L_088F5408:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088F541Cu);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F541Cu) goto L_088F541C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F541C:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3256))))));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088F542Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F542Cu) goto L_088F542C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F542C:
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_2;
      if (branch_taken) {
          goto L_088F5444;
      }
      goto L_088F5434;
    }
L_088F5434:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088F5440u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5440u) goto L_088F5440;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5440:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(aot_gpr_2));
    goto L_088F5444;
L_088F5444:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F550C;
      }
      goto L_088F5450;
    }
L_088F5450:
    aot_gpr_31 = (0x088F5458u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5458u) goto L_088F5458;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5458:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F550C;
      }
      goto L_088F5460;
    }
L_088F5460:
    aot_gpr_31 = (0x088F5468u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 84u, 0x0890850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5468u) goto L_088F5468;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5468:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F550C;
      }
      goto L_088F5470;
    }
L_088F5470:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(58))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F54AC;
      }
      goto L_088F5480;
    }
L_088F5480:
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[21]);
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5104));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088F54A4u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F54A4u) goto L_088F54A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F54A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F54C0;
      }
      goto L_088F54AC;
    }
L_088F54AC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088F54C0u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F54C0u) goto L_088F54C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F54C0:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3256))))));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088F54D0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F54D0u) goto L_088F54D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F54D0:
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_2;
      if (branch_taken) {
          goto L_088F54E8;
      }
      goto L_088F54D8;
    }
L_088F54D8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088F54E4u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F54E4u) goto L_088F54E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F54E4:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(aot_gpr_2));
    goto L_088F54E8;
L_088F54E8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F550C;
      }
      goto L_088F54F4;
    }
L_088F54F4:
    aot_gpr_31 = (0x088F54FCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F54FCu) goto L_088F54FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F54FC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F550C;
      }
      goto L_088F5504;
    }
L_088F5504:
    aot_gpr_31 = (0x088F550Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 84u, 0x0890850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F550Cu) goto L_088F550C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F550C:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(-342));
    aot_gpr_31 = (0x088F551Cu);
    aot_gpr_5 = (0u | 78u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F551Cu) goto L_088F551C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F551C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F557C;
      }
      goto L_088F5524;
    }
L_088F5524:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = ctx.gpr[20] != aot_gpr_4;
      if (branch_taken) {
          goto L_088F557C;
      }
      goto L_088F5534;
    }
L_088F5534:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_088F557C;
      }
      goto L_088F553C;
    }
L_088F553C:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 84u);
    aot_gpr_31 = (0x088F554Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F554Cu) goto L_088F554C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F554C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(8692), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x088F555Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F555Cu) goto L_088F555C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F555C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(8696), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8704));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(8720), aot_gpr_4);
    goto L_088F557C;
L_088F557C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 11u);
      if (branch_taken) {
          goto L_088F55AC;
      }
      goto L_088F558C;
    }
L_088F558C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F55F8;
      }
      goto L_088F5598;
    }
L_088F5598:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(30000));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F55F8;
      }
      goto L_088F55AC;
    }
L_088F55AC:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F55F8;
      }
      goto L_088F55B4;
    }
L_088F55B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(166)));
    { const bool branch_taken = ctx.gpr[20] != aot_gpr_4;
      if (branch_taken) {
          goto L_088F55DC;
      }
      goto L_088F55C4;
    }
L_088F55C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (5u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27680));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), aot_gpr_4);
      if (branch_taken) {
          goto L_088F55F0;
      }
      goto L_088F55DC;
    }
L_088F55DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (5u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32320));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), aot_gpr_4);
    goto L_088F55F0;
L_088F55F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F55F8;
      }
      goto L_088F55F8;
    }
L_088F55F8:
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_31 = (0x088F5604u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 472u, 0x088F23C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5604u) goto L_088F5604;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5604:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F5A08;
      }
      goto L_088F5614;
    }
L_088F5614:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
      if (branch_taken) {
          goto L_088F56FC;
      }
      goto L_088F561C;
    }
L_088F561C:
    aot_gpr_4 = (ctx.gpr[20] & 65535u);
    aot_gpr_31 = (0x088F5628u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_088F74EC;
L_088F5628:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088F56FC;
      }
      goto L_088F5630;
    }
L_088F5630:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088F5640u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 630u, 0x08947340u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5640u) goto L_088F5640;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5640:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088F565C;
      }
      goto L_088F5648;
    }
L_088F5648:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088F5654u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 483u, 0x088F2464u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5654u) goto L_088F5654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5654:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F5A08;
      }
      goto L_088F565C;
    }
L_088F565C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_088F56DC;
      }
      goto L_088F5664;
    }
L_088F5664:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F568C;
      }
      goto L_088F5670;
    }
L_088F5670:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088F5684u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5684u) goto L_088F5684;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5684:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F56DC;
      }
      goto L_088F568C;
    }
L_088F568C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(58))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F56B8;
      }
      goto L_088F569C;
    }
L_088F569C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088F56B0u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F56B0u) goto L_088F56B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F56B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F56DC;
      }
      goto L_088F56B8;
    }
L_088F56B8:
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[21]);
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5184));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088F56DCu);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F56DCu) goto L_088F56DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F56DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[20] == aot_gpr_4;
      if (branch_taken) {
          goto L_088F56FC;
      }
      goto L_088F56EC;
    }
L_088F56EC:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(-342));
    aot_gpr_31 = (0x088F56FCu);
    aot_gpr_5 = (0u | 78u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F56FCu) goto L_088F56FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F56FC:
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_31 = (0x088F5708u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 472u, 0x088F23C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5708u) goto L_088F5708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5708:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F5754;
      }
      goto L_088F5720;
    }
L_088F5720:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F5754;
      }
      goto L_088F572C;
    }
L_088F572C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3))))));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F5754;
      }
      goto L_088F574C;
    }
L_088F574C:
    aot_gpr_31 = (0x088F5754u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 373u, 0x08A0A6A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5754u) goto L_088F5754;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5754:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F5A08;
      }
      goto L_088F575C;
    }
L_088F575C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F5A08;
      }
      goto L_088F5764;
    }
L_088F5764:
    aot_gpr_4 = (ctx.gpr[18] << 8u);
    aot_gpr_5 = (ctx.gpr[18] + ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(172)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(172), aot_gpr_5);
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(14304));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-23088));
    aot_gpr_31 = (0x088F57A8u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F57A8u) goto L_088F57A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F57A8:
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_31 = (0x088F57B4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 472u, 0x088F23C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F57B4u) goto L_088F57B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F57B4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 85u);
    aot_gpr_31 = (0x088F57D0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F57D0u) goto L_088F57D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F57D0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088F57DCu);
    aot_gpr_5 = (0u | 121u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F57DCu) goto L_088F57DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F57DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F5A08;
      }
      goto L_088F57E4;
    }
L_088F57E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F5A08;
      }
      goto L_088F57EC;
    }
L_088F57EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F5A08;
      }
      goto L_088F57F4;
    }
L_088F57F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-23120)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F599C;
      }
      goto L_088F5800;
    }
L_088F5800:
    aot_gpr_31 = (0x088F5808u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5808u) goto L_088F5808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5808:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F5884;
      }
      goto L_088F5810;
    }
L_088F5810:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_088F5828;
    }
    goto L_088F581C;
L_088F581C:
    aot_gpr_31 = (0x088F5824u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5824u) goto L_088F5824;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5824:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_088F5828;
L_088F5828:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_088F5858;
      }
      goto L_088F5830;
    }
L_088F5830:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x088F583Cu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F583Cu) goto L_088F583C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F583C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    if (ctx.gpr[17] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
        goto L_088F5858;
    }
    goto L_088F5848;
L_088F5848:
    aot_gpr_31 = (0x088F5850u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5850u) goto L_088F5850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5850:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_088F5858;
L_088F5858:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x088F5864u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-23084));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5864u) goto L_088F5864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5864:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088F587Cu);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F587Cu) goto L_088F587C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F587C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F599C;
      }
      goto L_088F5884;
    }
L_088F5884:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 << 8u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6992));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(172)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088F5930;
      }
      goto L_088F58BC;
    }
L_088F58BC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_5 << 8u);
    ctx.gpr[7] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(172)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(172), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
        goto L_088F5900;
    }
    goto L_088F58F4;
L_088F58F4:
    aot_gpr_31 = (0x088F58FCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F58FCu) goto L_088F58FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F58FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    goto L_088F5900;
L_088F5900:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088F5914u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5914u) goto L_088F5914;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5914:
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_31 = (0x088F5920u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 472u, 0x088F23C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5920u) goto L_088F5920;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5920:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088F599C;
      }
      goto L_088F5930;
    }
L_088F5930:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_088F5948;
    }
    goto L_088F593C;
L_088F593C:
    aot_gpr_31 = (0x088F5944u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5944u) goto L_088F5944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5944:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_088F5948;
L_088F5948:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_088F5978;
      }
      goto L_088F5950;
    }
L_088F5950:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F595Cu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F595Cu) goto L_088F595C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F595C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    if (ctx.gpr[18] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F5978;
    }
    goto L_088F5968;
L_088F5968:
    aot_gpr_31 = (0x088F5970u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5970u) goto L_088F5970;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5970:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F5978;
L_088F5978:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x088F5984u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-23076));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5984u) goto L_088F5984;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5984:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088F599Cu);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F599Cu) goto L_088F599C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F599C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F5A08;
      }
      goto L_088F59A4;
    }
L_088F59A4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F5A00;
      }
      goto L_088F59B0;
    }
L_088F59B0:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_31 = (0x088F59C0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 472u, 0x088F23C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F59C0u) goto L_088F59C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F59C0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F5A00;
      }
      goto L_088F59D8;
    }
L_088F59D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3))))));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F5A00;
      }
      goto L_088F59F8;
    }
L_088F59F8:
    aot_gpr_31 = (0x088F5A00u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 373u, 0x08A0A6A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5A00u) goto L_088F5A00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5A00:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F5A08;
      }
      goto L_088F5A08;
    }
L_088F5A08:
    aot_gpr_2 = (ctx.gpr[19] | 0u);
    goto L_088F5A0C;
L_088F5A0C:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[30] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_088F5A3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[8]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_6 & 255u);
    ctx.gpr[19] = (ctx.gpr[9] & 255u);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088F5A98;
      }
      goto L_088F5A80;
    }
L_088F5A80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_4;
      if (branch_taken) {
          goto L_088F5A98;
      }
      goto L_088F5A90;
    }
L_088F5A90:
    aot_gpr_31 = (0x088F5A98u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 733u, 0x088F3AC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5A98u) goto L_088F5A98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5A98:
    aot_gpr_31 = (0x088F5AA0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-15960)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 337u, 0x08B6A2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5AA0u) goto L_088F5AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5AA0:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F5AC4;
      }
      goto L_088F5AAC;
    }
L_088F5AAC:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_5;
      if (branch_taken) {
          goto L_088F5AD4;
      }
      goto L_088F5ABC;
    }
L_088F5ABC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F5ACC;
      }
      goto L_088F5AC4;
    }
L_088F5AC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_088F5D70;
      }
      goto L_088F5ACC;
    }
L_088F5ACC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088F5B14;
      }
      goto L_088F5AD4;
    }
L_088F5AD4:
    ctx.gpr[22] = (0u | 335u);
    aot_gpr_5 = (2246u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(31024));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21440));
    goto L_088F5AE4;
L_088F5AE4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
      if (branch_taken) {
          goto L_088F5B08;
      }
      goto L_088F5AEC;
    }
L_088F5AEC:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088F5B08;
      }
      goto L_088F5AF8;
    }
L_088F5AF8:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-64));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F5AE4;
      }
      goto L_088F5B08;
    }
L_088F5B08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
      if (branch_taken) {
          goto L_088F5B14;
      }
      goto L_088F5B10;
    }
L_088F5B10:
    aot_gpr_4 = (0u | 1u);
    goto L_088F5B14;
L_088F5B14:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F5B5C;
      }
      goto L_088F5B1C;
    }
L_088F5B1C:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_6 = (2246u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(31024));
    aot_gpr_5 = (0u | 1u);
    goto L_088F5B2C;
L_088F5B2C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088F5B50;
      }
      goto L_088F5B34;
    }
L_088F5B34:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_088F5B50;
      }
      goto L_088F5B40;
    }
L_088F5B40:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[22]) < 320 ? 1u : 0u);
      if (branch_taken) {
          goto L_088F5B2C;
      }
      goto L_088F5B50;
    }
L_088F5B50:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088F5B5C;
      }
      goto L_088F5B58;
    }
L_088F5B58:
    aot_gpr_4 = (0u | 1u);
    goto L_088F5B5C;
L_088F5B5C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F5BF0;
      }
      goto L_088F5B64;
    }
L_088F5B64:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[7] = (2246u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(31024));
    aot_gpr_4 = (0u | 8u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    aot_gpr_5 = (0u | 1u);
    goto L_088F5B7C;
L_088F5B7C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088F5BA0;
      }
      goto L_088F5B84;
    }
L_088F5B84:
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_4;
      if (branch_taken) {
          goto L_088F5BA0;
      }
      goto L_088F5B90;
    }
L_088F5B90:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[22]) < 320 ? 1u : 0u);
      if (branch_taken) {
          goto L_088F5B7C;
      }
      goto L_088F5BA0;
    }
L_088F5BA0:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088F5BF0;
      }
      goto L_088F5BA8;
    }
L_088F5BA8:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_6 = (0u | 4u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_4 = (0u | 1u);
    goto L_088F5BB8;
L_088F5BB8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F5BE8;
      }
      goto L_088F5BC0;
    }
L_088F5BC0:
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_6;
      if (branch_taken) {
          goto L_088F5BE8;
      }
      goto L_088F5BCC;
    }
L_088F5BCC:
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_5;
      if (branch_taken) {
          goto L_088F5BE8;
      }
      goto L_088F5BD8;
    }
L_088F5BD8:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 320 ? 1u : 0u);
      if (branch_taken) {
          goto L_088F5BB8;
      }
      goto L_088F5BE8;
    }
L_088F5BE8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F5C70;
      }
      goto L_088F5BF0;
    }
L_088F5BF0:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 336 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088F5C68;
      }
      goto L_088F5BFC;
    }
L_088F5BFC:
    aot_gpr_4 = (ctx.gpr[22] << 6u);
    aot_gpr_5 = (2246u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(31024));
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 & 1u);
    aot_gpr_6 = (ctx.gpr[7] | aot_gpr_6);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(58))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[9] = (0u | 16u);
    aot_gpr_6 = (0u | 8u);
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[9];
    ctx.gpr[8] = (0u | 5u);
      if (branch_taken) {
          goto L_088F5C78;
      }
      goto L_088F5C60;
    }
L_088F5C60:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F5C9C;
      }
      goto L_088F5C68;
    }
L_088F5C68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_088F5D70;
      }
      goto L_088F5C70;
    }
L_088F5C70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_088F5D70;
      }
      goto L_088F5C78;
    }
L_088F5C78:
    ctx.gpr[9] = (ctx.gpr[17] << 3u);
    ctx.gpr[10] = (0u + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] << 5u);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[9]);
    goto L_088F5C9C;
L_088F5C9C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[7];
      if (branch_taken) {
          goto L_088F5CB0;
      }
      goto L_088F5CA4;
    }
L_088F5CA4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(20000));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    goto L_088F5CB0;
L_088F5CB0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[8];
      if (branch_taken) {
          goto L_088F5CCC;
      }
      goto L_088F5CB8;
    }
L_088F5CB8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    ctx.gpr[8] = (2u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-11072));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    goto L_088F5CCC;
L_088F5CCC:
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_6;
      if (branch_taken) {
          goto L_088F5CE0;
      }
      goto L_088F5CD4;
    }
L_088F5CD4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(22000));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), aot_gpr_6);
    goto L_088F5CE0;
L_088F5CE0:
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[16]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(36));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x088F5D10u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088F4B00;
L_088F5D10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F5D24;
      }
      goto L_088F5D1C;
    }
L_088F5D1C:
    aot_gpr_31 = (0x088F5D24u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5D24u) goto L_088F5D24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5D24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F5D38;
      }
      goto L_088F5D30;
    }
L_088F5D30:
    aot_gpr_31 = (0x088F5D38u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5D38u) goto L_088F5D38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5D38:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F5D68;
      }
      goto L_088F5D44;
    }
L_088F5D44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_4;
      if (branch_taken) {
          goto L_088F5D68;
      }
      goto L_088F5D54;
    }
L_088F5D54:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_088F5D68;
L_088F5D68:
    aot_gpr_31 = (0x088F5D70u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 655u, 0x088F34D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5D70u) goto L_088F5D70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5D70:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_088F5D98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-592));
    { const std::uint32_t aot_run_words[16]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(520), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x088F5DF4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 693u, 0x088F3880u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5DF4u) goto L_088F5DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5DF4:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088F5E1C;
      }
      goto L_088F5E00;
    }
L_088F5E00:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F5E34;
      }
      goto L_088F5E14;
    }
L_088F5E14:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_088F5E24;
      }
      goto L_088F5E1C;
    }
L_088F5E1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F6E20;
      }
      goto L_088F5E24;
    }
L_088F5E24:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F5E74;
      }
      goto L_088F5E34;
    }
L_088F5E34:
    aot_gpr_31 = (0x088F5E3Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5E3Cu) goto L_088F5E3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5E3C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088F5E54;
      }
      goto L_088F5E44;
    }
L_088F5E44:
    aot_gpr_31 = (0x088F5E4Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F5E4Cu) goto L_088F5E4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F5E4C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F5E64;
      }
      goto L_088F5E54;
    }
L_088F5E54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), aot_gpr_4);
      if (branch_taken) {
          goto L_088F5E74;
      }
      goto L_088F5E64;
    }
L_088F5E64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), aot_gpr_4);
    goto L_088F5E74;
L_088F5E74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F5EA4;
      }
      goto L_088F5E84;
    }
L_088F5E84:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_fpr_22 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088F5EBC;
      }
      goto L_088F5E9C;
    }
L_088F5E9C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_088F5EAC;
      }
      goto L_088F5EA4;
    }
L_088F5EA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F6E20;
      }
      goto L_088F5EAC;
    }
L_088F5EAC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F5EC8;
      }
      goto L_088F5EBC;
    }
L_088F5EBC:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 40u);
      if (branch_taken) {
          goto L_088F6104;
      }
      goto L_088F5EC8;
    }
L_088F5EC8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F5EE4;
      }
      goto L_088F5EDC;
    }
L_088F5EDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 41u);
      if (branch_taken) {
          goto L_088F6104;
      }
      goto L_088F5EE4;
    }
L_088F5EE4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(166)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F5F04;
      }
      goto L_088F5EF8;
    }
L_088F5EF8:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088F6104;
      }
      goto L_088F5F04;
    }
L_088F5F04:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F5F40;
      }
      goto L_088F5F18;
    }
L_088F5F18:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F5F40;
      }
      goto L_088F5F2C;
    }
L_088F5F2C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F5F4C;
      }
      goto L_088F5F40;
    }
L_088F5F40:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088F6104;
      }
      goto L_088F5F4C;
    }
L_088F5F4C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(162)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088F5F74;
      }
      goto L_088F5F60;
    }
L_088F5F60:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F5F84;
      }
      goto L_088F5F74;
    }
L_088F5F74:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 40u);
      if (branch_taken) {
          goto L_088F6104;
      }
      goto L_088F5F84;
    }
L_088F5F84:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(178)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F5FA4;
      }
      goto L_088F5F98;
    }
L_088F5F98:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088F6104;
      }
      goto L_088F5FA4;
    }
L_088F5FA4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F5FC4;
      }
      goto L_088F5FB8;
    }
L_088F5FB8:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088F6104;
      }
      goto L_088F5FC4;
    }
L_088F5FC4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(174)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F5FE4;
      }
      goto L_088F5FD8;
    }
L_088F5FD8:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088F6104;
      }
      goto L_088F5FE4;
    }
L_088F5FE4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F6004;
      }
      goto L_088F5FF8;
    }
L_088F5FF8:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088F6104;
      }
      goto L_088F6004;
    }
L_088F6004:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(182)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F6028;
      }
      goto L_088F6018;
    }
L_088F6018:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 40u);
      if (branch_taken) {
          goto L_088F6104;
      }
      goto L_088F6028;
    }
L_088F6028:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(146)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F604C;
      }
      goto L_088F603C;
    }
L_088F603C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 40u);
      if (branch_taken) {
          goto L_088F6104;
      }
      goto L_088F604C;
    }
L_088F604C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F6070;
      }
      goto L_088F6060;
    }
L_088F6060:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 40u);
      if (branch_taken) {
          goto L_088F6104;
      }
      goto L_088F6070;
    }
L_088F6070:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F6094;
      }
      goto L_088F6084;
    }
L_088F6084:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 40u);
      if (branch_taken) {
          goto L_088F6104;
      }
      goto L_088F6094;
    }
L_088F6094:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F60B4;
      }
      goto L_088F60A8;
    }
L_088F60A8:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088F6104;
      }
      goto L_088F60B4;
    }
L_088F60B4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F60D4;
      }
      goto L_088F60C8;
    }
L_088F60C8:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088F6104;
      }
      goto L_088F60D4;
    }
L_088F60D4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088F60F4;
      }
      goto L_088F60E8;
    }
L_088F60E8:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088F6104;
      }
      goto L_088F60F4;
    }
L_088F60F4:
    aot_gpr_31 = (0x088F60FCu);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 589u, 0x088F2D04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F60FCu) goto L_088F60FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F60FC:
    ctx.gpr[17] = (aot_gpr_2 << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    goto L_088F6104;
L_088F6104:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088F6610;
      }
      goto L_088F6114;
    }
L_088F6114:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    ctx.gpr[22] = (aot_gpr_4 >> 9u);
    ctx.gpr[22] = (ctx.gpr[22] & 7u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 3 ? 1u : 0u);
    aot_gpr_5 = (17026u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F613C;
      }
      goto L_088F6134;
    }
L_088F6134:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_088F6164;
      }
      goto L_088F613C;
    }
L_088F613C:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[22] != aot_gpr_4;
      if (branch_taken) {
          goto L_088F6160;
      }
      goto L_088F6148;
    }
L_088F6148:
    aot_gpr_31 = (0x088F6150u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6150u) goto L_088F6150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6150:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    ctx.gpr[23] = (aot_gpr_4 & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u < ctx.gpr[23] ? 1u : 0u);
      if (branch_taken) {
          goto L_088F6164;
      }
      goto L_088F6160;
    }
L_088F6160:
    ctx.gpr[23] = (0u | 1u);
    goto L_088F6164;
L_088F6164:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & 7u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F6180;
      }
      goto L_088F6178;
    }
L_088F6178:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_088F61A8;
      }
      goto L_088F6180;
    }
L_088F6180:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[22] != aot_gpr_4;
      if (branch_taken) {
          goto L_088F61A4;
      }
      goto L_088F618C;
    }
L_088F618C:
    aot_gpr_31 = (0x088F6194u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6194u) goto L_088F6194;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6194:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    ctx.gpr[22] = (aot_gpr_4 & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u < ctx.gpr[22] ? 1u : 0u);
      if (branch_taken) {
          goto L_088F61A8;
      }
      goto L_088F61A4;
    }
L_088F61A4:
    ctx.gpr[22] = (0u | 1u);
    goto L_088F61A8;
L_088F61A8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F61C8;
      }
      goto L_088F61C0;
    }
L_088F61C0:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    goto L_088F61C8;
L_088F61C8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_088F63EC;
      }
      goto L_088F61D0;
    }
L_088F61D0:
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[30]);
    aot_gpr_4 = (ctx.gpr[17] << 3u);
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-4940));
    ctx.gpr[30] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (16102u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[30] + static_cast<std::uint32_t>(2)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_gpr_4 = (48962u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 36700u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48844u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[10] = (0u | 7u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x088F6290u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6290u) goto L_088F6290;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6290:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-5048)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (49152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[30] + static_cast<std::uint32_t>(2)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16928u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_31 = (0x088F6348u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 490u, 0x08A97518u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6348u) goto L_088F6348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6348:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x088F6364u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6364u) goto L_088F6364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6364:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 15u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_gpr_4 = (15232u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[30] + static_cast<std::uint32_t>(2)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088F63E0u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F63E0u) goto L_088F63E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F63E0:
    ctx.gpr[30] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
      if (branch_taken) {
          goto L_088F643C;
      }
      goto L_088F63EC;
    }
L_088F63EC:
    aot_gpr_4 = (48913u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 60293u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[10] = (0u | 7u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x088F643Cu);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F643Cu) goto L_088F643C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F643C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_088F65C0;
      }
      goto L_088F6444;
    }
L_088F6444:
    ctx.gpr[22] = (ctx.gpr[17] << 3u);
    aot_gpr_4 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4940));
    ctx.gpr[22] = (ctx.gpr[22] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (16140u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(2)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_gpr_4 = (48921u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48844u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[10] = (0u | 7u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x088F64FCu);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F64FCu) goto L_088F64FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F64FC:
    { const bool branch_taken = ctx.gpr[23] != 0u;
      if (branch_taken) {
          goto L_088F6610;
      }
      goto L_088F6504;
    }
L_088F6504:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-5048)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (49152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(2)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16928u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_31 = (0x088F65B8u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 490u, 0x08A97518u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F65B8u) goto L_088F65B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F65B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F6610;
      }
      goto L_088F65C0;
    }
L_088F65C0:
    aot_gpr_4 = (48870u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[10] = (0u | 7u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x088F6610u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6610u) goto L_088F6610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6610:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F6658;
      }
      goto L_088F6628;
    }
L_088F6628:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F6658;
      }
      goto L_088F6640;
    }
L_088F6640:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F6658;
      }
      goto L_088F664C;
    }
L_088F664C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F6838;
      }
      goto L_088F6658;
    }
L_088F6658:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[20] = aot_fpr_12 + aot_fpr_14;
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    aot_gpr_5 = (16736u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088F6838;
      }
      goto L_088F66A8;
    }
L_088F66A8:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_28 + static_cast<std::uint32_t>(8688)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088F6838;
      }
      goto L_088F66B8;
    }
L_088F66B8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16179u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    aot_gpr_31 = (0x088F66F8u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F66F8u) goto L_088F66F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F66F8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F6838;
      }
      goto L_088F6700;
    }
L_088F6700:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_28 + static_cast<std::uint32_t>(8688)));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[21] = (2247u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-13008));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088F6744u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 589u, 0x088F2D04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6744u) goto L_088F6744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6744:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_28 + static_cast<std::uint32_t>(8688)));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[17] << 3u);
    aot_gpr_6 = (2233u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-4940));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_5));
    aot_fpr_12 = ctx.fpr[20] / ctx.fpr[24];
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_5 = (17279u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F67E8;
      }
      goto L_088F67C4;
    }
L_088F67C4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_28 + static_cast<std::uint32_t>(8688)));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(24))))));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088F680C;
      }
      goto L_088F67E8;
    }
L_088F67E8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_28 + static_cast<std::uint32_t>(8688)));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(24))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_088F680C;
L_088F680C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_28 + static_cast<std::uint32_t>(8688)));
    aot_gpr_6 = (aot_gpr_5 << 5u);
    ctx.gpr[7] = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[21]);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_28 + static_cast<std::uint32_t>(8688), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_088F6838;
L_088F6838:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = ctx.fpr[20] - aot_fpr_12;
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = ctx.fpr[24] - aot_fpr_12;
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = ctx.fpr[26] - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= ctx.fpr[26])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_088F68EC;
    }
    goto L_088F68EC;
L_088F68EC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] < ctx.fpr[20])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088F68FC;
    }
    goto L_088F68FC;
L_088F68FC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] <= aot_fpr_22)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088F693C;
      }
      goto L_088F690C;
    }
L_088F690C:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16281u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_13 / ctx.fpr[26];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 366u);
      if (branch_taken) {
          goto L_088F6944;
      }
      goto L_088F6934;
    }
L_088F6934:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F6948;
      }
      goto L_088F693C;
    }
L_088F693C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F6E20;
      }
      goto L_088F6944;
    }
L_088F6944:
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088F6948;
L_088F6948:
    aot_fpr_14 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_5 = (16153u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (0u | 362u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088F697C;
      }
      goto L_088F6970;
    }
L_088F6970:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_088F6980;
      }
      goto L_088F697C;
    }
L_088F697C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_088F6980;
L_088F6980:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_gpr_5 & 2047u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_088F69A0;
      }
      goto L_088F6994;
    }
L_088F6994:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_088F69A0;
L_088F69A0:
    aot_gpr_5 = (15176u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 20972u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(16), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_088F6B60;
      }
      goto L_088F6A24;
    }
L_088F6A24:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), aot_gpr_4);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088F6A70u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6A70u) goto L_088F6A70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6A70:
    aot_gpr_4 = (15776u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 1798u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48900u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55010u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48280u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 8384u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088F6A9Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 5u, 0x088600C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6A9Cu) goto L_088F6A9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6A9C:
    aot_gpr_4 = (16212u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 14680u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (47747u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (15975u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 27787u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_31 = (0x088F6AD4u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6AD4u) goto L_088F6AD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6AD4:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088F6AE8u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 935u, 0x0885FEC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6AE8u) goto L_088F6AE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6AE8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088F6AF4u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6AF4u) goto L_088F6AF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6AF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F6B18;
      }
      goto L_088F6B04;
    }
L_088F6B04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F6B18;
      }
      goto L_088F6B10;
    }
L_088F6B10:
    aot_gpr_31 = (0x088F6B18u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6B18u) goto L_088F6B18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6B18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
        goto L_088F6B40;
    }
    goto L_088F6B28;
L_088F6B28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
        goto L_088F6B40;
    }
    goto L_088F6B34;
L_088F6B34:
    aot_gpr_31 = (0x088F6B3Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6B3Cu) goto L_088F6B3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6B3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    goto L_088F6B40;
L_088F6B40:
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F6B60;
      }
      goto L_088F6B4C;
    }
L_088F6B4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F6B60;
      }
      goto L_088F6B58;
    }
L_088F6B58:
    aot_gpr_31 = (0x088F6B60u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6B60u) goto L_088F6B60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6B60:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088F6DC0;
      }
      goto L_088F6B68;
    }
L_088F6B68:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (ctx.gpr[17] << 3u);
    aot_gpr_4 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4940));
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (17026u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[26]) || std::isnan(aot_fpr_12)) && ctx.fpr[26] == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
      if (branch_taken) {
          goto L_088F6BF0;
      }
      goto L_088F6B94;
    }
L_088F6B94:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(432), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F6CB0;
      }
      goto L_088F6BF0;
    }
L_088F6BF0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[26]) || std::isnan(ctx.fpr[24])) && ctx.fpr[26] == ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088F6C5C;
      }
      goto L_088F6C00;
    }
L_088F6C00:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(448), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F6CB0;
      }
      goto L_088F6C5C;
    }
L_088F6C5C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(464), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_088F6CB0;
L_088F6CB0:
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (16448u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    aot_gpr_4 = (15897u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (49024u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48896u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_088F6CE4;
L_088F6CE4:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[20]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[24];
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088F6D1Cu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 471u, 0x088F239Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6D1Cu) goto L_088F6D1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6D1C:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr_31 = (0x088F6DB0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6DB0u) goto L_088F6DB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6DB0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F6CE4;
      }
      goto L_088F6DC0;
    }
L_088F6DC0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088F6E20;
      }
      goto L_088F6DC8;
    }
L_088F6DC8:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(9));
    ctx.gpr[9] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (49049u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_2 = (0u | 1u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 82u);
    aot_gpr_6 = (0u | 94u);
    ctx.gpr[7] = (0u | 150u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x088F6E20u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6E20u) goto L_088F6E20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6E20:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(520), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      ctx.gpr[16] = aot_run_words[6];
      ctx.gpr[17] = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      ctx.gpr[19] = aot_run_words[9];
      ctx.gpr[20] = aot_run_words[10];
      ctx.gpr[21] = aot_run_words[11];
      ctx.gpr[22] = aot_run_words[12];
      ctx.gpr[23] = aot_run_words[13];
      ctx.gpr[30] = aot_run_words[14];
      aot_gpr_31 = aot_run_words[15];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_088F6E68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    { const std::uint32_t aot_run_words[10]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(60), aot_run_words); }
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_28 + static_cast<std::uint32_t>(8688)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2247u << 16u);
      if (branch_taken) {
          goto L_088F74B8;
      }
      goto L_088F6EA8;
    }
L_088F6EA8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-13008));
    ctx.gpr[21] = (2238u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(14304));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), aot_gpr_4);
    ctx.gpr[22] = (aot_gpr_28 + static_cast<std::uint32_t>(-23088));
    ctx.gpr[20] = (2238u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8144));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-23068));
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5024));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-23060));
    aot_gpr_6 = (aot_gpr_28 + static_cast<std::uint32_t>(-23052));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-23044));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-23036));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_28 + static_cast<std::uint32_t>(-23028));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-23020));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-23012));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_28 + static_cast<std::uint32_t>(-23004));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-22996));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-22988));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_28 + static_cast<std::uint32_t>(-22980));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_gpr_5);
    ctx.gpr[30] = (aot_gpr_28 + static_cast<std::uint32_t>(-22972));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_4);
    ctx.gpr[23] = (aot_gpr_28 + static_cast<std::uint32_t>(-22964));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_6);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_088F6F3C;
L_088F6F3C:
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_5 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088F6F78;
      }
      goto L_088F6F58;
    }
L_088F6F58:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088F6F64u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6F64u) goto L_088F6F64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6F64:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088F6F70u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6F70u) goto L_088F6F70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6F70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088F7424;
      }
      goto L_088F6F78;
    }
L_088F6F78:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    aot_gpr_4 = (aot_gpr_6 < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F7424;
      }
      goto L_088F6F88;
    }
L_088F6F88:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-15872)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_088F6FA0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (0u | 40u);
    { const bool branch_taken = ctx.gpr[16] == aot_gpr_4;
    aot_gpr_4 = (0u | 41u);
      if (branch_taken) {
          goto L_088F6FB8;
      }
      goto L_088F6FB0;
    }
L_088F6FB0:
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_4;
      if (branch_taken) {
          goto L_088F6FC0;
      }
      goto L_088F6FB8;
    }
L_088F6FB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088F7040;
      }
      goto L_088F6FC0;
    }
L_088F6FC0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_088F7018;
    }
    goto L_088F6FD0;
L_088F6FD0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_088F7008;
    }
    goto L_088F6FDC;
L_088F6FDC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F6FE8u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6FE8u) goto L_088F6FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6FE8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F7004;
    }
    goto L_088F6FF4;
L_088F6FF4:
    aot_gpr_31 = (0x088F6FFCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F6FFCu) goto L_088F6FFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F6FFC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F7004;
L_088F7004:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_088F7008;
L_088F7008:
    aot_gpr_31 = (0x088F7010u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7010u) goto L_088F7010;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_088F7040;
      }
      goto L_088F7018;
    }
L_088F7018:
    aot_gpr_5 = (ctx.gpr[16] + ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088F7030u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7030u) goto L_088F7030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7030:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088F703Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F703Cu) goto L_088F703C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F703C:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    goto L_088F7040;
L_088F7040:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7424;
      }
      goto L_088F7048;
    }
L_088F7048:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_088F7080;
    }
    goto L_088F7054;
L_088F7054:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F7060u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7060u) goto L_088F7060;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7060:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F707C;
    }
    goto L_088F706C;
L_088F706C:
    aot_gpr_31 = (0x088F7074u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7074u) goto L_088F7074;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7074:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F707C;
L_088F707C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_088F7080;
L_088F7080:
    aot_gpr_31 = (0x088F7088u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7088u) goto L_088F7088;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7088:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7424;
      }
      goto L_088F7094;
    }
L_088F7094:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_088F70CC;
    }
    goto L_088F70A0;
L_088F70A0:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F70ACu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F70ACu) goto L_088F70AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F70AC:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F70C8;
    }
    goto L_088F70B8;
L_088F70B8:
    aot_gpr_31 = (0x088F70C0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F70C0u) goto L_088F70C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F70C0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F70C8;
L_088F70C8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_088F70CC;
L_088F70CC:
    aot_gpr_31 = (0x088F70D4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F70D4u) goto L_088F70D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F70D4:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7424;
      }
      goto L_088F70E0;
    }
L_088F70E0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_088F7118;
    }
    goto L_088F70EC;
L_088F70EC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F70F8u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F70F8u) goto L_088F70F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F70F8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F7114;
    }
    goto L_088F7104;
L_088F7104:
    aot_gpr_31 = (0x088F710Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F710Cu) goto L_088F710C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F710C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F7114;
L_088F7114:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_088F7118;
L_088F7118:
    aot_gpr_31 = (0x088F7120u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7120u) goto L_088F7120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7120:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7424;
      }
      goto L_088F712C;
    }
L_088F712C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_088F7164;
    }
    goto L_088F7138;
L_088F7138:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F7144u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7144u) goto L_088F7144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7144:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F7160;
    }
    goto L_088F7150;
L_088F7150:
    aot_gpr_31 = (0x088F7158u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7158u) goto L_088F7158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7158:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F7160;
L_088F7160:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_088F7164;
L_088F7164:
    aot_gpr_31 = (0x088F716Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F716Cu) goto L_088F716C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F716C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7424;
      }
      goto L_088F7178;
    }
L_088F7178:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_088F71B0;
    }
    goto L_088F7184;
L_088F7184:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F7190u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7190u) goto L_088F7190;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7190:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F71AC;
    }
    goto L_088F719C;
L_088F719C:
    aot_gpr_31 = (0x088F71A4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F71A4u) goto L_088F71A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F71A4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F71AC;
L_088F71AC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088F71B0;
L_088F71B0:
    aot_gpr_31 = (0x088F71B8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F71B8u) goto L_088F71B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F71B8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7424;
      }
      goto L_088F71C4;
    }
L_088F71C4:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_088F71FC;
    }
    goto L_088F71D0;
L_088F71D0:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F71DCu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F71DCu) goto L_088F71DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F71DC:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F71F8;
    }
    goto L_088F71E8;
L_088F71E8:
    aot_gpr_31 = (0x088F71F0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F71F0u) goto L_088F71F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F71F0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F71F8;
L_088F71F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088F71FC;
L_088F71FC:
    aot_gpr_31 = (0x088F7204u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7204u) goto L_088F7204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7204:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7424;
      }
      goto L_088F7210;
    }
L_088F7210:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_088F7248;
    }
    goto L_088F721C;
L_088F721C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F7228u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7228u) goto L_088F7228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7228:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F7244;
    }
    goto L_088F7234;
L_088F7234:
    aot_gpr_31 = (0x088F723Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F723Cu) goto L_088F723C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F723C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F7244;
L_088F7244:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_088F7248;
L_088F7248:
    aot_gpr_31 = (0x088F7250u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7250u) goto L_088F7250;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7250:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7424;
      }
      goto L_088F725C;
    }
L_088F725C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_088F7294;
    }
    goto L_088F7268;
L_088F7268:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F7274u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7274u) goto L_088F7274;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7274:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F7290;
    }
    goto L_088F7280;
L_088F7280:
    aot_gpr_31 = (0x088F7288u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7288u) goto L_088F7288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7288:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F7290;
L_088F7290:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088F7294;
L_088F7294:
    aot_gpr_31 = (0x088F729Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F729Cu) goto L_088F729C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F729C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7424;
      }
      goto L_088F72A8;
    }
L_088F72A8:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_088F72E0;
    }
    goto L_088F72B4;
L_088F72B4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F72C0u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F72C0u) goto L_088F72C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F72C0:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F72DC;
    }
    goto L_088F72CC;
L_088F72CC:
    aot_gpr_31 = (0x088F72D4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F72D4u) goto L_088F72D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F72D4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F72DC;
L_088F72DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_088F72E0;
L_088F72E0:
    aot_gpr_31 = (0x088F72E8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F72E8u) goto L_088F72E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F72E8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7424;
      }
      goto L_088F72F4;
    }
L_088F72F4:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
        goto L_088F732C;
    }
    goto L_088F7300;
L_088F7300:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F730Cu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F730Cu) goto L_088F730C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F730C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F7328;
    }
    goto L_088F7318;
L_088F7318:
    aot_gpr_31 = (0x088F7320u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7320u) goto L_088F7320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7320:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F7328;
L_088F7328:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_088F732C;
L_088F732C:
    aot_gpr_31 = (0x088F7334u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7334u) goto L_088F7334;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7334:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7424;
      }
      goto L_088F7340;
    }
L_088F7340:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_088F7378;
    }
    goto L_088F734C;
L_088F734C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F7358u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7358u) goto L_088F7358;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7358:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F7374;
    }
    goto L_088F7364;
L_088F7364:
    aot_gpr_31 = (0x088F736Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F736Cu) goto L_088F736C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F736C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F7374;
L_088F7374:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088F7378;
L_088F7378:
    aot_gpr_31 = (0x088F7380u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7380u) goto L_088F7380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7380:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7424;
      }
      goto L_088F738C;
    }
L_088F738C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088F73C4;
      }
      goto L_088F7398;
    }
L_088F7398:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F73A4u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F73A4u) goto L_088F73A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F73A4:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F73C0;
    }
    goto L_088F73B0;
L_088F73B0:
    aot_gpr_31 = (0x088F73B8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F73B8u) goto L_088F73B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F73B8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F73C0;
L_088F73C0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088F73C4;
L_088F73C4:
    aot_gpr_31 = (0x088F73CCu);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F73CCu) goto L_088F73CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F73CC:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7424;
      }
      goto L_088F73D8;
    }
L_088F73D8:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088F7410;
      }
      goto L_088F73E4;
    }
L_088F73E4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F73F0u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F73F0u) goto L_088F73F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F73F0:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F740C;
    }
    goto L_088F73FC;
L_088F73FC:
    aot_gpr_31 = (0x088F7404u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7404u) goto L_088F7404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7404:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F740C;
L_088F740C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088F7410;
L_088F7410:
    aot_gpr_31 = (0x088F7418u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7418u) goto L_088F7418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7418:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7424;
      }
      goto L_088F7424;
    }
L_088F7424:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_088F749C;
      }
      goto L_088F742C;
    }
L_088F742C:
    aot_gpr_31 = (0x088F7434u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7434u) goto L_088F7434;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7434:
    aot_gpr_31 = (0x088F743Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F743Cu) goto L_088F743C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F743C:
    aot_gpr_31 = (0x088F7444u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7444u) goto L_088F7444;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7444:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(21)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(22)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(23)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_31 = (0x088F747Cu);
    aot_gpr_4 = (ctx.gpr[29] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F747Cu) goto L_088F747C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F747C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x088F749Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F749Cu) goto L_088F749C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F749C:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (aot_gpr_4 << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_28 + static_cast<std::uint32_t>(8688)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
        goto L_088F6F3C;
    }
    goto L_088F74B8;
L_088F74B8:
    aot_mem.aot_direct_store16(aot_gpr_28 + static_cast<std::uint32_t>(8688), static_cast<std::uint16_t>(0u));
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(60), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[30] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_088F74EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(76), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 & 65535u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088F7530;
      }
      goto L_088F7508;
    }
L_088F7508:
    aot_gpr_5 = (aot_gpr_4 << 8u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 << 5u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (2238u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6992));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088F7558;
      }
      goto L_088F7530;
    }
L_088F7530:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_5 << 8u);
    ctx.gpr[7] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (2238u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6992));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_088F7558;
L_088F7558:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_5;
      if (branch_taken) {
          goto L_088F7680;
      }
      goto L_088F7568;
    }
L_088F7568:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_5;
      if (branch_taken) {
          goto L_088F7638;
      }
      goto L_088F7578;
    }
L_088F7578:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_5;
      if (branch_taken) {
          goto L_088F7620;
      }
      goto L_088F7588;
    }
L_088F7588:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(162)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_5;
      if (branch_taken) {
          goto L_088F75D8;
      }
      goto L_088F7598;
    }
L_088F7598:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
      if (branch_taken) {
          goto L_088F75C0;
      }
      goto L_088F75A8;
    }
L_088F75A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(166)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
      if (branch_taken) {
          goto L_088F76B8;
      }
      goto L_088F75B8;
    }
L_088F75B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F76F8;
      }
      goto L_088F75C0;
    }
L_088F75C0:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 84u);
    aot_gpr_31 = (0x088F75D0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F75D0u) goto L_088F75D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F75D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_088F79A8;
      }
      goto L_088F75D8;
    }
L_088F75D8:
    aot_gpr_5 = (aot_gpr_4 << 8u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(336)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 79u);
    aot_gpr_31 = (0x088F7618u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7618u) goto L_088F7618;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7618:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_088F79A8;
      }
      goto L_088F7620;
    }
L_088F7620:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 84u);
    aot_gpr_31 = (0x088F7630u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7630u) goto L_088F7630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7630:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_088F79A8;
      }
      goto L_088F7638;
    }
L_088F7638:
    aot_gpr_5 = (aot_gpr_4 << 8u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(337)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 83u);
    aot_gpr_31 = (0x088F7678u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7678u) goto L_088F7678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7678:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_088F79A8;
      }
      goto L_088F7680;
    }
L_088F7680:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    aot_gpr_4 = (aot_gpr_4 | 8u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20000));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3192), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3160)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 82u);
    aot_gpr_31 = (0x088F76B0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F76B0u) goto L_088F76B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F76B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_088F79A8;
      }
      goto L_088F76B8;
    }
L_088F76B8:
    aot_gpr_31 = (0x088F76C0u);
    ctx.gpr[17] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F76C0u) goto L_088F76C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F76C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(2320)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[17] | 0u);
        goto L_088F76D4;
    }
    goto L_088F76D4;
L_088F76D4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088F76E0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 655u, 0x08947470u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F76E0u) goto L_088F76E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F76E0:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 84u);
    aot_gpr_31 = (0x088F76F0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F76F0u) goto L_088F76F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F76F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_088F79A8;
      }
      goto L_088F76F8;
    }
L_088F76F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
      if (branch_taken) {
          goto L_088F7718;
      }
      goto L_088F7708;
    }
L_088F7708:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_088F7750;
      }
      goto L_088F7718;
    }
L_088F7718:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 84u);
    aot_gpr_31 = (0x088F7728u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7728u) goto L_088F7728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7728:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_088F7744;
      }
      goto L_088F7738;
    }
L_088F7738:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(8725), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088F7748;
      }
      goto L_088F7744;
    }
L_088F7744:
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(8725), static_cast<std::uint8_t>(0u));
    goto L_088F7748;
L_088F7748:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_088F79A8;
      }
      goto L_088F7750;
    }
L_088F7750:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_088F7918;
      }
      goto L_088F7760;
    }
L_088F7760:
    aot_gpr_31 = (0x088F7768u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7768u) goto L_088F7768;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7768:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F7910;
      }
      goto L_088F7774;
    }
L_088F7774:
    aot_gpr_31 = (0x088F777Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F777Cu) goto L_088F777C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F777C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F7910;
      }
      goto L_088F7784;
    }
L_088F7784:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_088F77BC;
    }
    goto L_088F7790;
L_088F7790:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F779Cu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F779Cu) goto L_088F779C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F779C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F77B8;
    }
    goto L_088F77A8;
L_088F77A8:
    aot_gpr_31 = (0x088F77B0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F77B0u) goto L_088F77B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F77B0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F77B8;
L_088F77B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_088F77BC;
L_088F77BC:
    aot_gpr_31 = (0x088F77C4u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-22956));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F77C4u) goto L_088F77C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F77C4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 1000u);
    aot_gpr_31 = (0x088F77D4u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 246u, 0x08AB9448u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F77D4u) goto L_088F77D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F77D4:
    aot_gpr_4 = (0u | 11u);
    aot_mem.aot_direct_store16(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(8724)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(29), aot_gpr_4);
    aot_mem.aot_direct_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_gpr_31 = (0x088F7804u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7804u) goto L_088F7804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7804:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_088F784C;
      }
      goto L_088F7818;
    }
L_088F7818:
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    goto L_088F781C;
L_088F781C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] < aot_gpr_6 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
        goto L_088F7840;
    }
    goto L_088F7830;
L_088F7830:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088F7844;
      }
      goto L_088F7840;
    }
L_088F7840:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088F7844;
L_088F7844:
    if (aot_gpr_4 != 0u) {
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
        goto L_088F781C;
    }
    goto L_088F784C;
L_088F784C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_088F787C;
      }
      goto L_088F7860;
    }
L_088F7860:
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), aot_gpr_5);
        goto L_088F7888;
    }
    goto L_088F7878;
L_088F7878:
    aot_gpr_4 = (2237u << 16u);
    goto L_088F787C;
L_088F787C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), aot_gpr_5);
    goto L_088F7888;
L_088F7888:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_088F78CC;
    }
    goto L_088F78C4;
L_088F78C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088F78D0;
      }
      goto L_088F78CC;
    }
L_088F78CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    goto L_088F78D0;
L_088F78D0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(33), aot_gpr_4);
    aot_mem.aot_direct_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088F78F4u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F78F4u) goto L_088F78F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F78F4:
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(29), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(32), aot_gpr_5));
    aot_mem.aot_direct_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088F7910u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 795u, 0x08A3716Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7910u) goto L_088F7910;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7910:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_088F79A8;
      }
      goto L_088F7918;
    }
L_088F7918:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_088F79A4;
      }
      goto L_088F7928;
    }
L_088F7928:
    aot_gpr_31 = (0x088F7930u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7930u) goto L_088F7930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7930:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F799C;
      }
      goto L_088F7938;
    }
L_088F7938:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_088F7970;
    }
    goto L_088F7944;
L_088F7944:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x088F7950u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7950u) goto L_088F7950;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7950:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_088F796C;
    }
    goto L_088F795C;
L_088F795C:
    aot_gpr_31 = (0x088F7964u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7964u) goto L_088F7964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7964:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_088F796C;
L_088F796C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_088F7970;
L_088F7970:
    aot_gpr_31 = (0x088F7978u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-22948));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7978u) goto L_088F7978;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7978:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 1000u);
    aot_gpr_31 = (0x088F7988u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 246u, 0x08AB9448u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7988u) goto L_088F7988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7988:
    aot_gpr_31 = (0x088F7990u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7990u) goto L_088F7990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7990:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088F799Cu);
    aot_gpr_5 = (0u | 30000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 726u, 0x089477FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F799Cu) goto L_088F799C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F799C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_088F79A8;
      }
      goto L_088F79A4;
    }
L_088F79A4:
    aot_gpr_2 = (0u | 0u);
    goto L_088F79A8;
L_088F79A8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(76), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_088F79BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    { const std::uint32_t aot_run_words[11]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(152), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088F79F8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F79F8u) goto L_088F79F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F79F8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088F7A14;
      }
      goto L_088F7A00;
    }
L_088F7A00:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F7A1C;
      }
      goto L_088F7A0C;
    }
L_088F7A0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7C5C;
      }
      goto L_088F7A14;
    }
L_088F7A14:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7DBC;
      }
      goto L_088F7A1C;
    }
L_088F7A1C:
    aot_gpr_31 = (0x088F7A24u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7A24u) goto L_088F7A24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7A24:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F7DB4;
      }
      goto L_088F7A2C;
    }
L_088F7A2C:
    aot_gpr_31 = (0x088F7A34u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7A34u) goto L_088F7A34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7A34:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F7B10;
      }
      goto L_088F7A3C;
    }
L_088F7A3C:
    aot_gpr_31 = (0x088F7A44u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7A44u) goto L_088F7A44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7A44:
    aot_gpr_31 = (0x088F7A4Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 745u, 0x08947944u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7A4Cu) goto L_088F7A4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7A4C:
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088F7A60u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    goto L_088F7DF0;
L_088F7A60:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8728)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8732)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(168)));
    aot_gpr_6 = (0u | 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x088F7AC0u);
    ctx.gpr[10] = (0u | 0u);
    goto L_088F5A3C;
L_088F7AC0:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x088F7AD0u);
    aot_gpr_4 = (0u | 132u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7AD0u) goto L_088F7AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7AD0:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088F7AE8;
      }
      goto L_088F7ADC;
    }
L_088F7ADC:
    aot_gpr_31 = (0x088F7AE4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 314u, 0x08A0A1DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7AE4u) goto L_088F7AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7AE4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_088F7AE8;
L_088F7AE8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(116));
    aot_gpr_31 = (0x088F7AFCu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 759u, 0x08933F0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7AFCu) goto L_088F7AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7AFC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088F7B08u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 623u, 0x088BAFE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7B08u) goto L_088F7B08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7B08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7DB4;
      }
      goto L_088F7B10;
    }
L_088F7B10:
    aot_gpr_31 = (0x088F7B18u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7B18u) goto L_088F7B18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7B18:
    aot_gpr_31 = (0x088F7B20u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 695u, 0x0894763Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7B20u) goto L_088F7B20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7B20:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088F7B40;
      }
      goto L_088F7B28;
    }
L_088F7B28:
    aot_gpr_31 = (0x088F7B30u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7B30u) goto L_088F7B30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7B30:
    aot_gpr_31 = (0x088F7B38u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 710u, 0x089476E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7B38u) goto L_088F7B38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7B38:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F7B90;
      }
      goto L_088F7B40;
    }
L_088F7B40:
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088F7B54u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    goto L_088F7DF0;
L_088F7B54:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088F7B74u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7B74u) goto L_088F7B74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7B74:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x088F7B88u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 751u, 0x08947990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7B88u) goto L_088F7B88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7B88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7DB4;
      }
      goto L_088F7B90;
    }
L_088F7B90:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 38 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 51 ? 1u : 0u);
      if (branch_taken) {
          goto L_088F7BC8;
      }
      goto L_088F7BB8;
    }
L_088F7BB8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088F7BD0;
      }
      goto L_088F7BC0;
    }
L_088F7BC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7BD8;
      }
      goto L_088F7BC8;
    }
L_088F7BC8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F7BD8;
      }
      goto L_088F7BD0;
    }
L_088F7BD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7C54;
      }
      goto L_088F7BD8;
    }
L_088F7BD8:
    aot_gpr_4 = (0u | 13u);
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_088F7BE8;
      }
      goto L_088F7BE4;
    }
L_088F7BE4:
    ctx.gpr[17] = (0u | 36u);
    goto L_088F7BE8;
L_088F7BE8:
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088F7BFCu);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    goto L_088F7DF0;
L_088F7BFC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x088F7C54u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 568u, 0x088F2B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7C54u) goto L_088F7C54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7C54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088F7DB4;
      }
      goto L_088F7C5C;
    }
L_088F7C5C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (0u | 36u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[23] = (2233u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-5104));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    goto L_088F7C88;
L_088F7C88:
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_5 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    ctx.gpr[20] = (ctx.gpr[16] + aot_gpr_4);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088F7D9C;
      }
      goto L_088F7CA8;
    }
L_088F7CA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
      if (branch_taken) {
          goto L_088F7D9C;
      }
      goto L_088F7CB4;
    }
L_088F7CB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F7CD0;
      }
      goto L_088F7CC0;
    }
L_088F7CC0:
    aot_gpr_31 = (0x088F7CC8u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7CC8u) goto L_088F7CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7CC8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088F7D9C;
      }
      goto L_088F7CD0;
    }
L_088F7CD0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088F7CE4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_088F7DF0;
L_088F7CE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[20];
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[23]);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_088F7D28;
    }
    goto L_088F7D28;
L_088F7D28:
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (0u | 4u);
    aot_gpr_31 = (0x088F7D40u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 578u, 0x088F2C14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7D40u) goto L_088F7D40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7D40:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088F7D9C;
      }
      goto L_088F7D48;
    }
L_088F7D48:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[23]);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_088F7D80;
    }
    goto L_088F7D80;
L_088F7D80:
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_6 = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x088F7D9Cu);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 568u, 0x088F2B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7D9Cu) goto L_088F7D9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7D9C:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (aot_gpr_4 << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088F7C88;
      }
      goto L_088F7DB4;
    }
L_088F7DB4:
    aot_gpr_31 = (0x088F7DBCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 79u, 0x0890849Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7DBCu) goto L_088F7DBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7DBC:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(152), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      ctx.gpr[23] = aot_run_words[8];
      ctx.gpr[30] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_088F7DF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    { const std::uint32_t aot_run_words[16]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(296), aot_run_words); }
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (15561u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 4059u);
    aot_fpr_22 = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), aot_gpr_4);
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr_4 = (16384u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16294u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16281u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088F7EAC;
L_088F7EAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x088F7EC0u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7EC0u) goto L_088F7EC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7EC0:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[26] + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088F7F04u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7F04u) goto L_088F7F04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7F04:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = ctx.fpr[26] + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x088F7F50u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088F7F50u) goto L_088F7F50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088F7F50:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[0] + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0061_entry, 61u, 17u, 0x088F817Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088F7F6C;
    }
L_088F7F6C:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[24];
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    ctx.pc = 0x088F8000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0060(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0060_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_60(Runtime &runtime) {
    runtime.register_generated_unit(60u, 0x088F4000u, 16384u, &recomp_unit_0060, &recomp_unit_0060_entry);
    runtime.register_function(0x088F4000u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4014u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F401Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4028u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4030u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4038u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4040u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F406Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4074u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F407Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F409Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F40A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F40A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F40B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F40C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F40C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F40D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F40E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F40ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F40F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4120u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4128u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4130u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4144u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F414Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4154u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F415Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4170u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4178u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F417Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4194u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4198u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F41A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F41ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F41BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F41C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F41CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F41E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F41FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4214u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F422Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4244u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F424Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4254u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4264u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4274u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4290u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F429Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4304u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F430Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4314u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F432Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F433Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4370u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4380u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4390u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4408u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4410u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4418u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4424u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F443Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4448u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4454u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F445Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F446Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4478u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4480u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4484u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4498u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4500u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4510u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F451Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4534u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F454Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4564u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F457Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4584u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F458Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4590u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4598u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F45B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4604u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4608u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F461Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F466Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4684u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4690u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4694u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F46A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F46C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F46C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F46D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F46E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F46FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4714u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4728u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4734u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4740u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4750u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4760u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4778u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F477Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4784u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F480Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4818u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4828u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4838u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4848u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4858u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F485Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F486Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4874u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4884u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4894u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F48ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F48B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F48C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F48D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F48E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4904u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F490Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4918u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4924u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F492Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4934u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4940u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4948u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4958u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4960u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4968u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F498Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F499Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A14u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A3Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A44u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A58u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A68u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A80u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A98u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4AA4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4AACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4ABCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4AC4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B64u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B74u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B84u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B98u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4BA8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4BB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4BB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4BD4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4BE0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4BE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4BF0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4BF8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C0Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C1Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C38u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C40u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C48u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C50u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C6Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C78u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C84u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C88u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C9Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CA8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CCCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CD8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CF0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CF4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CF8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D60u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D74u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D84u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E30u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E38u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E88u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E9Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4EA4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4EACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4F50u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4F64u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4F78u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4F8Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4FA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4FACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4FC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4FD8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5018u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F502Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5038u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5058u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5064u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F506Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F509Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F50E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5118u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F516Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5174u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5180u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5188u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5190u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5198u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F51A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F51B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F51C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F51D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F51E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F51F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F51FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F520Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5218u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5224u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5234u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5244u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F525Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5264u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F526Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5274u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F527Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5284u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F529Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F52B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F52F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5304u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F530Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F531Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5324u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F532Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F534Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5358u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F536Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5388u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5408u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F541Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F542Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5434u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5440u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5444u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5450u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5458u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5460u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5468u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5470u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5480u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5504u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F550Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F551Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5524u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5534u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F553Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F554Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F555Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F557Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F558Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5598u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F55ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F55B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F55C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F55DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F55F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F55F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5604u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5614u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F561Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5628u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5630u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5640u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5648u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5654u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F565Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5664u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5670u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5684u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F568Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F569Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F56B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F56B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F56DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F56ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F56FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5708u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5720u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F572Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F574Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5754u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F575Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5764u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F57A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F57B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F57D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F57DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F57E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F57ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F57F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5800u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5808u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5810u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F581Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5824u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5828u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5830u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F583Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5848u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5850u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5858u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5864u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F587Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5884u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F58BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F58F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F58FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5900u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5914u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5920u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5930u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F593Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5944u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5948u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5950u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F595Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5968u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5970u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5978u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5984u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F599Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F59A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F59B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F59C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F59D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F59F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A08u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A0Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A3Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A80u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A98u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5AA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5AACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5ABCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5AC4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5ACCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5AD4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5AE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5AECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5AF8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B08u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B10u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B14u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B1Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B2Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B34u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B40u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B50u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B58u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B64u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B84u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BA8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BCCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BD8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BF0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BFCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C60u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C68u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C70u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C78u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C9Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5CA4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5CB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5CB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5CCCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5CD4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5CE0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D10u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D1Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D24u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D30u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D38u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D44u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D54u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D68u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D70u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D98u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5DF4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E14u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E1Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E24u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E34u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E3Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E44u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E4Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E54u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E64u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E74u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E84u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E9Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5EA4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5EACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5EBCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5EC8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5EDCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5EE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5EF8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F18u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F2Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F40u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F4Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F60u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F74u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F84u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F98u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FA4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FC4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FD8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FF8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6004u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6018u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6028u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F603Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F604Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6060u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6070u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6084u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6094u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6104u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6114u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6134u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F613Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6148u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6150u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6160u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6164u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6178u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6180u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F618Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6194u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F61A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F61A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F61C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F61C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F61D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6290u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6348u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6364u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F63E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F63ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F643Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6444u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F64FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6504u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F65B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F65C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6610u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6628u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6640u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F664Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6658u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F66A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F66B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F66F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6700u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6744u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F67C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F67E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F680Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6838u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F68ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F68FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F690Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6934u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F693Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6944u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6948u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6970u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F697Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6980u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6994u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F69A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A24u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A70u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A9Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6AD4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6AE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6AF4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B10u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B18u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B34u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B3Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B40u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B4Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B58u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B60u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B68u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B94u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6BF0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6C00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6C5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6CB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6CE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D1Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6DB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6DC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6DC8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E20u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E68u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6EA8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F3Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F58u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F64u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F70u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F78u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F88u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FD0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FDCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FF4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FFCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7004u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7008u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7010u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7018u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7030u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F703Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7040u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7048u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7054u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7060u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F706Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7074u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F707Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7080u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7088u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7094u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7104u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F710Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7114u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7118u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7120u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F712Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7138u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7144u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7150u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7158u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7160u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7164u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F716Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7178u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7184u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7190u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F719Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7204u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7210u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F721Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7228u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7234u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F723Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7244u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7248u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7250u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F725Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7268u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7274u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7280u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7288u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7290u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7294u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F729Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7300u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F730Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7318u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7320u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7328u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F732Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7334u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7340u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F734Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7358u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7364u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F736Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7374u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7378u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7380u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F738Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7398u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7404u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F740Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7410u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7418u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7424u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F742Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7434u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F743Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7444u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F747Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F749Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F74B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F74ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7508u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7530u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7558u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7568u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7578u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7588u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7598u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F75A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F75B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F75C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F75D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F75D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7618u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7620u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7630u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7638u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7678u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7680u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F76B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F76B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F76C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F76D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F76E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F76F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F76F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7708u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7718u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7728u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7738u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7744u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7748u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7750u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7760u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7768u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7774u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F777Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7784u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7790u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F779Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F77A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F77B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F77B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F77BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F77C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F77D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7804u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7818u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F781Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7830u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7840u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7844u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F784Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7860u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7878u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F787Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7888u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F78C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F78CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F78D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F78F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7910u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7918u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7928u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7930u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7938u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7944u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7950u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F795Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7964u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F796Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7970u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7978u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7988u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7990u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F799Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F79A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F79A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F79BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F79F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A0Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A14u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A1Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A24u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A2Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A34u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A3Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A44u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A4Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A60u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7AC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7AD0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7ADCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7AE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7AE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7AFCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B08u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B10u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B18u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B20u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B30u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B38u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B40u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B54u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B74u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B88u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BC8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BD0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BD8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BFCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7C54u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7C5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7C88u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7CA8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7CB4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7CC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7CC8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7CD0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7CE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7D28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7D40u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7D48u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7D80u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7D9Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7DB4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7DBCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7DF0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7EACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7EC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7F04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7F50u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7F6Cu, &recomp_unit_0060, "recomp_unit_0060");
}
} // namespace psprecomp
