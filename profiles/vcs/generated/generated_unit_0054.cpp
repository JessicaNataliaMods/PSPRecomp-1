#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0054[64] = {
    0x102040300421A4A1ull, 0x0129222000481011ull, 0x94210A000B544000ull, 0x0000800004054002ull,
    0xA088010408000000ull, 0x082200040D016A0Aull, 0x1408AD4142A00505ull, 0x000020122A028150ull,
    0x4143121200000800ull, 0x0244000810812108ull, 0x01440204404A4000ull, 0xCA80A02000400200ull,
    0x4408000004800100ull, 0x0040880908104204ull, 0x0085000008011220ull, 0x0000000000010003ull,
    0x050C4088C0840012ull, 0x0004910C51140010ull, 0x4001095000A51100ull, 0x8910000044100000ull,
    0x6900001000248008ull, 0x0A10810808000010ull, 0x4102A20008004880ull, 0x2820544001004881ull,
    0x019102A200200910ull, 0x4004048800000000ull, 0x6900040488122054ull, 0x2024412000000040ull,
    0x20281A891A400800ull, 0x00404240200080C1ull, 0x410A880020212010ull, 0x0020100802201004ull,
    0x00426AD594000000ull, 0x0514909510808000ull, 0x0000200000008000ull, 0x0000000000002000ull,
    0x1084204081020408ull, 0x8108421084210842ull, 0x2041040408102040ull, 0x0810204082108010ull,
    0x1084210840810204ull, 0x0000440000300100ull, 0x0000240200002110ull, 0x0001820810C0A020ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000002000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x2000000000000000ull,
    0x0000000000100031ull, 0x2AA4020000000000ull, 0x440000500060504Dull, 0x3420244909042094ull,
    0x04104244A0912824ull, 0x000808C482A85204ull, 0x2000400008000002ull, 0x0000000A14005000ull,
    0x0000400000001A40ull, 0x2814000000020000ull, 0x00000000A0810290ull, 0x4030060001000020ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0054[64] = {
    1u, 15u, 27u, 41u, 47u, 54u, 68u, 86u, 97u, 107u, 117u, 127u, 137u, 143u, 153u, 161u,
    164u, 177u, 189u, 201u, 208u, 217u, 225u, 235u, 247u, 259u, 264u, 278u, 285u, 299u, 308u, 319u,
    326u, 340u, 353u, 355u, 356u, 366u, 379u, 388u, 397u, 408u, 413u, 419u, 429u, 429u, 429u, 429u,
    429u, 430u, 430u, 430u, 431u, 435u, 442u, 454u, 470u, 485u, 499u, 503u, 509u, 514u, 519u, 526u,
};
void recomp_unit_0054_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,6,16,7 fprs=12,13,14,15 gpr_occ=4067 fpr_occ=1070 gpr_total=5845 fpr_total=1773
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_7 = ctx.gpr[7];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[16] = aot_gpr_16; ctx.gpr[7] = aot_gpr_7; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_7 = ctx.gpr[7]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088DC004u;
        entry_id = 0u;
        if (entry_delta < 16380u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0054[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0054[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_088DC004;
    case 2u: goto L_088DC018;
    case 3u: goto L_088DC020;
    case 4u: goto L_088DC02C;
    case 5u: goto L_088DC038;
    case 6u: goto L_088DC040;
    case 7u: goto L_088DC044;
    case 8u: goto L_088DC058;
    case 9u: goto L_088DC06C;
    case 10u: goto L_088DC094;
    case 11u: goto L_088DC098;
    case 12u: goto L_088DC0BC;
    case 13u: goto L_088DC0D8;
    case 14u: goto L_088DC0F4;
    case 15u: goto L_088DC104;
    case 16u: goto L_088DC114;
    case 17u: goto L_088DC134;
    case 18u: goto L_088DC150;
    case 19u: goto L_088DC15C;
    case 20u: goto L_088DC198;
    case 21u: goto L_088DC1A8;
    case 22u: goto L_088DC1B8;
    case 23u: goto L_088DC1C4;
    case 24u: goto L_088DC1D0;
    case 25u: goto L_088DC1D8;
    case 26u: goto L_088DC1E4;
    case 27u: goto L_088DC23C;
    case 28u: goto L_088DC24C;
    case 29u: goto L_088DC254;
    case 30u: goto L_088DC25C;
    case 31u: goto L_088DC264;
    case 32u: goto L_088DC268;
    case 33u: goto L_088DC270;
    case 34u: goto L_088DC2A8;
    case 35u: goto L_088DC2B0;
    case 36u: goto L_088DC2C4;
    case 37u: goto L_088DC2D8;
    case 38u: goto L_088DC2EC;
    case 39u: goto L_088DC2F4;
    case 40u: goto L_088DC300;
    case 41u: goto L_088DC308;
    case 42u: goto L_088DC33C;
    case 43u: goto L_088DC344;
    case 44u: goto L_088DC34C;
    case 45u: goto L_088DC36C;
    case 46u: goto L_088DC3C0;
    case 47u: goto L_088DC470;
    case 48u: goto L_088DC48C;
    case 49u: goto L_088DC4A4;
    case 50u: goto L_088DC4D0;
    case 51u: goto L_088DC4E0;
    case 52u: goto L_088DC4F8;
    case 53u: goto L_088DC500;
    case 54u: goto L_088DC508;
    case 55u: goto L_088DC510;
    case 56u: goto L_088DC528;
    case 57u: goto L_088DC530;
    case 58u: goto L_088DC538;
    case 59u: goto L_088DC53C;
    case 60u: goto L_088DC544;
    case 61u: goto L_088DC564;
    case 62u: goto L_088DC56C;
    case 63u: goto L_088DC570;
    case 64u: goto L_088DC58C;
    case 65u: goto L_088DC5C8;
    case 66u: goto L_088DC5D8;
    case 67u: goto L_088DC5F0;
    case 68u: goto L_088DC604;
    case 69u: goto L_088DC60C;
    case 70u: goto L_088DC624;
    case 71u: goto L_088DC62C;
    case 72u: goto L_088DC658;
    case 73u: goto L_088DC660;
    case 74u: goto L_088DC668;
    case 75u: goto L_088DC67C;
    case 76u: goto L_088DC684;
    case 77u: goto L_088DC69C;
    case 78u: goto L_088DC6A4;
    case 79u: goto L_088DC6AC;
    case 80u: goto L_088DC6B0;
    case 81u: goto L_088DC6B8;
    case 82u: goto L_088DC6C0;
    case 83u: goto L_088DC6D0;
    case 84u: goto L_088DC6EC;
    case 85u: goto L_088DC6F4;
    case 86u: goto L_088DC714;
    case 87u: goto L_088DC71C;
    case 88u: goto L_088DC724;
    case 89u: goto L_088DC740;
    case 90u: goto L_088DC748;
    case 91u: goto L_088DC768;
    case 92u: goto L_088DC770;
    case 93u: goto L_088DC778;
    case 94u: goto L_088DC788;
    case 95u: goto L_088DC794;
    case 96u: goto L_088DC7B8;
    case 97u: goto L_088DC830;
    case 98u: goto L_088DC888;
    case 99u: goto L_088DC894;
    case 100u: goto L_088DC8A8;
    case 101u: goto L_088DC8B4;
    case 102u: goto L_088DC8C4;
    case 103u: goto L_088DC8C8;
    case 104u: goto L_088DC8DC;
    case 105u: goto L_088DC8E4;
    case 106u: goto L_088DC8FC;
    case 107u: goto L_088DC910;
    case 108u: goto L_088DC924;
    case 109u: goto L_088DC938;
    case 110u: goto L_088DC944;
    case 111u: goto L_088DC960;
    case 112u: goto L_088DC974;
    case 113u: goto L_088DC990;
    case 114u: goto L_088DC9CC;
    case 115u: goto L_088DC9DC;
    case 116u: goto L_088DC9E8;
    case 117u: goto L_088DCA3C;
    case 118u: goto L_088DCA48;
    case 119u: goto L_088DCA50;
    case 120u: goto L_088DCA5C;
    case 121u: goto L_088DCA7C;
    case 122u: goto L_088DCA8C;
    case 123u: goto L_088DCAA8;
    case 124u: goto L_088DCACC;
    case 125u: goto L_088DCADC;
    case 126u: goto L_088DCAE4;
    case 127u: goto L_088DCB28;
    case 128u: goto L_088DCB5C;
    case 129u: goto L_088DCB98;
    case 130u: goto L_088DCBB8;
    case 131u: goto L_088DCBC0;
    case 132u: goto L_088DCBE0;
    case 133u: goto L_088DCBE8;
    case 134u: goto L_088DCBF0;
    case 135u: goto L_088DCBFC;
    case 136u: goto L_088DCC00;
    case 137u: goto L_088DCC24;
    case 138u: goto L_088DCC60;
    case 139u: goto L_088DCC6C;
    case 140u: goto L_088DCCD0;
    case 141u: goto L_088DCCEC;
    case 142u: goto L_088DCCFC;
    case 143u: goto L_088DCD0C;
    case 144u: goto L_088DCD28;
    case 145u: goto L_088DCD3C;
    case 146u: goto L_088DCD54;
    case 147u: goto L_088DCD70;
    case 148u: goto L_088DCD84;
    case 149u: goto L_088DCD90;
    case 150u: goto L_088DCDB0;
    case 151u: goto L_088DCDC0;
    case 152u: goto L_088DCDDC;
    case 153u: goto L_088DCE18;
    case 154u: goto L_088DCE28;
    case 155u: goto L_088DCE34;
    case 156u: goto L_088DCE44;
    case 157u: goto L_088DCE70;
    case 158u: goto L_088DCEC4;
    case 159u: goto L_088DCECC;
    case 160u: goto L_088DCEE0;
    case 161u: goto L_088DCF04;
    case 162u: goto L_088DCF08;
    case 163u: goto L_088DCF44;
    case 164u: goto L_088DD008;
    case 165u: goto L_088DD014;
    case 166u: goto L_088DD04C;
    case 167u: goto L_088DD060;
    case 168u: goto L_088DD07C;
    case 169u: goto L_088DD080;
    case 170u: goto L_088DD090;
    case 171u: goto L_088DD0A0;
    case 172u: goto L_088DD0BC;
    case 173u: goto L_088DD0CC;
    case 174u: goto L_088DD0D0;
    case 175u: goto L_088DD0E4;
    case 176u: goto L_088DD0EC;
    case 177u: goto L_088DD114;
    case 178u: goto L_088DD14C;
    case 179u: goto L_088DD154;
    case 180u: goto L_088DD164;
    case 181u: goto L_088DD174;
    case 182u: goto L_088DD17C;
    case 183u: goto L_088DD18C;
    case 184u: goto L_088DD190;
    case 185u: goto L_088DD1A4;
    case 186u: goto L_088DD1B4;
    case 187u: goto L_088DD1C0;
    case 188u: goto L_088DD1CC;
    case 189u: goto L_088DD224;
    case 190u: goto L_088DD234;
    case 191u: goto L_088DD244;
    case 192u: goto L_088DD24C;
    case 193u: goto L_088DD258;
    case 194u: goto L_088DD260;
    case 195u: goto L_088DD294;
    case 196u: goto L_088DD29C;
    case 197u: goto L_088DD2A4;
    case 198u: goto L_088DD2B0;
    case 199u: goto L_088DD2C4;
    case 200u: goto L_088DD2FC;
    case 201u: goto L_088DD354;
    case 202u: goto L_088DD36C;
    case 203u: goto L_088DD37C;
    case 204u: goto L_088DD3D4;
    case 205u: goto L_088DD3E4;
    case 206u: goto L_088DD3F0;
    case 207u: goto L_088DD400;
    case 208u: goto L_088DD410;
    case 209u: goto L_088DD440;
    case 210u: goto L_088DD44C;
    case 211u: goto L_088DD458;
    case 212u: goto L_088DD494;
    case 213u: goto L_088DD4E4;
    case 214u: goto L_088DD4F0;
    case 215u: goto L_088DD4F8;
    case 216u: goto L_088DD4FC;
    case 217u: goto L_088DD514;
    case 218u: goto L_088DD570;
    case 219u: goto L_088DD590;
    case 220u: goto L_088DD5A4;
    case 221u: goto L_088DD5C0;
    case 222u: goto L_088DD5D4;
    case 223u: goto L_088DD5E8;
    case 224u: goto L_088DD5F0;
    case 225u: goto L_088DD620;
    case 226u: goto L_088DD630;
    case 227u: goto L_088DD63C;
    case 228u: goto L_088DD670;
    case 229u: goto L_088DD6A8;
    case 230u: goto L_088DD6B8;
    case 231u: goto L_088DD6C0;
    case 232u: goto L_088DD6C8;
    case 233u: goto L_088DD6E4;
    case 234u: goto L_088DD6FC;
    case 235u: goto L_088DD704;
    case 236u: goto L_088DD720;
    case 237u: goto L_088DD730;
    case 238u: goto L_088DD73C;
    case 239u: goto L_088DD764;
    case 240u: goto L_088DD79C;
    case 241u: goto L_088DD7AC;
    case 242u: goto L_088DD7B4;
    case 243u: goto L_088DD7BC;
    case 244u: goto L_088DD7D8;
    case 245u: goto L_088DD7F0;
    case 246u: goto L_088DD7F8;
    case 247u: goto L_088DD814;
    case 248u: goto L_088DD824;
    case 249u: goto L_088DD830;
    case 250u: goto L_088DD858;
    case 251u: goto L_088DD888;
    case 252u: goto L_088DD898;
    case 253u: goto L_088DD8A0;
    case 254u: goto L_088DD8A8;
    case 255u: goto L_088DD8C4;
    case 256u: goto L_088DD8D4;
    case 257u: goto L_088DD8E0;
    case 258u: goto L_088DD8E4;
    case 259u: goto L_088DD990;
    case 260u: goto L_088DD9A0;
    case 261u: goto L_088DD9AC;
    case 262u: goto L_088DD9CC;
    case 263u: goto L_088DD9FC;
    case 264u: goto L_088DDA0C;
    case 265u: goto L_088DDA14;
    case 266u: goto L_088DDA1C;
    case 267u: goto L_088DDA38;
    case 268u: goto L_088DDA48;
    case 269u: goto L_088DDA54;
    case 270u: goto L_088DDA70;
    case 271u: goto L_088DDA80;
    case 272u: goto L_088DDA8C;
    case 273u: goto L_088DDAAC;
    case 274u: goto L_088DDAE4;
    case 275u: goto L_088DDAF0;
    case 276u: goto L_088DDAF8;
    case 277u: goto L_088DDAFC;
    case 278u: goto L_088DDB1C;
    case 279u: goto L_088DDB98;
    case 280u: goto L_088DDBA4;
    case 281u: goto L_088DDBBC;
    case 282u: goto L_088DDBCC;
    case 283u: goto L_088DDBD8;
    case 284u: goto L_088DDBF8;
    case 285u: goto L_088DDC30;
    case 286u: goto L_088DDC5C;
    case 287u: goto L_088DDC68;
    case 288u: goto L_088DDC70;
    case 289u: goto L_088DDC74;
    case 290u: goto L_088DDC84;
    case 291u: goto L_088DDC90;
    case 292u: goto L_088DDCA0;
    case 293u: goto L_088DDCA8;
    case 294u: goto L_088DDCB0;
    case 295u: goto L_088DDCB4;
    case 296u: goto L_088DDCD0;
    case 297u: goto L_088DDCD8;
    case 298u: goto L_088DDCF8;
    case 299u: goto L_088DDD04;
    case 300u: goto L_088DDD1C;
    case 301u: goto L_088DDD20;
    case 302u: goto L_088DDD40;
    case 303u: goto L_088DDD78;
    case 304u: goto L_088DDD9C;
    case 305u: goto L_088DDDA8;
    case 306u: goto L_088DDDBC;
    case 307u: goto L_088DDDDC;
    case 308u: goto L_088DDE14;
    case 309u: goto L_088DDE38;
    case 310u: goto L_088DDE44;
    case 311u: goto L_088DDE58;
    case 312u: goto L_088DDE78;
    case 313u: goto L_088DDEB0;
    case 314u: goto L_088DDEC0;
    case 315u: goto L_088DDEC8;
    case 316u: goto L_088DDED0;
    case 317u: goto L_088DDEE4;
    case 318u: goto L_088DDEFC;
    case 319u: goto L_088DDF0C;
    case 320u: goto L_088DDF34;
    case 321u: goto L_088DDF58;
    case 322u: goto L_088DDF68;
    case 323u: goto L_088DDF90;
    case 324u: goto L_088DDFB4;
    case 325u: goto L_088DDFD8;
    case 326u: goto L_088DE06C;
    case 327u: goto L_088DE074;
    case 328u: goto L_088DE080;
    case 329u: goto L_088DE084;
    case 330u: goto L_088DE08C;
    case 331u: goto L_088DE094;
    case 332u: goto L_088DE09C;
    case 333u: goto L_088DE0A0;
    case 334u: goto L_088DE0A8;
    case 335u: goto L_088DE0B0;
    case 336u: goto L_088DE0B8;
    case 337u: goto L_088DE0BC;
    case 338u: goto L_088DE0C8;
    case 339u: goto L_088DE0DC;
    case 340u: goto L_088DE140;
    case 341u: goto L_088DE160;
    case 342u: goto L_088DE174;
    case 343u: goto L_088DE184;
    case 344u: goto L_088DE18C;
    case 345u: goto L_088DE194;
    case 346u: goto L_088DE1A0;
    case 347u: goto L_088DE1B4;
    case 348u: goto L_088DE1C0;
    case 349u: goto L_088DE1CC;
    case 350u: goto L_088DE1D4;
    case 351u: goto L_088DE1E4;
    case 352u: goto L_088DE1EC;
    case 353u: goto L_088DE240;
    case 354u: goto L_088DE2B8;
    case 355u: goto L_088DE338;
    case 356u: goto L_088DE410;
    case 357u: goto L_088DE42C;
    case 358u: goto L_088DE448;
    case 359u: goto L_088DE464;
    case 360u: goto L_088DE480;
    case 361u: goto L_088DE49C;
    case 362u: goto L_088DE4B8;
    case 363u: goto L_088DE4CC;
    case 364u: goto L_088DE4E0;
    case 365u: goto L_088DE4F4;
    case 366u: goto L_088DE508;
    case 367u: goto L_088DE51C;
    case 368u: goto L_088DE530;
    case 369u: goto L_088DE544;
    case 370u: goto L_088DE558;
    case 371u: goto L_088DE56C;
    case 372u: goto L_088DE580;
    case 373u: goto L_088DE594;
    case 374u: goto L_088DE5A8;
    case 375u: goto L_088DE5BC;
    case 376u: goto L_088DE5D0;
    case 377u: goto L_088DE5E4;
    case 378u: goto L_088DE600;
    case 379u: goto L_088DE61C;
    case 380u: goto L_088DE638;
    case 381u: goto L_088DE654;
    case 382u: goto L_088DE670;
    case 383u: goto L_088DE68C;
    case 384u: goto L_088DE6AC;
    case 385u: goto L_088DE6C4;
    case 386u: goto L_088DE6DC;
    case 387u: goto L_088DE6F8;
    case 388u: goto L_088DE714;
    case 389u: goto L_088DE740;
    case 390u: goto L_088DE754;
    case 391u: goto L_088DE768;
    case 392u: goto L_088DE780;
    case 393u: goto L_088DE79C;
    case 394u: goto L_088DE7B8;
    case 395u: goto L_088DE7D4;
    case 396u: goto L_088DE7F0;
    case 397u: goto L_088DE80C;
    case 398u: goto L_088DE828;
    case 399u: goto L_088DE844;
    case 400u: goto L_088DE860;
    case 401u: goto L_088DE87C;
    case 402u: goto L_088DE890;
    case 403u: goto L_088DE8A4;
    case 404u: goto L_088DE8B8;
    case 405u: goto L_088DE8CC;
    case 406u: goto L_088DE8E0;
    case 407u: goto L_088DE8F4;
    case 408u: goto L_088DE924;
    case 409u: goto L_088DE954;
    case 410u: goto L_088DE958;
    case 411u: goto L_088DE9AC;
    case 412u: goto L_088DE9BC;
    case 413u: goto L_088DEA14;
    case 414u: goto L_088DEA24;
    case 415u: goto L_088DEA38;
    case 416u: goto L_088DEA88;
    case 417u: goto L_088DEAAC;
    case 418u: goto L_088DEAB8;
    case 419u: goto L_088DEB18;
    case 420u: goto L_088DEB38;
    case 421u: goto L_088DEB40;
    case 422u: goto L_088DEB5C;
    case 423u: goto L_088DEB60;
    case 424u: goto L_088DEB74;
    case 425u: goto L_088DEB90;
    case 426u: goto L_088DEBA8;
    case 427u: goto L_088DEBC0;
    case 428u: goto L_088DEBC4;
    case 429u: goto L_088DF068;
    case 430u: goto L_088DF3F8;
    case 431u: goto L_088DF404;
    case 432u: goto L_088DF414;
    case 433u: goto L_088DF418;
    case 434u: goto L_088DF454;
    case 435u: goto L_088DF5A8;
    case 436u: goto L_088DF5CC;
    case 437u: goto L_088DF5D8;
    case 438u: goto L_088DF5E0;
    case 439u: goto L_088DF5E8;
    case 440u: goto L_088DF5F0;
    case 441u: goto L_088DF5F8;
    case 442u: goto L_088DF604;
    case 443u: goto L_088DF60C;
    case 444u: goto L_088DF610;
    case 445u: goto L_088DF61C;
    case 446u: goto L_088DF634;
    case 447u: goto L_088DF63C;
    case 448u: goto L_088DF658;
    case 449u: goto L_088DF65C;
    case 450u: goto L_088DF694;
    case 451u: goto L_088DF69C;
    case 452u: goto L_088DF6EC;
    case 453u: goto L_088DF6FC;
    case 454u: goto L_088DF70C;
    case 455u: goto L_088DF714;
    case 456u: goto L_088DF720;
    case 457u: goto L_088DF738;
    case 458u: goto L_088DF74C;
    case 459u: goto L_088DF764;
    case 460u: goto L_088DF770;
    case 461u: goto L_088DF784;
    case 462u: goto L_088DF790;
    case 463u: goto L_088DF79C;
    case 464u: goto L_088DF7AC;
    case 465u: goto L_088DF7B8;
    case 466u: goto L_088DF7D8;
    case 467u: goto L_088DF7EC;
    case 468u: goto L_088DF7F4;
    case 469u: goto L_088DF7F8;
    case 470u: goto L_088DF80C;
    case 471u: goto L_088DF818;
    case 472u: goto L_088DF830;
    case 473u: goto L_088DF838;
    case 474u: goto L_088DF844;
    case 475u: goto L_088DF854;
    case 476u: goto L_088DF860;
    case 477u: goto L_088DF878;
    case 478u: goto L_088DF880;
    case 479u: goto L_088DF88C;
    case 480u: goto L_088DF89C;
    case 481u: goto L_088DF8A8;
    case 482u: goto L_088DF8BC;
    case 483u: goto L_088DF8D4;
    case 484u: goto L_088DF8EC;
    case 485u: goto L_088DF90C;
    case 486u: goto L_088DF928;
    case 487u: goto L_088DF934;
    case 488u: goto L_088DF93C;
    case 489u: goto L_088DF950;
    case 490u: goto L_088DF958;
    case 491u: goto L_088DF960;
    case 492u: goto L_088DF968;
    case 493u: goto L_088DF980;
    case 494u: goto L_088DF98C;
    case 495u: goto L_088DF99C;
    case 496u: goto L_088DF9A0;
    case 497u: goto L_088DF9B0;
    case 498u: goto L_088DF9D0;
    case 499u: goto L_088DFA08;
    case 500u: goto L_088DFA70;
    case 501u: goto L_088DFABC;
    case 502u: goto L_088DFAF8;
    case 503u: goto L_088DFB34;
    case 504u: goto L_088DFB3C;
    case 505u: goto L_088DFB6C;
    case 506u: goto L_088DFB74;
    case 507u: goto L_088DFB88;
    case 508u: goto L_088DFB90;
    case 509u: goto L_088DFC1C;
    case 510u: goto L_088DFC28;
    case 511u: goto L_088DFC30;
    case 512u: goto L_088DFC34;
    case 513u: goto L_088DFCBC;
    case 514u: goto L_088DFD48;
    case 515u: goto L_088DFDCC;
    case 516u: goto L_088DFDD4;
    case 517u: goto L_088DFDF0;
    case 518u: goto L_088DFDF8;
    case 519u: goto L_088DFE14;
    case 520u: goto L_088DFE20;
    case 521u: goto L_088DFE28;
    case 522u: goto L_088DFE44;
    case 523u: goto L_088DFE60;
    case 524u: goto L_088DFE78;
    case 525u: goto L_088DFE80;
    case 526u: goto L_088DFF18;
    case 527u: goto L_088DFF64;
    case 528u: goto L_088DFFA8;
    case 529u: goto L_088DFFAC;
    case 530u: goto L_088DFFD4;
    case 531u: goto L_088DFFD8;
    case 532u: goto L_088DFFFC;
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
L_088DC004:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = ctx.fpr[26] - ctx.fpr[17];
    aot_fpr_15 = aot_fpr_15 - ctx.fpr[17];
    ctx.fpr[26] = ctx.fpr[26] / aot_fpr_15;
    aot_fpr_12 = ctx.fpr[26] - aot_fpr_12;
    goto L_088DC018;
L_088DC018:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[23];
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088DC02C;
      }
      goto L_088DC020;
    }
L_088DC020:
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23496)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_15; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
      if (branch_taken) {
          goto L_088DC040;
      }
      goto L_088DC02C;
    }
