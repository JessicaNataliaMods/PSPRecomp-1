#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0189[64] = {
    0x1045490028848425ull, 0x1222104149000009ull, 0xD10916884A4848A2ull, 0x80112840015B44A8ull,
    0x92AA2C0A40229512ull, 0x8C902232190C4321ull, 0x08410000041848C4ull, 0x0000000100400001ull,
    0x0CB04108206AA020ull, 0x0100141140000240ull, 0x0000000000000000ull, 0x0404800000040000ull,
    0x0004092110810020ull, 0x8006186184990842ull, 0x021000000002550Aull, 0x0480108008400420ull,
    0x008000A952800000ull, 0x0044004400001020ull, 0x1800211108110022ull, 0x0000005040142011ull,
    0x4001004000005000ull, 0x0820000412094895ull, 0x8400800000890802ull, 0x8281040008114000ull,
    0x0022420041040000ull, 0x4045002020052800ull, 0x5416AA4248012001ull, 0x4C70904211554555ull,
    0x00100000AAA00001ull, 0x0000000000000000ull, 0x0000000000000000ull, 0xA0A0012480000000ull,
    0x00802A4000001004ull, 0x10114AA0002A0000ull, 0x4088685422424101ull, 0x4828000000004004ull,
    0x000020C224240010ull, 0x0000000000000000ull, 0x0000004920000000ull, 0x2110842211450A10ull,
    0x0408040010800084ull, 0x2A00000400000C02ull, 0x1000008100211020ull, 0x14002002042A0000ull,
    0x0005000800101000ull, 0x0100014002000404ull, 0x01014000A0010001ull, 0x00A9000200606280ull,
    0x0020128800000200ull, 0x0000008000000000ull, 0x0000000000200000ull, 0x0000000000000000ull,
    0x4500000228000200ull, 0x1042820025440002ull, 0x0010402840105001ull, 0x0010002510000000ull,
    0x4140008408504000ull, 0x020000004100A100ull, 0x2055000100022000ull, 0x214048A4840AA955ull,
    0x0040084004240400ull, 0x040004200010A001ull, 0x08004010010A0010ull, 0x9080115414050002ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0189[64] = {
    1u, 17u, 29u, 50u, 67u, 88u, 108u, 119u, 122u, 138u, 146u, 146u, 150u, 159u, 176u, 185u,
    193u, 202u, 208u, 219u, 227u, 232u, 245u, 253u, 262u, 269u, 279u, 296u, 319u, 327u, 327u, 327u,
    335u, 342u, 353u, 369u, 375u, 384u, 384u, 388u, 403u, 410u, 417u, 424u, 432u, 437u, 443u, 450u,
    461u, 467u, 468u, 469u, 469u, 476u, 487u, 496u, 501u, 510u, 516u, 524u, 544u, 551u, 558u, 565u,
};
void recomp_unit_0189_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,6,31,7 fprs=12,13,14,20 gpr_occ=3983 fpr_occ=1260 gpr_total=5447 fpr_total=2067
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_7 = ctx.gpr[7];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[31] = aot_gpr_31; ctx.gpr[7] = aot_gpr_7; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_7 = ctx.gpr[7]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AF8000u;
        entry_id = 0u;
        if (entry_delta < 16384u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0189[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0189[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08AF8000;
    case 2u: goto L_08AF8008;
    case 3u: goto L_08AF8014;
    case 4u: goto L_08AF8028;
    case 5u: goto L_08AF803C;
    case 6u: goto L_08AF8048;
    case 7u: goto L_08AF805C;
    case 8u: goto L_08AF806C;
    case 9u: goto L_08AF8074;
    case 10u: goto L_08AF80A0;
    case 11u: goto L_08AF80AC;
    case 12u: goto L_08AF80B8;
    case 13u: goto L_08AF80C0;
    case 14u: goto L_08AF80C8;
    case 15u: goto L_08AF80D8;
    case 16u: goto L_08AF80F0;
    case 17u: goto L_08AF8100;
    case 18u: goto L_08AF810C;
    case 19u: goto L_08AF8160;
    case 20u: goto L_08AF816C;
    case 21u: goto L_08AF8178;
    case 22u: goto L_08AF8180;
    case 23u: goto L_08AF8198;
    case 24u: goto L_08AF81B0;
    case 25u: goto L_08AF81C4;
    case 26u: goto L_08AF81D4;
    case 27u: goto L_08AF81E4;
    case 28u: goto L_08AF81F0;
    case 29u: goto L_08AF8204;
    case 30u: goto L_08AF8214;
    case 31u: goto L_08AF821C;
    case 32u: goto L_08AF822C;
    case 33u: goto L_08AF8238;
    case 34u: goto L_08AF824C;
    case 35u: goto L_08AF8258;
    case 36u: goto L_08AF8264;
    case 37u: goto L_08AF826C;
    case 38u: goto L_08AF8278;
    case 39u: goto L_08AF828C;
    case 40u: goto L_08AF829C;
    case 41u: goto L_08AF82A4;
    case 42u: goto L_08AF82A8;
    case 43u: goto L_08AF82B0;
    case 44u: goto L_08AF82C0;
    case 45u: goto L_08AF82CC;
    case 46u: goto L_08AF82E0;
    case 47u: goto L_08AF82F0;
    case 48u: goto L_08AF82F8;
    case 49u: goto L_08AF82FC;
    case 50u: goto L_08AF830C;
    case 51u: goto L_08AF8314;
    case 52u: goto L_08AF831C;
    case 53u: goto L_08AF8328;
    case 54u: goto L_08AF8338;
    case 55u: goto L_08AF8340;
    case 56u: goto L_08AF8344;
    case 57u: goto L_08AF834C;
    case 58u: goto L_08AF8350;
    case 59u: goto L_08AF8358;
    case 60u: goto L_08AF8360;
    case 61u: goto L_08AF8398;
    case 62u: goto L_08AF83AC;
    case 63u: goto L_08AF83B4;
    case 64u: goto L_08AF83C0;
    case 65u: goto L_08AF83D0;
    case 66u: goto L_08AF83FC;
    case 67u: goto L_08AF8404;
    case 68u: goto L_08AF8410;
    case 69u: goto L_08AF8420;
    case 70u: goto L_08AF8428;
    case 71u: goto L_08AF8430;
    case 72u: goto L_08AF843C;
    case 73u: goto L_08AF8444;
    case 74u: goto L_08AF8454;
    case 75u: goto L_08AF8478;
    case 76u: goto L_08AF8484;
    case 77u: goto L_08AF848C;
    case 78u: goto L_08AF84A8;
    case 79u: goto L_08AF84AC;
    case 80u: goto L_08AF84B4;
    case 81u: goto L_08AF84C4;
    case 82u: goto L_08AF84CC;
    case 83u: goto L_08AF84D4;
    case 84u: goto L_08AF84DC;
    case 85u: goto L_08AF84E4;
    case 86u: goto L_08AF84F0;
    case 87u: goto L_08AF84FC;
    case 88u: goto L_08AF8500;
    case 89u: goto L_08AF8514;
    case 90u: goto L_08AF8520;
    case 91u: goto L_08AF8524;
    case 92u: goto L_08AF8538;
    case 93u: goto L_08AF8548;
    case 94u: goto L_08AF854C;
    case 95u: goto L_08AF8560;
    case 96u: goto L_08AF856C;
    case 97u: goto L_08AF8570;
    case 98u: goto L_08AF8584;
    case 99u: goto L_08AF8590;
    case 100u: goto L_08AF8594;
    case 101u: goto L_08AF85A4;
    case 102u: goto L_08AF85B4;
    case 103u: goto L_08AF85D0;
    case 104u: goto L_08AF85DC;
    case 105u: goto L_08AF85E8;
    case 106u: goto L_08AF85EC;
    case 107u: goto L_08AF85FC;
    case 108u: goto L_08AF8608;
    case 109u: goto L_08AF8618;
    case 110u: goto L_08AF861C;
    case 111u: goto L_08AF862C;
    case 112u: goto L_08AF8638;
    case 113u: goto L_08AF864C;
    case 114u: goto L_08AF8650;
    case 115u: goto L_08AF8668;
    case 116u: goto L_08AF86C0;
    case 117u: goto L_08AF86D8;
    case 118u: goto L_08AF86EC;
    case 119u: goto L_08AF8700;
    case 120u: goto L_08AF8758;
    case 121u: goto L_08AF8780;
    case 122u: goto L_08AF8814;
    case 123u: goto L_08AF8834;
    case 124u: goto L_08AF883C;
    case 125u: goto L_08AF8844;
    case 126u: goto L_08AF884C;
    case 127u: goto L_08AF8854;
    case 128u: goto L_08AF8858;
    case 129u: goto L_08AF8874;
    case 130u: goto L_08AF888C;
    case 131u: goto L_08AF88A0;
    case 132u: goto L_08AF88B8;
    case 133u: goto L_08AF88D0;
    case 134u: goto L_08AF88D4;
    case 135u: goto L_08AF88DC;
    case 136u: goto L_08AF88E8;
    case 137u: goto L_08AF88EC;
    case 138u: goto L_08AF8918;
    case 139u: goto L_08AF8924;
    case 140u: goto L_08AF8978;
    case 141u: goto L_08AF8980;
    case 142u: goto L_08AF8990;
    case 143u: goto L_08AF89A8;
    case 144u: goto L_08AF89B0;
    case 145u: goto L_08AF89E0;
    case 146u: goto L_08AF8B48;
    case 147u: goto L_08AF8BBC;
    case 148u: goto L_08AF8BC8;
    case 149u: goto L_08AF8BE8;
    case 150u: goto L_08AF8C14;
    case 151u: goto L_08AF8C40;
    case 152u: goto L_08AF8C5C;
    case 153u: goto L_08AF8C70;
    case 154u: goto L_08AF8C80;
    case 155u: goto L_08AF8C94;
    case 156u: goto L_08AF8CA0;
    case 157u: goto L_08AF8CAC;
    case 158u: goto L_08AF8CC8;
    case 159u: goto L_08AF8D04;
    case 160u: goto L_08AF8D18;
    case 161u: goto L_08AF8D2C;
    case 162u: goto L_08AF8D40;
    case 163u: goto L_08AF8D4C;
    case 164u: goto L_08AF8D50;
    case 165u: goto L_08AF8D5C;
    case 166u: goto L_08AF8D68;
    case 167u: goto L_08AF8D7C;
    case 168u: goto L_08AF8D80;
    case 169u: goto L_08AF8D94;
    case 170u: goto L_08AF8D98;
    case 171u: goto L_08AF8DAC;
    case 172u: goto L_08AF8DB0;
    case 173u: goto L_08AF8DC4;
    case 174u: goto L_08AF8DC8;
    case 175u: goto L_08AF8DFC;
    case 176u: goto L_08AF8E04;
    case 177u: goto L_08AF8E0C;
    case 178u: goto L_08AF8E20;
    case 179u: goto L_08AF8E28;
    case 180u: goto L_08AF8E30;
    case 181u: goto L_08AF8E38;
    case 182u: goto L_08AF8E44;
    case 183u: goto L_08AF8ED0;
    case 184u: goto L_08AF8EE4;
    case 185u: goto L_08AF8F14;
    case 186u: goto L_08AF8F28;
    case 187u: goto L_08AF8F58;
    case 188u: goto L_08AF8F6C;
    case 189u: goto L_08AF8F9C;
    case 190u: goto L_08AF8FB0;
    case 191u: goto L_08AF8FDC;
    case 192u: goto L_08AF8FE8;
    case 193u: goto L_08AF905C;
    case 194u: goto L_08AF9064;
    case 195u: goto L_08AF9070;
    case 196u: goto L_08AF9078;
    case 197u: goto L_08AF9080;
    case 198u: goto L_08AF908C;
    case 199u: goto L_08AF9094;
    case 200u: goto L_08AF909C;
    case 201u: goto L_08AF90DC;
    case 202u: goto L_08AF9114;
    case 203u: goto L_08AF9130;
    case 204u: goto L_08AF9188;
    case 205u: goto L_08AF9198;
    case 206u: goto L_08AF91C8;
    case 207u: goto L_08AF91D8;
    case 208u: goto L_08AF9204;
    case 209u: goto L_08AF9214;
    case 210u: goto L_08AF9240;
    case 211u: goto L_08AF9250;
    case 212u: goto L_08AF926C;
    case 213u: goto L_08AF9280;
    case 214u: goto L_08AF9290;
    case 215u: goto L_08AF92A0;
    case 216u: goto L_08AF92B4;
    case 217u: goto L_08AF92EC;
    case 218u: goto L_08AF92F0;
    case 219u: goto L_08AF9300;
    case 220u: goto L_08AF9310;
    case 221u: goto L_08AF9334;
    case 222u: goto L_08AF9348;
    case 223u: goto L_08AF9350;
    case 224u: goto L_08AF9378;
    case 225u: goto L_08AF9390;
    case 226u: goto L_08AF9398;
    case 227u: goto L_08AF9430;
    case 228u: goto L_08AF9438;
    case 229u: goto L_08AF9498;
    case 230u: goto L_08AF94C0;
    case 231u: goto L_08AF94F8;
    case 232u: goto L_08AF9500;
    case 233u: goto L_08AF9508;
    case 234u: goto L_08AF9510;
    case 235u: goto L_08AF951C;
    case 236u: goto L_08AF952C;
    case 237u: goto L_08AF9538;
    case 238u: goto L_08AF9540;
    case 239u: goto L_08AF954C;
    case 240u: goto L_08AF9564;
    case 241u: goto L_08AF9570;
    case 242u: goto L_08AF9588;
    case 243u: goto L_08AF95D4;
    case 244u: goto L_08AF95EC;
    case 245u: goto L_08AF9604;
    case 246u: goto L_08AF962C;
    case 247u: goto L_08AF9640;
    case 248u: goto L_08AF964C;
    case 249u: goto L_08AF965C;
    case 250u: goto L_08AF96BC;
    case 251u: goto L_08AF96E8;
    case 252u: goto L_08AF96FC;
    case 253u: goto L_08AF9738;
    case 254u: goto L_08AF9740;
    case 255u: goto L_08AF9750;
    case 256u: goto L_08AF976C;
    case 257u: goto L_08AF97A8;
    case 258u: goto L_08AF97C0;
    case 259u: goto L_08AF97DC;
    case 260u: goto L_08AF97E4;
    case 261u: goto L_08AF97FC;
    case 262u: goto L_08AF9848;
    case 263u: goto L_08AF9860;
    case 264u: goto L_08AF9878;
    case 265u: goto L_08AF98A4;
    case 266u: goto L_08AF98B8;
    case 267u: goto L_08AF98C4;
    case 268u: goto L_08AF98D4;
    case 269u: goto L_08AF992C;
    case 270u: goto L_08AF9934;
    case 271u: goto L_08AF9940;
    case 272u: goto L_08AF9948;
    case 273u: goto L_08AF9974;
    case 274u: goto L_08AF9994;
    case 275u: goto L_08AF99C0;
    case 276u: goto L_08AF99C8;
    case 277u: goto L_08AF99D8;
    case 278u: goto L_08AF99F8;
    case 279u: goto L_08AF9A00;
    case 280u: goto L_08AF9A34;
    case 281u: goto L_08AF9A40;
    case 282u: goto L_08AF9A6C;
    case 283u: goto L_08AF9A78;
    case 284u: goto L_08AF9A84;
    case 285u: goto L_08AF9A98;
    case 286u: goto L_08AF9AA4;
    case 287u: goto L_08AF9AAC;
    case 288u: goto L_08AF9AB4;
    case 289u: goto L_08AF9ABC;
    case 290u: goto L_08AF9AC4;
    case 291u: goto L_08AF9AC8;
    case 292u: goto L_08AF9AD0;
    case 293u: goto L_08AF9AE8;
    case 294u: goto L_08AF9AF0;
    case 295u: goto L_08AF9AF8;
    case 296u: goto L_08AF9B00;
    case 297u: goto L_08AF9B08;
    case 298u: goto L_08AF9B10;
    case 299u: goto L_08AF9B18;
    case 300u: goto L_08AF9B20;
    case 301u: goto L_08AF9B28;
    case 302u: goto L_08AF9B38;
    case 303u: goto L_08AF9B40;
    case 304u: goto L_08AF9B48;
    case 305u: goto L_08AF9B50;
    case 306u: goto L_08AF9B58;
    case 307u: goto L_08AF9B60;
    case 308u: goto L_08AF9B70;
    case 309u: goto L_08AF9B84;
    case 310u: goto L_08AF9B98;
    case 311u: goto L_08AF9BB0;
    case 312u: goto L_08AF9BBC;
    case 313u: goto L_08AF9BD0;
    case 314u: goto L_08AF9BD4;
    case 315u: goto L_08AF9BD8;
    case 316u: goto L_08AF9BE8;
    case 317u: goto L_08AF9BEC;
    case 318u: goto L_08AF9BF8;
    case 319u: goto L_08AF9C00;
    case 320u: goto L_08AF9C54;
    case 321u: goto L_08AF9C5C;
    case 322u: goto L_08AF9C64;
    case 323u: goto L_08AF9C6C;
    case 324u: goto L_08AF9C74;
    case 325u: goto L_08AF9C7C;
    case 326u: goto L_08AF9CD0;
    case 327u: goto L_08AF9F7C;
    case 328u: goto L_08AF9F88;
    case 329u: goto L_08AF9F94;
    case 330u: goto L_08AF9FA0;
    case 331u: goto L_08AF9FD4;
    case 332u: goto L_08AF9FDC;
    case 333u: goto L_08AF9FF4;
    case 334u: goto L_08AF9FFC;
    case 335u: goto L_08AFA008;
    case 336u: goto L_08AFA030;
    case 337u: goto L_08AFA098;
    case 338u: goto L_08AFA0A4;
    case 339u: goto L_08AFA0AC;
    case 340u: goto L_08AFA0B4;
    case 341u: goto L_08AFA0DC;
    case 342u: goto L_08AFA144;
    case 343u: goto L_08AFA14C;
    case 344u: goto L_08AFA154;
    case 345u: goto L_08AFA194;
    case 346u: goto L_08AFA19C;
    case 347u: goto L_08AFA1A4;
    case 348u: goto L_08AFA1AC;
    case 349u: goto L_08AFA1B8;
    case 350u: goto L_08AFA1C0;
    case 351u: goto L_08AFA1D0;
    case 352u: goto L_08AFA1F0;
    case 353u: goto L_08AFA200;
    case 354u: goto L_08AFA220;
    case 355u: goto L_08AFA238;
    case 356u: goto L_08AFA244;
    case 357u: goto L_08AFA258;
    case 358u: goto L_08AFA264;
    case 359u: goto L_08AFA274;
    case 360u: goto L_08AFA288;
    case 361u: goto L_08AFA290;
    case 362u: goto L_08AFA298;
    case 363u: goto L_08AFA2AC;
    case 364u: goto L_08AFA2B4;
    case 365u: goto L_08AFA2B8;
    case 366u: goto L_08AFA2CC;
    case 367u: goto L_08AFA2DC;
    case 368u: goto L_08AFA2F8;
    case 369u: goto L_08AFA308;
    case 370u: goto L_08AFA338;
    case 371u: goto L_08AFA3CC;
    case 372u: goto L_08AFA3D4;
    case 373u: goto L_08AFA3EC;
    case 374u: goto L_08AFA3F8;
    case 375u: goto L_08AFA410;
    case 376u: goto L_08AFA448;
    case 377u: goto L_08AFA454;
    case 378u: goto L_08AFA468;
    case 379u: goto L_08AFA474;
    case 380u: goto L_08AFA484;
    case 381u: goto L_08AFA498;
    case 382u: goto L_08AFA49C;
    case 383u: goto L_08AFA4B4;
    case 384u: goto L_08AFA674;
    case 385u: goto L_08AFA680;
    case 386u: goto L_08AFA68C;
    case 387u: goto L_08AFA698;
    case 388u: goto L_08AFA710;
    case 389u: goto L_08AFA724;
    case 390u: goto L_08AFA72C;
    case 391u: goto L_08AFA740;
    case 392u: goto L_08AFA748;
    case 393u: goto L_08AFA758;
    case 394u: goto L_08AFA760;
    case 395u: goto L_08AFA770;
    case 396u: goto L_08AFA784;
    case 397u: goto L_08AFA794;
    case 398u: goto L_08AFA7A8;
    case 399u: goto L_08AFA7BC;
    case 400u: goto L_08AFA7D0;
    case 401u: goto L_08AFA7E0;
    case 402u: goto L_08AFA7F4;
    case 403u: goto L_08AFA808;
    case 404u: goto L_08AFA81C;
    case 405u: goto L_08AFA85C;
    case 406u: goto L_08AFA870;
    case 407u: goto L_08AFA8A8;
    case 408u: goto L_08AFA8CC;
    case 409u: goto L_08AFA8E8;
    case 410u: goto L_08AFA904;
    case 411u: goto L_08AFA928;
    case 412u: goto L_08AFA92C;
    case 413u: goto L_08AFA988;
    case 414u: goto L_08AFA9E4;
    case 415u: goto L_08AFA9EC;
    case 416u: goto L_08AFA9F4;
    case 417u: goto L_08AFAA14;
    case 418u: goto L_08AFAA30;
    case 419u: goto L_08AFAA40;
    case 420u: goto L_08AFAA54;
    case 421u: goto L_08AFAA80;
    case 422u: goto L_08AFAA9C;
    case 423u: goto L_08AFAAF0;
    case 424u: goto L_08AFAB44;
    case 425u: goto L_08AFAB4C;
    case 426u: goto L_08AFAB54;
    case 427u: goto L_08AFAB68;
    case 428u: goto L_08AFAB84;
    case 429u: goto L_08AFABB4;
    case 430u: goto L_08AFABE8;
    case 431u: goto L_08AFABF0;
    case 432u: goto L_08AFAC30;
    case 433u: goto L_08AFAC50;
    case 434u: goto L_08AFAC8C;
    case 435u: goto L_08AFACC0;
    case 436u: goto L_08AFACC8;
    case 437u: goto L_08AFAD08;
    case 438u: goto L_08AFAD28;
    case 439u: goto L_08AFAD64;
    case 440u: goto L_08AFAD98;
    case 441u: goto L_08AFADA0;
    case 442u: goto L_08AFADE0;
    case 443u: goto L_08AFAE00;
    case 444u: goto L_08AFAE40;
    case 445u: goto L_08AFAE74;
    case 446u: goto L_08AFAE7C;
    case 447u: goto L_08AFAEB8;
    case 448u: goto L_08AFAEC0;
    case 449u: goto L_08AFAEE0;
    case 450u: goto L_08AFAF1C;
    case 451u: goto L_08AFAF24;
    case 452u: goto L_08AFAF34;
    case 453u: goto L_08AFAF38;
    case 454u: goto L_08AFAF54;
    case 455u: goto L_08AFAF58;
    case 456u: goto L_08AFAF84;
    case 457u: goto L_08AFAFC0;
    case 458u: goto L_08AFAFCC;
    case 459u: goto L_08AFAFD4;
    case 460u: goto L_08AFAFDC;
    case 461u: goto L_08AFB024;
    case 462u: goto L_08AFB08C;
    case 463u: goto L_08AFB09C;
    case 464u: goto L_08AFB0A4;
    case 465u: goto L_08AFB0B0;
    case 466u: goto L_08AFB0D4;
    case 467u: goto L_08AFB19C;
    case 468u: goto L_08AFB254;
    case 469u: goto L_08AFB424;
    case 470u: goto L_08AFB46C;
    case 471u: goto L_08AFB474;
    case 472u: goto L_08AFB484;
    case 473u: goto L_08AFB4E0;
    case 474u: goto L_08AFB4E8;
    case 475u: goto L_08AFB4F8;
    case 476u: goto L_08AFB504;
    case 477u: goto L_08AFB548;
    case 478u: goto L_08AFB558;
    case 479u: goto L_08AFB560;
    case 480u: goto L_08AFB568;
    case 481u: goto L_08AFB574;
    case 482u: goto L_08AFB5A4;
    case 483u: goto L_08AFB5BC;
    case 484u: goto L_08AFB5C4;
    case 485u: goto L_08AFB5D8;
    case 486u: goto L_08AFB5F0;
    case 487u: goto L_08AFB600;
    case 488u: goto L_08AFB630;
    case 489u: goto L_08AFB638;
    case 490u: goto L_08AFB650;
    case 491u: goto L_08AFB678;
    case 492u: goto L_08AFB68C;
    case 493u: goto L_08AFB694;
    case 494u: goto L_08AFB6B8;
    case 495u: goto L_08AFB6D0;
    case 496u: goto L_08AFB770;
    case 497u: goto L_08AFB780;
    case 498u: goto L_08AFB788;
    case 499u: goto L_08AFB794;
    case 500u: goto L_08AFB7D0;
    case 501u: goto L_08AFB838;
    case 502u: goto L_08AFB850;
    case 503u: goto L_08AFB858;
    case 504u: goto L_08AFB86C;
    case 505u: goto L_08AFB888;
    case 506u: goto L_08AFB89C;
    case 507u: goto L_08AFB8D8;
    case 508u: goto L_08AFB8E0;
    case 509u: goto L_08AFB8F8;
    case 510u: goto L_08AFB920;
    case 511u: goto L_08AFB934;
    case 512u: goto L_08AFB93C;
    case 513u: goto L_08AFB960;
    case 514u: goto L_08AFB978;
    case 515u: goto L_08AFB9E4;
    case 516u: goto L_08AFBA34;
    case 517u: goto L_08AFBA44;
    case 518u: goto L_08AFBA80;
    case 519u: goto L_08AFBAC0;
    case 520u: goto L_08AFBAC8;
    case 521u: goto L_08AFBAD0;
    case 522u: goto L_08AFBAD8;
    case 523u: goto L_08AFBAF4;
    case 524u: goto L_08AFBB00;
    case 525u: goto L_08AFBB08;
    case 526u: goto L_08AFBB10;
    case 527u: goto L_08AFBB18;
    case 528u: goto L_08AFBB20;
    case 529u: goto L_08AFBB2C;
    case 530u: goto L_08AFBB34;
    case 531u: goto L_08AFBB3C;
    case 532u: goto L_08AFBB44;
    case 533u: goto L_08AFBB4C;
    case 534u: goto L_08AFBB68;
    case 535u: goto L_08AFBB7C;
    case 536u: goto L_08AFBB88;
    case 537u: goto L_08AFBB94;
    case 538u: goto L_08AFBB9C;
    case 539u: goto L_08AFBBAC;
    case 540u: goto L_08AFBBB8;
    case 541u: goto L_08AFBBD8;
    case 542u: goto L_08AFBBE0;
    case 543u: goto L_08AFBBF4;
    case 544u: goto L_08AFBC28;
    case 545u: goto L_08AFBC48;
    case 546u: goto L_08AFBC54;
    case 547u: goto L_08AFBC68;
    case 548u: goto L_08AFBC98;
    case 549u: goto L_08AFBCAC;
    case 550u: goto L_08AFBCD8;
    case 551u: goto L_08AFBD00;
    case 552u: goto L_08AFBD34;
    case 553u: goto L_08AFBD3C;
    case 554u: goto L_08AFBD50;
    case 555u: goto L_08AFBD94;
    case 556u: goto L_08AFBDA8;
    case 557u: goto L_08AFBDE8;
    case 558u: goto L_08AFBE10;
    case 559u: goto L_08AFBE44;
    case 560u: goto L_08AFBE4C;
    case 561u: goto L_08AFBE60;
    case 562u: goto L_08AFBE90;
    case 563u: goto L_08AFBEB8;
    case 564u: goto L_08AFBEEC;
    case 565u: goto L_08AFBF04;
    case 566u: goto L_08AFBF40;
    case 567u: goto L_08AFBF48;
    case 568u: goto L_08AFBF68;
    case 569u: goto L_08AFBF70;
    case 570u: goto L_08AFBF88;
    case 571u: goto L_08AFBF90;
    case 572u: goto L_08AFBF98;
    case 573u: goto L_08AFBFA0;
    case 574u: goto L_08AFBFB0;
    case 575u: goto L_08AFBFDC;
    case 576u: goto L_08AFBFF0;
    case 577u: goto L_08AFBFFC;
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
L_08AF8000:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08AF8014;
      }
      goto L_08AF8008;
    }
L_08AF8008:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(56));
    aot_gpr_31 = (0x08AF8014u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8014u) goto L_08AF8014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8014:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
      if (branch_taken) {
          goto L_08AF80A0;
      }
      goto L_08AF8028;
    }