L_088DC02C:
    aot_gpr_4 = (0u | 2u);
    if (ctx.gpr[22] != aot_gpr_4) {
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
        goto L_088DC044;
    }
    goto L_088DC038;
L_088DC038:
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23492)));
    { const float fs = aot_fpr_15; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    goto L_088DC040;
L_088DC040:
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    goto L_088DC044;
L_088DC044:
    aot_fpr_13 = ctx.fpr[22] - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088DC058;
    }
    goto L_088DC058;
L_088DC058:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_088DC06C;
    }
    goto L_088DC06C;
L_088DC06C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23508)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_fpr_15 = ctx.fpr[22] - aot_fpr_13;
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_15; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23476), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088DC094;
L_088DC094:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_088DC098;
L_088DC098:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23476)));
      if (branch_taken) {
          goto L_088DC104;
      }
      goto L_088DC0BC;
    }
L_088DC0BC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6056)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6052)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088DC104;
      }
      goto L_088DC0D8;
    }
L_088DC0D8:
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23472)));
    aot_fpr_13 = aot_fpr_13 / aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088DC0F4;
    }
    goto L_088DC0F4;
L_088DC0F4:
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_13;
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23476), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088DC15C;
      }
      goto L_088DC104;
    }
L_088DC104:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088DC15C;
      }
      goto L_088DC114;
    }