L_08AF8028:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AF8048;
      }
      goto L_08AF803C;
    }
L_08AF803C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AF8048u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8048u) goto L_08AF8048;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8048:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_08AF80A0;
      }
      goto L_08AF805C;
    }
L_08AF805C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AF8074;
      }
      goto L_08AF806C;
    }
L_08AF806C:
    aot_gpr_31 = (0x08AF8074u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(56));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8074u) goto L_08AF8074;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8074:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(56));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(77));
    aot_gpr_31 = (0x08AF80A0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 449u, 0x08AF65F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF80A0u) goto L_08AF80A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF80A0:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08AF80ACu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF80ACu) goto L_08AF80AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF80AC:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AF80D8;
      }
      goto L_08AF80B8;
    }
L_08AF80B8:
    aot_gpr_31 = (0x08AF80C0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF80C0u) goto L_08AF80C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF80C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF80D8;
      }
      goto L_08AF80C8;
    }
L_08AF80C8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(632));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF80D8u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF80D8u) goto L_08AF80D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF80D8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF80F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AF8100u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1324), aot_gpr_5);
    goto L_08AF8398;
L_08AF8100:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF810C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[9] & 255u);
    aot_gpr_7 = (aot_gpr_7 - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_7 + ctx.gpr[9]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    aot_gpr_7 = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AF816C;
      }
      goto L_08AF8160;
    }
L_08AF8160:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_7);
      if (branch_taken) {
          goto L_08AF8178;
      }
      goto L_08AF816C;
    }
L_08AF816C:
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_7);
    goto L_08AF8178;
L_08AF8178:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF81D4;
      }
      goto L_08AF8180;
    }
L_08AF8180:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[17] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x08AF8198u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8198u) goto L_08AF8198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8198:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      aot_gpr_7 = aot_run_words[2];
    }
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AF81D4;
      }
      goto L_08AF81B0;
    }
L_08AF81B0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x08AF81C4u);
    aot_gpr_4 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF81C4u) goto L_08AF81C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF81C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_08AF81D4;
L_08AF81D4:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = aot_gpr_7 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AF821C;
      }
      goto L_08AF81E4;
    }
L_08AF81E4:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
        goto L_08AF8214;
    }
    goto L_08AF81F0;
L_08AF81F0:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
        goto L_08AF8214;
    }
    goto L_08AF8204;
L_08AF8204:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    goto L_08AF8214;
L_08AF8214:
    { const bool branch_taken = aot_gpr_7 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF81E4;
      }
      goto L_08AF821C;
    }
L_08AF821C:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = aot_gpr_7 != ctx.gpr[8];
      if (branch_taken) {
          goto L_08AF8264;
      }
      goto L_08AF822C;
    }
L_08AF822C:
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08AF8258;
      }
      goto L_08AF8238;
    }
L_08AF8238:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_7 = (aot_gpr_6 | 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08AF8258;
      }
      goto L_08AF824C;
    }
L_08AF824C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_gpr_6);
    goto L_08AF8258;
L_08AF8258:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AF82A8;
      }
      goto L_08AF8264;
    }
L_08AF8264:
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AF82A4;
      }
      goto L_08AF826C;
    }
L_08AF826C:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
        goto L_08AF829C;
    }
    goto L_08AF8278;
L_08AF8278:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
        goto L_08AF829C;
    }
    goto L_08AF828C;
L_08AF828C:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    goto L_08AF829C;
L_08AF829C:
    { const bool branch_taken = aot_gpr_7 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF826C;
      }
      goto L_08AF82A4;
    }
L_08AF82A4:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AF82A8;
L_08AF82A8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF82FC;
      }
      goto L_08AF82B0;
    }
L_08AF82B0:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AF82FC;
      }
      goto L_08AF82C0;
    }
L_08AF82C0:
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_08AF82F0;
    }
    goto L_08AF82CC;
L_08AF82CC:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_7);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_08AF82F0;
    }
    goto L_08AF82E0;
L_08AF82E0:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_7);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    goto L_08AF82F0;
L_08AF82F0:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF82C0;
      }
      goto L_08AF82F8;
    }
L_08AF82F8:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AF82FC;
L_08AF82FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AF8350;
      }
      goto L_08AF830C;
    }
L_08AF830C:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08AF8344;
    }
    goto L_08AF8314;
L_08AF8314:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08AF8344;
    }
    goto L_08AF831C;
L_08AF831C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08AF8344;
    }
    goto L_08AF8328;
L_08AF8328:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08AF8340;
      }
      goto L_08AF8338;
    }
L_08AF8338:
    aot_gpr_31 = (0x08AF8340u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8340u) goto L_08AF8340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8340:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_08AF8344;
L_08AF8344:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[20];
      if (branch_taken) {
          goto L_08AF830C;
      }
      goto L_08AF834C;
    }
L_08AF834C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AF8350;
L_08AF8350:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF8360;
      }
      goto L_08AF8358;
    }
L_08AF8358:
    aot_gpr_31 = (0x08AF8360u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8360u) goto L_08AF8360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8360:
    aot_gpr_4 = (ctx.gpr[17] << 2u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF8398:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08AF83ACu);
    goto L_08AF85B4;
L_08AF83AC:
    aot_gpr_31 = (0x08AF83B4u);
    goto L_08AF8E04;
L_08AF83B4:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08AF83C0u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF83C0u) goto L_08AF83C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF83C0:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
      if (branch_taken) {
          goto L_08AF83FC;
      }
      goto L_08AF83D0;
    }
L_08AF83D0:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-27964));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-27932));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (2224u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-25904));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_gpr_6);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    goto L_08AF83FC;
L_08AF83FC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF8410;
      }
      goto L_08AF8404;
    }
L_08AF8404:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08AF8410;
L_08AF8410:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(308)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08AF8454;
      }
      goto L_08AF8420;
    }
L_08AF8420:
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF8444;
      }
      goto L_08AF8428;
    }
L_08AF8428:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF843C;
      }
      goto L_08AF8430;
    }
L_08AF8430:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08AF843C;
L_08AF843C:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(308)));
    goto L_08AF8444;
L_08AF8444:
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(308), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(301)));
      if (branch_taken) {
          goto L_08AF8484;
      }
      goto L_08AF8454;
    }
L_08AF8454:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(304));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08AF8478u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08AF810C;
L_08AF8478:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(301)));
    goto L_08AF8484;
L_08AF8484:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF84AC;
      }
      goto L_08AF848C;
    }
L_08AF848C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_7;
    aot_gpr_31 = (0x08AF84A8u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF84A8u) goto L_08AF84A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF84A8:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_08AF84AC;
L_08AF84AC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AF84CC;
      }
      goto L_08AF84B4;
    }
L_08AF84B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08AF84CC;
      }
      goto L_08AF84C4;
    }
L_08AF84C4:
    aot_gpr_31 = (0x08AF84CCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF84CCu) goto L_08AF84CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF84CC:
    aot_gpr_31 = (0x08AF84D4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF84D4u) goto L_08AF84D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF84D4:
    aot_gpr_31 = (0x08AF84DCu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(1420));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF84DCu) goto L_08AF84DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF84DC:
    aot_gpr_31 = (0x08AF84E4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF84E4u) goto L_08AF84E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF84E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1364)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF8500;
      }
      goto L_08AF84F0;
    }
L_08AF84F0:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(1432));
    aot_gpr_31 = (0x08AF84FCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF84FCu) goto L_08AF84FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF84FC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1364), ctx.gpr[2]);
    goto L_08AF8500;
L_08AF8500:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1364)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1372)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1360), aot_gpr_4);
      if (branch_taken) {
          goto L_08AF8524;
      }
      goto L_08AF8514;
    }
L_08AF8514:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(1448));
    aot_gpr_31 = (0x08AF8520u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8520u) goto L_08AF8520;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8520:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1372), ctx.gpr[2]);
    goto L_08AF8524;
L_08AF8524:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1372)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1380)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1368), aot_gpr_4);
      if (branch_taken) {
          goto L_08AF854C;
      }
      goto L_08AF8538;
    }
L_08AF8538:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AF8548u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(30456));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8548u) goto L_08AF8548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8548:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1380), ctx.gpr[2]);
    goto L_08AF854C;
L_08AF854C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1380)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1388)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1376), aot_gpr_4);
      if (branch_taken) {
          goto L_08AF8570;
      }
      goto L_08AF8560;
    }
L_08AF8560:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(1456));
    aot_gpr_31 = (0x08AF856Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF856Cu) goto L_08AF856C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF856C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1388), ctx.gpr[2]);
    goto L_08AF8570;
L_08AF8570:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1388)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1396)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1384), aot_gpr_4);
      if (branch_taken) {
          goto L_08AF8594;
      }
      goto L_08AF8584;
    }
L_08AF8584:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(1468));
    aot_gpr_31 = (0x08AF8590u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8590u) goto L_08AF8590;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8590:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1396), ctx.gpr[2]);
    goto L_08AF8594;
L_08AF8594:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1396)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AF85A4u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1392), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF85A4u) goto L_08AF85A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF85A4:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF85B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AF85D0u);
    aot_gpr_4 = (0u | 30384u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF85D0u) goto L_08AF85D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF85D0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_5 = (16896u << 16u);
      if (branch_taken) {
          goto L_08AF85EC;
      }
      goto L_08AF85DC;
    }