L_088DC114:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6056)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6052)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088DC15C;
      }
      goto L_088DC134;
    }
L_088DC134:
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23472)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088DC150;
    }
    goto L_088DC150;
L_088DC150:
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23476), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088DC15C;
L_088DC15C:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      ctx.gpr[20] = aot_run_words[8];
      ctx.gpr[21] = aot_run_words[9];
      ctx.gpr[22] = aot_run_words[10];
      ctx.gpr[23] = aot_run_words[11];
      ctx.gpr[31] = aot_run_words[12];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DC198:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088DC1D8;
      }
      goto L_088DC1A8;
    }
L_088DC1A8:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(22640));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_6);
      if (branch_taken) {
          goto L_088DC1C4;
      }
      goto L_088DC1B8;
    }
L_088DC1B8:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-30256));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_6);
    goto L_088DC1C4;
L_088DC1C4:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088DC1D8;
      }
      goto L_088DC1D0;
    }
L_088DC1D0:
    ctx.gpr[31] = (0x088DC1D8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DC1D8u) goto L_088DC1D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DC1D8:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DC1E4:
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1448)));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-16584));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.lo);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) < 0;
    aot_mem.aot_direct_store16(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_088DC264;
      }
      goto L_088DC23C;
    }
L_088DC23C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1448)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088DC264;
      }
      goto L_088DC24C;
    }
L_088DC24C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_088DC264;
      }
      goto L_088DC254;
    }
L_088DC254:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088DC264;
      }
      goto L_088DC25C;
    }
L_088DC25C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DC268;
      }
      goto L_088DC264;
    }
L_088DC264:
    ctx.gpr[2] = (0u | 0u);
    goto L_088DC268;
L_088DC268:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DC270:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[20] = (aot_gpr_5 & 65535u);
    ctx.gpr[17] = (aot_gpr_7 | 0u);
    aot_gpr_16 = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DC2A8u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    goto L_088DC1E4;
L_088DC2A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088DC300;
      }
      goto L_088DC2B0;
    }
L_088DC2B0:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DC2C4u);
    aot_gpr_7 = (aot_gpr_16 | 0u);
    goto L_088DC7B8;
L_088DC2C4:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_16 & aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088DC2F4;
      }
      goto L_088DC2D8;
    }
L_088DC2D8:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 << (ctx.gpr[18] & 31u));
    aot_gpr_4 = (aot_gpr_16 & aot_gpr_4);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088DC308;
    }
    goto L_088DC2EC;
L_088DC2EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088DC34C;
      }
      goto L_088DC2F4;
    }
L_088DC2F4:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DC34C;
      }
      goto L_088DC300;
    }
L_088DC300:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088DC34C;
      }
      goto L_088DC308;
    }
L_088DC308:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 >> (aot_gpr_5 & 31u));
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (2u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088DC344;
      }
      goto L_088DC33C;
    }
L_088DC33C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088DC34C;
      }
      goto L_088DC344;
    }
L_088DC344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DC34C;
      }
      goto L_088DC34C;
    }
L_088DC34C:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DC36C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_6 = (aot_gpr_7 & 65535u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_16);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 >> 0u);
    aot_gpr_5 = (8u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_7 << 5u);
    aot_gpr_5 = (4u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[8] = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(1520));
      if (branch_taken) {
          goto L_088DC470;
      }
      goto L_088DC3C0;
    }
L_088DC3C0:
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_gpr_6 = (aot_gpr_7 & 65535u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (65528u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_gpr_5 = (aot_gpr_5 << 0u);
    aot_gpr_5 = (ctx.gpr[8] | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1452)));
    aot_gpr_5 = (aot_gpr_7 & 65535u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1448)));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_7 = (ctx.hi);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1456)));
    ctx.gpr[8] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_14 = aot_fpr_14 + aot_fpr_15;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1460)));
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_6);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[31] = (0x088DC470u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DC470u) goto L_088DC470;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DC470:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1528)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_7;
    ctx.gpr[31] = (0x088DC48Cu);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DC48Cu) goto L_088DC48C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DC48C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DC4A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-13104));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(13076), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(13072), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(13080), aot_run_words); }
    ctx.gpr[31] = (0x088DC4D0u);
    ctx.gpr[19] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0138_entry, 138u, 583u, 0x08A2F9E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DC4D0u) goto L_088DC4D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DC4D0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(36))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088DC56C;
      }
      goto L_088DC4E0;
    }
L_088DC4E0:
    aot_gpr_7 = (2192u << 16u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1520));
    aot_gpr_5 = (0u | 361u);
    aot_gpr_6 = (0u | 32u);
    ctx.gpr[31] = (0x088DC4F8u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-32180));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DC4F8u) goto L_088DC4F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DC4F8:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    goto L_088DC500;
L_088DC500:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088DC544;
      }
      goto L_088DC508;
    }
L_088DC508:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_088DC544;
      }
      goto L_088DC510;
    }
L_088DC510:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088DC528u);
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    goto L_088DCF44;
L_088DC528:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088DC538;
      }
      goto L_088DC530;
    }
L_088DC530:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088DC53C;
      }
      goto L_088DC538;
    }
L_088DC538:
    ctx.gpr[18] = (0u | 1u);
    goto L_088DC53C;
L_088DC53C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DC500;
      }
      goto L_088DC544;
    }
L_088DC544:
    aot_gpr_7 = (2190u << 16u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1520));
    aot_gpr_5 = (0u | 361u);
    aot_gpr_6 = (0u | 32u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x088DC564u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-15976));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DC564u) goto L_088DC564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DC564:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DC570;
      }
      goto L_088DC56C;
    }
L_088DC56C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088DC570;
L_088DC570:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(13072), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(13104));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DC58C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1492)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1464)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[31] = (0x088DC5C8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_088DC36C;
L_088DC5C8:
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(1472));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DC5D8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 717u, 0x0890F188u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DC5D8u) goto L_088DC5D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DC5D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 28u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_4 >> 2u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
      if (branch_taken) {
          goto L_088DC658;
      }
      goto L_088DC5F0;
    }
L_088DC5F0:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1492)));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DC604u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    goto L_088DC1E4;
L_088DC604:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088DC658;
      }
      goto L_088DC60C;
    }
L_088DC60C:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1492)));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088DC624u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    goto L_088DC270;
L_088DC624:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088DC658;
      }
      goto L_088DC62C;
    }
L_088DC62C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-29));
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(1492), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_6 = (ctx.gpr[21] & 7u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 << 2u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DC794;
      }
      goto L_088DC658;
    }
L_088DC658:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_088DC660;
L_088DC660:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_088DC6B8;
      }
      goto L_088DC668;
    }
L_088DC668:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 28u);
    aot_gpr_4 = (aot_gpr_4 >> 2u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DC6B8;
      }
      goto L_088DC67C;
    }
L_088DC67C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088DC6B8;
      }
      goto L_088DC684;
    }
L_088DC684:
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1492)));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DC69Cu);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    goto L_088DCB5C;
L_088DC69C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088DC6AC;
      }
      goto L_088DC6A4;
    }
L_088DC6A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_088DC6B0;
      }
      goto L_088DC6AC;
    }
L_088DC6AC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088DC6B0;
L_088DC6B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088DC660;
      }
      goto L_088DC6B8;
    }
L_088DC6B8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088DC6D0;
      }
      goto L_088DC6C0;
    }
L_088DC6C0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(1492), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088DC794;
      }
      goto L_088DC6D0;
    }
L_088DC6D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1492)));
    aot_gpr_6 = (aot_gpr_4 & 28u);
    aot_gpr_6 = (aot_gpr_6 >> 2u);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088DC6ECu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_088DC1E4;
L_088DC6EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088DC71C;
      }
      goto L_088DC6F4;
    }
L_088DC6F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1492)));
    aot_gpr_6 = (aot_gpr_4 & 28u);
    aot_gpr_6 = (aot_gpr_6 >> 2u);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DC714u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    goto L_088DC270;
L_088DC714:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC71C;
    }
L_088DC71C:
    ctx.gpr[31] = (0x088DC724u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 739u, 0x0890F33Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DC724u) goto L_088DC724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DC724:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1492)));
    aot_gpr_6 = (aot_gpr_4 & 28u);
    aot_gpr_6 = (aot_gpr_6 >> 2u);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088DC740u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_088DC1E4;
L_088DC740:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088DC770;
      }
      goto L_088DC748;
    }
L_088DC748:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1492)));
    aot_gpr_6 = (aot_gpr_4 & 28u);
    aot_gpr_6 = (aot_gpr_6 >> 2u);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DC768u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    goto L_088DC270;
L_088DC768:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088DC788;
      }
      goto L_088DC770;
    }
L_088DC770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DC794;
      }
      goto L_088DC778;
    }
L_088DC778:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(1492), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088DC794;
      }
      goto L_088DC788;
    }
L_088DC788:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(1492), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_088DC794;
L_088DC794:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[31] = aot_run_words[6];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DC7B8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-336));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    ctx.gpr[8] = (aot_gpr_5 & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (aot_gpr_4 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(280), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (8u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[8] >> 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[17] & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(320), ctx.gpr[22]);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    ctx.gpr[22] = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[22] << (aot_gpr_5 & 31u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(312), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(316), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(288), aot_gpr_5);
    ctx.gpr[8] = (ctx.gpr[17] & aot_gpr_5);
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(296), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(304), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(308), ctx.gpr[19]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(324), aot_run_words); }
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(284), aot_gpr_7);
      if (branch_taken) {
          goto L_088DCB28;
      }
      goto L_088DC830;
    }
L_088DC830:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[23]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_gpr_5 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 8u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[31] = (0x088DC888u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0061_entry, 61u, 26u, 0x088F824Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DC888u) goto L_088DC888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DC888:
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x088DC894u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0061_entry, 61u, 26u, 0x088F824Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DC894u) goto L_088DC894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DC894:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1464)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(280)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088DC8A8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_088DC36C;
L_088DC8A8:
    ctx.gpr[30] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    ctx.gpr[19] = (aot_gpr_29 | 0u);
      if (branch_taken) {
          goto L_088DC8C4;
      }
      goto L_088DC8B4;
    }