L_08AF85DC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AF85E8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 174u, 0x08A852A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF85E8u) goto L_08AF85E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF85E8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AF85EC;
L_08AF85EC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1340), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08AF85FCu);
    aot_gpr_4 = (0u | 17888u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF85FCu) goto L_08AF85FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF85FC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (16896u << 16u);
      if (branch_taken) {
          goto L_08AF861C;
      }
      goto L_08AF8608;
    }
L_08AF8608:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AF8618u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0004_entry, 4u, 757u, 0x088176C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8618u) goto L_08AF8618;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8618:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AF861C;
L_08AF861C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1344), ctx.gpr[16]);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AF862Cu);
    aot_gpr_4 = (0u | 96u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF862Cu) goto L_08AF862C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF862C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_gpr_5 = (17024u << 16u);
      if (branch_taken) {
          goto L_08AF8650;
      }
      goto L_08AF8638;
    }
L_08AF8638:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (16896u << 16u);
    aot_gpr_31 = (0x08AF864Cu);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 364u, 0x089F1EECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF864Cu) goto L_08AF864C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF864C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AF8650;
L_08AF8650:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1348), ctx.gpr[17]);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF8668:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (16576u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_gpr_4 = (50454u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[15])) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_31);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_08AF884C;
      }
      goto L_08AF86C0;
    }
L_08AF86C0:
    aot_gpr_4 = (17608u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (50426u << 16u);
      if (branch_taken) {
          goto L_08AF884C;
      }
      goto L_08AF86D8;
    }
L_08AF86D8:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (17658u << 16u);
      if (branch_taken) {
          goto L_08AF884C;
      }
      goto L_08AF86EC;
    }
L_08AF86EC:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (17664u << 16u);
      if (branch_taken) {
          goto L_08AF884C;
      }
      goto L_08AF8700;
    }
L_08AF8700:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (15616u << 16u);
    aot_fpr_13 = ctx.fpr[24] + aot_fpr_12;
    aot_gpr_4 = (17352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_gpr_5 = (0u | 128u);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[17] = (ctx.gpr[17] << 7u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4108)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AF8844;
      }
      goto L_08AF8758;
    }
L_08AF8758:
    ctx.fpr[26] = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x08AF8780u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0004_entry, 4u, 801u, 0x08817F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8780u) goto L_08AF8780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8780:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(4108)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = aot_fpr_13 - aot_fpr_12;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = ctx.fpr[17] + aot_fpr_13;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[16];
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AF883C;
      }
      goto L_08AF8814;
    }
L_08AF8814:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AF8854;
      }
      goto L_08AF8834;
    }
L_08AF8834:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF8858;
      }
      goto L_08AF883C;
    }
L_08AF883C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF88EC;
      }
      goto L_08AF8844;
    }
L_08AF8844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF88EC;
      }
      goto L_08AF884C;
    }
L_08AF884C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF88EC;
      }
      goto L_08AF8854;
    }
L_08AF8854:
    aot_gpr_4 = (0u | 1u);
    goto L_08AF8858;
L_08AF8858:
    aot_gpr_5 = (16413u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 16253u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08AF88D4;
      }
      goto L_08AF8874;
    }
L_08AF8874:
    aot_gpr_5 = (50004u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (49884u << 16u);
      if (branch_taken) {
          goto L_08AF88D4;
      }
      goto L_08AF888C;
    }
L_08AF888C:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (50342u << 16u);
      if (branch_taken) {
          goto L_08AF88D4;
      }
      goto L_08AF88A0;
    }
L_08AF88A0:
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (50357u << 16u);
      if (branch_taken) {
          goto L_08AF88D4;
      }
      goto L_08AF88B8;
    }
L_08AF88B8:
    aot_gpr_5 = (aot_gpr_5 | 24576u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AF88D4;
      }
      goto L_08AF88D0;
    }
L_08AF88D0:
    aot_gpr_4 = (0u | 1u);
    goto L_08AF88D4;
L_08AF88D4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF88E8;
      }
      goto L_08AF88DC;
    }
L_08AF88DC:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF88EC;
      }
      goto L_08AF88E8;
    }
L_08AF88E8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AF88EC;
L_08AF88EC:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.gpr[16] = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF8918:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (17664u << 16u);
      if (branch_taken) {
          goto L_08AF8980;
      }
      goto L_08AF8924;
    }
L_08AF8924:
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_gpr_5 = (17352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (15616u << 16u);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_gpr_7 = (0u | 128u);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 << 7u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[8]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(4108)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_7;
      if (branch_taken) {
          goto L_08AF8990;
      }
      goto L_08AF8978;
    }
L_08AF8978:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF89A8;
      }
      goto L_08AF8980;
    }
L_08AF8980:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AF89A8;
      }
      goto L_08AF8990;
    }
L_08AF8990:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AF89A8;
L_08AF89A8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF89B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-224));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), aot_gpr_31);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(68));
    aot_gpr_31 = (0x08AF89E0u);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(72));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0004_entry, 4u, 801u, 0x08817F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF89E0u) goto L_08AF89E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF89E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_run_words); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_run_words); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_7 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_run_words); }
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    ctx.gpr[8] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_fpr_13 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_fpr_14 = aot_fpr_12 - aot_fpr_14;
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = aot_fpr_12 - ctx.fpr[15];
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[16];
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    { const std::uint32_t vfpu_address = aot_gpr_7 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_7 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
    { const std::uint32_t vfpu_address = aot_gpr_7 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(208)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF8B48:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_4 = (14851u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7760)));
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_gpr_5 = (14877u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 18770u);
    aot_gpr_4 = (aot_gpr_4 & 4095u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16256u << 16u);
    ctx.fpr[26] = ctx.fpr[26] + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    { const std::uint32_t aot_run_words[7]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08AF8BC8;
      }
      goto L_08AF8BBC;
    }
L_08AF8BBC:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[24] = ctx.fpr[24] + aot_fpr_12;
    goto L_08AF8BC8;
L_08AF8BC8:
    aot_gpr_4 = (15049u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 3670u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8360)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7713)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08AF8D50;
      }
      goto L_08AF8BE8;
    }
L_08AF8BE8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1404)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[26];
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1404), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1408)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[26];
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1408), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16268u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08AF8C14u);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8C14u) goto L_08AF8C14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8C14:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08AF8C40u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8C40u) goto L_08AF8C40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8C40:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1484)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1480)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AF8C5Cu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8C5Cu) goto L_08AF8C5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8C5C:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08AF8C70u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61EF4, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8C70u) goto L_08AF8C70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8C70:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AF8C80u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1412)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8C80u) goto L_08AF8C80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8C80:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08AF8C94u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61EF4, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8C94u) goto L_08AF8C94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8C94:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08AF8CA0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8CA0u) goto L_08AF8CA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8CA0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1412), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x08AF8CACu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1416)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8CACu) goto L_08AF8CAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8CAC:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (16281u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08AF8CC8u);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8CC8u) goto L_08AF8CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8CC8:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (16294u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08AF8D04u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8D04u) goto L_08AF8D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8D04:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AF8D18u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8D18u) goto L_08AF8D18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8D18:
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08AF8D2Cu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61EF4, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8D2Cu) goto L_08AF8D2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8D2C:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08AF8D40u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8D40u) goto L_08AF8D40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8D40:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08AF8D4Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8D4Cu) goto L_08AF8D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8D4C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1416), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AF8D50;
L_08AF8D50:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1280)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF8D68;
      }
      goto L_08AF8D5C;
    }
L_08AF8D5C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x08AF8D68u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0156_entry, 156u, 679u, 0x08A775F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF8D68u) goto L_08AF8D68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF8D68:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1412)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AF8D80;
      }
      goto L_08AF8D7C;
    }
L_08AF8D7C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1412), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08AF8D80;
L_08AF8D80:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1416)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AF8D98;
      }
      goto L_08AF8D94;
    }
L_08AF8D94:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1416), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08AF8D98;
L_08AF8D98:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1404)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AF8DB0;
      }
      goto L_08AF8DAC;
    }
L_08AF8DAC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1404), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08AF8DB0;
L_08AF8DB0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1408)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AF8DC8;
      }
      goto L_08AF8DC4;
    }
L_08AF8DC4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1408), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08AF8DC8;
L_08AF8DC8:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.gpr[16] = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      ctx.gpr[20] = aot_run_words[8];
      ctx.gpr[21] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF8DFC:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF8E04:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF8E0C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10376)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF8E38;
      }
      goto L_08AF8E20;
    }
L_08AF8E20:
    aot_gpr_31 = (0x08AF8E28u);
    goto L_08AF94C0;
L_08AF8E28:
    aot_gpr_31 = (0x08AF8E30u);
    goto L_08AF976C;
L_08AF8E30:
    aot_gpr_31 = (0x08AF8E38u);
    goto L_08AF9B84;
L_08AF8E38:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF8E44:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[6] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[4] = aot_fpr_12 - ctx.fpr[6];
    ctx.fpr[1] = aot_fpr_13 - ctx.fpr[0];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3)));
    ctx.fpr[7] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(3)));
    aot_fpr_14 = ctx.fpr[4] + ctx.fpr[1];
    aot_gpr_7 = (16256u << 16u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    ctx.fpr[19] = std::bit_cast<float>(aot_gpr_7);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    ctx.fpr[5] = std::sqrt(aot_fpr_14);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (16896u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = aot_fpr_13 + ctx.fpr[15];
    ctx.fpr[8] = aot_fpr_12 + ctx.fpr[15];
    ctx.fpr[3] = aot_fpr_14 - ctx.fpr[0];
    ctx.fpr[5] = ctx.fpr[5] - ctx.fpr[17];
    ctx.fpr[0] = ctx.fpr[8] - ctx.fpr[6];
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1356)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1352)));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[5] < ctx.fpr[2])) ? 0x00800000u : 0u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[5] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
        goto L_08AF8ED0;
    }
    goto L_08AF8ED0;
L_08AF8ED0:
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[19] < ctx.fpr[5])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[5] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
        goto L_08AF8EE4;
    }
    goto L_08AF8EE4;
L_08AF8EE4:
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[3];
    ctx.fpr[5] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[5]));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.fpr[4] = std::sqrt(ctx.fpr[4]);
    ctx.fpr[4] = ctx.fpr[4] - ctx.fpr[17];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[4] < ctx.fpr[2])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
        goto L_08AF8F14;
    }
    goto L_08AF8F14;
L_08AF8F14:
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[4] <= ctx.fpr[19])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
        goto L_08AF8F28;
    }
    goto L_08AF8F28;
L_08AF8F28:
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[0] + ctx.fpr[3];
    ctx.fpr[4] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[4]));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.fpr[3] = std::sqrt(ctx.fpr[3]);
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[17];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[3] < ctx.fpr[2])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
        goto L_08AF8F58;
    }
    goto L_08AF8F58;
L_08AF8F58:
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[3] <= ctx.fpr[19])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
        goto L_08AF8F6C;
    }
    goto L_08AF8F6C;
L_08AF8F6C:
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[3] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[3]));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.fpr[17] = ctx.fpr[0] - ctx.fpr[17];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[17] < ctx.fpr[2])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
        goto L_08AF8F9C;
    }
    goto L_08AF8F9C;
L_08AF8F9C:
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[17] <= ctx.fpr[19])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
        goto L_08AF8FB0;
    }
    goto L_08AF8FB0;
L_08AF8FB0:
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_31 = (0x08AF8FDCu);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr_6));
    goto L_08AFB024;
L_08AF8FDC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF8FE8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (16768u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_14 = ctx.fpr[24] + ctx.fpr[15];
    aot_fpr_13 = ctx.fpr[22] + ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 20u);
    aot_fpr_12 = aot_fpr_20 + ctx.fpr[16];
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1332), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (16896u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_31);
    aot_gpr_31 = (0x08AF905Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 636u, 0x08B133A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF905Cu) goto L_08AF905C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF905C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AF9078;
      }
      goto L_08AF9064;
    }
L_08AF9064:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10376)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
      if (branch_taken) {
          goto L_08AF9080;
      }
      goto L_08AF9070;
    }
L_08AF9070:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AF90DC;
      }
      goto L_08AF9078;
    }
L_08AF9078:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF9114;
      }
      goto L_08AF9080;
    }
L_08AF9080:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1281)));
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AF909C;
    }
    goto L_08AF908C;
L_08AF908C:
    aot_gpr_31 = (0x08AF9094u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7760)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0005_entry, 5u, 23u, 0x08818338u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9094u) goto L_08AF9094;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9094:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AF909C;
L_08AF909C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(67)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(66)));
    aot_gpr_5 = (aot_gpr_5 << 24u);
    aot_gpr_6 = (aot_gpr_6 << 16u);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(65)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_7 << 8u);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10376), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08AF90DC;
L_08AF90DC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (49024u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1296)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08AF9114u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0004_entry, 4u, 789u, 0x08817AACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9114u) goto L_08AF9114;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9114:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.gpr[16] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF9130:
    aot_gpr_4 = (17046u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = aot_fpr_12 - aot_fpr_14;
    aot_gpr_4 = (17352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17664u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[19] = ctx.fpr[16] + ctx.fpr[15];
    aot_gpr_4 = (15616u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[18];
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[16];
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[19]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_08AF9188;
    }
    goto L_08AF9188;
L_08AF9188:
    aot_gpr_4 = (0u | 127u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 127 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_08AF9198;
    }
    goto L_08AF9198;
L_08AF9198:
    ctx.fpr[19] = aot_fpr_12 + aot_fpr_14;
    aot_gpr_7 = (0u | 0u);
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[15];
    aot_gpr_6 = (0u | 0u);
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[18];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[16];
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[19]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_7) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_08AF91C8;
    }
    goto L_08AF91C8;
L_08AF91C8:
    aot_gpr_5 = (0u | 127u);
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 127 ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_5 = (aot_gpr_6 | 0u);
        goto L_08AF91D8;
    }
    goto L_08AF91D8;
L_08AF91D8:
    ctx.fpr[19] = aot_fpr_13 - aot_fpr_14;
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_7 = (0u | 0u);
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[18];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[16];
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[19]));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_7 = (aot_gpr_6 | 0u);
        goto L_08AF9204;
    }
    goto L_08AF9204;
L_08AF9204:
    aot_gpr_6 = (0u | 127u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 127 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_6 = (aot_gpr_7 | 0u);
        goto L_08AF9214;
    }
    goto L_08AF9214;
L_08AF9214:
    ctx.fpr[19] = aot_fpr_13 + aot_fpr_14;
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[18] = ctx.fpr[19] + ctx.fpr[18];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[16];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(aot_gpr_7) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (aot_gpr_7 | 0u);
        goto L_08AF9240;
    }
    goto L_08AF9240;
L_08AF9240:
    aot_gpr_7 = (0u | 127u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 127 ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    aot_gpr_7 = (ctx.gpr[8] | 0u);
        goto L_08AF9250;
    }
    goto L_08AF9250;
L_08AF9250:
    ctx.gpr[9] = (20501u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 761u);
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_08AF9310;
      }
      goto L_08AF926C;
    }
L_08AF926C:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_4 = (aot_gpr_4 << 7u);
    aot_gpr_4 = (ctx.gpr[9] + aot_gpr_4);
    ctx.gpr[9] = (16896u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[9]);
    goto L_08AF9280;
L_08AF9280:
    ctx.gpr[9] = (aot_gpr_6 | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_7) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(-64));
      if (branch_taken) {
          goto L_08AF9300;
      }
      goto L_08AF9290;
    }
L_08AF9290:
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[19];
    goto L_08AF92A0;
L_08AF92A0:
    ctx.gpr[10] = (aot_gpr_4 + ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4108)));
    ctx.gpr[10] = (ctx.gpr[10] & 128u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(-64));
      if (branch_taken) {
          goto L_08AF92F0;
      }
      goto L_08AF92B4;
    }
L_08AF92B4:
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.fpr[0] = ctx.fpr[18] - ctx.fpr[15];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - aot_fpr_12;
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] - aot_fpr_13;
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[0] + ctx.fpr[17];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] <= ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AF92F0;
      }
      goto L_08AF92EC;
    }
L_08AF92EC:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    goto L_08AF92F0;
L_08AF92F0:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_7) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_08AF92A0;
      }
      goto L_08AF9300;
    }
L_08AF9300:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08AF9280;
      }
      goto L_08AF9310;
    }
L_08AF9310:
    ctx.fpr[16] = std::sqrt(ctx.fpr[16]);
    aot_gpr_4 = (16824u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = ctx.fpr[16] - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[16])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08AF9334;
    }
    goto L_08AF9334;
L_08AF9334:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= ctx.fpr[16])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_08AF9348;
    }
    goto L_08AF9348;
L_08AF9348:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF9350:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF9498;
      }
      goto L_08AF9378;
    }
L_08AF9378:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_7 = (0u | 1u);
    aot_gpr_31 = (0x08AF9390u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-272));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9390u) goto L_08AF9390;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9390:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AF9498;
      }
      goto L_08AF9398;
    }
L_08AF9398:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1404)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1408)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[16] = (18944u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_gpr_5 >> 8u);
    ctx.gpr[18] = (19200u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(29552));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (49312u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.gpr[20] = (18176u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 >> 8u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (0u | 3u);
    aot_gpr_31 = (0x08AF9430u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12016));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9430u) goto L_08AF9430;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9430:
    aot_gpr_31 = (0x08AF9438u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9438u) goto L_08AF9438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9438:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 >> 8u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_gpr_6 >> 8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 >> 8u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    goto L_08AF9498;
L_08AF9498:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF94C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), ctx.gpr[16], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[16] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_31 = (0x08AF94F8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF94F8u) goto L_08AF94F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF94F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AF9750;
      }
      goto L_08AF9500;
    }
L_08AF9500:
    aot_gpr_31 = (0x08AF9508u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9508u) goto L_08AF9508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9508:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AF9750;
      }
      goto L_08AF9510;
    }
L_08AF9510:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF952C;
      }
      goto L_08AF951C;
    }
L_08AF951C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AF9750;
      }
      goto L_08AF952C;
    }
L_08AF952C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 20 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF9750;
      }
      goto L_08AF9538;
    }
L_08AF9538:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF9750;
      }
      goto L_08AF9540;
    }
L_08AF9540:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7392)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7408));
      if (branch_taken) {
          goto L_08AF9564;
      }
      goto L_08AF954C;
    }
L_08AF954C:
    aot_gpr_5 = (0u | 1u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7392), aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(7408), aot_run_words); }
    goto L_08AF9564;
L_08AF9564:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7396)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AF9588;
      }
      goto L_08AF9570;
    }
L_08AF9570:
    aot_gpr_5 = (0u | 1u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7396), aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(7424), aot_run_words); }
    goto L_08AF9588;
L_08AF9588:
    aot_gpr_5 = (16320u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) & 0x7FFFFFFFu);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[15];
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AF9740;
      }
      goto L_08AF95D4;
    }
L_08AF95D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7440)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(5001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF9750;
      }
      goto L_08AF95EC;
    }
L_08AF95EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1488)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF9738;
      }
      goto L_08AF9604;
    }
L_08AF9604:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1488), aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (17076u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17174u << 16u);
    aot_gpr_31 = (0x08AF962Cu);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF962Cu) goto L_08AF962C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF962C:
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x08AF9640u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9640u) goto L_08AF9640;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9640:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(aot_gpr_4) >= 0) {
    aot_gpr_4 = (aot_gpr_4 & 1023u);
        goto L_08AF965C;
    }
    goto L_08AF964C;
L_08AF964C:
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 1023u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u - aot_gpr_4);
      if (branch_taken) {
          goto L_08AF965C;
      }
      goto L_08AF965C;
    }
L_08AF965C:
    aot_gpr_5 = (2247u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8224));
    aot_gpr_6 = (2247u << 16u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-12320));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[15];
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[16] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_31 = (0x08AF96BCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF96BCu) goto L_08AF96BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF96BC:
    aot_fpr_12 = ctx.fpr[24] - ctx.fpr[22];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_31 = (0x08AF96E8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF96E8u) goto L_08AF96E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF96E8:
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x08AF96FCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF96FCu) goto L_08AF96FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF96FC:
    aot_fpr_14 = ctx.fpr[24] - aot_fpr_20;
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (0u | 82u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_fpr_13 = aot_fpr_20 + aot_fpr_13;
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08AF9738u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_13));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9738u) goto L_08AF9738;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9738:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF9750;
      }
      goto L_08AF9740;
    }
L_08AF9740:
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7440), aot_gpr_4);
    goto L_08AF9750;
L_08AF9750:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.gpr[16] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF976C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7456));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_31);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08AF97A8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF97A8u) goto L_08AF97A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF97A8:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7444)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7448)));
        goto L_08AF97DC;
    }
    goto L_08AF97C0;
L_08AF97C0:
    aot_gpr_4 = (0u | 1u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7444), aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(7456), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7448)));
    goto L_08AF97DC;
L_08AF97DC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF97FC;
      }
      goto L_08AF97E4;
    }
L_08AF97E4:
    aot_gpr_4 = (0u | 1u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7448), aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(7472), aot_run_words); }
    goto L_08AF97FC;
L_08AF97FC:
    aot_gpr_4 = (16320u << 16u);
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) & 0x7FFFFFFFu);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[15];
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AF99C8;
      }
      goto L_08AF9848;
    }
L_08AF9848:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7488)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(5001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF99D8;
      }
      goto L_08AF9860;
    }
L_08AF9860:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1492)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(4001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF99C0;
      }
      goto L_08AF9878;
    }
L_08AF9878:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1492), aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (17377u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17467u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_gpr_31 = (0x08AF98A4u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF98A4u) goto L_08AF98A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF98A4:
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x08AF98B8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF98B8u) goto L_08AF98B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF98B8:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(aot_gpr_4) >= 0) {
    aot_gpr_4 = (aot_gpr_4 & 1023u);
        goto L_08AF98D4;
    }
    goto L_08AF98C4;
L_08AF98C4:
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 1023u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u - aot_gpr_4);
      if (branch_taken) {
          goto L_08AF98D4;
      }
      goto L_08AF98D4;
    }
L_08AF98D4:
    aot_gpr_5 = (2247u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8224));
    aot_gpr_6 = (2247u << 16u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-12320));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = aot_fpr_12 - aot_fpr_13;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    { const float fs = aot_fpr_20; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_fpr_12 = ctx.fpr[15] + ctx.fpr[18];
    aot_fpr_13 = ctx.fpr[16] + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08AF992Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08AF8918;
L_08AF992C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AF99C0;
      }
      goto L_08AF9934;
    }
L_08AF9934:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF9940u);
    aot_gpr_5 = (0u | 1u);
    goto L_08AF9A00;
L_08AF9940:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (16664u << 16u);
      if (branch_taken) {
          goto L_08AF99C0;
      }
      goto L_08AF9948;
    }
L_08AF9948:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48588u << 16u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08AF9974u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9974u) goto L_08AF9974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9974:
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_20;
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x08AF9994u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9994u) goto L_08AF9994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9994:
    ctx.gpr[10] = (ctx.gpr[2] & 65535u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[10] = (ctx.gpr[10] & 7u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (0u | 83u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08AF99C0u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF99C0u) goto L_08AF99C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF99C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF99D8;
      }
      goto L_08AF99C8;
    }
L_08AF99C8:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7488), aot_gpr_4);
    goto L_08AF99D8;
L_08AF99D8:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.gpr[16] = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF99F8:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1332)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF9A00:
    aot_gpr_6 = (17056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_6 = (16880u << 16u);
    aot_gpr_7 = (0u | 49u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_7) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_6 = (0u | 49u);
        goto L_08AF9A34;
    }
    goto L_08AF9A34;
L_08AF9A34:
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 0 ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_6 = (0u | 0u);
        goto L_08AF9A40;
    }
    goto L_08AF9A40;
L_08AF9A40:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_4 = (16840u << 16u);
    aot_gpr_7 = (0u | 49u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_7) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_4 = (0u | 49u);
        goto L_08AF9A6C;
    }
    goto L_08AF9A6C;
L_08AF9A6C:
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08AF9A78;
    }
    goto L_08AF9A78;
L_08AF9A78:
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_7 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08AF9AAC;
      }
      goto L_08AF9A84;
    }
L_08AF9A84:
    aot_gpr_6 = (0u | 50u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_7) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08AF9AAC;
      }
      goto L_08AF9A98;
    }
L_08AF9A98:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AF9ABC;
      }
      goto L_08AF9AA4;
    }
L_08AF9AA4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF9AB4;
      }
      goto L_08AF9AAC;
    }
L_08AF9AAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF9AC8;
      }
      goto L_08AF9AB4;
    }
L_08AF9AB4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF9AC4;
      }
      goto L_08AF9ABC;
    }
L_08AF9ABC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF9AC8;
      }
      goto L_08AF9AC4;
    }
L_08AF9AC4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AF9AC8;
L_08AF9AC8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF9AD0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF9AF8;
      }
      goto L_08AF9AE8;
    }
L_08AF9AE8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08AF9B70;
      }
      goto L_08AF9AF0;
    }
L_08AF9AF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF9B08;
      }
      goto L_08AF9AF8;
    }
L_08AF9AF8:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF9B40;
      }
      goto L_08AF9B00;
    }
L_08AF9B00:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF9B70;
      }
      goto L_08AF9B08;
    }