L_088DC8B4:
    aot_gpr_4 = (0u - ctx.gpr[30]);
    ctx.gpr[30] = (aot_gpr_4 & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u - ctx.gpr[30]);
      if (branch_taken) {
          goto L_088DC8C8;
      }
      goto L_088DC8C4;
    }
L_088DC8C4:
    ctx.gpr[30] = (ctx.gpr[30] & 7u);
    goto L_088DC8C8;
L_088DC8C8:
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(280)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088DC8DCu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    goto L_088DC1E4;
L_088DC8DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088DCA3C;
      }
      goto L_088DC8E4;
    }
L_088DC8E4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(292), ctx.gpr[30]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[31] = (0x088DC8FCu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DC8FCu) goto L_088DC8FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DC8FC:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    ctx.gpr[30] = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x088DC910u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0061_entry, 61u, 29u, 0x088F83CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DC910u) goto L_088DC910;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DC910:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(264)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DC924u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    goto L_088DC36C;
L_088DC924:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[31] = (0x088DC938u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(276));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DC938u) goto L_088DC938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DC938:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(292)));
      if (branch_taken) {
          goto L_088DC960;
      }
      goto L_088DC944;
    }
L_088DC944:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088DC960;
L_088DC960:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[23]);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_16;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088DC990;
      }
      goto L_088DC974;
    }
L_088DC974:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088DC990;
L_088DC990:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[23]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[31] = (0x088DC9CCu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0138_entry, 138u, 583u, 0x08A2F9E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DC9CCu) goto L_088DC9CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DC9CC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(36))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16)));
        goto L_088DC9E8;
    }
    goto L_088DC9DC;
L_088DC9DC:
    aot_gpr_4 = (ctx.gpr[22] << (ctx.gpr[20] & 31u));
    ctx.gpr[17] = (ctx.gpr[17] | aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    goto L_088DC9E8;
L_088DC9E8:
    aot_gpr_6 = (8u << 16u);
    aot_gpr_5 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[21] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 >> 0u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[22] << (ctx.gpr[30] & 31u));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (65528u << 16u);
    aot_gpr_6 = (aot_gpr_6 & aot_gpr_7);
    aot_gpr_5 = (aot_gpr_5 << 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088DCA3C;
      }
      goto L_088DCA3C;
    }
L_088DCA3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (ctx.gpr[17] & 65280u);
      if (branch_taken) {
          goto L_088DCAE4;
      }
      goto L_088DCA48;
    }
L_088DCA48:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088DCAE4;
      }
      goto L_088DCA50;
    }
L_088DCA50:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    if (aot_gpr_5 == ctx.gpr[18]) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
        goto L_088DCA7C;
    }
    goto L_088DCA5C;
L_088DCA5C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_gpr_5 = (aot_gpr_5 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    goto L_088DCA7C;
L_088DCA7C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[23]);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088DCAA8;
      }
      goto L_088DCA8C;
    }
L_088DCA8C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088DCAA8;
L_088DCAA8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[23]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[31] = (0x088DCACCu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0138_entry, 138u, 583u, 0x08A2F9E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DCACCu) goto L_088DCACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DCACC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(36))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088DCAE4;
      }
      goto L_088DCADC;
    }
L_088DCADC:
    aot_gpr_4 = (1u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] | aot_gpr_4);
    goto L_088DCAE4;
L_088DCAE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(288)));
    ctx.gpr[17] = (ctx.gpr[17] | aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(280)));
    aot_gpr_6 = (65528u << 16u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[17] << 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-30256));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_gpr_4);
    goto L_088DCB28;
L_088DCB28:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(296), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[30] = aot_run_words[8];
      ctx.gpr[31] = aot_run_words[9];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DCB5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (aot_gpr_7 | 0u);
    ctx.gpr[21] = (aot_gpr_6 & 65535u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DCB98u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 745u, 0x0890F3BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DCB98u) goto L_088DCB98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DCB98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(460)));
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (aot_gpr_4 & 28u);
    aot_gpr_6 = (aot_gpr_6 >> 2u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DCBB8u);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    goto L_088DC1E4;
L_088DCBB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088DCBF0;
      }
      goto L_088DCBC0;
    }
L_088DCBC0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (aot_gpr_5 & 28u);
    aot_gpr_6 = (aot_gpr_6 >> 2u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DCBE0u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    goto L_088DC270;
L_088DCBE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088DCBF0;
      }
      goto L_088DCBE8;
    }
L_088DCBE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DCC00;
      }
      goto L_088DCBF0;
    }
L_088DCBF0:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[31] = (0x088DCBFCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 739u, 0x0890F33Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DCBFCu) goto L_088DCBFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DCBFC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088DCC00;
L_088DCC00:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[31] = aot_run_words[6];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DCC24:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-256));
    { const std::uint32_t aot_run_words[10]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(212), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    ctx.gpr[31] = (0x088DCC60u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0061_entry, 61u, 26u, 0x088F824Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DCC60u) goto L_088DCC60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DCC60:
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088DCC6Cu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0061_entry, 61u, 26u, 0x088F824Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DCC6Cu) goto L_088DCC6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DCC6C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), 0u);
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(148))))));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[23]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(148))))));
    aot_gpr_4 = (aot_gpr_4 | 8u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(148))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(148))))));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[31] = (0x088DCCD0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DCCD0u) goto L_088DCCD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DCCD0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(904))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2235u << 16u);
      if (branch_taken) {
          goto L_088DCF08;
      }
      goto L_088DCCEC;
    }
L_088DCCEC:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(-2));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_gpr_4);
    goto L_088DCCFC;
L_088DCCFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088DCD3C;
      }
      goto L_088DCD0C;
    }
L_088DCD0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(208)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(1494)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1464)));
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DCD28u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_088DC36C;
L_088DCD28:
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[31] = (0x088DCD3Cu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(196));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DCD3Cu) goto L_088DCD3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DCD3C:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(904))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088DCEE0;
      }
      goto L_088DCD54;
    }
L_088DCD54:
    aot_gpr_16 = (ctx.gpr[17] + ctx.gpr[17]);
    aot_gpr_16 = (ctx.gpr[19] + aot_gpr_16);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1494)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1464)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DCD70u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    goto L_088DC36C;
L_088DCD70:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(200));
    ctx.gpr[31] = (0x088DCD84u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DCD84u) goto L_088DCD84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DCD84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    if (aot_gpr_4 == aot_gpr_29) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(148))))));
        goto L_088DCDB0;
    }
    goto L_088DCD90;
L_088DCD90:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(148))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(148))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_29);
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(148))))));
    goto L_088DCDB0;
L_088DCDB0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[23]);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[30];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088DCDDC;
      }
      goto L_088DCDC0;
    }
L_088DCDC0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(148))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(148))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088DCDDC;
L_088DCDDC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(148))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[23]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(148))))));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(148))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(148))))));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[31] = (0x088DCE18u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0138_entry, 138u, 583u, 0x08A2F9E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DCE18u) goto L_088DCE18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DCE18:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(36))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088DCECC;
      }
      goto L_088DCE28;
    }
L_088DCE28:
    ctx.gpr[24] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[24];
      if (branch_taken) {
          goto L_088DCECC;
      }
      goto L_088DCE34;
    }
L_088DCE34:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(904))))));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[20] << 3u);
      if (branch_taken) {
          goto L_088DCEC4;
      }
      goto L_088DCE44;
    }
L_088DCE44:
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] << 3u);
    ctx.gpr[15] = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(944));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(944));
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    goto L_088DCE70;
L_088DCE70:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(ctx.gpr[15] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_direct_store16(ctx.gpr[15] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_direct_store16(ctx.gpr[15] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store16(ctx.gpr[15] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(ctx.gpr[15] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1494)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(1494), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(904))))));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(2));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10));
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(1));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(10));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088DCE70;
      }
      goto L_088DCEC4;
    }
L_088DCEC4:
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(ctx.gpr[24]));
    goto L_088DCECC;
L_088DCECC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088DCD54;
      }
      goto L_088DCEE0;
    }
L_088DCEE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(208)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(904))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088DCCFC;
      }
      goto L_088DCF04;
    }
L_088DCF04:
    aot_gpr_4 = (2235u << 16u);
    goto L_088DCF08;
L_088DCF08:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-30256));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(212), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[30] = aot_run_words[8];
      ctx.gpr[31] = aot_run_words[9];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DCF44:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-192));
    { const std::uint32_t aot_run_words[13]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_run_words); }
    ctx.gpr[30] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 19u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1448), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (16416u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16288u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16160u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16032u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_7 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1452), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1448)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_5 = (aot_gpr_5 >> 31u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    ctx.gpr[18] = (ctx.gpr[19] & 65535u);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x088DD008u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0061_entry, 61u, 27u, 0x088F82FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD008u) goto L_088DD008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD008:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DD014u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0061_entry, 61u, 29u, 0x088F83CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD014u) goto L_088DD014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD014:
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(1456));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(1492), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[30] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x088DD04Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD04Cu) goto L_088DD04C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD04C:
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(1472));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[31] = (0x088DD060u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD060u) goto L_088DD060;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD060:
    ctx.gpr[21] = (8u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (2u << 16u);
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-30256));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_4);
      if (branch_taken) {
          goto L_088DD080;
      }
      goto L_088DD07C;
    }
L_088DD07C:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
    goto L_088DD080;
L_088DD080:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[31] = (0x088DD090u);
    aot_gpr_6 = (0u | 1448u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD090u) goto L_088DD090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD090:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(1494));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[31] = (0x088DD0A0u);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD0A0u) goto L_088DD0A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD0A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_gpr_4 & 28u);
    aot_gpr_4 = (aot_gpr_4 >> 2u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_088DD0CC;
      }
      goto L_088DD0BC;
    }
L_088DD0BC:
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u - aot_gpr_4);
      if (branch_taken) {
          goto L_088DD0D0;
      }
      goto L_088DD0CC;
    }
L_088DD0CC:
    aot_gpr_4 = (aot_gpr_4 & 7u);
    goto L_088DD0D0;
L_088DD0D0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1492)));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x088DD0E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DC1E4;
L_088DD0E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088DD114;
      }
      goto L_088DD0EC;
    }
L_088DD0EC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (65528u << 16u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_088DD114;
L_088DD114:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_5 = (16640u << 16u);
    aot_gpr_4 = (aot_gpr_4 & 28u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1488), aot_gpr_4);
    aot_gpr_5 = (17096u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[22] = (1u << 16u);
    goto L_088DD14C;
L_088DD14C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088DD400;
      }
      goto L_088DD154;
    }
L_088DD154:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(904))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088DD400;
      }
      goto L_088DD164;
    }
L_088DD164:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DD174u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    goto L_088DC58C;
L_088DD174:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088DD1C0;
      }
      goto L_088DD17C;
    }
L_088DD17C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(904))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 << 2u);
      if (branch_taken) {
          goto L_088DD1A4;
      }
      goto L_088DD18C;
    }
L_088DD18C:
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    goto L_088DD190;
L_088DD190:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(908), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DD190;
      }
      goto L_088DD1A4;
    }
L_088DD1A4:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088DD1B4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_088DCC24;
L_088DD1B4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DD458;
      }
      goto L_088DD1C0;
    }
L_088DD1C0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1492)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
      if (branch_taken) {
          goto L_088DD3F0;
      }
      goto L_088DD1CC;
    }
L_088DD1CC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1492)));
    aot_gpr_6 = (2u << 16u);
    aot_gpr_5 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_5 >> 0u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (65528u << 16u);
    aot_gpr_6 = (aot_gpr_6 & aot_gpr_7);
    aot_gpr_5 = (aot_gpr_5 << 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_088DD224;
L_088DD224:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(904))))));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_088DD258;
      }
      goto L_088DD234;
    }
L_088DD234:
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1492)));
    ctx.gpr[8] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(1494)));
    { const bool branch_taken = aot_gpr_7 != ctx.gpr[8];
      if (branch_taken) {
          goto L_088DD24C;
      }
      goto L_088DD244;
    }
L_088DD244:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088DD258;
      }
      goto L_088DD24C;
    }
L_088DD24C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088DD224;
      }
      goto L_088DD258;
    }
L_088DD258:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088DD29C;
      }
      goto L_088DD260;
    }
L_088DD260:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1448)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1492)));
    aot_gpr_7 = (ctx.lo);
    ctx.gpr[8] = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 1u));
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_088DD29C;
      }
      goto L_088DD294;
    }