L_08AF9B08:
    aot_gpr_31 = (0x08AF9B10u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1340)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 192u, 0x08A854E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9B10u) goto L_08AF9B10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9B10:
    aot_gpr_31 = (0x08AF9B18u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0004_entry, 4u, 774u, 0x088178A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9B18u) goto L_08AF9B18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9B18:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[28] | 0u);
    goto L_08AF9B20;
L_08AF9B20:
    aot_gpr_31 = (0x08AF9B28u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1348)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 365u, 0x089F1F70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9B28u) goto L_08AF9B28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9B28:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF9B20;
      }
      goto L_08AF9B38;
    }
L_08AF9B38:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF9B70;
      }
      goto L_08AF9B40;
    }
L_08AF9B40:
    aot_gpr_31 = (0x08AF9B48u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1340)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 204u, 0x08A856A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9B48u) goto L_08AF9B48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9B48:
    aot_gpr_31 = (0x08AF9B50u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0004_entry, 4u, 788u, 0x08817A98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9B50u) goto L_08AF9B50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9B50:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[28] | 0u);
    goto L_08AF9B58;
L_08AF9B58:
    aot_gpr_31 = (0x08AF9B60u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1348)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 375u, 0x089F20CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9B60u) goto L_08AF9B60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9B60:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF9B58;
      }
      goto L_08AF9B70;
    }
L_08AF9B70:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF9B84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8816)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(10956));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AF9BF8;
      }
      goto L_08AF9B98;
    }
L_08AF9B98:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-32000));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-22000));
      if (branch_taken) {
          goto L_08AF9BD8;
      }
      goto L_08AF9BB0;
    }
L_08AF9BB0:
    aot_gpr_5 = (aot_gpr_7 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AF9BD8;
      }
      goto L_08AF9BBC;
    }
L_08AF9BBC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(45)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_5) < 193 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_08AF9BD4;
      }
      goto L_08AF9BD0;
    }
L_08AF9BD0:
    aot_gpr_5 = (0u | 192u);
    goto L_08AF9BD4;
L_08AF9BD4:
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08AF9BD8;
L_08AF9BD8:
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-10000));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AF9BEC;
      }
      goto L_08AF9BE8;
    }
L_08AF9BE8:
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08AF9BEC;
L_08AF9BEC:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08AF9B98;
      }
      goto L_08AF9BF8;
    }
L_08AF9BF8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF9C00:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    { const std::uint32_t aot_run_words[8]{std::bit_cast<std::uint32_t>(aot_fpr_20), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_4 = (50716u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (49864u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08AF9C5C;
      }
      goto L_08AF9C54;
    }
L_08AF9C54:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1332), aot_gpr_4);
    goto L_08AF9C5C;
L_08AF9C5C:
    aot_gpr_31 = (0x08AF9C64u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0175_entry, 175u, 866u, 0x08AC36D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9C64u) goto L_08AF9C64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9C64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AF9C74;
      }
      goto L_08AF9C6C;
    }
L_08AF9C6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFA0B4;
      }
      goto L_08AF9C74;
    }
L_08AF9C74:
    aot_gpr_31 = (0x08AF9C7Cu);
    goto L_08AF8B48;
L_08AF9C7C:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11208)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_5));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11212)));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_5));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11216)));
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10376), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08AF9CD0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 547u, 0x08AEEA94u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9CD0u) goto L_08AF9CD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9CD0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1404)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1408)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 >> 8u);
    ctx.gpr[21] = (18944u << 16u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[21]);
    ctx.gpr[20] = (2236u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_5);
    ctx.gpr[19] = (19200u << 16u);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[19]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (14848u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_5 = (15104u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(29552));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (49312u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    ctx.gpr[17] = (18176u << 16u);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (21761u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-256));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (22528u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(255));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (22017u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-256));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (22273u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-256));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1360)));
    aot_gpr_31 = (0x08AF9F7Cu);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9F7Cu) goto L_08AF9F7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9F7C:
    aot_gpr_4 = (0u | 11u);
    aot_gpr_31 = (0x08AF9F88u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9F88u) goto L_08AF9F88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9F88:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x08AF9F94u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9F94u) goto L_08AF9F94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9F94:
    aot_gpr_4 = (0u | 9u);
    aot_gpr_31 = (0x08AF9FA0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF9FA0u) goto L_08AF9FA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF9FA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1336)));
    aot_gpr_4 = (aot_gpr_4 ^ 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1336), aot_gpr_4);
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16752u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AF9FDC;
      }
      goto L_08AF9FD4;
    }
L_08AF9FD4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF9FFC;
      }
      goto L_08AF9FDC;
    }
L_08AF9FDC:
    aot_gpr_4 = (17008u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AF9FFC;
      }
      goto L_08AF9FF4;
    }
L_08AF9FF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF9FFC;
      }
      goto L_08AF9FFC;
    }
L_08AF9FFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1340)));
    aot_gpr_31 = (0x08AFA008u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 207u, 0x08A85850u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFA008u) goto L_08AFA008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFA008:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1340)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (16544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08AFA030u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 205u, 0x08A856B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFA030u) goto L_08AFA030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFA030:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_5 >> 8u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_5 >> 8u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x08AFA098u);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFA098u) goto L_08AFA098;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFA098:
    aot_gpr_4 = (0u | 9u);
    aot_gpr_31 = (0x08AFA0A4u);
    aot_gpr_5 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFA0A4u) goto L_08AFA0A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFA0A4:
    aot_gpr_31 = (0x08AFA0ACu);
    goto L_08AF8E0C;
L_08AFA0AC:
    aot_gpr_31 = (0x08AFA0B4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFA0B4u) goto L_08AFA0B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFA0B4:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFA0DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-256));
    { const std::uint32_t aot_run_words[16]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1329)));
    aot_gpr_4 = (aot_gpr_4 ^ 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1329), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x08AFA144u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0175_entry, 175u, 866u, 0x08AC36D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFA144u) goto L_08AFA144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFA144:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AFA19C;
      }
      goto L_08AFA14C;
    }
L_08AFA14C:
    aot_gpr_31 = (0x08AFA154u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFA154u) goto L_08AFA154;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFA154:
    ctx.gpr[20] = (0u | 1u);
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[23] = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    ctx.gpr[21] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (16752u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[30] = (0u | 255u);
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_4 = (17664u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15360u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08AFA1A4;
      }
      goto L_08AFA194;
    }
L_08AFA194:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFA1F0;
      }
      goto L_08AFA19C;
    }
L_08AFA19C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFAFDC;
      }
      goto L_08AFA1A4;
    }
L_08AFA1A4:
    aot_gpr_31 = (0x08AFA1ACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFA1ACu) goto L_08AFA1AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFA1AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_08AFA1D0;
      }
      goto L_08AFA1B8;
    }
L_08AFA1B8:
    aot_gpr_31 = (0x08AFA1C0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFA1C0u) goto L_08AFA1C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFA1C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AFA1F0;
      }
      goto L_08AFA1D0;
    }
L_08AFA1D0:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1316)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1312)));
    aot_fpr_20 = ctx.fpr[30] - aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1308)));
    aot_fpr_20 = aot_fpr_20 + aot_fpr_13;
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_08AFA200;
      }
      goto L_08AFA1F0;
    }
L_08AFA1F0:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1312)));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1308)));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AFA200;
L_08AFA200:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (48972u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFA2B8;
      }
      goto L_08AFA220;
    }
L_08AFA220:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[16])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_08AFA244;
    }
    goto L_08AFA238;
L_08AFA238:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08AFA244;
      }
      goto L_08AFA244;
    }
L_08AFA244:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[16])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
        goto L_08AFA264;
    }
    goto L_08AFA258;
L_08AFA258:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08AFA264;
      }
      goto L_08AFA264;
    }
L_08AFA264:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFA298;
      }
      goto L_08AFA274;
    }
L_08AFA274:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[16])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFA290;
      }
      goto L_08AFA288;
    }
L_08AFA288:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08AFA2B8;
      }
      goto L_08AFA290;
    }
L_08AFA290:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08AFA2B8;
      }
      goto L_08AFA298;
    }
L_08AFA298:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[16])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFA2B4;
      }
      goto L_08AFA2AC;
    }
L_08AFA2AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08AFA2B8;
      }
      goto L_08AFA2B4;
    }
L_08AFA2B4:
    ctx.gpr[18] = (0u | 1u);
    goto L_08AFA2B8;
L_08AFA2B8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[16] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08AFA2DC;
      }
      goto L_08AFA2CC;
    }
L_08AFA2CC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1300)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AFA338;
      }
      goto L_08AFA2DC;
    }
L_08AFA2DC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (17008u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFA308;
      }
      goto L_08AFA2F8;
    }
L_08AFA2F8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1304)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AFA338;
      }
      goto L_08AFA308;
    }
L_08AFA308:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1304)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1300)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[22];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16948u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = aot_fpr_12 / ctx.fpr[15];
    ctx.fpr[22] = aot_fpr_13 + ctx.fpr[22];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    goto L_08AFA338;
L_08AFA338:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11208)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr_5));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11212)));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(aot_gpr_5));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11216)));
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr_5));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11208)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr_5));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11212)));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr_5));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11216)));
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(aot_gpr_5));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11220)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(35)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 200 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFA3D4;
      }
      goto L_08AFA3CC;
    }
L_08AFA3CC:
    aot_gpr_4 = (0u | 200u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08AFA3D4;
L_08AFA3D4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1288)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFA3F8;
      }
      goto L_08AFA3EC;
    }
L_08AFA3EC:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[30]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AFA4B4;
      }
      goto L_08AFA3F8;
    }
L_08AFA3F8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1284)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFA4B4;
      }
      goto L_08AFA410;
    }
L_08AFA410:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1284)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1288)));
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(35)));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_5 = (20224u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08AFA454;
      }
      goto L_08AFA448;
    }
L_08AFA448:
    aot_gpr_4 = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[15];
    goto L_08AFA454;
L_08AFA454:
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
        goto L_08AFA474;
    }
    goto L_08AFA468;
L_08AFA468:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08AFA484;
      }
      goto L_08AFA474;
    }
L_08AFA474:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    goto L_08AFA484;
L_08AFA484:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(35)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AFA49C;
      }
      goto L_08AFA498;
    }
L_08AFA498:
    aot_gpr_4 = (0u | 255u);
    goto L_08AFA49C;
L_08AFA49C:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1292)));
    aot_fpr_14 = ctx.fpr[24] - aot_fpr_13;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AFA4B4;
L_08AFA4B4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10376), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (14848u << 16u);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_6 = (aot_gpr_6 >> 8u);
    aot_gpr_7 = (15104u << 16u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_6 = (aot_gpr_6 >> 8u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_6 = (aot_gpr_6 >> 8u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_6 = (aot_gpr_6 >> 8u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_6 = (aot_gpr_6 >> 8u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_6 = (aot_gpr_6 >> 8u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_6 = (aot_gpr_6 >> 8u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_6 = (aot_gpr_6 >> 8u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_6 = (aot_gpr_6 >> 8u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_6 = (aot_gpr_6 >> 8u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_6 = (aot_gpr_6 >> 8u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_6 = (aot_gpr_6 >> 8u);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1348)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(115)));
    aot_gpr_5 = (aot_gpr_5 << 24u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(114)));
    aot_gpr_6 = (aot_gpr_6 << 16u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(113)));
    aot_gpr_6 = (aot_gpr_6 << 8u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1360)));
    aot_gpr_31 = (0x08AFA674u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFA674u) goto L_08AFA674;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFA674:
    aot_gpr_4 = (0u | 11u);
    aot_gpr_31 = (0x08AFA680u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFA680u) goto L_08AFA680;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFA680:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x08AFA68Cu);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFA68Cu) goto L_08AFA68C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFA68C:
    aot_gpr_4 = (0u | 9u);
    aot_gpr_31 = (0x08AFA698u);
    aot_gpr_5 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFA698u) goto L_08AFA698;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFA698:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (17352u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = ctx.fpr[16] - ctx.fpr[22];
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[26];
    aot_fpr_13 = aot_fpr_13 + aot_fpr_12;
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = ctx.fpr[16] + ctx.fpr[22];
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[26];
    aot_fpr_14 = aot_fpr_14 + aot_fpr_12;
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[24];
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_13 = ctx.fpr[15] - ctx.fpr[22];
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[26];
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[17] = ctx.fpr[15] + ctx.fpr[22];
    aot_fpr_14 = ctx.fpr[17] + ctx.fpr[26];
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[24];
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08AFA724;
      }
      goto L_08AFA710;
    }
L_08AFA710:
    aot_fpr_13 = ctx.fpr[16] + ctx.fpr[26];
    aot_fpr_13 = aot_fpr_13 + aot_fpr_12;
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08AFA724;
L_08AFA724:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AFA740;
      }
      goto L_08AFA72C;
    }
L_08AFA72C:
    aot_fpr_13 = ctx.fpr[16] + ctx.fpr[26];
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AFA740;
L_08AFA740:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08AFA758;
      }
      goto L_08AFA748;
    }
L_08AFA748:
    aot_fpr_12 = ctx.fpr[15] + ctx.fpr[26];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AFA758;
L_08AFA758:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08AFA770;
      }
      goto L_08AFA760;
    }
L_08AFA760:
    aot_fpr_12 = ctx.fpr[15] + ctx.fpr[26];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AFA770;
L_08AFA770:
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_7 = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_7 = (aot_gpr_4 | 0u);
        goto L_08AFA784;
    }
    goto L_08AFA784;
L_08AFA784:
    aot_gpr_4 = (0u | 31u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 31 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_4 = (aot_gpr_7 | 0u);
        goto L_08AFA794;
    }
    goto L_08AFA794;
L_08AFA794:
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_7 = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_7 = (aot_gpr_6 | 0u);
        goto L_08AFA7A8;
    }
    goto L_08AFA7A8;
L_08AFA7A8:
    aot_gpr_6 = (0u | 31u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 31 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_gpr_6);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_gpr_7);
        goto L_08AFA7BC;
    }
    goto L_08AFA7BC;
L_08AFA7BC:
    aot_gpr_7 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_7) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_08AFA7D0;
    }
    goto L_08AFA7D0;
L_08AFA7D0:
    aot_gpr_7 = (0u | 31u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 31 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_7 = (aot_gpr_6 | 0u);
        goto L_08AFA7E0;
    }
    goto L_08AFA7E0;
L_08AFA7E0:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (ctx.gpr[23] | 0u);
        goto L_08AFA7F4;
    }
    goto L_08AFA7F4;
L_08AFA7F4:
    aot_gpr_6 = (0u | 31u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 31 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_gpr_6);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_gpr_5);
        goto L_08AFA808;
    }
    goto L_08AFA808;
L_08AFA808:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(180)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), aot_gpr_4);
      if (branch_taken) {
          goto L_08AFAFC0;
      }
      goto L_08AFA81C;
    }
L_08AFA81C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_7);
    ctx.gpr[20] = (2246u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1840));
    aot_gpr_5 = (16768u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_20 + ctx.fpr[30];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_4 << 7u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_6);
    goto L_08AFA85C;
L_08AFA85C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(168)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_4);
      if (branch_taken) {
          goto L_08AFAF84;
      }
      goto L_08AFA870;
    }
L_08AFA870:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(172)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (17152u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (17352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[23] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_4);
    goto L_08AFA8A8;
L_08AFA8A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(156)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_gpr_6 & 128u);
    if (aot_gpr_6 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_08AFA92C;
    }
    goto L_08AFA8CC;
L_08AFA8CC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_gpr_6 & 128u);
    if (aot_gpr_6 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_08AFA92C;
    }
    goto L_08AFA8E8;
L_08AFA8E8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(13)));
    aot_gpr_6 = (aot_gpr_6 & 128u);
    if (aot_gpr_6 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_08AFA92C;
    }
    goto L_08AFA904;
L_08AFA904:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(77)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
        goto L_08AFAF58;
    }
    goto L_08AFA928;
L_08AFA928:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08AFA92C;
L_08AFA92C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-16));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (17152u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17024u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[17];
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[17];
    ctx.fpr[18] = ctx.fpr[16] - aot_fpr_14;
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[19] = ctx.fpr[15] - aot_fpr_13;
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[19];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFAF54;
      }
      goto L_08AFA988;
    }
L_08AFA988:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[17] = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(ctx.fpr[17])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    aot_gpr_4 = (17205u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.execute_vfpu_vtfm_ct<14u, 36u, 12u, 4u, 3u>();
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08AFA9EC;
      }
      goto L_08AFA9E4;
    }
L_08AFA9E4:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08AFA9EC;
L_08AFA9EC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFAF54;
      }
      goto L_08AFA9F4;
    }
L_08AFA9F4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1320)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFAF54;
      }
      goto L_08AFAA14;
    }
L_08AFAA14:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_4);
      if (branch_taken) {
          goto L_08AFAF54;
      }
      goto L_08AFAA30;
    }
L_08AFAA30:
    ctx.gpr[21] = (aot_gpr_4 << 6u);
    ctx.gpr[17] = (aot_gpr_4 << 8u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    goto L_08AFAA40;
L_08AFAA40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
        goto L_08AFAF38;
    }
    goto L_08AFAA54;
L_08AFAA54:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    aot_gpr_6 = (17024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (17352u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[28] = aot_fpr_12 - ctx.fpr[28];
    ctx.gpr[16] = (aot_gpr_4 + aot_gpr_4);
    goto L_08AFAA80;
L_08AFAA80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFAF24;
      }
      goto L_08AFAA9C;
    }
L_08AFAA9C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (17024u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-32));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_4 = (16896u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[26] = ctx.fpr[22] + ctx.fpr[24];
    ctx.fpr[24] = aot_fpr_20 + ctx.fpr[24];
    ctx.fpr[15] = aot_fpr_14 - ctx.fpr[26];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = aot_fpr_13 - ctx.fpr[24];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFAF24;
      }
      goto L_08AFAAF0;
    }
L_08AFAAF0:
    ctx.fpr[15] = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[15])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    aot_gpr_4 = (17077u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.execute_vfpu_vtfm_ct<14u, 36u, 12u, 4u, 3u>();
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08AFAB4C;
      }
      goto L_08AFAB44;
    }
L_08AFAB44:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08AFAB4C;
L_08AFAB4C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFAF1C;
      }
      goto L_08AFAB54;
    }
L_08AFAB54:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFAEC0;
      }
      goto L_08AFAB68;
    }
L_08AFAB68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4108)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFAC30;
      }
      goto L_08AFAB84;
    }
L_08AFAB84:
    aot_fpr_12 = ctx.fpr[28] + ctx.fpr[30];
    ctx.fpr[15] = aot_fpr_20 + ctx.fpr[30];
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[15];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[16])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFABF0;
      }
      goto L_08AFABB4;
    }
L_08AFABB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4108)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AFABE8u);
    aot_gpr_5 = (0u | 0u);
    goto L_08AF8FE8;
L_08AFABE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFAC30;
      }
      goto L_08AFABF0;
    }
L_08AFABF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4108)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AFAC30u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08AF8E44;
L_08AFAC30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4236)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AFAD08;
      }
      goto L_08AFAC50;
    }
L_08AFAC50:
    aot_gpr_4 = (16896u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = ctx.fpr[28] + ctx.fpr[30];
    aot_fpr_12 = ctx.fpr[15] + aot_fpr_12;
    ctx.fpr[16] = aot_fpr_20 + ctx.fpr[30];
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[16];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFACC8;
      }
      goto L_08AFAC8C;
    }
L_08AFAC8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4236)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AFACC0u);
    aot_gpr_5 = (0u | 0u);
    goto L_08AF8FE8;
L_08AFACC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFAD08;
      }
      goto L_08AFACC8;
    }
L_08AFACC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4236)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AFAD08u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08AF8E44;
L_08AFAD08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4109)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AFADE0;
      }
      goto L_08AFAD28;
    }
L_08AFAD28:
    aot_fpr_12 = ctx.fpr[28] + ctx.fpr[30];
    aot_gpr_4 = (16896u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = aot_fpr_20 + ctx.fpr[30];
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[15];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFADA0;
      }
      goto L_08AFAD64;
    }
L_08AFAD64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4109)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AFAD98u);
    aot_gpr_5 = (0u | 0u);
    goto L_08AF8FE8;
L_08AFAD98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFADE0;
      }
      goto L_08AFADA0;
    }
L_08AFADA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4109)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AFADE0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08AF8E44;
L_08AFADE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4237)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AFAF1C;
      }
      goto L_08AFAE00;
    }
L_08AFAE00:
    aot_gpr_4 = (16896u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = ctx.fpr[28] + ctx.fpr[30];
    ctx.fpr[15] = ctx.fpr[15] + aot_fpr_12;
    ctx.fpr[16] = aot_fpr_20 + ctx.fpr[30];
    aot_fpr_12 = ctx.fpr[16] + aot_fpr_12;
    ctx.fpr[15] = aot_fpr_14 - ctx.fpr[15];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[15] + aot_fpr_12;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[17])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_08AFAE7C;
    }
    goto L_08AFAE40;
L_08AFAE40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4237)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AFAE74u);
    aot_gpr_5 = (0u | 0u);
    goto L_08AF8FE8;
L_08AFAE74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFAF1C;
      }
      goto L_08AFAE7C;
    }
L_08AFAE7C:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4237)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AFAEB8u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08AF8E44;
L_08AFAEB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFAF1C;
      }
      goto L_08AFAEC0;
    }
L_08AFAEC0:
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1282)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFAF1C;
      }
      goto L_08AFAEE0;
    }
L_08AFAEE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1348)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[21]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08AFAF1Cu);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 376u, 0x089F20D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFAF1Cu) goto L_08AFAF1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFAF1C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    goto L_08AFAF24;
L_08AFAF24:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AFAA80;
      }
      goto L_08AFAF34;
    }
L_08AFAF34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    goto L_08AFAF38;
L_08AFAF38:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_08AFAA40;
      }
      goto L_08AFAF54;
    }
L_08AFAF54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    goto L_08AFAF58;
L_08AFAF58:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_5);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AFA8A8;
      }
      goto L_08AFAF84;
    }
L_08AFAF84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(172)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(156)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(160)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_6);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_7);
      if (branch_taken) {
          goto L_08AFA85C;
      }
      goto L_08AFAFC0;
    }
L_08AFAFC0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1360)));
    aot_gpr_31 = (0x08AFAFCCu);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFAFCCu) goto L_08AFAFCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFAFCC:
    aot_gpr_31 = (0x08AFAFD4u);
    goto L_08AF9350;
L_08AFAFD4:
    aot_gpr_31 = (0x08AFAFDCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFAFDCu) goto L_08AFAFDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFAFDC:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFB024:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[11]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 1018 ? 1u : 0u);
    ctx.gpr[18] = (2238u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-272));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(72));
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08AFB09C;
      }
      goto L_08AFB08C;
    }
L_08AFB08C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 508 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFB0A4;
      }
      goto L_08AFB09C;
    }
L_08AFB09C:
    aot_gpr_31 = (0x08AFB0A4u);
    goto L_08AF9350;
L_08AFB0A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1360)));
    aot_gpr_31 = (0x08AFB0B0u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFB0B0u) goto L_08AFB0B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFB0B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_08AFB19C;
      }
      goto L_08AFB0D4;
    }
L_08AFB0D4:
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_7));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    aot_gpr_7 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_7));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    aot_gpr_7 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_7));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    aot_gpr_7 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_7));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AFB254;
      }
      goto L_08AFB19C;
    }
L_08AFB19C:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_7));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_7));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_7));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_7));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    goto L_08AFB254;
L_08AFB254:
    aot_gpr_5 = (15616u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = ctx.fpr[22] + ctx.fpr[26];
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_fpr_14 = aot_fpr_20 + ctx.fpr[26];
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_7 = (2238u << 16u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(12016));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_7 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_7));
    ctx.gpr[8] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[8] = (aot_gpr_4 + static_cast<std::uint32_t>(3));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(6));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), aot_gpr_4);
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.gpr[16] = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      ctx.gpr[20] = aot_run_words[8];
      ctx.gpr[21] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFB424:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8344), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8664), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10288), 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10284), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10416), 0u);
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8668), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x08AFB46Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 497u, 0x08A05F1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFB46Cu) goto L_08AFB46C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFB46C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1552), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFB484;
      }
      goto L_08AFB474;
    }
L_08AFB474:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1552)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFB484u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 501u, 0x08A05F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFB484u) goto L_08AFB484;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFB484:
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
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFB4E0:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10284), static_cast<std::uint16_t>(aot_gpr_4));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFB4E8:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10284), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8344), static_cast<std::uint16_t>(aot_gpr_4));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(aot_gpr_4));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFB4F8:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10284), static_cast<std::uint16_t>(aot_gpr_4));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFB504:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const std::uint32_t aot_run_words[13]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFB560;
      }
      goto L_08AFB548;
    }
L_08AFB548:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
        goto L_08AFB568;
    }
    goto L_08AFB558;
L_08AFB558:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFB788;
      }
      goto L_08AFB560;
    }
L_08AFB560:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFB794;
      }
      goto L_08AFB568;
    }
L_08AFB568:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 18 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFB788;
      }
      goto L_08AFB574;
    }