L_088DD294:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    goto L_088DD29C;
L_088DD29C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088DD2B0;
      }
      goto L_088DD2A4;
    }
L_088DD2A4:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088DD3F0;
      }
      goto L_088DD2B0;
    }
L_088DD2B0:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1492)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1464)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088DD2C4u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    goto L_088DC36C;
L_088DD2C4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1492)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(904))))));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(1494), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(904))))));
    aot_gpr_5 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(944));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[31] = (0x088DD2FCu);
    aot_gpr_6 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD2FCu) goto L_088DD2FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD2FC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(904))))));
    aot_gpr_5 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(944));
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088DD36C;
      }
      goto L_088DD354;
    }
L_088DD354:
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[24];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
      if (branch_taken) {
          goto L_088DD37C;
      }
      goto L_088DD36C;
    }
L_088DD36C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 << 24u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    goto L_088DD37C;
L_088DD37C:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(904))))));
    aot_gpr_5 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(944));
    aot_gpr_6 = (ctx.gpr[17] + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(908), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1492)));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 >> 0u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[22]);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088DD3F0;
      }
      goto L_088DD3D4;
    }
L_088DD3D4:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088DD3E4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_088DCC24;
L_088DD3E4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DD458;
      }
      goto L_088DD3F0;
    }
L_088DD3F0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1492)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 64 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DD14C;
      }
      goto L_088DD400;
    }
L_088DD400:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(904))))));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088DD440;
      }
      goto L_088DD410;
    }
L_088DD410:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1488)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-29));
    aot_gpr_5 = (aot_gpr_5 & 7u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088DD458;
      }
      goto L_088DD440;
    }
L_088DD440:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088DD44Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_088DCC24;
L_088DD44C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    goto L_088DD458;
L_088DD458:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      ctx.gpr[20] = aot_run_words[7];
      ctx.gpr[21] = aot_run_words[8];
      ctx.gpr[22] = aot_run_words[9];
      ctx.gpr[23] = aot_run_words[10];
      ctx.gpr[30] = aot_run_words[11];
      ctx.gpr[31] = aot_run_words[12];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DD494:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    ctx.gpr[23] = (2236u << 16u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(29704));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(120));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DD4E4u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD4E4u) goto L_088DD4E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD4E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_088DD4F8;
    }
    goto L_088DD4F0;
L_088DD4F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088DD4FC;
      }
      goto L_088DD4F8;
    }
L_088DD4F8:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088DD4FC;
L_088DD4FC:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 12u);
    ctx.gpr[31] = (0x088DD514u);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD514u) goto L_088DD514;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD514:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DD570u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD570u) goto L_088DD570;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD570:
    ctx.gpr[22] = (2246u << 16u);
    ctx.gpr[19] = (2232u << 16u);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(30712));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-16512));
    goto L_088DD590;
L_088DD590:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[30] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088DD5D4;
      }
      goto L_088DD5A4;
    }
L_088DD5A4:
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[22]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
      if (branch_taken) {
          goto L_088DD5D4;
      }
      goto L_088DD5C0;
    }
L_088DD5C0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088DD5D4u);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD5D4u) goto L_088DD5D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD5D4:
    aot_gpr_4 = (ctx.gpr[30] << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088DD590;
      }
      goto L_088DD5E8;
    }
L_088DD5E8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_088DD63C;
      }
      goto L_088DD5F0;
    }
L_088DD5F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(29704)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    aot_gpr_7 = (aot_gpr_5 << 16u);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088DD620u);
    ctx.gpr[9] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 486u, 0x08A8E694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD620u) goto L_088DD620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD620:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DD630u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 352u, 0x08A8DD20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD630u) goto L_088DD630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD630:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) >= 0;
      if (branch_taken) {
          goto L_088DD5F0;
      }
      goto L_088DD63C;
    }
L_088DD63C:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[30] = aot_run_words[8];
      ctx.gpr[31] = aot_run_words[9];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DD670:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[31] = (0x088DD6A8u);
    aot_gpr_7 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD6A8u) goto L_088DD6A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD6A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (2236u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
      if (branch_taken) {
          goto L_088DD6C0;
      }
      goto L_088DD6B8;
    }
L_088DD6B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088DD6C8;
      }
      goto L_088DD6C0;
    }
L_088DD6C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088DD6C8;
L_088DD6C8:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    ctx.gpr[21] = (aot_gpr_16 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DD6E4u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD6E4u) goto L_088DD6E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD6E4:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (0u | 2u);
    ctx.gpr[31] = (0x088DD6FCu);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD6FCu) goto L_088DD6FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD6FC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_088DD73C;
      }
      goto L_088DD704;
    }
L_088DD704:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_16 & 65535u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[31] = (0x088DD720u);
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 500u, 0x08A8E8E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD720u) goto L_088DD720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD720:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DD730u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 352u, 0x08A8DD20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD730u) goto L_088DD730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD730:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) >= 0;
      if (branch_taken) {
          goto L_088DD704;
      }
      goto L_088DD73C;
    }
L_088DD73C:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[31] = aot_run_words[6];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DD764:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[31] = (0x088DD79Cu);
    aot_gpr_7 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD79Cu) goto L_088DD79C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD79C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (2236u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
      if (branch_taken) {
          goto L_088DD7B4;
      }
      goto L_088DD7AC;
    }
L_088DD7AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088DD7BC;
      }
      goto L_088DD7B4;
    }
L_088DD7B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088DD7BC;
L_088DD7BC:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    ctx.gpr[21] = (aot_gpr_16 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DD7D8u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD7D8u) goto L_088DD7D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD7D8:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (0u | 2u);
    ctx.gpr[31] = (0x088DD7F0u);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD7F0u) goto L_088DD7F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD7F0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_088DD830;
      }
      goto L_088DD7F8;
    }
L_088DD7F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_16 & 65535u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[31] = (0x088DD814u);
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 505u, 0x08A8E960u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD814u) goto L_088DD814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD814:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DD824u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 352u, 0x08A8DD20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD824u) goto L_088DD824;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD824:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) >= 0;
      if (branch_taken) {
          goto L_088DD7F8;
      }
      goto L_088DD830;
    }
L_088DD830:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[31] = aot_run_words[6];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DD858:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DD888u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD888u) goto L_088DD888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD888:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (2236u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
      if (branch_taken) {
          goto L_088DD8A0;
      }
      goto L_088DD898;
    }
L_088DD898:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088DD8A8;
      }
      goto L_088DD8A0;
    }
L_088DD8A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088DD8A8;
L_088DD8A8:
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (0u | 12u);
    ctx.gpr[31] = (0x088DD8C4u);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD8C4u) goto L_088DD8C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD8C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088DD8D4u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD8D4u) goto L_088DD8D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD8D4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088DD9AC;
      }
      goto L_088DD8E0;
    }
L_088DD8E0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    goto L_088DD8E4;
L_088DD8E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_7 = aot_run_words[0];
      ctx.gpr[8] = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
      ctx.gpr[10] = aot_run_words[3];
      ctx.gpr[11] = aot_run_words[4];
      ctx.gpr[2] = aot_run_words[5];
      ctx.gpr[3] = aot_run_words[6];
      ctx.gpr[12] = aot_run_words[7];
      ctx.gpr[13] = aot_run_words[8];
    }
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    ctx.gpr[3] = (ctx.gpr[3] << 16u);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    ctx.gpr[13] = (ctx.gpr[13] << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 16u));
    ctx.gpr[14] = (ctx.gpr[14] << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 16u));
    ctx.gpr[15] = (ctx.gpr[15] << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    aot_gpr_7 = (aot_gpr_7 << 16u);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    ctx.gpr[11] = (ctx.gpr[11] << 16u);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 16u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[31] = (0x088DD990u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[15]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 493u, 0x08A8E770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD990u) goto L_088DD990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD990:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088DD9A0u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 352u, 0x08A8DD20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD9A0u) goto L_088DD9A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD9A0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088DD8E4;
      }
      goto L_088DD9AC;
    }
L_088DD9AC:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DD9CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DD9FCu);
    aot_gpr_7 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DD9FCu) goto L_088DD9FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DD9FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (2236u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
      if (branch_taken) {
          goto L_088DDA14;
      }
      goto L_088DDA0C;
    }
L_088DDA0C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088DDA1C;
      }
      goto L_088DDA14;
    }
L_088DDA14:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088DDA1C;
L_088DDA1C:
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (0u | 2u);
    ctx.gpr[31] = (0x088DDA38u);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDA38u) goto L_088DDA38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDA38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088DDA48u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDA48u) goto L_088DDA48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDA48:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088DDA8C;
      }
      goto L_088DDA54;
    }
L_088DDA54:
    aot_gpr_5 = (aot_gpr_4 & 65535u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[31] = (0x088DDA70u);
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 510u, 0x08A8E9DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDA70u) goto L_088DDA70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDA70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088DDA80u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 352u, 0x08A8DD20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDA80u) goto L_088DDA80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDA80:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_088DDA54;
      }
      goto L_088DDA8C;
    }
L_088DDA8C:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DDAAC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DDAE4u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDAE4u) goto L_088DDAE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDAE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_088DDAF8;
    }
    goto L_088DDAF0;
L_088DDAF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088DDAFC;
      }
      goto L_088DDAF8;
    }
L_088DDAF8:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088DDAFC;
L_088DDAFC:
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 14u);
    ctx.gpr[31] = (0x088DDB1Cu);
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDB1Cu) goto L_088DDB1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDB1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088DDB98u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDB98u) goto L_088DDB98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDB98:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088DDBD8;
      }
      goto L_088DDBA4;
    }
L_088DDBA4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_gpr_7 = (aot_gpr_29 | 0u);
    ctx.gpr[31] = (0x088DDBBCu);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 479u, 0x08A8E5E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDBBCu) goto L_088DDBBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDBBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088DDBCCu);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 352u, 0x08A8DD20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDBCCu) goto L_088DDBCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDBCC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_088DDBA4;
      }
      goto L_088DDBD8;
    }
L_088DDBD8:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DDBF8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DDC30u);
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDC30u) goto L_088DDC30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDC30:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DDC5Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDC5Cu) goto L_088DDC5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDC5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_088DDC70;
    }
    goto L_088DDC68;
L_088DDC68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088DDC74;
      }
      goto L_088DDC70;
    }
L_088DDC70:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088DDC74;
L_088DDC74:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x088DDC84u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDC84u) goto L_088DDC84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDC84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x088DDC90u);
    aot_gpr_5 = (ctx.gpr[2] & 65535u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 516u, 0x08A8EA74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDC90u) goto L_088DDC90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDC90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.gpr[31] = (0x088DDCA0u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 313u, 0x08A8DAA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDCA0u) goto L_088DDCA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDCA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088DDCB0;
      }
      goto L_088DDCA8;
    }
L_088DDCA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088DDCB4;
      }
      goto L_088DDCB0;
    }
L_088DDCB0:
    aot_gpr_4 = (0u | 0u);
    goto L_088DDCB4;
L_088DDCB4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DDCD8;
      }
      goto L_088DDCD0;
    }
L_088DDCD0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088DDD20;
      }
      goto L_088DDCD8;
    }
L_088DDCD8:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DDD04;
      }
      goto L_088DDCF8;
    }
L_088DDCF8:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088DDD20;
      }
      goto L_088DDD04;
    }
L_088DDD04:
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088DDD20;
      }
      goto L_088DDD1C;
    }
L_088DDD1C:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088DDD20;
L_088DDD20:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DDD40:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DDD78u);
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDD78u) goto L_088DDD78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDD78:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[31] = (0x088DDD9Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 421u, 0x08A8E188u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDD9Cu) goto L_088DDD9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDD9C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088DDDA8u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 436u, 0x08862920u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDDA8u) goto L_088DDDA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDDA8:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DDDBCu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDDBCu) goto L_088DDDBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDDBC:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DDDDC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DDE14u);
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDE14u) goto L_088DDE14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDE14:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[31] = (0x088DDE38u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 433u, 0x08A8E2ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDE38u) goto L_088DDE38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDE38:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088DDE44u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 436u, 0x08862920u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDE44u) goto L_088DDE44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDE44:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DDE58u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDE58u) goto L_088DDE58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDE58:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DDE78:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 1u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[31] = (0x088DDEB0u);
    aot_gpr_7 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDEB0u) goto L_088DDEB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDEB0:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (2236u << 16u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
      if (branch_taken) {
          goto L_088DDEC8;
      }
      goto L_088DDEC0;
    }