L_08AFB574:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (0u | 24u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AFB5BC;
      }
      goto L_08AFB5A4;
    }
L_08AFB5A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1984)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFB5C4;
      }
      goto L_08AFB5BC;
    }
L_08AFB5BC:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    goto L_08AFB5C4;
L_08AFB5C4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08AFB5D8u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFB5D8u) goto L_08AFB5D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFB5D8:
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[26] = ctx.fpr[0] + ctx.fpr[26];
      if (branch_taken) {
          goto L_08AFB600;
      }
      goto L_08AFB5F0;
    }
L_08AFB5F0:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (16192u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[26] = ctx.fpr[26] + aot_fpr_12;
    goto L_08AFB600;
L_08AFB600:
    aot_gpr_4 = (15308u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (15477u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (49440u << 16u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    goto L_08AFB630;
L_08AFB630:
    aot_gpr_31 = (0x08AFB638u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFB638u) goto L_08AFB638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFB638:
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[24];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08AFB650u);
    aot_fpr_20 = ctx.fpr[24] + aot_fpr_12;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFB650u) goto L_08AFB650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFB650:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (15232u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32897u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08AFB678u);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFB678u) goto L_08AFB678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFB678:
    aot_gpr_4 = (ctx.gpr[2] << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08AFB6B8;
      }
      goto L_08AFB68C;
    }
L_08AFB68C:
    aot_gpr_31 = (0x08AFB694u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFB694u) goto L_08AFB694;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFB694:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (15560u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 62915u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_08AFB6D0;
      }
      goto L_08AFB6B8;
    }
L_08AFB6B8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-128));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1968)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    goto L_08AFB6D0;
L_08AFB6D0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[15] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[28])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_4 = (0u | 32u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_gpr_7 = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08AFB770u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFB770u) goto L_08AFB770;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFB770:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFB630;
      }
      goto L_08AFB780;
    }
L_08AFB780:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFB794;
      }
      goto L_08AFB788;
    }
L_08AFB788:
    aot_gpr_4 = (0u | 800u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1556), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1544), static_cast<std::uint8_t>(0u));
    goto L_08AFB794;
L_08AFB794:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
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
      aot_gpr_31 = aot_run_words[12];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFB7D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_gpr_5 = (0u | 32u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1984)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words); }
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AFB850;
      }
      goto L_08AFB838;
    }
L_08AFB838:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1984)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFB858;
      }
      goto L_08AFB850;
    }
L_08AFB850:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    goto L_08AFB858;
L_08AFB858:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08AFB86Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFB86Cu) goto L_08AFB86C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFB86C:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[0] + aot_fpr_12;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AFB89C;
      }
      goto L_08AFB888;
    }
L_08AFB888:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AFB89C;
L_08AFB89C:
    aot_gpr_4 = (15308u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (47875u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (15477u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (49440u << 16u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    goto L_08AFB8D8;
L_08AFB8D8:
    aot_gpr_31 = (0x08AFB8E0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFB8E0u) goto L_08AFB8E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFB8E0:
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[24];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08AFB8F8u);
    aot_fpr_20 = ctx.fpr[24] + aot_fpr_12;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFB8F8u) goto L_08AFB8F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFB8F8:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (15232u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32897u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08AFB920u);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFB920u) goto L_08AFB920;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFB920:
    aot_gpr_4 = (ctx.gpr[2] << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08AFB960;
      }
      goto L_08AFB934;
    }
L_08AFB934:
    aot_gpr_31 = (0x08AFB93Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFB93Cu) goto L_08AFB93C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFB93C:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (15560u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 62915u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_08AFB978;
      }
      goto L_08AFB960;
    }
L_08AFB960:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-128));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1968)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    goto L_08AFB978;
L_08AFB978:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFBA34;
      }
      goto L_08AFB9E4;
    }
L_08AFB9E4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[28])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_4 = (0u | 32u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_gpr_7 = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08AFBA34u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBA34u) goto L_08AFBA34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBA34:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFB8D8;
      }
      goto L_08AFBA44;
    }
L_08AFBA44:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
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
      aot_gpr_31 = aot_run_words[12];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFBA80:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-176));
    { const std::uint32_t aot_run_words[13]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_run_words); }
    aot_gpr_31 = (0x08AFBAC0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBAC0u) goto L_08AFBAC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBAC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AFBB10;
      }
      goto L_08AFBAC8;
    }
L_08AFBAC8:
    aot_gpr_31 = (0x08AFBAD0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBAD0u) goto L_08AFBAD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBAD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AFBB10;
      }
      goto L_08AFBAD8;
    }
L_08AFBAD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11240)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFBB10;
      }
      goto L_08AFBAF4;
    }
L_08AFBAF4:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08AFBB00u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 68u, 0x08A1C714u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBB00u) goto L_08AFBB00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBB00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AFBB18;
      }
      goto L_08AFBB08;
    }
L_08AFBB08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFBB4C;
      }
      goto L_08AFBB10;
    }
L_08AFBB10:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFBF04;
      }
      goto L_08AFBB18;
    }
L_08AFBB18:
    aot_gpr_31 = (0x08AFBB20u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBB20u) goto L_08AFBB20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBB20:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFBB4C;
      }
      goto L_08AFBB2C;
    }
L_08AFBB2C:
    aot_gpr_31 = (0x08AFBB34u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 289u, 0x08B01038u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBB34u) goto L_08AFBB34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBB34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AFBB4C;
      }
      goto L_08AFBB3C;
    }
L_08AFBB3C:
    aot_gpr_31 = (0x08AFBB44u);
    aot_gpr_4 = (0u | 85u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 729u, 0x088FF1B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBB44u) goto L_08AFBB44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBB44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFBF04;
      }
      goto L_08AFBB4C;
    }
L_08AFBB4C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08AFBB7C;
      }
      goto L_08AFBB68;
    }
L_08AFBB68:
    aot_gpr_4 = (0u | 800u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1556), aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1544), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AFBBB8;
      }
      goto L_08AFBB7C;
    }
L_08AFBB7C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1544)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFBBB8;
      }
      goto L_08AFBB88;
    }
L_08AFBB88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1556)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08AFBBAC;
      }
      goto L_08AFBB94;
    }
L_08AFBB94:
    aot_gpr_31 = (0x08AFBB9Cu);
    goto L_08AFB504;
L_08AFBB9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1556)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1556), aot_gpr_4);
      if (branch_taken) {
          goto L_08AFBBB8;
      }
      goto L_08AFBBAC;
    }
L_08AFBBAC:
    aot_gpr_4 = (0u | 800u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1556), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1544), static_cast<std::uint8_t>(0u));
    goto L_08AFBBB8;
L_08AFBBB8:
    aot_gpr_4 = (16268u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFBBE0;
      }
      goto L_08AFBBD8;
    }
L_08AFBBD8:
    aot_gpr_31 = (0x08AFBBE0u);
    goto L_08AFB7D0;
L_08AFBBE0:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16544u << 16u);
      if (branch_taken) {
          goto L_08AFBF04;
      }
      goto L_08AFBBF4;
    }
L_08AFBBF4:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (16928u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFBF04;
      }
      goto L_08AFBC28;
    }
L_08AFBC28:
    aot_gpr_4 = (16880u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 5u);
    aot_gpr_4 = (16192u << 16u);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    goto L_08AFBC48;
L_08AFBC48:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_gpr_31 = (0x08AFBC54u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBC54u) goto L_08AFBC54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBC54:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 31u));
    aot_gpr_31 = (0x08AFBC68u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBC68u) goto L_08AFBC68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBC68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.gpr[22] = (ctx.lo);
    aot_gpr_31 = (0x08AFBC98u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBC98u) goto L_08AFBC98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBC98:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 31u));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AFBCACu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBCACu) goto L_08AFBCAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBCAC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08AFBCD8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBCD8u) goto L_08AFBCD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBCD8:
    aot_fpr_12 = aot_fpr_20 - ctx.fpr[28];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[22] = (aot_gpr_4 & 3u);
    aot_fpr_12 = ctx.fpr[28] + aot_fpr_12;
    aot_gpr_31 = (0x08AFBD00u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBD00u) goto L_08AFBD00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBD00:
    aot_fpr_12 = ctx.fpr[26] - ctx.fpr[22];
    aot_gpr_4 = (0u | 85u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_7 = (0u | 0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[22] | 0u);
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_gpr_31 = (0x08AFBD34u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBD34u) goto L_08AFBD34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBD34:
    aot_gpr_31 = (0x08AFBD3Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBD3Cu) goto L_08AFBD3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBD3C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 31u));
    aot_gpr_31 = (0x08AFBD50u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBD50u) goto L_08AFBD50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBD50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_6 = (ctx.gpr[2] >> 31u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_6 = (ctx.gpr[1] | aot_gpr_6);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_5 = (aot_gpr_5 >> 31u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[20] = (ctx.lo);
    aot_gpr_31 = (0x08AFBD94u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 31u));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBD94u) goto L_08AFBD94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBD94:
    aot_gpr_6 = (ctx.gpr[22] - ctx.gpr[20]);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AFBDA8u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 31u));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBDA8u) goto L_08AFBDA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBDA8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_7 = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_5);
    aot_gpr_31 = (0x08AFBDE8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBDE8u) goto L_08AFBDE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBDE8:
    aot_fpr_12 = aot_fpr_20 - ctx.fpr[28];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[20] = (aot_gpr_4 & 3u);
    aot_fpr_12 = ctx.fpr[28] + aot_fpr_12;
    aot_gpr_31 = (0x08AFBE10u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBE10u) goto L_08AFBE10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBE10:
    aot_fpr_12 = ctx.fpr[26] - ctx.fpr[22];
    aot_gpr_4 = (0u | 85u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_7 = (0u | 0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[20] | 0u);
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_gpr_31 = (0x08AFBE44u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBE44u) goto L_08AFBE44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBE44:
    aot_gpr_31 = (0x08AFBE4Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBE4Cu) goto L_08AFBE4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBE4C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AFBE60u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 31u));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBE60u) goto L_08AFBE60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBE60:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08AFBE90u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBE90u) goto L_08AFBE90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBE90:
    aot_fpr_12 = aot_fpr_20 - ctx.fpr[28];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[20] = (aot_gpr_4 & 3u);
    aot_fpr_12 = ctx.fpr[28] + aot_fpr_12;
    aot_gpr_31 = (0x08AFBEB8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBEB8u) goto L_08AFBEB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBEB8:
    aot_fpr_12 = ctx.fpr[26] - ctx.fpr[22];
    aot_gpr_4 = (0u | 85u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_7 = (0u | 0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[20] | 0u);
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_gpr_31 = (0x08AFBEECu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBEECu) goto L_08AFBEEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBEEC:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFBC48;
      }
      goto L_08AFBF04;
    }
L_08AFBF04:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.gpr[16] = aot_run_words[5];
      ctx.gpr[17] = aot_run_words[6];
      ctx.gpr[18] = aot_run_words[7];
      ctx.gpr[19] = aot_run_words[8];
      ctx.gpr[20] = aot_run_words[9];
      ctx.gpr[21] = aot_run_words[10];
      ctx.gpr[22] = aot_run_words[11];
      aot_gpr_31 = aot_run_words[12];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFBF40:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFBF48:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), ctx.gpr[16], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_31 = (0x08AFBF68u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBF68u) goto L_08AFBF68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBF68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AFBF90;
      }
      goto L_08AFBF70;
    }
L_08AFBF70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_5 = (0u | 10u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.hi);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFBF98;
      }
      goto L_08AFBF88;
    }
L_08AFBF88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC0B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AFBF90;
    }
L_08AFBF90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC0B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AFBF98;
    }
L_08AFBF98:
    aot_gpr_31 = (0x08AFBFA0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBFA0u) goto L_08AFBFA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBFA0:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 5u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC0B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AFBFB0;
    }
L_08AFBFB0:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
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
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (17076u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17174u << 16u);
    aot_gpr_31 = (0x08AFBFDCu);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBFDCu) goto L_08AFBFDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBFDC:
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x08AFBFF0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFBFF0u) goto L_08AFBFF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFBFF0:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(aot_gpr_4) >= 0) {
    aot_gpr_4 = (aot_gpr_4 & 1023u);
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 2u, 0x08AFC00Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08AFBFFC;
L_08AFBFFC:
    aot_gpr_4 = (0u - aot_gpr_4);
    ctx.pc = 0x08AFC000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0189(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0189_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_189(Runtime &runtime) {
    runtime.register_generated_unit(189u, 0x08AF8000u, 16384u, &recomp_unit_0189, &recomp_unit_0189_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08AF8000u, &recomp_unit_0189, "recomp_unit_0189",
                                          kEntryMasks_recomp_unit_0189, 64u);
}
} // namespace psprecomp