L_088DDEC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088DDED0;
      }
      goto L_088DDEC8;
    }
L_088DDEC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[18] = (aot_gpr_4 + ctx.gpr[18]);
    goto L_088DDED0;
L_088DDED0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[31] = (0x088DDEE4u);
    aot_gpr_7 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDEE4u) goto L_088DDEE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDEE4:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DDEFCu);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDEFCu) goto L_088DDEFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDEFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DDF0Cu);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 472u, 0x08A8E55Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDF0Cu) goto L_088DDF0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDF0C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (0u | 2u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(50)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    goto L_088DDF34;
L_088DDF34:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(46)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DDF34;
      }
      goto L_088DDF58;
    }
L_088DDF58:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DDF68u);
    aot_gpr_6 = (0u | 11u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DDF68u) goto L_088DDF68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DDF68:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[31] = aot_run_words[6];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DDF90:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DDFB4:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DDFD8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11056)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11020)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11060)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_7 = (17279u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11024)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_7);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11064)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = ctx.fpr[16] + aot_fpr_14;
    { const float fs = ctx.fpr[19]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[17] = ctx.fpr[18] + ctx.fpr[17];
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11028)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_15 + aot_fpr_13;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[22], ctx.gpr[23], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088DE074;
      }
      goto L_088DE06C;
    }
L_088DE06C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088DE084;
      }
      goto L_088DE074;
    }
L_088DE074:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088DE084;
      }
      goto L_088DE080;
    }
L_088DE080:
    ctx.gpr[20] = (0u | 255u);
    goto L_088DE084;
L_088DE084:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DE094;
      }
      goto L_088DE08C;
    }
L_088DE08C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088DE0A0;
      }
      goto L_088DE094;
    }
L_088DE094:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088DE0A0;
      }
      goto L_088DE09C;
    }
L_088DE09C:
    ctx.gpr[19] = (0u | 255u);
    goto L_088DE0A0;
L_088DE0A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DE0B0;
      }
      goto L_088DE0A8;
    }
L_088DE0A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088DE0BC;
      }
      goto L_088DE0B0;
    }
L_088DE0B0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088DE0BC;
      }
      goto L_088DE0B8;
    }
L_088DE0B8:
    ctx.gpr[18] = (0u | 255u);
    goto L_088DE0BC;
L_088DE0BC:
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.gpr[31] = (0x088DE0C8u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DE0C8u) goto L_088DE0C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DE0C8:
    aot_gpr_6 = (aot_gpr_16 - ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[31] = (0x088DE0DCu);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 31u));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[9], ctx.gpr[10], ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DE0DCu) goto L_088DE0DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DE0DC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[22] + aot_gpr_4);
    aot_gpr_7 = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[23]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_5);
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[2] = aot_run_words[0];
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[31] = aot_run_words[8];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DE140:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11240)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (16256u << 16u);
      if (branch_taken) {
          goto L_088DE174;
      }
      goto L_088DE160;
    }
L_088DE160:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088DE18C;
      }
      goto L_088DE174;
    }
L_088DE174:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_5 = (aot_gpr_5 & 15u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088DE18C;
      }
      goto L_088DE184;
    }
L_088DE184:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088DE194;
      }
      goto L_088DE18C;
    }
L_088DE18C:
    ctx.gpr[31] = (0x088DE194u);
    goto L_088DE338;
L_088DE194:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DE1A0:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(11232), aot_gpr_5);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(11236), aot_gpr_5);
      if (branch_taken) {
          goto L_088DE1C0;
      }
      goto L_088DE1B4;
    }
L_088DE1B4:
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(11240), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088DE1CC;
      }
      goto L_088DE1C0;
    }
L_088DE1C0:
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(11240), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088DE1CC;
L_088DE1CC:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DE1D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(11236), 0u);
      if (branch_taken) {
          goto L_088DE1EC;
      }
      goto L_088DE1E4;
    }
L_088DE1E4:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(11240), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088DE1EC;
L_088DE1EC:
    aot_gpr_4 = (16179u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8576));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DE240:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_7);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6060)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6068)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_15; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6064)));
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6072)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    ctx.fpr[0] = aot_fpr_12 + ctx.fpr[16];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[0] + aot_fpr_13;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DE2B8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_7);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6060)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6068)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const float fs = aot_fpr_15; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6064)));
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6072)));
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[0] = aot_fpr_12 + aot_fpr_13;
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[0] + aot_fpr_14;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DE338:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7650)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_5 = (17008u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[20];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (0u | 24u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_7); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[20];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    aot_gpr_4 = (16256u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = ctx.fpr[22] - aot_fpr_13;
    aot_fpr_15 = ctx.fpr[22] - aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_gpr_6 = (ctx.gpr[17] << 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_16 + aot_gpr_6);
    aot_gpr_6 = (ctx.hi);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (aot_gpr_6 << 16u);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    aot_gpr_6 = (ctx.gpr[19] << 3u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6068), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_16 + aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6072), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(3520));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(3520));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6060), std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DE410u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6064), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_088DE240;
L_088DE410:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(3712));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(3712));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[31] = (0x088DE42Cu);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11068), aot_gpr_7);
    goto L_088DE240;
L_088DE42C:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(3904));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(3904));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[31] = (0x088DE448u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11072), aot_gpr_7);
    goto L_088DE240;
L_088DE448:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(4096));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(4096));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[31] = (0x088DE464u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11076), aot_gpr_7);
    goto L_088DE240;
L_088DE464:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(4288));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(4288));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[31] = (0x088DE480u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11080), aot_gpr_7);
    goto L_088DE240;
L_088DE480:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(4480));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(4480));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[31] = (0x088DE49Cu);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11084), aot_gpr_7);
    goto L_088DE240;
L_088DE49C:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(640));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(640));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[31] = (0x088DE4B8u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11088), aot_gpr_7);
    goto L_088DE240;
L_088DE4B8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11008), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(832));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(832));
    ctx.gpr[31] = (0x088DE4CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE4CC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11012), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1024));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x088DE4E0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE4E0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11016), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1216));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(1216));
    ctx.gpr[31] = (0x088DE4F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE4F4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11020), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1408));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(1408));
    ctx.gpr[31] = (0x088DE508u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE508:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11024), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1600));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(1600));
    ctx.gpr[31] = (0x088DE51Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE51C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11028), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1792));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(1792));
    ctx.gpr[31] = (0x088DE530u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE530:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11032), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1984));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(1984));
    ctx.gpr[31] = (0x088DE544u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE544:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11036), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(2176));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(2176));
    ctx.gpr[31] = (0x088DE558u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE558:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11040), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(2368));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(2368));
    ctx.gpr[31] = (0x088DE56Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE56C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11044), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(2560));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(2560));
    ctx.gpr[31] = (0x088DE580u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE580:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11048), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(2752));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(2752));
    ctx.gpr[31] = (0x088DE594u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE594:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11052), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(2944));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(2944));
    ctx.gpr[31] = (0x088DE5A8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE5A8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11056), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(3136));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(3136));
    ctx.gpr[31] = (0x088DE5BCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE5BC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11060), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(3328));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(3328));
    ctx.gpr[31] = (0x088DE5D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE5D0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11064), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(4672));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(4672));
    ctx.gpr[31] = (0x088DE5E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE5E4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(4864));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(4864));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[31] = (0x088DE600u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11104), aot_gpr_7);
    goto L_088DE240;
L_088DE600:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(5056));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(5056));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[31] = (0x088DE61Cu);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11108), aot_gpr_7);
    goto L_088DE240;
L_088DE61C:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(5248));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(5248));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[31] = (0x088DE638u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11112), aot_gpr_7);
    goto L_088DE240;
L_088DE638:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(5440));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(5440));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[31] = (0x088DE654u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11116), aot_gpr_7);
    goto L_088DE240;
L_088DE654:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(5632));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(5632));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[31] = (0x088DE670u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11120), aot_gpr_7);
    goto L_088DE240;
L_088DE670:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(5824));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(5824));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[31] = (0x088DE68Cu);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11124), aot_gpr_7);
    goto L_088DE240;
L_088DE68C:
    aot_gpr_4 = (16672u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(6016));
    aot_fpr_12 = ctx.fpr[0] / ctx.fpr[24];
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(6016));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088DE6ACu);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11128), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088DE240;
L_088DE6AC:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(6208));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(6208));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = ctx.fpr[0] / ctx.fpr[24];
    ctx.gpr[31] = (0x088DE6C4u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11132), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088DE240;
L_088DE6C4:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(6400));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(6400));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = ctx.fpr[0] / ctx.fpr[24];
    ctx.gpr[31] = (0x088DE6DCu);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11136), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088DE240;
L_088DE6DC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(6592));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(6592));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[31] = (0x088DE6F8u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(11140), static_cast<std::uint16_t>(aot_gpr_7));
    goto L_088DE240;
L_088DE6F8:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(6784));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(6784));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[31] = (0x088DE714u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(11142), static_cast<std::uint16_t>(aot_gpr_7));
    goto L_088DE240;
L_088DE714:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[17] << 4u);
    ctx.gpr[17] = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] << 4u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[19] = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(11144), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(6976));
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(6976));
    ctx.gpr[31] = (0x088DE740u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE2B8;
L_088DE740:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11148), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(7360));
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(7360));
    ctx.gpr[31] = (0x088DE754u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE2B8;
L_088DE754:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11152), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(7744));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(7744));
    ctx.gpr[31] = (0x088DE768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE768:
    aot_fpr_12 = ctx.fpr[0] / ctx.fpr[24];
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(7936));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(7936));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088DE780u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11156), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088DE240;
L_088DE780:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(8128));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(8128));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[31] = (0x088DE79Cu);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11160), aot_gpr_7);
    goto L_088DE240;
L_088DE79C:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(8320));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(8320));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[31] = (0x088DE7B8u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11164), aot_gpr_7);
    goto L_088DE240;
L_088DE7B8:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(8512));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(8512));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[31] = (0x088DE7D4u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11168), aot_gpr_7);
    goto L_088DE240;
L_088DE7D4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(8704));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(8704));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[31] = (0x088DE7F0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11172), aot_gpr_7);
    goto L_088DE240;
L_088DE7F0:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(8896));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(8896));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[31] = (0x088DE80Cu);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11176), aot_gpr_7);
    goto L_088DE240;
L_088DE80C:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(9088));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(9088));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[31] = (0x088DE828u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11180), aot_gpr_7);
    goto L_088DE240;
L_088DE828:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(9280));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(9280));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[31] = (0x088DE844u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11184), aot_gpr_7);
    goto L_088DE240;
L_088DE844:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(9472));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(9472));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[31] = (0x088DE860u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11188), aot_gpr_7);
    goto L_088DE240;
L_088DE860:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(9664));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(9664));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[31] = (0x088DE87Cu);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11192), aot_gpr_7);
    goto L_088DE240;
L_088DE87C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11196), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(9856));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(9856));
    ctx.gpr[31] = (0x088DE890u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE890:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(10048));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(10048));
    ctx.gpr[31] = (0x088DE8A4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE8A4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(10240));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(10240));
    ctx.gpr[31] = (0x088DE8B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE8B8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11208), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(10432));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(10432));
    ctx.gpr[31] = (0x088DE8CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE8CC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11212), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(10624));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(10624));
    ctx.gpr[31] = (0x088DE8E0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE8E0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11216), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(10816));
    aot_gpr_6 = (ctx.gpr[20] + static_cast<std::uint32_t>(10816));
    ctx.gpr[31] = (0x088DE8F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088DE240;
L_088DE8F4:
    aot_gpr_5 = (17332u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17460u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11220), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11228)));
    aot_gpr_5 = (17136u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32304));
      if (branch_taken) {
          goto L_088DE958;
      }
      goto L_088DE924;
    }
L_088DE924:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11228)));
    aot_gpr_5 = (16674u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11148)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_5 | 32768u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11148)));
        goto L_088DE954;
    }
    goto L_088DE954;
L_088DE954:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11148), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088DE958;
L_088DE958:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11224)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 15u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11224), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7650)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fpr[20] = aot_fpr_12 / ctx.fpr[20];
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    aot_gpr_6 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fpr[20] = aot_fpr_12 + ctx.fpr[20];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088DEA14;
      }
      goto L_088DE9AC;
    }
L_088DE9AC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088DEA14;
      }
      goto L_088DE9BC;
    }
L_088DE9BC:
    aot_fpr_12 = ctx.fpr[20] - aot_fpr_13;
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (17204u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[16];
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + aot_fpr_13;
      if (branch_taken) {
          goto L_088DEA88;
      }
      goto L_088DEA14;
    }
L_088DEA14:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (17543u << 16u);
      if (branch_taken) {
          goto L_088DEA88;
      }
      goto L_088DEA24;
    }
L_088DEA24:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088DEA88;
      }
      goto L_088DEA38;
    }
L_088DEA38:
    aot_fpr_12 = ctx.fpr[20] - aot_fpr_14;
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (17204u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[17];
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + aot_fpr_14;
    goto L_088DEA88;
L_088DEA88:
    aot_gpr_4 = (15246u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 64053u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11224)));
    aot_gpr_4 = (aot_gpr_4 << 4u);
    ctx.gpr[18] = (aot_gpr_16 + aot_gpr_4);
    ctx.gpr[31] = (0x088DEAACu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088DDF90;
L_088DEAAC:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088DEAB8u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088DDFB4;
L_088DEAB8:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[0];
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[30]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11224)));
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11236)));
    if (aot_gpr_4 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_088DEB40;
    }
    goto L_088DEB18;
L_088DEB18:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[26] = aot_fpr_12 / ctx.fpr[26];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11240)));
    ctx.fpr[26] = aot_fpr_13 + ctx.fpr[26];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] <= ctx.fpr[22])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088DEB38;
    }
    goto L_088DEB38;
L_088DEB38:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11240), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088DEB60;
      }
      goto L_088DEB40;
    }
L_088DEB40:
    ctx.fpr[26] = aot_fpr_12 / ctx.fpr[26];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11240)));
    ctx.fpr[26] = aot_fpr_13 - ctx.fpr[26];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[28] <= ctx.fpr[26])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_088DEB5C;
    }
    goto L_088DEB5C;
L_088DEB5C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11240), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088DEB60;
L_088DEB60:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11240)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088DF3F8;
      }
      goto L_088DEB74;
    }
L_088DEB74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11232)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11240)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3526)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[22] = ctx.fpr[22] - aot_fpr_12;
      if (branch_taken) {
          goto L_088DEBC0;
      }
      goto L_088DEB90;
    }
L_088DEB90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11232)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3718)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11232)));
        goto L_088DEBC4;
    }
    goto L_088DEBA8;
L_088DEBA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11232)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3910)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11232)));
        goto L_088DF068;
    }
    goto L_088DEBC0;
L_088DEBC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11232)));
    goto L_088DEBC4;
L_088DEBC4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11068)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3526)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11072)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11240)));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3718)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11076)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3910)));
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11080)));
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4102)));
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_7);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_15 = aot_fpr_15 + ctx.fpr[16];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11068), aot_gpr_7);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11084)));
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4294)));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = ctx.fpr[17] + aot_fpr_13;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11072), aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11088)));
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_7);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4486)));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    aot_fpr_12 = ctx.fpr[16] + aot_fpr_12;
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11076), aot_gpr_7);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11104)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4678)));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_15 = ctx.fpr[17] + aot_fpr_15;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11080), aot_gpr_6);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_7);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11108)));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4870)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    aot_fpr_13 = ctx.fpr[16] + aot_fpr_13;
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11084), aot_gpr_7);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11112)));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(5062)));
    aot_fpr_12 = ctx.fpr[17] + aot_fpr_12;
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11088), aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_7);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11116)));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(5254)));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11104), aot_gpr_7);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11120)));
    aot_fpr_13 = ctx.fpr[17] + aot_fpr_13;
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(5830)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    aot_fpr_15 = ctx.fpr[16] + aot_fpr_15;
    ctx.fpr[19] = std::bit_cast<float>(aot_gpr_7);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[24];
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(5446)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11108), aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11124)));
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(5638)));
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11160)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(7942)));
    ctx.gpr[15] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11128)));
    ctx.fpr[2] = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11164)));
    { const float fs = ctx.fpr[19]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8134)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11168)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[2])));
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8326)));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11172)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[12] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8518)));
    aot_fpr_15 = aot_fpr_15 + ctx.fpr[19];
    ctx.gpr[13] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11176)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[14] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8710)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11112), ctx.gpr[15]);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11116), aot_gpr_5);
    ctx.fpr[2] = std::bit_cast<float>(aot_gpr_7);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[2])));
    aot_fpr_13 = ctx.fpr[0] + aot_fpr_13;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11120), aot_gpr_5);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[10]);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    ctx.fpr[17] = ctx.fpr[18] + ctx.fpr[17];
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = ctx.fpr[16] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11124), aot_gpr_5);
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11128), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[19];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11160), aot_gpr_5);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[12]);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    aot_fpr_15 = aot_fpr_15 + ctx.fpr[16];
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11164), aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11180)));
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[13]);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8902)));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[2])));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    aot_fpr_12 = ctx.fpr[17] + aot_fpr_12;
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11168), aot_gpr_7);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11184)));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(9094)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    aot_fpr_13 = ctx.fpr[16] + aot_fpr_13;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11172), aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_7);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11188)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(9286)));
    { const float fs = aot_fpr_15; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_fpr_15 = ctx.fpr[17] + aot_fpr_15;
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11176), aot_gpr_7);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11192)));
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(9478)));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_12 = ctx.fpr[16] + aot_fpr_12;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11180), aot_gpr_6);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(10246)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_7);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_13 = ctx.fpr[17] + aot_fpr_13;
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = aot_fpr_15; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11184), aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11208)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(10438)));
    aot_fpr_15 = ctx.fpr[18] + aot_fpr_15;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11212)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11188), aot_gpr_6);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(10630)));
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11216)));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(10822)));
    ctx.fpr[19] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = ctx.fpr[17] + aot_fpr_12;
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11192), aot_gpr_6);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11220)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11208), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = ctx.fpr[16] + aot_fpr_13;
    { const float fs = ctx.fpr[19]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11212), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[17];
    { const float fs = aot_fpr_15; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11216), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = ctx.fpr[0] + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11220), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11232)));
    goto L_088DF068;
L_088DF068:
    aot_gpr_5 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(646)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11008)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11240)));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(838)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11012)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1030)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11016)));
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1222)));
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11020)));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1414)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_fpr_15 = aot_fpr_15 + ctx.fpr[16];
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11008), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_7);
    { const float fs = ctx.fpr[18]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11024)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11012), std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.fpr[2] = std::bit_cast<float>(aot_gpr_6);
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1606)));
    aot_fpr_12 = ctx.fpr[17] + aot_fpr_12;
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11028)));
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1798)));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[2])));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11016), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11032)));
    aot_fpr_15 = aot_fpr_15 + ctx.fpr[16];
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1990)));
    { const float fs = ctx.fpr[2]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11020), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[17];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11036)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_7);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2182)));
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11024), std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11040)));
    aot_fpr_12 = ctx.fpr[18] + aot_fpr_12;
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2374)));
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11028), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_7);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11044)));
    aot_fpr_15 = ctx.fpr[19] + aot_fpr_15;
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2566)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11032), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_14 = ctx.fpr[16] + aot_fpr_14;
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11048)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2758)));
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11036), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_7);
    aot_fpr_12 = ctx.fpr[17] + aot_fpr_12;
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(6022)));
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11052)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2950)));
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_7);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11040), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_15 = ctx.fpr[18] + aot_fpr_15;
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(6214)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11056)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(3142)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11044), std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11060)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(3334)));
    aot_fpr_14 = ctx.fpr[19] + aot_fpr_14;
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11064)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11132)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(11140))))));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(6406)));
    ctx.fpr[4] = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11136)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(11142))))));
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.gpr[3] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(6598)));
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(11144))))));
    ctx.gpr[13] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(6790)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[14] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(7750)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11048), std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[4])));
    aot_fpr_14 = aot_fpr_14 / ctx.fpr[24];
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    ctx.fpr[18] = ctx.fpr[18] / ctx.fpr[24];
    aot_fpr_12 = aot_fpr_15 + aot_fpr_12;
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_gpr_7);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11052), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(6988))))));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11148)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[0];
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(7372))))));
    { const float fs = ctx.fpr[19]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11152)));
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11056), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[2] + ctx.fpr[19];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[11]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11060), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[3])));
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[4])));
    aot_fpr_14 = ctx.fpr[16] + aot_fpr_14;
    { const float fs = ctx.fpr[2]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[4];
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[19]));
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[14]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11064), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11132), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[2])));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11136), std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[19] = ctx.fpr[19] / ctx.fpr[24];
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[12]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[3])));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(11140), static_cast<std::uint16_t>(aot_gpr_7));
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11156)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.fpr[4] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(9670)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11196)));
    { const float fs = ctx.fpr[3]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(9862)));
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[4])));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11200)));
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(10054)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11204)));
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(11142), static_cast<std::uint16_t>(aot_gpr_6));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[3];
    { const float fs = ctx.fpr[4]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(11144), static_cast<std::uint16_t>(aot_gpr_4));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11148), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[5] = std::bit_cast<float>(aot_gpr_7);
    aot_fpr_15 = aot_fpr_15 + ctx.fpr[17];
    { const float fs = ctx.fpr[19]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[5])));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11152), std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = ctx.fpr[0] + aot_fpr_12;
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[8]);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11156), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_14 = ctx.fpr[18] + aot_fpr_14;
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_15;
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11196), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11200), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = ctx.fpr[19] + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11204), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088DF3F8;
L_088DF3F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2900)));
    if (aot_gpr_4 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11196)));
        goto L_088DF418;
    }
    goto L_088DF404;
L_088DF404:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2900)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088DF454;
      }
      goto L_088DF414;
    }
L_088DF414:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11196)));
    goto L_088DF418;
L_088DF418:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11200)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11204)));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (0u | 255u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2884), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_7);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2892), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2888), aot_gpr_4);
    goto L_088DF454;
L_088DF454:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11008)));
    aot_gpr_4 = (17279u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11008), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11012)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11012), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11016)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11016), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11020)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11020), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11024)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11024), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11028)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11028), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11032)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11032), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11036)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11036), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11040)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11040), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11044)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11044), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11048)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11048), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11052)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11052), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11056)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11056), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11060)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11060), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11064)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11064), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11068)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11080)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11092), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11072)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11084)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11096), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11076)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11088)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11100), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11224)));
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11224)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[10] = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[10] + static_cast<std::uint32_t>(256));
    aot_gpr_6 = (ctx.gpr[10] + static_cast<std::uint32_t>(320));
    aot_gpr_7 = (ctx.gpr[10] + static_cast<std::uint32_t>(384));
    ctx.gpr[8] = (ctx.gpr[10] + static_cast<std::uint32_t>(448));
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(512));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(576));
    ctx.gpr[31] = (0x088DF5A8u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 486u, 0x08A97418u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF5A8u) goto L_088DF5A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF5A8:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (48998u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088DF61C;
      }
      goto L_088DF5CC;
    }
L_088DF5CC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8668)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088DF63C;
      }
      goto L_088DF5D8;
    }
L_088DF5D8:
    ctx.gpr[31] = (0x088DF5E0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF5E0u) goto L_088DF5E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF5E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088DF61C;
      }
      goto L_088DF5E8;
    }
L_088DF5E8:
    ctx.gpr[31] = (0x088DF5F0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF5F0u) goto L_088DF5F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF5F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088DF61C;
      }
      goto L_088DF5F8;
    }
L_088DF5F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
        goto L_088DF610;
    }
    goto L_088DF604;
L_088DF604:
    ctx.gpr[31] = (0x088DF60Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF60Cu) goto L_088DF60C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF60C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_088DF610;
L_088DF610:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088DF63C;
      }
      goto L_088DF61C;
    }
L_088DF61C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11228)));
    aot_gpr_5 = (0u | 64u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 64 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_088DF634;
    }
    goto L_088DF634;
L_088DF634:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11228), aot_gpr_5);
      if (branch_taken) {
          goto L_088DF65C;
      }
      goto L_088DF63C;
    }
L_088DF63C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(11228)));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_088DF658;
    }
    goto L_088DF658;
L_088DF658:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11228), aot_gpr_5);
    goto L_088DF65C;
L_088DF65C:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      aot_gpr_16 = aot_run_words[6];
      ctx.gpr[17] = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      ctx.gpr[19] = aot_run_words[9];
      ctx.gpr[20] = aot_run_words[10];
      ctx.gpr[31] = aot_run_words[11];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF694:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF69C:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(22544));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF6EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (2234u << 16u);
      if (branch_taken) {
          goto L_088DF714;
      }
      goto L_088DF6FC;
    }
L_088DF6FC:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(22544));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_6);
      if (branch_taken) {
          goto L_088DF714;
      }
      goto L_088DF70C;
    }
L_088DF70C:
    ctx.gpr[31] = (0x088DF714u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF714u) goto L_088DF714;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF714:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF720:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DF738u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 79u, 0x08A8C7F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF738u) goto L_088DF738;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF738:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF74C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x088DF764u);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr_5));
    goto L_088DF818;
L_088DF764:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF770:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
      if (branch_taken) {
          goto L_088DF790;
      }
      goto L_088DF784;
    }
L_088DF784:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088DF790u);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr_5));
    goto L_088DF860;
L_088DF790:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF79C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DF7ACu);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(30))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 687u, 0x08AAF2ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF7ACu) goto L_088DF7AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF7AC:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF7B8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DF7D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF7D8u) goto L_088DF7D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF7D8:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[2]));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(30))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088DF7F8;
      }
      goto L_088DF7EC;
    }
L_088DF7EC:
    ctx.gpr[31] = (0x088DF7F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 571u, 0x08AAEBC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF7F4u) goto L_088DF7F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF7F4:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_088DF7F8;
L_088DF7F8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF80C:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF818:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(30))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088DF838;
      }
      goto L_088DF830;
    }
L_088DF830:
    ctx.gpr[31] = (0x088DF838u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 644u, 0x08AAF008u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF838u) goto L_088DF838;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF838:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF844:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DF854u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(30))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 651u, 0x08AAF068u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF854u) goto L_088DF854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF854:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF860:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(30))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088DF880;
      }
      goto L_088DF878;
    }
L_088DF878:
    ctx.gpr[31] = (0x088DF880u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 661u, 0x08AAF118u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF880u) goto L_088DF880;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF880:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF88C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DF89Cu);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(30))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 670u, 0x08AAF19Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF89Cu) goto L_088DF89C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF89C:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF8A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DF8BCu);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_088DF90C;
L_088DF8BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x088DF8D4u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF8D4u) goto L_088DF8D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF8D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(88));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x088DF8ECu);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF8ECu) goto L_088DF8EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF8EC:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF90C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088DF93C;
      }
      goto L_088DF928;
    }
L_088DF928:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088DF93C;
      }
      goto L_088DF934;
    }
L_088DF934:
    ctx.gpr[31] = (0x088DF93Cu);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 70u, 0x08990464u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF93Cu) goto L_088DF93C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF93C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF950:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF958:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF960:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF968:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088DF9A0;
      }
      goto L_088DF980;
    }
L_088DF980:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x088DF98Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF98Cu) goto L_088DF98C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF98C:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088DF99Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(31984));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088DF99Cu) goto L_088DF99C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088DF99C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), 0u);
    goto L_088DF9A0;
L_088DF9A0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF9B0:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), aot_gpr_5);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DF9D0:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    aot_gpr_7 = (aot_gpr_7 >> 30u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_6 = (0u | 255u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), aot_gpr_6);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DFA08:
    ctx.gpr[15] = (ctx.gpr[11] - aot_gpr_7);
    ctx.gpr[2] = (ctx.gpr[15] + static_cast<std::uint32_t>(31));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 5u));
    ctx.gpr[2] = (ctx.gpr[2] >> 27u);
    ctx.gpr[2] = (ctx.gpr[15] + ctx.gpr[2]);
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(31));
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 5u));
    ctx.gpr[2] = (ctx.gpr[14] << 4u);
    ctx.gpr[13] = (ctx.gpr[14] << 2u);
    ctx.gpr[24] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[13]);
    ctx.gpr[2] = (ctx.gpr[24] - ctx.gpr[2]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[13]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (4736u << 16u);
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(258));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[14]);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[13]);
      if (branch_taken) {
          goto L_088DFABC;
      }
      goto L_088DFA70;
    }
L_088DFA70:
    ctx.gpr[24] = (ctx.gpr[2] >> 8u);
    ctx.gpr[25] = (15u << 16u);
    ctx.gpr[24] = (ctx.gpr[24] & ctx.gpr[25]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), ctx.gpr[24]);
    ctx.gpr[25] = (4096u << 16u);
    ctx.gpr[24] = (ctx.gpr[24] | ctx.gpr[25]);
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (256u << 16u);
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(-1));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (ctx.gpr[2] & ctx.gpr[24]);
    ctx.gpr[25] = (256u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    ctx.gpr[24] = (ctx.gpr[24] | ctx.gpr[25]);
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    goto L_088DFABC;
L_088DFABC:
    ctx.gpr[24] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[9] - ctx.gpr[24]);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[15]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (1030u << 16u);
    aot_gpr_5 = (ctx.gpr[14] | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_7 | 0u);
    aot_gpr_7 = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_7);
    ctx.gpr[13] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    aot_gpr_7 = (ctx.lo);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    aot_gpr_4 = (ctx.gpr[24] | 0u);
      if (branch_taken) {
          goto L_088DFB6C;
      }
      goto L_088DFAF8;
    }
L_088DFAF8:
    ctx.gpr[13] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    ctx.gpr[2] = (ctx.gpr[13] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[13] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[2] = (ctx.gpr[13] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    ctx.gpr[13] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    ctx.gpr[2] = (ctx.gpr[13] | 0u);
    ctx.gpr[14] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_7);
      if (branch_taken) {
          goto L_088DFB3C;
      }
      goto L_088DFB34;
    }
L_088DFB34:
    aot_gpr_5 = (ctx.gpr[11] | 0u);
    aot_gpr_4 = (ctx.gpr[9] | 0u);
    goto L_088DFB3C;
L_088DFB3C:
    aot_mem.aot_direct_store16(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[13] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088DFAF8;
      }
      goto L_088DFB6C;
    }
L_088DFB6C:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DFB74:
    ctx.gpr[9] = (aot_gpr_5 | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 2 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 << 8u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088DFC1C;
      }
      goto L_088DFB88;
    }
L_088DFB88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) <= 0;
    ctx.gpr[9] = (24320u << 16u);
      if (branch_taken) {
          goto L_088DFC34;
      }
      goto L_088DFB90;
    }
L_088DFB90:
    ctx.gpr[9] = (24576u << 16u);
    aot_gpr_7 = (aot_gpr_7 | ctx.gpr[9]);
    aot_gpr_6 = (aot_gpr_7 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (26112u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_7 = (aot_gpr_7 >> 8u);
    aot_gpr_6 = (aot_gpr_7 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (26368u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_7 = (aot_gpr_7 >> 8u);
    aot_gpr_6 = (aot_gpr_7 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (26624u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_7 = (aot_gpr_7 >> 8u);
    aot_gpr_6 = (aot_gpr_7 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088DFDCC;
      }
      goto L_088DFC1C;
    }
L_088DFC1C:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DFCBC;
      }
      goto L_088DFC28;
    }
L_088DFC28:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (25088u << 16u);
      if (branch_taken) {
          goto L_088DFD48;
      }
      goto L_088DFC30;
    }
L_088DFC30:
    ctx.gpr[9] = (24320u << 16u);
    goto L_088DFC34;
L_088DFC34:
    aot_gpr_7 = (aot_gpr_7 | ctx.gpr[9]);
    aot_gpr_6 = (aot_gpr_7 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (25344u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_7 = (aot_gpr_7 >> 8u);
    aot_gpr_6 = (aot_gpr_7 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (25600u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_7 = (aot_gpr_7 >> 8u);
    aot_gpr_6 = (aot_gpr_7 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (25856u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_7 = (aot_gpr_7 >> 8u);
    aot_gpr_6 = (aot_gpr_7 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088DFDCC;
      }
      goto L_088DFCBC;
    }
L_088DFCBC:
    ctx.gpr[9] = (24832u << 16u);
    aot_gpr_7 = (aot_gpr_7 | ctx.gpr[9]);
    aot_gpr_6 = (aot_gpr_7 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (26880u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_7 = (aot_gpr_7 >> 8u);
    aot_gpr_6 = (aot_gpr_7 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (27136u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_7 = (aot_gpr_7 >> 8u);
    aot_gpr_6 = (aot_gpr_7 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (27392u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_7 = (aot_gpr_7 >> 8u);
    aot_gpr_6 = (aot_gpr_7 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088DFDCC;
      }
      goto L_088DFD48;
    }
L_088DFD48:
    aot_gpr_7 = (aot_gpr_7 | ctx.gpr[9]);
    aot_gpr_6 = (aot_gpr_7 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (27648u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_7 = (aot_gpr_7 >> 8u);
    aot_gpr_6 = (aot_gpr_7 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (27904u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_7 = (aot_gpr_7 >> 8u);
    aot_gpr_6 = (aot_gpr_7 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (28160u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_7 = (aot_gpr_7 >> 8u);
    aot_gpr_6 = (aot_gpr_7 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_088DFDCC;
L_088DFDCC:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DFDD4:
    aot_gpr_7 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (256u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 & aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088DFE14;
      }
      goto L_088DFDF0;
    }
L_088DFDF0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_7) <= 0;
      if (branch_taken) {
          goto L_088DFE28;
      }
      goto L_088DFDF8;
    }
L_088DFDF8:
    aot_gpr_7 = (37632u << 16u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088DFE78;
      }
      goto L_088DFE14;
    }
L_088DFE14:
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_7) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DFE44;
      }
      goto L_088DFE20;
    }
L_088DFE20:
    { const bool branch_taken = aot_gpr_7 != 0u;
      if (branch_taken) {
          goto L_088DFE60;
      }
      goto L_088DFE28;
    }
L_088DFE28:
    aot_gpr_7 = (36864u << 16u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088DFE78;
      }
      goto L_088DFE44;
    }
L_088DFE44:
    aot_gpr_7 = (38400u << 16u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088DFE78;
      }
      goto L_088DFE60;
    }
L_088DFE60:
    aot_gpr_7 = (39168u << 16u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_088DFE78;
L_088DFE78:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088DFE80:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    aot_gpr_7 = (aot_gpr_7 << 10u);
    aot_gpr_5 = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_7 | aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_7 = (54016u << 16u);
    aot_gpr_6 = (aot_gpr_6 << 9u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(63));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 6u));
    aot_gpr_7 = (aot_gpr_7 >> 26u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_7);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 6u));
    aot_gpr_5 = (aot_gpr_7 << 3u);
    ctx.gpr[10] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[10]);
    aot_gpr_5 = (ctx.gpr[11] - aot_gpr_5);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[10]);
    ctx.gpr[10] = (4736u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(284));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_7 + aot_gpr_7);
    aot_gpr_7 = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_7);
      if (branch_taken) {
          goto L_088DFF64;
      }
      goto L_088DFF18;
    }
L_088DFF18:
    ctx.gpr[10] = (aot_gpr_5 >> 8u);
    ctx.gpr[11] = (15u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] & ctx.gpr[11]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.gpr[11] = (4096u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[11]);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (256u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (aot_gpr_5 & ctx.gpr[10]);
    ctx.gpr[11] = (256u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_7);
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[11]);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_7);
    goto L_088DFF64;
L_088DFF64:
    ctx.gpr[10] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (1030u << 16u);
    aot_gpr_4 = (aot_gpr_6 | aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (54016u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
      if (branch_taken) {
          goto L_088DFFFC;
      }
      goto L_088DFFA8;
    }
L_088DFFA8:
    aot_gpr_6 = (aot_gpr_6 << 16u);
    goto L_088DFFAC;
L_088DFFAC:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    ctx.gpr[11] = (static_cast<std::int32_t>(aot_gpr_7) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    aot_gpr_5 = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_088DFFD8;
      }
      goto L_088DFFD4;
    }
L_088DFFD4:
    aot_gpr_4 = (aot_gpr_7 | 0u);
    goto L_088DFFD8;
L_088DFFD8:
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (aot_gpr_6 | aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DFFAC;
      }
      goto L_088DFFFC;
    }
L_088DFFFC:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0054(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0054_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_54(Runtime &runtime) {
    runtime.register_generated_unit(54u, 0x088DC000u, 16384u, &recomp_unit_0054, &recomp_unit_0054_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x088DC004u, &recomp_unit_0054, "recomp_unit_0054",
                                          kEntryMasks_recomp_unit_0054, 64u);
}
} // namespace psprecomp
