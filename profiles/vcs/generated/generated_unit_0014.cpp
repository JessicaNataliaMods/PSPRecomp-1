#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0014[64] = {
    0x2101208881280A45ull, 0x100040280AA88881ull, 0x0308008400142002ull, 0xA10290A840454A50ull,
    0x0440A0842A020242ull, 0x08448205042A0205ull, 0x5450294452904824ull, 0x0A1146108420AA14ull,
    0x1280020880001014ull, 0x0480544805302A00ull, 0x910924AA45084950ull, 0x8849242448815408ull,
    0x4444445251110C84ull, 0x4140200280010000ull, 0x800000A455228AA5ull, 0x0540540844405290ull,
    0x0888522244481415ull, 0x01601524AAA02800ull, 0x080402A0892494B6ull, 0x40014110A8000080ull,
    0x2229024A08801220ull, 0x0242A80084402428ull, 0x8008440242800844ull, 0x02514890092284A8ull,
    0x8902514890251489ull, 0x24808C4252A94124ull, 0xA008220090282AA8ull, 0x0042202420081104ull,
    0x2481055280249081ull, 0x1500492101004220ull, 0x2484040108809204ull, 0x0092420244105401ull,
    0x4124924922054092ull, 0x291091054A224492ull, 0x2440401024488488ull, 0x2128010090404010ull,
    0x1212401000814880ull, 0x08021110122AA894ull, 0x8021110122812891ull, 0x0211101228128910ull,
    0x915544A081289108ull, 0x1409448840108880ull, 0x4094488401088809ull, 0x0944884010888091ull,
    0x0840082AA020A554ull, 0x1402088800208821ull, 0x8029091502914440ull, 0x2022921450102212ull,
    0x4A21401480200909ull, 0x55555548A200A500ull, 0x4002024090005514ull, 0x0040481200080902ull,
    0x220020008A024090ull, 0x0048480240048009ull, 0x2280914A01200090ull, 0x0161212080001084ull,
    0x2800002544810810ull, 0x2204450814000040ull, 0x5000824000008882ull, 0x0480000222222044ull,
    0x001110444088A001ull, 0x9488008A00104800ull, 0x0002800004A12222ull, 0x1222294880114140ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0014[64] = {
    1u, 16u, 29u, 38u, 56u, 69u, 83u, 102u, 119u, 128u, 142u, 162u, 179u, 197u, 204u, 221u,
    236u, 253u, 269u, 287u, 296u, 310u, 323u, 334u, 351u, 370u, 389u, 404u, 414u, 430u, 442u, 454u,
    467u, 485u, 504u, 517u, 527u, 538u, 554u, 569u, 583u, 602u, 615u, 629u, 643u, 659u, 670u, 686u,
    701u, 715u, 736u, 748u, 757u, 767u, 777u, 790u, 801u, 812u, 822u, 831u, 841u, 852u, 863u, 873u,
};
void recomp_unit_0014_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,31,2,5,29,17 fprs=12,13,14,20 gpr_occ=3991 fpr_occ=1423 gpr_total=5258 fpr_total=1677
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_17 = ctx.gpr[17];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[31] = aot_gpr_31; ctx.gpr[2] = aot_gpr_2; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[17] = aot_gpr_17; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_2 = ctx.gpr[2]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_17 = ctx.gpr[17]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0883C004u;
        entry_id = 0u;
        if (entry_delta < 16372u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0014[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0014[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_0883C004;
    case 2u: goto L_0883C00C;
    case 3u: goto L_0883C01C;
    case 4u: goto L_0883C028;
    case 5u: goto L_0883C030;
    case 6u: goto L_0883C050;
    case 7u: goto L_0883C058;
    case 8u: goto L_0883C064;
    case 9u: goto L_0883C080;
    case 10u: goto L_0883C090;
    case 11u: goto L_0883C0A0;
    case 12u: goto L_0883C0B8;
    case 13u: goto L_0883C0C4;
    case 14u: goto L_0883C0E4;
    case 15u: goto L_0883C0F8;
    case 16u: goto L_0883C104;
    case 17u: goto L_0883C120;
    case 18u: goto L_0883C130;
    case 19u: goto L_0883C140;
    case 20u: goto L_0883C150;
    case 21u: goto L_0883C158;
    case 22u: goto L_0883C160;
    case 23u: goto L_0883C168;
    case 24u: goto L_0883C170;
    case 25u: goto L_0883C190;
    case 26u: goto L_0883C198;
    case 27u: goto L_0883C1BC;
    case 28u: goto L_0883C1F4;
    case 29u: goto L_0883C208;
    case 30u: goto L_0883C238;
    case 31u: goto L_0883C24C;
    case 32u: goto L_0883C254;
    case 33u: goto L_0883C28C;
    case 34u: goto L_0883C2A0;
    case 35u: goto L_0883C2D0;
    case 36u: goto L_0883C2E4;
    case 37u: goto L_0883C2E8;
    case 38u: goto L_0883C314;
    case 39u: goto L_0883C31C;
    case 40u: goto L_0883C328;
    case 41u: goto L_0883C330;
    case 42u: goto L_0883C33C;
    case 43u: goto L_0883C344;
    case 44u: goto L_0883C34C;
    case 45u: goto L_0883C35C;
    case 46u: goto L_0883C37C;
    case 47u: goto L_0883C390;
    case 48u: goto L_0883C398;
    case 49u: goto L_0883C3A0;
    case 50u: goto L_0883C3B4;
    case 51u: goto L_0883C3C0;
    case 52u: goto L_0883C3C8;
    case 53u: goto L_0883C3E4;
    case 54u: goto L_0883C3F8;
    case 55u: goto L_0883C400;
    case 56u: goto L_0883C408;
    case 57u: goto L_0883C41C;
    case 58u: goto L_0883C428;
    case 59u: goto L_0883C448;
    case 60u: goto L_0883C468;
    case 61u: goto L_0883C470;
    case 62u: goto L_0883C478;
    case 63u: goto L_0883C48C;
    case 64u: goto L_0883C4A0;
    case 65u: goto L_0883C4B8;
    case 66u: goto L_0883C4C0;
    case 67u: goto L_0883C4DC;
    case 68u: goto L_0883C4EC;
    case 69u: goto L_0883C504;
    case 70u: goto L_0883C50C;
    case 71u: goto L_0883C528;
    case 72u: goto L_0883C548;
    case 73u: goto L_0883C550;
    case 74u: goto L_0883C558;
    case 75u: goto L_0883C56C;
    case 76u: goto L_0883C584;
    case 77u: goto L_0883C58C;
    case 78u: goto L_0883C5A8;
    case 79u: goto L_0883C5C0;
    case 80u: goto L_0883C5CC;
    case 81u: goto L_0883C5DC;
    case 82u: goto L_0883C5F0;
    case 83u: goto L_0883C60C;
    case 84u: goto L_0883C618;
    case 85u: goto L_0883C630;
    case 86u: goto L_0883C63C;
    case 87u: goto L_0883C654;
    case 88u: goto L_0883C660;
    case 89u: goto L_0883C668;
    case 90u: goto L_0883C674;
    case 91u: goto L_0883C67C;
    case 92u: goto L_0883C68C;
    case 93u: goto L_0883C69C;
    case 94u: goto L_0883C6A4;
    case 95u: goto L_0883C6B0;
    case 96u: goto L_0883C6B8;
    case 97u: goto L_0883C6D4;
    case 98u: goto L_0883C6DC;
    case 99u: goto L_0883C6EC;
    case 100u: goto L_0883C6F4;
    case 101u: goto L_0883C6FC;
    case 102u: goto L_0883C70C;
    case 103u: goto L_0883C714;
    case 104u: goto L_0883C728;
    case 105u: goto L_0883C730;
    case 106u: goto L_0883C738;
    case 107u: goto L_0883C740;
    case 108u: goto L_0883C758;
    case 109u: goto L_0883C76C;
    case 110u: goto L_0883C780;
    case 111u: goto L_0883C794;
    case 112u: goto L_0883C7A8;
    case 113u: goto L_0883C7AC;
    case 114u: goto L_0883C7BC;
    case 115u: goto L_0883C7C4;
    case 116u: goto L_0883C7D4;
    case 117u: goto L_0883C7E8;
    case 118u: goto L_0883C7F0;
    case 119u: goto L_0883C80C;
    case 120u: goto L_0883C814;
    case 121u: goto L_0883C834;
    case 122u: goto L_0883C880;
    case 123u: goto L_0883C890;
    case 124u: goto L_0883C8A8;
    case 125u: goto L_0883C8E0;
    case 126u: goto L_0883C8E8;
    case 127u: goto L_0883C8F4;
    case 128u: goto L_0883C928;
    case 129u: goto L_0883C930;
    case 130u: goto L_0883C938;
    case 131u: goto L_0883C954;
    case 132u: goto L_0883C958;
    case 133u: goto L_0883C964;
    case 134u: goto L_0883C96C;
    case 135u: goto L_0883C990;
    case 136u: goto L_0883C99C;
    case 137u: goto L_0883C9AC;
    case 138u: goto L_0883C9B4;
    case 139u: goto L_0883C9BC;
    case 140u: goto L_0883C9E0;
    case 141u: goto L_0883C9EC;
    case 142u: goto L_0883CA14;
    case 143u: goto L_0883CA1C;
    case 144u: goto L_0883CA24;
    case 145u: goto L_0883CA30;
    case 146u: goto L_0883CA3C;
    case 147u: goto L_0883CA50;
    case 148u: goto L_0883CA64;
    case 149u: goto L_0883CA6C;
    case 150u: goto L_0883CA7C;
    case 151u: goto L_0883CA88;
    case 152u: goto L_0883CA90;
    case 153u: goto L_0883CA98;
    case 154u: goto L_0883CAA0;
    case 155u: goto L_0883CAAC;
    case 156u: goto L_0883CAB8;
    case 157u: goto L_0883CAC4;
    case 158u: goto L_0883CAD0;
    case 159u: goto L_0883CAE4;
    case 160u: goto L_0883CAF4;
    case 161u: goto L_0883CB00;
    case 162u: goto L_0883CB10;
    case 163u: goto L_0883CB2C;
    case 164u: goto L_0883CB34;
    case 165u: goto L_0883CB3C;
    case 166u: goto L_0883CB44;
    case 167u: goto L_0883CB60;
    case 168u: goto L_0883CB70;
    case 169u: goto L_0883CB7C;
    case 170u: goto L_0883CB8C;
    case 171u: goto L_0883CB98;
    case 172u: goto L_0883CBAC;
    case 173u: goto L_0883CBB8;
    case 174u: goto L_0883CBC4;
    case 175u: goto L_0883CBD0;
    case 176u: goto L_0883CBDC;
    case 177u: goto L_0883CBF0;
    case 178u: goto L_0883CC00;
    case 179u: goto L_0883CC0C;
    case 180u: goto L_0883CC20;
    case 181u: goto L_0883CC2C;
    case 182u: goto L_0883CC30;
    case 183u: goto L_0883CC44;
    case 184u: goto L_0883CC54;
    case 185u: goto L_0883CC64;
    case 186u: goto L_0883CC74;
    case 187u: goto L_0883CC7C;
    case 188u: goto L_0883CC88;
    case 189u: goto L_0883CC94;
    case 190u: goto L_0883CC9C;
    case 191u: goto L_0883CCAC;
    case 192u: goto L_0883CCBC;
    case 193u: goto L_0883CCCC;
    case 194u: goto L_0883CCDC;
    case 195u: goto L_0883CCEC;
    case 196u: goto L_0883CCFC;
    case 197u: goto L_0883CD44;
    case 198u: goto L_0883CD80;
    case 199u: goto L_0883CD88;
    case 200u: goto L_0883CDB8;
    case 201u: goto L_0883CDDC;
    case 202u: goto L_0883CDE4;
    case 203u: goto L_0883CDFC;
    case 204u: goto L_0883CE04;
    case 205u: goto L_0883CE0C;
    case 206u: goto L_0883CE18;
    case 207u: goto L_0883CE20;
    case 208u: goto L_0883CE28;
    case 209u: goto L_0883CE30;
    case 210u: goto L_0883CE40;
    case 211u: goto L_0883CE48;
    case 212u: goto L_0883CE58;
    case 213u: goto L_0883CE64;
    case 214u: goto L_0883CE6C;
    case 215u: goto L_0883CE74;
    case 216u: goto L_0883CE7C;
    case 217u: goto L_0883CE8C;
    case 218u: goto L_0883CE98;
    case 219u: goto L_0883CEA0;
    case 220u: goto L_0883CF00;
    case 221u: goto L_0883CF14;
    case 222u: goto L_0883CF20;
    case 223u: goto L_0883CF28;
    case 224u: goto L_0883CF34;
    case 225u: goto L_0883CF3C;
    case 226u: goto L_0883CF5C;
    case 227u: goto L_0883CF6C;
    case 228u: goto L_0883CF7C;
    case 229u: goto L_0883CF90;
    case 230u: goto L_0883CFAC;
    case 231u: goto L_0883CFB4;
    case 232u: goto L_0883CFBC;
    case 233u: goto L_0883CFDC;
    case 234u: goto L_0883CFE4;
    case 235u: goto L_0883CFEC;
    case 236u: goto L_0883D004;
    case 237u: goto L_0883D00C;
    case 238u: goto L_0883D014;
    case 239u: goto L_0883D02C;
    case 240u: goto L_0883D034;
    case 241u: goto L_0883D050;
    case 242u: goto L_0883D05C;
    case 243u: goto L_0883D06C;
    case 244u: goto L_0883D07C;
    case 245u: goto L_0883D088;
    case 246u: goto L_0883D098;
    case 247u: goto L_0883D0A8;
    case 248u: goto L_0883D0B4;
    case 249u: goto L_0883D0BC;
    case 250u: goto L_0883D0D0;
    case 251u: goto L_0883D0E0;
    case 252u: goto L_0883D0F0;
    case 253u: goto L_0883D130;
    case 254u: goto L_0883D138;
    case 255u: goto L_0883D158;
    case 256u: goto L_0883D160;
    case 257u: goto L_0883D168;
    case 258u: goto L_0883D170;
    case 259u: goto L_0883D178;
    case 260u: goto L_0883D180;
    case 261u: goto L_0883D18C;
    case 262u: goto L_0883D198;
    case 263u: goto L_0883D1A4;
    case 264u: goto L_0883D1AC;
    case 265u: goto L_0883D1B4;
    case 266u: goto L_0883D1D8;
    case 267u: goto L_0883D1DC;
    case 268u: goto L_0883D1E4;
    case 269u: goto L_0883D208;
    case 270u: goto L_0883D20C;
    case 271u: goto L_0883D214;
    case 272u: goto L_0883D218;
    case 273u: goto L_0883D220;
    case 274u: goto L_0883D22C;
    case 275u: goto L_0883D234;
    case 276u: goto L_0883D240;
    case 277u: goto L_0883D24C;
    case 278u: goto L_0883D258;
    case 279u: goto L_0883D264;
    case 280u: goto L_0883D270;
    case 281u: goto L_0883D280;
    case 282u: goto L_0883D298;
    case 283u: goto L_0883D2A0;
    case 284u: goto L_0883D2A8;
    case 285u: goto L_0883D2CC;
    case 286u: goto L_0883D2F0;
    case 287u: goto L_0883D320;
    case 288u: goto L_0883D370;
    case 289u: goto L_0883D378;
    case 290u: goto L_0883D380;
    case 291u: goto L_0883D394;
    case 292u: goto L_0883D3A4;
    case 293u: goto L_0883D3BC;
    case 294u: goto L_0883D3C4;
    case 295u: goto L_0883D3FC;
    case 296u: goto L_0883D418;
    case 297u: goto L_0883D428;
    case 298u: goto L_0883D434;
    case 299u: goto L_0883D460;
    case 300u: goto L_0883D470;
    case 301u: goto L_0883D488;
    case 302u: goto L_0883D490;
    case 303u: goto L_0883D49C;
    case 304u: goto L_0883D4A8;
    case 305u: goto L_0883D4C4;
    case 306u: goto L_0883D4D0;
    case 307u: goto L_0883D4D8;
    case 308u: goto L_0883D4E8;
    case 309u: goto L_0883D4F8;
    case 310u: goto L_0883D510;
    case 311u: goto L_0883D518;
    case 312u: goto L_0883D52C;
    case 313u: goto L_0883D538;
    case 314u: goto L_0883D55C;
    case 315u: goto L_0883D56C;
    case 316u: goto L_0883D580;
    case 317u: goto L_0883D5B0;
    case 318u: goto L_0883D5B8;
    case 319u: goto L_0883D5C0;
    case 320u: goto L_0883D5C8;
    case 321u: goto L_0883D5DC;
    case 322u: goto L_0883D5E8;
    case 323u: goto L_0883D60C;
    case 324u: goto L_0883D61C;
    case 325u: goto L_0883D630;
    case 326u: goto L_0883D660;
    case 327u: goto L_0883D668;
    case 328u: goto L_0883D67C;
    case 329u: goto L_0883D688;
    case 330u: goto L_0883D6AC;
    case 331u: goto L_0883D6BC;
    case 332u: goto L_0883D6D0;
    case 333u: goto L_0883D700;
    case 334u: goto L_0883D710;
    case 335u: goto L_0883D718;
    case 336u: goto L_0883D720;
    case 337u: goto L_0883D72C;
    case 338u: goto L_0883D740;
    case 339u: goto L_0883D748;
    case 340u: goto L_0883D758;
    case 341u: goto L_0883D764;
    case 342u: goto L_0883D770;
    case 343u: goto L_0883D794;
    case 344u: goto L_0883D7A0;
    case 345u: goto L_0883D7B0;
    case 346u: goto L_0883D7BC;
    case 347u: goto L_0883D7C4;
    case 348u: goto L_0883D7D4;
    case 349u: goto L_0883D7DC;
    case 350u: goto L_0883D7E8;
    case 351u: goto L_0883D804;
    case 352u: goto L_0883D810;
    case 353u: goto L_0883D820;
    case 354u: goto L_0883D82C;
    case 355u: goto L_0883D834;
    case 356u: goto L_0883D844;
    case 357u: goto L_0883D84C;
    case 358u: goto L_0883D858;
    case 359u: goto L_0883D874;
    case 360u: goto L_0883D880;
    case 361u: goto L_0883D890;
    case 362u: goto L_0883D89C;
    case 363u: goto L_0883D8A4;
    case 364u: goto L_0883D8B4;
    case 365u: goto L_0883D8BC;
    case 366u: goto L_0883D8C8;
    case 367u: goto L_0883D8E4;
    case 368u: goto L_0883D8F0;
    case 369u: goto L_0883D900;
    case 370u: goto L_0883D90C;
    case 371u: goto L_0883D918;
    case 372u: goto L_0883D924;
    case 373u: goto L_0883D93C;
    case 374u: goto L_0883D944;
    case 375u: goto L_0883D950;
    case 376u: goto L_0883D958;
    case 377u: goto L_0883D960;
    case 378u: goto L_0883D968;
    case 379u: goto L_0883D974;
    case 380u: goto L_0883D97C;
    case 381u: goto L_0883D988;
    case 382u: goto L_0883D99C;
    case 383u: goto L_0883D9AC;
    case 384u: goto L_0883D9B0;
    case 385u: goto L_0883D9C0;
    case 386u: goto L_0883D9E0;
    case 387u: goto L_0883D9EC;
    case 388u: goto L_0883D9F8;
    case 389u: goto L_0883DA10;
    case 390u: goto L_0883DA18;
    case 391u: goto L_0883DA20;
    case 392u: goto L_0883DA28;
    case 393u: goto L_0883DA30;
    case 394u: goto L_0883DA38;
    case 395u: goto L_0883DA50;
    case 396u: goto L_0883DA58;
    case 397u: goto L_0883DA74;
    case 398u: goto L_0883DA80;
    case 399u: goto L_0883DAA8;
    case 400u: goto L_0883DAB8;
    case 401u: goto L_0883DAD0;
    case 402u: goto L_0883DAF8;
    case 403u: goto L_0883DB00;
    case 404u: goto L_0883DB0C;
    case 405u: goto L_0883DB24;
    case 406u: goto L_0883DB34;
    case 407u: goto L_0883DB50;
    case 408u: goto L_0883DB78;
    case 409u: goto L_0883DB8C;
    case 410u: goto L_0883DB98;
    case 411u: goto L_0883DBB8;
    case 412u: goto L_0883DBC8;
    case 413u: goto L_0883DBDC;
    case 414u: goto L_0883DC04;
    case 415u: goto L_0883DC20;
    case 416u: goto L_0883DC34;
    case 417u: goto L_0883DC40;
    case 418u: goto L_0883DC4C;
    case 419u: goto L_0883DC58;
    case 420u: goto L_0883DC80;
    case 421u: goto L_0883DC88;
    case 422u: goto L_0883DC94;
    case 423u: goto L_0883DC9C;
    case 424u: goto L_0883DCA4;
    case 425u: goto L_0883DCAC;
    case 426u: goto L_0883DCC4;
    case 427u: goto L_0883DCE0;
    case 428u: goto L_0883DCEC;
    case 429u: goto L_0883DCF8;
    case 430u: goto L_0883DD18;
    case 431u: goto L_0883DD28;
    case 432u: goto L_0883DD3C;
    case 433u: goto L_0883DD64;
    case 434u: goto L_0883DD84;
    case 435u: goto L_0883DD98;
    case 436u: goto L_0883DDA4;
    case 437u: goto L_0883DDB0;
    case 438u: goto L_0883DDBC;
    case 439u: goto L_0883DDE4;
    case 440u: goto L_0883DDEC;
    case 441u: goto L_0883DDF4;
    case 442u: goto L_0883DE0C;
    case 443u: goto L_0883DE28;
    case 444u: goto L_0883DE34;
    case 445u: goto L_0883DE40;
    case 446u: goto L_0883DE60;
    case 447u: goto L_0883DE70;
    case 448u: goto L_0883DE84;
    case 449u: goto L_0883DEAC;
    case 450u: goto L_0883DECC;
    case 451u: goto L_0883DEE0;
    case 452u: goto L_0883DEEC;
    case 453u: goto L_0883DEF8;
    case 454u: goto L_0883DF04;
    case 455u: goto L_0883DF2C;
    case 456u: goto L_0883DF34;
    case 457u: goto L_0883DF3C;
    case 458u: goto L_0883DF54;
    case 459u: goto L_0883DF6C;
    case 460u: goto L_0883DF7C;
    case 461u: goto L_0883DF88;
    case 462u: goto L_0883DFA8;
    case 463u: goto L_0883DFBC;
    case 464u: goto L_0883DFC8;
    case 465u: goto L_0883DFD4;
    case 466u: goto L_0883DFE0;
    case 467u: goto L_0883E008;
    case 468u: goto L_0883E014;
    case 469u: goto L_0883E020;
    case 470u: goto L_0883E03C;
    case 471u: goto L_0883E044;
    case 472u: goto L_0883E04C;
    case 473u: goto L_0883E068;
    case 474u: goto L_0883E078;
    case 475u: goto L_0883E084;
    case 476u: goto L_0883E090;
    case 477u: goto L_0883E09C;
    case 478u: goto L_0883E0A8;
    case 479u: goto L_0883E0B4;
    case 480u: goto L_0883E0C0;
    case 481u: goto L_0883E0CC;
    case 482u: goto L_0883E0D8;
    case 483u: goto L_0883E0E4;
    case 484u: goto L_0883E0FC;
    case 485u: goto L_0883E108;
    case 486u: goto L_0883E114;
    case 487u: goto L_0883E120;
    case 488u: goto L_0883E12C;
    case 489u: goto L_0883E13C;
    case 490u: goto L_0883E148;
    case 491u: goto L_0883E158;
    case 492u: goto L_0883E168;
    case 493u: goto L_0883E170;
    case 494u: goto L_0883E17C;
    case 495u: goto L_0883E184;
    case 496u: goto L_0883E18C;
    case 497u: goto L_0883E1A4;
    case 498u: goto L_0883E1B4;
    case 499u: goto L_0883E1C0;
    case 500u: goto L_0883E1D4;
    case 501u: goto L_0883E1E4;
    case 502u: goto L_0883E1F0;
    case 503u: goto L_0883E1F8;
    case 504u: goto L_0883E210;
    case 505u: goto L_0883E220;
    case 506u: goto L_0883E22C;
    case 507u: goto L_0883E240;
    case 508u: goto L_0883E250;
    case 509u: goto L_0883E25C;
    case 510u: goto L_0883E26C;
    case 511u: goto L_0883E278;
    case 512u: goto L_0883E294;
    case 513u: goto L_0883E2BC;
    case 514u: goto L_0883E2DC;
    case 515u: goto L_0883E2EC;
    case 516u: goto L_0883E2F8;
    case 517u: goto L_0883E314;
    case 518u: goto L_0883E33C;
    case 519u: goto L_0883E35C;
    case 520u: goto L_0883E374;
    case 521u: goto L_0883E380;
    case 522u: goto L_0883E3A4;
    case 523u: goto L_0883E3D0;
    case 524u: goto L_0883E3D8;
    case 525u: goto L_0883E3E4;
    case 526u: goto L_0883E3F8;
    case 527u: goto L_0883E420;
    case 528u: goto L_0883E430;
    case 529u: goto L_0883E43C;
    case 530u: goto L_0883E444;
    case 531u: goto L_0883E460;
    case 532u: goto L_0883E494;
    case 533u: goto L_0883E4BC;
    case 534u: goto L_0883E4C8;
    case 535u: goto L_0883E4D4;
    case 536u: goto L_0883E4E8;
    case 537u: goto L_0883E4F4;
    case 538u: goto L_0883E50C;
    case 539u: goto L_0883E514;
    case 540u: goto L_0883E520;
    case 541u: goto L_0883E530;
    case 542u: goto L_0883E538;
    case 543u: goto L_0883E540;
    case 544u: goto L_0883E548;
    case 545u: goto L_0883E550;
    case 546u: goto L_0883E558;
    case 547u: goto L_0883E568;
    case 548u: goto L_0883E574;
    case 549u: goto L_0883E594;
    case 550u: goto L_0883E5A4;
    case 551u: goto L_0883E5B4;
    case 552u: goto L_0883E5C8;
    case 553u: goto L_0883E5F0;
    case 554u: goto L_0883E604;
    case 555u: goto L_0883E614;
    case 556u: goto L_0883E620;
    case 557u: goto L_0883E630;
    case 558u: goto L_0883E638;
    case 559u: goto L_0883E644;
    case 560u: goto L_0883E660;
    case 561u: goto L_0883E668;
    case 562u: goto L_0883E678;
    case 563u: goto L_0883E684;
    case 564u: goto L_0883E6A4;
    case 565u: goto L_0883E6B4;
    case 566u: goto L_0883E6C4;
    case 567u: goto L_0883E6D8;
    case 568u: goto L_0883E700;
    case 569u: goto L_0883E714;
    case 570u: goto L_0883E724;
    case 571u: goto L_0883E730;
    case 572u: goto L_0883E740;
    case 573u: goto L_0883E748;
    case 574u: goto L_0883E754;
    case 575u: goto L_0883E770;
    case 576u: goto L_0883E778;
    case 577u: goto L_0883E788;
    case 578u: goto L_0883E794;
    case 579u: goto L_0883E7B4;
    case 580u: goto L_0883E7C4;
    case 581u: goto L_0883E7D4;
    case 582u: goto L_0883E7E8;
    case 583u: goto L_0883E810;
    case 584u: goto L_0883E824;
    case 585u: goto L_0883E834;
    case 586u: goto L_0883E840;
    case 587u: goto L_0883E850;
    case 588u: goto L_0883E858;
    case 589u: goto L_0883E864;
    case 590u: goto L_0883E880;
    case 591u: goto L_0883E898;
    case 592u: goto L_0883E8A0;
    case 593u: goto L_0883E8AC;
    case 594u: goto L_0883E8BC;
    case 595u: goto L_0883E8C4;
    case 596u: goto L_0883E8CC;
    case 597u: goto L_0883E8D4;
    case 598u: goto L_0883E8DC;
    case 599u: goto L_0883E8E4;
    case 600u: goto L_0883E8F4;
    case 601u: goto L_0883E900;
    case 602u: goto L_0883E920;
    case 603u: goto L_0883E930;
    case 604u: goto L_0883E940;
    case 605u: goto L_0883E954;
    case 606u: goto L_0883E97C;
    case 607u: goto L_0883E990;
    case 608u: goto L_0883E9A0;
    case 609u: goto L_0883E9AC;
    case 610u: goto L_0883E9BC;
    case 611u: goto L_0883E9C4;
    case 612u: goto L_0883E9D0;
    case 613u: goto L_0883E9EC;
    case 614u: goto L_0883E9F4;
    case 615u: goto L_0883EA04;
    case 616u: goto L_0883EA10;
    case 617u: goto L_0883EA30;
    case 618u: goto L_0883EA40;
    case 619u: goto L_0883EA50;
    case 620u: goto L_0883EA64;
    case 621u: goto L_0883EA8C;
    case 622u: goto L_0883EAA0;
    case 623u: goto L_0883EAB0;
    case 624u: goto L_0883EABC;
    case 625u: goto L_0883EACC;
    case 626u: goto L_0883EAD4;
    case 627u: goto L_0883EAE0;
    case 628u: goto L_0883EAFC;
    case 629u: goto L_0883EB04;
    case 630u: goto L_0883EB14;
    case 631u: goto L_0883EB20;
    case 632u: goto L_0883EB40;
    case 633u: goto L_0883EB50;
    case 634u: goto L_0883EB60;
    case 635u: goto L_0883EB74;
    case 636u: goto L_0883EB9C;
    case 637u: goto L_0883EBB0;
    case 638u: goto L_0883EBC0;
    case 639u: goto L_0883EBCC;
    case 640u: goto L_0883EBDC;
    case 641u: goto L_0883EBE4;
    case 642u: goto L_0883EBF0;
    case 643u: goto L_0883EC0C;
    case 644u: goto L_0883EC14;
    case 645u: goto L_0883EC1C;
    case 646u: goto L_0883EC24;
    case 647u: goto L_0883EC2C;
    case 648u: goto L_0883EC38;
    case 649u: goto L_0883EC40;
    case 650u: goto L_0883EC58;
    case 651u: goto L_0883EC78;
    case 652u: goto L_0883EC80;
    case 653u: goto L_0883EC88;
    case 654u: goto L_0883EC90;
    case 655u: goto L_0883EC98;
    case 656u: goto L_0883ECB0;
    case 657u: goto L_0883ECDC;
    case 658u: goto L_0883ECF0;
    case 659u: goto L_0883ED04;
    case 660u: goto L_0883ED18;
    case 661u: goto L_0883ED30;
    case 662u: goto L_0883ED40;
    case 663u: goto L_0883ED58;
    case 664u: goto L_0883ED90;
    case 665u: goto L_0883EDA0;
    case 666u: goto L_0883EDB0;
    case 667u: goto L_0883EDC8;
    case 668u: goto L_0883EDEC;
    case 669u: goto L_0883EDF4;
    case 670u: goto L_0883EE1C;
    case 671u: goto L_0883EE2C;
    case 672u: goto L_0883EE3C;
    case 673u: goto L_0883EE44;
    case 674u: goto L_0883EE54;
    case 675u: goto L_0883EE60;
    case 676u: goto L_0883EE68;
    case 677u: goto L_0883EE84;
    case 678u: goto L_0883EE8C;
    case 679u: goto L_0883EE94;
    case 680u: goto L_0883EEA4;
    case 681u: goto L_0883EEB0;
    case 682u: goto L_0883EEC4;
    case 683u: goto L_0883EED0;
    case 684u: goto L_0883EED8;
    case 685u: goto L_0883EF00;
    case 686u: goto L_0883EF08;
    case 687u: goto L_0883EF14;
    case 688u: goto L_0883EF28;
    case 689u: goto L_0883EF38;
    case 690u: goto L_0883EF54;
    case 691u: goto L_0883EF74;
    case 692u: goto L_0883EF7C;
    case 693u: goto L_0883EF8C;
    case 694u: goto L_0883EF94;
    case 695u: goto L_0883EFA8;
    case 696u: goto L_0883EFB4;
    case 697u: goto L_0883EFC0;
    case 698u: goto L_0883EFC8;
    case 699u: goto L_0883EFD8;
    case 700u: goto L_0883EFF8;
    case 701u: goto L_0883F004;
    case 702u: goto L_0883F010;
    case 703u: goto L_0883F024;
    case 704u: goto L_0883F030;
    case 705u: goto L_0883F058;
    case 706u: goto L_0883F080;
    case 707u: goto L_0883F08C;
    case 708u: goto L_0883F094;
    case 709u: goto L_0883F0BC;
    case 710u: goto L_0883F0C4;
    case 711u: goto L_0883F0D8;
    case 712u: goto L_0883F0E8;
    case 713u: goto L_0883F0F0;
    case 714u: goto L_0883F0FC;
    case 715u: goto L_0883F124;
    case 716u: goto L_0883F12C;
    case 717u: goto L_0883F138;
    case 718u: goto L_0883F140;
    case 719u: goto L_0883F168;
    case 720u: goto L_0883F178;
    case 721u: goto L_0883F180;
    case 722u: goto L_0883F190;
    case 723u: goto L_0883F19C;
    case 724u: goto L_0883F1A4;
    case 725u: goto L_0883F1AC;
    case 726u: goto L_0883F1B4;
    case 727u: goto L_0883F1BC;
    case 728u: goto L_0883F1C4;
    case 729u: goto L_0883F1CC;
    case 730u: goto L_0883F1D4;
    case 731u: goto L_0883F1DC;
    case 732u: goto L_0883F1E4;
    case 733u: goto L_0883F1EC;
    case 734u: goto L_0883F1F4;
    case 735u: goto L_0883F1FC;
    case 736u: goto L_0883F20C;
    case 737u: goto L_0883F214;
    case 738u: goto L_0883F224;
    case 739u: goto L_0883F22C;
    case 740u: goto L_0883F234;
    case 741u: goto L_0883F23C;
    case 742u: goto L_0883F274;
    case 743u: goto L_0883F280;
    case 744u: goto L_0883F29C;
    case 745u: goto L_0883F2A8;
    case 746u: goto L_0883F2C8;
    case 747u: goto L_0883F2FC;
    case 748u: goto L_0883F308;
    case 749u: goto L_0883F324;
    case 750u: goto L_0883F330;
    case 751u: goto L_0883F350;
    case 752u: goto L_0883F388;
    case 753u: goto L_0883F394;
    case 754u: goto L_0883F3B0;
    case 755u: goto L_0883F3BC;
    case 756u: goto L_0883F3DC;
    case 757u: goto L_0883F414;
    case 758u: goto L_0883F420;
    case 759u: goto L_0883F43C;
    case 760u: goto L_0883F448;
    case 761u: goto L_0883F468;
    case 762u: goto L_0883F470;
    case 763u: goto L_0883F480;
    case 764u: goto L_0883F4B8;
    case 765u: goto L_0883F4E8;
    case 766u: goto L_0883F4F8;
    case 767u: goto L_0883F504;
    case 768u: goto L_0883F510;
    case 769u: goto L_0883F540;
    case 770u: goto L_0883F54C;
    case 771u: goto L_0883F57C;
    case 772u: goto L_0883F588;
    case 773u: goto L_0883F5B0;
    case 774u: goto L_0883F5BC;
    case 775u: goto L_0883F5D0;
    case 776u: goto L_0883F5DC;
    case 777u: goto L_0883F614;
    case 778u: goto L_0883F620;
    case 779u: goto L_0883F658;
    case 780u: goto L_0883F664;
    case 781u: goto L_0883F688;
    case 782u: goto L_0883F690;
    case 783u: goto L_0883F69C;
    case 784u: goto L_0883F6A4;
    case 785u: goto L_0883F6B4;
    case 786u: goto L_0883F6C0;
    case 787u: goto L_0883F6E0;
    case 788u: goto L_0883F6E8;
    case 789u: goto L_0883F6F8;
    case 790u: goto L_0883F70C;
    case 791u: goto L_0883F720;
    case 792u: goto L_0883F734;
    case 793u: goto L_0883F780;
    case 794u: goto L_0883F798;
    case 795u: goto L_0883F7A4;
    case 796u: goto L_0883F7B8;
    case 797u: goto L_0883F7C4;
    case 798u: goto L_0883F7D8;
    case 799u: goto L_0883F7DC;
    case 800u: goto L_0883F7E4;
    case 801u: goto L_0883F814;
    case 802u: goto L_0883F830;
    case 803u: goto L_0883F844;
    case 804u: goto L_0883F860;
    case 805u: goto L_0883F86C;
    case 806u: goto L_0883F87C;
    case 807u: goto L_0883F884;
    case 808u: goto L_0883F88C;
    case 809u: goto L_0883F898;
    case 810u: goto L_0883F8F0;
    case 811u: goto L_0883F8F8;
    case 812u: goto L_0883F91C;
    case 813u: goto L_0883F96C;
    case 814u: goto L_0883F974;
    case 815u: goto L_0883F990;
    case 816u: goto L_0883F9A4;
    case 817u: goto L_0883F9AC;
    case 818u: goto L_0883F9BC;
    case 819u: goto L_0883F9CC;
    case 820u: goto L_0883F9E8;
    case 821u: goto L_0883F9F8;
    case 822u: goto L_0883FA08;
    case 823u: goto L_0883FA20;
    case 824u: goto L_0883FA30;
    case 825u: goto L_0883FA40;
    case 826u: goto L_0883FA9C;
    case 827u: goto L_0883FAA8;
    case 828u: goto L_0883FAC0;
    case 829u: goto L_0883FAF4;
    case 830u: goto L_0883FAFC;
    case 831u: goto L_0883FB0C;
    case 832u: goto L_0883FB1C;
    case 833u: goto L_0883FB38;
    case 834u: goto L_0883FB48;
    case 835u: goto L_0883FB58;
    case 836u: goto L_0883FB68;
    case 837u: goto L_0883FB78;
    case 838u: goto L_0883FB88;
    case 839u: goto L_0883FBE0;
    case 840u: goto L_0883FBEC;
    case 841u: goto L_0883FC04;
    case 842u: goto L_0883FC38;
    case 843u: goto L_0883FC40;
    case 844u: goto L_0883FC50;
    case 845u: goto L_0883FC60;
    case 846u: goto L_0883FC7C;
    case 847u: goto L_0883FC8C;
    case 848u: goto L_0883FC9C;
    case 849u: goto L_0883FCB4;
    case 850u: goto L_0883FCC4;
    case 851u: goto L_0883FCD4;
    case 852u: goto L_0883FD30;
    case 853u: goto L_0883FD3C;
    case 854u: goto L_0883FD54;
    case 855u: goto L_0883FD88;
    case 856u: goto L_0883FD90;
    case 857u: goto L_0883FDA0;
    case 858u: goto L_0883FDD0;
    case 859u: goto L_0883FDE0;
    case 860u: goto L_0883FDEC;
    case 861u: goto L_0883FDF4;
    case 862u: goto L_0883FE00;
    case 863u: goto L_0883FE08;
    case 864u: goto L_0883FE18;
    case 865u: goto L_0883FE28;
    case 866u: goto L_0883FE38;
    case 867u: goto L_0883FE44;
    case 868u: goto L_0883FE58;
    case 869u: goto L_0883FE60;
    case 870u: goto L_0883FE6C;
    case 871u: goto L_0883FEC0;
    case 872u: goto L_0883FEC8;
    case 873u: goto L_0883FF1C;
    case 874u: goto L_0883FF24;
    case 875u: goto L_0883FF3C;
    case 876u: goto L_0883FF44;
    case 877u: goto L_0883FF54;
    case 878u: goto L_0883FF80;
    case 879u: goto L_0883FF90;
    case 880u: goto L_0883FF9C;
    case 881u: goto L_0883FFA4;
    case 882u: goto L_0883FFB0;
    case 883u: goto L_0883FFB8;
    case 884u: goto L_0883FFC8;
    case 885u: goto L_0883FFD8;
    case 886u: goto L_0883FFE8;
    case 887u: goto L_0883FFF4;
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
L_0883C004:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0883C01C;
      }
      goto L_0883C00C;
    }
L_0883C00C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1760)));
    ctx.fpr[24] = aot_fpr_12 + ctx.fpr[24];
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1520)));
      if (branch_taken) {
          goto L_0883C030;
      }
      goto L_0883C01C;
    }
L_0883C01C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1892)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1520)));
      if (branch_taken) {
          goto L_0883C030;
      }
      goto L_0883C028;
    }
L_0883C028:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1756)));
    ctx.fpr[24] = aot_fpr_13 + ctx.fpr[24];
    goto L_0883C030;
L_0883C030:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1536), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0013_entry, 13u, 1146u, 0x0883BDF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0883C050;
    }
L_0883C050:
    aot_gpr_31 = (0x0883C058u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 161u, 0x08830CA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C058u) goto L_0883C058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C058:
    aot_gpr_4 = (0u | 52u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(628)));
      if (branch_taken) {
          goto L_0883C080;
      }
      goto L_0883C064;
    }
L_0883C064:
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0883C090;
      }
      goto L_0883C080;
    }
L_0883C080:
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_fpr_20 = std::bit_cast<float>(0u);
    goto L_0883C090;
L_0883C090:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1852), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_0883C0E4;
    }
    goto L_0883C0A0;
L_0883C0A0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1852), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1840), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0883C0B8u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1768)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C0B8u) goto L_0883C0B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C0B8:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x0883C0C4u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 74u, 0x08830574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C0C4u) goto L_0883C0C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C0C4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(628)));
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = aot_fpr_20 - ctx.fpr[0];
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[24] = aot_fpr_12 + ctx.fpr[24];
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1840)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1852)));
      if (branch_taken) {
          goto L_0883C120;
      }
      goto L_0883C0E4;
    }
L_0883C0E4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1840), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0883C0F8u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1764)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C0F8u) goto L_0883C0F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C0F8:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x0883C104u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 74u, 0x08830574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C104u) goto L_0883C104;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C104:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(628)));
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = aot_fpr_20 - ctx.fpr[0];
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[24] = aot_fpr_12 + ctx.fpr[24];
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1840)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1852)));
    goto L_0883C120;
L_0883C120:
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1813)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_0883C2E8;
      }
      goto L_0883C130;
    }
L_0883C130:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C150;
      }
      goto L_0883C140;
    }
L_0883C140:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_0883C2E8;
      }
      goto L_0883C150;
    }
L_0883C150:
    aot_gpr_31 = (0x0883C158u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830934, 11u, 128u, 0x08830934u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C158u) goto L_0883C158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C158:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_0883C2E8;
      }
      goto L_0883C160;
    }
L_0883C160:
    aot_gpr_31 = (0x0883C168u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C168u) goto L_0883C168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C168:
    aot_gpr_31 = (0x0883C170u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 83u, 0x08830650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C170u) goto L_0883C170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C170:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55051u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_0883C2E8;
      }
      goto L_0883C190;
    }
L_0883C190:
    aot_gpr_31 = (0x0883C198u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 72u, 0x0883053Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C198u) goto L_0883C198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C198:
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (17658u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17224u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0883C254;
      }
      goto L_0883C1BC;
    }
L_0883C1BC:
    aot_gpr_4 = (17274u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1632), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1632));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_5 = (17096u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0883C1F4u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1636));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 47u, 0x08830368u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C1F4u) goto L_0883C1F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C1F4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[16] = (aot_gpr_4 & 255u);
    aot_gpr_31 = (0x0883C208u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C208u) goto L_0883C208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C208:
    aot_gpr_4 = (18076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[16]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_17 = (aot_gpr_4 & 65535u);
    aot_gpr_31 = (0x0883C238u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C238u) goto L_0883C238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C238:
    aot_gpr_5 = (aot_gpr_17 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883C24Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 954u, 0x0898BB3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C24Cu) goto L_0883C24C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C24C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_0883C2E8;
      }
      goto L_0883C254;
    }
L_0883C254:
    aot_gpr_4 = (17174u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1640));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_5 = (16928u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1644), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0883C28Cu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1644));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 47u, 0x08830368u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C28Cu) goto L_0883C28C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C28C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[16] = (aot_gpr_4 & 255u);
    aot_gpr_31 = (0x0883C2A0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C2A0u) goto L_0883C2A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C2A0:
    aot_gpr_4 = (17820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[16]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_17 = (aot_gpr_4 & 65535u);
    aot_gpr_31 = (0x0883C2D0u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C2D0u) goto L_0883C2D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C2D0:
    aot_gpr_5 = (aot_gpr_17 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883C2E4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 954u, 0x0898BB3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C2E4u) goto L_0883C2E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C2E4:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-17));
    goto L_0883C2E8;
L_0883C2E8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[30] + static_cast<std::uint32_t>(616))))));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[30] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[30] + static_cast<std::uint32_t>(617))))));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[30] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[30] + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883C344;
      }
      goto L_0883C314;
    }
L_0883C314:
    aot_gpr_31 = (0x0883C31Cu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C31Cu) goto L_0883C31C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C31C:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0883C344;
      }
      goto L_0883C328;
    }
L_0883C328:
    aot_gpr_31 = (0x0883C330u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C330u) goto L_0883C330;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C330:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0883C344;
      }
      goto L_0883C33C;
    }
L_0883C33C:
    aot_gpr_31 = (0x0883C344u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0208_entry, 208u, 484u, 0x08B4652Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C344u) goto L_0883C344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C344:
    aot_gpr_31 = (0x0883C34Cu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C34Cu) goto L_0883C34C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C34C:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883C35Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C35Cu) goto L_0883C35C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C35C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (17601u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49152u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C3C8;
      }
      goto L_0883C37C;
    }
L_0883C37C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C398;
      }
      goto L_0883C390;
    }
L_0883C390:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0883C398;
L_0883C398:
    aot_gpr_31 = (0x0883C3A0u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 109u, 0x088307E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C3A0u) goto L_0883C3A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C3A0:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C428;
      }
      goto L_0883C3B4;
    }
L_0883C3B4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_31 = (0x0883C3C0u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C3C0u) goto L_0883C3C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C3C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883C428;
      }
      goto L_0883C3C8;
    }
L_0883C3C8:
    aot_gpr_4 = (50435u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C428;
      }
      goto L_0883C3E4;
    }
L_0883C3E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C400;
      }
      goto L_0883C3F8;
    }
L_0883C3F8:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0883C400;
L_0883C400:
    aot_gpr_31 = (0x0883C408u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 109u, 0x088307E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C408u) goto L_0883C408;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C408:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C428;
      }
      goto L_0883C41C;
    }
L_0883C41C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_31 = (0x0883C428u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C428u) goto L_0883C428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C428:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (17645u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C50C;
      }
      goto L_0883C448;
    }
L_0883C448:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0883C470;
      }
      goto L_0883C468;
    }
L_0883C468:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0883C470;
L_0883C470:
    aot_gpr_31 = (0x0883C478u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 109u, 0x088307E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C478u) goto L_0883C478;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C478:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C4C0;
      }
      goto L_0883C48C;
    }
L_0883C48C:
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C4C0;
      }
      goto L_0883C4A0;
    }
L_0883C4A0:
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_31 = (0x0883C4B8u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C4B8u) goto L_0883C4B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C4B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883C5C0;
      }
      goto L_0883C4C0;
    }
L_0883C4C0:
    aot_gpr_4 = (49097u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0883C5C0;
      }
      goto L_0883C4DC;
    }
L_0883C4DC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C5C0;
      }
      goto L_0883C4EC;
    }
L_0883C4EC:
    aot_gpr_4 = (49225u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_31 = (0x0883C504u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C504u) goto L_0883C504;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C504:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883C5C0;
      }
      goto L_0883C50C;
    }
L_0883C50C:
    aot_gpr_4 = (50413u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C5C0;
      }
      goto L_0883C528;
    }
L_0883C528:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0883C550;
      }
      goto L_0883C548;
    }
L_0883C548:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0883C550;
L_0883C550:
    aot_gpr_31 = (0x0883C558u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 109u, 0x088307E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C558u) goto L_0883C558;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C558:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C58C;
      }
      goto L_0883C56C;
    }
L_0883C56C:
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_31 = (0x0883C584u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C584u) goto L_0883C584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C584:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0883C5C0;
      }
      goto L_0883C58C;
    }
L_0883C58C:
    aot_gpr_4 = (49097u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0883C5C0;
      }
      goto L_0883C5A8;
    }
L_0883C5A8:
    aot_gpr_4 = (49225u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_31 = (0x0883C5C0u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C5C0u) goto L_0883C5C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C5C0:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0883C5CCu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C5CCu) goto L_0883C5CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C5CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883C668;
      }
      goto L_0883C5DC;
    }
L_0883C5DC:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883C5F0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C5F0u) goto L_0883C5F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C5F0:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    aot_gpr_17 = (aot_gpr_29 + static_cast<std::uint32_t>(1648));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883C60Cu);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C60Cu) goto L_0883C60C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C60C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883C618u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C618u) goto L_0883C618;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C618:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(128));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883C630u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C630u) goto L_0883C630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C630:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883C63Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C63Cu) goto L_0883C63C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C63C:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(144));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883C654u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C654u) goto L_0883C654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C654:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883C660u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C660u) goto L_0883C660;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C660:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883C7AC;
      }
      goto L_0883C668;
    }
L_0883C668:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1812)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883C7AC;
      }
      goto L_0883C674;
    }
L_0883C674:
    aot_gpr_31 = (0x0883C67Cu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 191u, 0x08830E04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C67Cu) goto L_0883C67C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C67C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[0]) || std::isnan(aot_fpr_20)) && ctx.fpr[0] == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C69C;
      }
      goto L_0883C68C;
    }
L_0883C68C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[30]) || std::isnan(aot_fpr_20)) && ctx.fpr[30] == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C6B0;
      }
      goto L_0883C69C;
    }
L_0883C69C:
    aot_gpr_31 = (0x0883C6A4u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830934, 11u, 128u, 0x08830934u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C6A4u) goto L_0883C6A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C6A4:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_0883C7AC;
      }
      goto L_0883C6B0;
    }
L_0883C6B0:
    aot_gpr_31 = (0x0883C6B8u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 76u, 0x088305B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C6B8u) goto L_0883C6B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C6B8:
    aot_gpr_4 = (15267u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C7AC;
      }
      goto L_0883C6D4;
    }
L_0883C6D4:
    aot_gpr_31 = (0x0883C6DCu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 76u, 0x088305B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C6DCu) goto L_0883C6DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C6DC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C7AC;
      }
      goto L_0883C6EC;
    }
L_0883C6EC:
    aot_gpr_31 = (0x0883C6F4u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C6F4u) goto L_0883C6F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C6F4:
    aot_gpr_31 = (0x0883C6FCu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 76u, 0x088305B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C6FCu) goto L_0883C6FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C6FC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C7AC;
      }
      goto L_0883C70C;
    }
L_0883C70C:
    aot_gpr_31 = (0x0883C714u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 151u, 0x08830B34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C714u) goto L_0883C714;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C714:
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C740;
      }
      goto L_0883C728;
    }
L_0883C728:
    aot_gpr_31 = (0x0883C730u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 152u, 0x08830B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C730u) goto L_0883C730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C730:
    aot_gpr_31 = (0x0883C738u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C738u) goto L_0883C738;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C738:
    { const bool branch_taken = ctx.gpr[16] == aot_gpr_2;
      if (branch_taken) {
          goto L_0883C7AC;
      }
      goto L_0883C740;
    }
L_0883C740:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1536)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C794;
      }
      goto L_0883C758;
    }
L_0883C758:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1540)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C794;
      }
      goto L_0883C76C;
    }
L_0883C76C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1544)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C794;
      }
      goto L_0883C780;
    }
L_0883C780:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1548)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C7AC;
      }
      goto L_0883C794;
    }
L_0883C794:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883C7A8u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C7A8u) goto L_0883C7A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C7A8:
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_0883C7AC;
L_0883C7AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    aot_gpr_17 = (512u << 16u);
    aot_gpr_31 = (0x0883C7BCu);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C7BCu) goto L_0883C7BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C7BC:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_fpr_20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0883C99C;
      }
      goto L_0883C7C4;
    }
L_0883C7C4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1654))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883C99C;
      }
      goto L_0883C7D4;
    }
L_0883C7D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (32u << 16u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[16]);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883C99C;
      }
      goto L_0883C7E8;
    }
L_0883C7E8:
    aot_gpr_31 = (0x0883C7F0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C7F0u) goto L_0883C7F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C7F0:
    aot_gpr_4 = (49152u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883C80Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C80Cu) goto L_0883C80C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C80C:
    aot_gpr_31 = (0x0883C814u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(120)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C814u) goto L_0883C814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C814:
    aot_gpr_4 = (47875u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0883C834u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(112)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C834u) goto L_0883C834;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C834:
    aot_gpr_4 = (47441u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 46871u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (0u | 84u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1712), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1713), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1714), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1715), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1664));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1680));
    aot_gpr_5 = (49440u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883C880u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C880u) goto L_0883C880;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C880:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0883C890u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C890u) goto L_0883C890;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C890:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(1696));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883C8A8u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C8A8u) goto L_0883C8A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C8A8:
    aot_gpr_4 = (16179u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(1712));
    ctx.gpr[3] = (0u | 3000u);
    aot_gpr_4 = (0u | 55u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x0883C8E0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C8E0u) goto L_0883C8E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C8E0:
    aot_gpr_31 = (0x0883C8E8u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C8E8u) goto L_0883C8E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C8E8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883C8F4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C8F4u) goto L_0883C8F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C8F4:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x0883C928u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C928u) goto L_0883C928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C928:
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(72)));
        goto L_0883C958;
    }
    goto L_0883C930;
L_0883C930:
    aot_gpr_31 = (0x0883C938u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C938u) goto L_0883C938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C938:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16576u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883C99C;
      }
      goto L_0883C954;
    }
L_0883C954:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(72)));
    goto L_0883C958;
L_0883C958:
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[16]);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883C99C;
      }
      goto L_0883C964;
    }
L_0883C964:
    aot_gpr_31 = (0x0883C96Cu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C96Cu) goto L_0883C96C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C96C:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (aot_gpr_2 | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    aot_gpr_31 = (0x0883C990u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 287u, 0x089E974Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C990u) goto L_0883C990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C990:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_0883C99C;
L_0883C99C:
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x0883C9ACu);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C9ACu) goto L_0883C9AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C9AC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0883CA1C;
      }
      goto L_0883C9B4;
    }
L_0883C9B4:
    aot_gpr_31 = (0x0883C9BCu);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1608)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C9BCu) goto L_0883C9BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C9BC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1640)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0883C9E0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 33u, 0x0883021Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C9E0u) goto L_0883C9E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C9E0:
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x0883C9ECu);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1616)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883C9ECu) goto L_0883C9EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883C9EC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1640)));
    aot_gpr_4 = (49171u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[26] + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1616), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0883CA14u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 33u, 0x0883021Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CA14u) goto L_0883CA14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CA14:
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1616), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[23] = (0u | 1u);
    goto L_0883CA1C;
L_0883CA1C:
    aot_gpr_31 = (0x0883CA24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[30] + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 114u, 0x08830840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CA24u) goto L_0883CA24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CA24:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883CA30u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CA30u) goto L_0883CA30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CA30:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x0883CA3Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 68u, 0x088304BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CA3Cu) goto L_0883CA3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CA3C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x0883CA50u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CA50u) goto L_0883CA50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CA50:
    aot_gpr_17 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0883CA64u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 38u, 0x08830268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CA64u) goto L_0883CA64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CA64:
    aot_gpr_31 = (0x0883CA6Cu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CA6Cu) goto L_0883CA6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CA6C:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883CA7Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CA7Cu) goto L_0883CA7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CA7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x0883CA88u);
    aot_gpr_5 = (0u | 32u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CA88u) goto L_0883CA88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CA88:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0883CB00;
      }
      goto L_0883CA90;
    }
L_0883CA90:
    aot_gpr_31 = (0x0883CA98u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CA98u) goto L_0883CA98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CA98:
    aot_gpr_31 = (0x0883CAA0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CAA0u) goto L_0883CAA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CAA0:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0883CAACu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CAACu) goto L_0883CAAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CAAC:
    aot_gpr_17 = (aot_gpr_29 + static_cast<std::uint32_t>(1728));
    aot_gpr_31 = (0x0883CAB8u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CAB8u) goto L_0883CAB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CAB8:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883CAC4u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CAC4u) goto L_0883CAC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CAC4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x0883CAD0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 68u, 0x088304BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CAD0u) goto L_0883CAD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CAD0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1744));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x0883CAE4u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CAE4u) goto L_0883CAE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CAE4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883CAF4u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 38u, 0x08830268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CAF4u) goto L_0883CAF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CAF4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883CB00u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CB00u) goto L_0883CB00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CB00:
    aot_gpr_17 = (0u | 0u);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(1760));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(1776));
    aot_fpr_20 = std::bit_cast<float>(0u);
    goto L_0883CB10;
L_0883CB10:
    ctx.gpr[18] = (aot_gpr_17 << 2u);
    ctx.gpr[18] = (ctx.gpr[30] + ctx.gpr[18]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1552)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883CC30;
      }
      goto L_0883CB2C;
    }
L_0883CB2C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_0883CB44;
      }
      goto L_0883CB34;
    }
L_0883CB34:
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_gpr_4 = (0u | 2u);
      if (branch_taken) {
          goto L_0883CB44;
      }
      goto L_0883CB3C;
    }
L_0883CB3C:
    { const bool branch_taken = aot_gpr_17 != aot_gpr_4;
      if (branch_taken) {
          goto L_0883CC30;
      }
      goto L_0883CB44;
    }
L_0883CB44:
    aot_gpr_4 = (aot_gpr_17 << 4u);
    ctx.gpr[16] = (aot_gpr_29 + aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
    aot_gpr_4 = (aot_gpr_17 << 5u);
    aot_gpr_4 = (ctx.gpr[30] + aot_gpr_4);
    aot_gpr_31 = (0x0883CB60u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CB60u) goto L_0883CB60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CB60:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1844), ctx.gpr[22]);
    aot_gpr_31 = (0x0883CB70u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CB70u) goto L_0883CB70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CB70:
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883CB7Cu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CB7Cu) goto L_0883CB7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CB7C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0883CB8Cu);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CB8Cu) goto L_0883CB8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CB8C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883CB98u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CB98u) goto L_0883CB98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CB98:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0883CBACu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 158u, 0x08830C0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CBACu) goto L_0883CBAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CBAC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883CBB8u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CBB8u) goto L_0883CBB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CBB8:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1892)));
    { const bool branch_taken = aot_gpr_17 == 0u;
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1844)));
      if (branch_taken) {
          goto L_0883CBD0;
      }
      goto L_0883CBC4;
    }
L_0883CBC4:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_17 != aot_gpr_4;
      if (branch_taken) {
          goto L_0883CC00;
      }
      goto L_0883CBD0;
    }
L_0883CBD0:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0883CBDCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CBDCu) goto L_0883CBDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CBDC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883CBF0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 209u, 0x08B00C34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CBF0u) goto L_0883CBF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CBF0:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1604)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[0];
      if (branch_taken) {
          goto L_0883CC2C;
      }
      goto L_0883CC00;
    }
L_0883CC00:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0883CC0Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CC0Cu) goto L_0883CC0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CC0C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883CC20u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 209u, 0x08B00C34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CC20u) goto L_0883CC20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CC20:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1604)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[0];
    goto L_0883CC2C;
L_0883CC2C:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1604), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0883CC30;
L_0883CC30:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_17 = (aot_gpr_17 & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883CB10;
      }
      goto L_0883CC44;
    }
L_0883CC44:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[30] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-950));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0883CC7C;
      }
      goto L_0883CC54;
    }
L_0883CC54:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_31 = (0x0883CC64u);
    ctx.gpr[6] = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 246u, 0x088455CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CC64u) goto L_0883CC64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CC64:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (0u | 8u);
    aot_gpr_31 = (0x0883CC74u);
    ctx.gpr[6] = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 246u, 0x088455CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CC74u) goto L_0883CC74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CC74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883CCFC;
      }
      goto L_0883CC7C;
    }
L_0883CC7C:
    aot_gpr_5 = (0u | 246u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0883CCFC;
      }
      goto L_0883CC88;
    }
L_0883CC88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x0883CC94u);
    aot_gpr_5 = (512u << 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CC94u) goto L_0883CC94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CC94:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0883CCFC;
      }
      goto L_0883CC9C;
    }
L_0883CC9C:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_31 = (0x0883CCACu);
    ctx.gpr[6] = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 246u, 0x088455CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CCACu) goto L_0883CCAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CCAC:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (0u | 8u);
    aot_gpr_31 = (0x0883CCBCu);
    ctx.gpr[6] = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 246u, 0x088455CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CCBCu) goto L_0883CCBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CCBC:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (0u | 11u);
    aot_gpr_31 = (0x0883CCCCu);
    ctx.gpr[6] = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 246u, 0x088455CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CCCCu) goto L_0883CCCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CCCC:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (0u | 9u);
    aot_gpr_31 = (0x0883CCDCu);
    ctx.gpr[6] = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 246u, 0x088455CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CCDCu) goto L_0883CCDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CCDC:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (0u | 18u);
    aot_gpr_31 = (0x0883CCECu);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 246u, 0x088455CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CCECu) goto L_0883CCEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CCEC:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (0u | 19u);
    aot_gpr_31 = (0x0883CCFCu);
    ctx.gpr[6] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 246u, 0x088455CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CCFCu) goto L_0883CCFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CCFC:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1856), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      ctx.gpr[16] = aot_run_words[6];
      aot_gpr_17 = aot_run_words[7];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1920));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0883CD44:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    { const std::uint32_t aot_run_words[10]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_17 = (aot_gpr_5 & 255u);
    aot_gpr_31 = (0x0883CD80u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CD80u) goto L_0883CD80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CD80:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[16];
      if (branch_taken) {
          goto L_0883CDB8;
      }
      goto L_0883CD88;
    }
L_0883CD88:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 << 8u);
    ctx.gpr[6] = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883CE04;
      }
      goto L_0883CDB8;
    }
L_0883CDB8:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0883CDDCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CDDCu) goto L_0883CDDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CDDC:
    aot_gpr_31 = (0x0883CDE4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 392u, 0x0898D168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CDE4u) goto L_0883CDE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CDE4:
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17279u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.fpr[28] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0883CE0C;
      }
      goto L_0883CDFC;
    }
L_0883CDFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883CE6C;
      }
      goto L_0883CE04;
    }
L_0883CE04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883D2F0;
      }
      goto L_0883CE0C;
    }
L_0883CE0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883CE58;
      }
      goto L_0883CE18;
    }
L_0883CE18:
    aot_gpr_31 = (0x0883CE20u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F6B4, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CE20u) goto L_0883CE20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CE20:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0883CE58;
      }
      goto L_0883CE28;
    }
L_0883CE28:
    aot_gpr_31 = (0x0883CE30u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F6B4, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CE30u) goto L_0883CE30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CE30:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(48))))));
    aot_gpr_5 = (0u | 130u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0883CE6C;
      }
      goto L_0883CE40;
    }
L_0883CE40:
    aot_gpr_31 = (0x0883CE48u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F6B4, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CE48u) goto L_0883CE48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CE48:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(48))))));
    aot_gpr_5 = (0u | 131u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0883CE6C;
      }
      goto L_0883CE58;
    }
L_0883CE58:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883CE64u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CE64u) goto L_0883CE64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CE64:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883CE8C;
      }
      goto L_0883CE6C;
    }
L_0883CE6C:
    aot_gpr_31 = (0x0883CE74u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CE74u) goto L_0883CE74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CE74:
    aot_gpr_31 = (0x0883CE7Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 367u, 0x0898D050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CE7Cu) goto L_0883CE7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CE7C:
    aot_gpr_5 = (0u < aot_gpr_2 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_31 = (0x0883CE8Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CE8Cu) goto L_0883CE8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CE8C:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    aot_gpr_31 = (0x0883CE98u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CE98u) goto L_0883CE98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CE98:
    aot_gpr_31 = (0x0883CEA0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CEA0u) goto L_0883CEA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CEA0:
    aot_gpr_4 = (0u - aot_gpr_2);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (15360u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[26] + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-29796), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
        goto L_0883CF00;
    }
    goto L_0883CF00;
L_0883CF00:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[26])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_0883CF14;
    }
    goto L_0883CF14;
L_0883CF14:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x0883CF20u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CF20u) goto L_0883CF20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CF20:
    aot_gpr_31 = (0x0883CF28u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CF28u) goto L_0883CF28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CF28:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883CF34u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CF34u) goto L_0883CF34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CF34:
    aot_gpr_31 = (0x0883CF3Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CF3Cu) goto L_0883CF3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CF3C:
    aot_gpr_4 = (ctx.gpr[19] - aot_gpr_2);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fpr[26] = ctx.fpr[26] / ctx.fpr[24];
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-950));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0883CF7C;
      }
      goto L_0883CF5C;
    }
L_0883CF5C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] < ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883CF7C;
      }
      goto L_0883CF6C;
    }
L_0883CF6C:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    goto L_0883CF7C;
L_0883CF7C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[28])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
        goto L_0883CF90;
    }
    goto L_0883CF90;
L_0883CF90:
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883D05C;
      }
      goto L_0883CFAC;
    }
L_0883CFAC:
    aot_gpr_31 = (0x0883CFB4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CFB4u) goto L_0883CFB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CFB4:
    aot_gpr_31 = (0x0883CFBCu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CFBCu) goto L_0883CFBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CFBC:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (17174u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883D050;
      }
      goto L_0883CFDC;
    }
L_0883CFDC:
    aot_gpr_31 = (0x0883CFE4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CFE4u) goto L_0883CFE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CFE4:
    aot_gpr_31 = (0x0883CFECu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883CFECu) goto L_0883CFEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883CFEC:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883D050;
      }
      goto L_0883D004;
    }
L_0883D004:
    aot_gpr_31 = (0x0883D00Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D00Cu) goto L_0883D00C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D00C:
    aot_gpr_31 = (0x0883D014u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D014u) goto L_0883D014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D014:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[24];
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0883D02Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D02Cu) goto L_0883D02C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D02C:
    aot_gpr_31 = (0x0883D034u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D034u) goto L_0883D034;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D034:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[24];
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1660), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0883D0BC;
      }
      goto L_0883D050;
    }
L_0883D050:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_0883D0BC;
      }
      goto L_0883D05C;
    }
L_0883D05C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883D098;
      }
      goto L_0883D06C;
    }
L_0883D06C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] < ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883D088;
      }
      goto L_0883D07C;
    }
L_0883D07C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_0883D0BC;
      }
      goto L_0883D088;
    }
L_0883D088:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0883D0BC;
      }
      goto L_0883D098;
    }
L_0883D098:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] < ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883D0B4;
      }
      goto L_0883D0A8;
    }
L_0883D0A8:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_0883D0BC;
      }
      goto L_0883D0B4;
    }
L_0883D0B4:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_0883D0BC;
L_0883D0BC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883D0E0;
      }
      goto L_0883D0D0;
    }
L_0883D0D0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5984), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0883D0F0;
      }
      goto L_0883D0E0;
    }
L_0883D0E0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5984), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0883D0F0;
L_0883D0F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (17204u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5984)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883D214;
      }
      goto L_0883D130;
    }
L_0883D130:
    aot_gpr_31 = (0x0883D138u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D138u) goto L_0883D138;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D138:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_5 = (0u | 10u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(707)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883D168;
      }
      goto L_0883D158;
    }
L_0883D158:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
      if (branch_taken) {
          goto L_0883D20C;
      }
      goto L_0883D160;
    }
L_0883D160:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883D180;
      }
      goto L_0883D168;
    }
L_0883D168:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883D1B4;
      }
      goto L_0883D170;
    }
L_0883D170:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0883D1E4;
      }
      goto L_0883D178;
    }
L_0883D178:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883D20C;
      }
      goto L_0883D180;
    }
L_0883D180:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0883D198;
      }
      goto L_0883D18C;
    }
L_0883D18C:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(707), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0883D1AC;
      }
      goto L_0883D198;
    }
L_0883D198:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883D1AC;
      }
      goto L_0883D1A4;
    }
L_0883D1A4:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(707), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0883D1AC;
L_0883D1AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883D20C;
      }
      goto L_0883D1B4;
    }
L_0883D1B4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_gpr_5 = (15692u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883D1DC;
      }
      goto L_0883D1D8;
    }
L_0883D1D8:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(707), static_cast<std::uint8_t>(0u));
    goto L_0883D1DC;
L_0883D1DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883D20C;
      }
      goto L_0883D1E4;
    }
L_0883D1E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_gpr_5 = (15692u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883D20C;
      }
      goto L_0883D208;
    }
L_0883D208:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(707), static_cast<std::uint8_t>(0u));
    goto L_0883D20C;
L_0883D20C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883D218;
      }
      goto L_0883D214;
    }
L_0883D214:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(707), static_cast<std::uint8_t>(0u));
    goto L_0883D218;
L_0883D218:
    aot_gpr_31 = (0x0883D220u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D220u) goto L_0883D220;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D220:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883D24C;
      }
      goto L_0883D22C;
    }
L_0883D22C:
    aot_gpr_31 = (0x0883D234u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D234u) goto L_0883D234;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D234:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883D24C;
      }
      goto L_0883D240;
    }
L_0883D240:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883D2F0;
      }
      goto L_0883D24C;
    }
L_0883D24C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883D270;
      }
      goto L_0883D258;
    }
L_0883D258:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4209)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883D270;
      }
      goto L_0883D264;
    }
L_0883D264:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883D2F0;
      }
      goto L_0883D270;
    }
L_0883D270:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883D280u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D280u) goto L_0883D280;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D280:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_gpr_5 = (16015u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 23593u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_0883D2A8;
      }
      goto L_0883D298;
    }
L_0883D298:
    aot_gpr_31 = (0x0883D2A0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D2A0u) goto L_0883D2A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D2A0:
    aot_gpr_31 = (0x0883D2A8u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0082_entry, 82u, 221u, 0x0894CE40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D2A8u) goto L_0883D2A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D2A8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883D2F0;
      }
      goto L_0883D2CC;
    }
L_0883D2CC:
    aot_fpr_12 = ctx.fpr[22] / aot_fpr_12;
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0883D2F0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D2F0u) goto L_0883D2F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D2F0:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.gpr[16] = aot_run_words[5];
      aot_gpr_17 = aot_run_words[6];
      ctx.gpr[18] = aot_run_words[7];
      ctx.gpr[19] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0883D320:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-3984));
    { const std::uint32_t aot_run_words[15]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(3916), aot_run_words); }
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (0u | 194u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[6];
    aot_gpr_17 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0883D378;
      }
      goto L_0883D370;
    }
L_0883D370:
    aot_gpr_31 = (0x0883D378u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 414u, 0x08A86D04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D378u) goto L_0883D378;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D378:
    aot_gpr_31 = (0x0883D380u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 662u, 0x08AFEF74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D380u) goto L_0883D380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D380:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0883D3A4;
      }
      goto L_0883D394;
    }
L_0883D394:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_0883D3A4;
L_0883D3A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(636)));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883D418;
      }
      goto L_0883D3BC;
    }
L_0883D3BC:
    aot_gpr_31 = (0x0883D3C4u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D3C4u) goto L_0883D3C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D3C4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(184)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16768u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = ctx.fpr[16] - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_0883D3FC;
    }
    goto L_0883D3FC;
L_0883D3FC:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0883D418u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0193_entry, 193u, 371u, 0x08B09D30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D418u) goto L_0883D418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D418:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0883D488;
      }
      goto L_0883D428;
    }
L_0883D428:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    aot_gpr_31 = (0x0883D434u);
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(32));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D434u) goto L_0883D434;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D434:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    aot_gpr_5 = (15967u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 15204u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (48793u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x0883D460u);
    aot_fpr_14 = std::bit_cast<float>(0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D460u) goto L_0883D460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D460:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0883D470u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D470u) goto L_0883D470;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D470:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883D488u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0114_entry, 114u, 583u, 0x089CF3B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D488u) goto L_0883D488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D488:
    aot_gpr_31 = (0x0883D490u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D490u) goto L_0883D490;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D490:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883D49Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D49Cu) goto L_0883D49C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D49C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883D4A8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D4A8u) goto L_0883D4A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D4A8:
    aot_gpr_4 = (15286u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 2922u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[0] / aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0883D4C4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 202u, 0x08830E6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D4C4u) goto L_0883D4C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D4C4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883D4D0u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 185u, 0x08830DC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D4D0u) goto L_0883D4D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D4D0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0883E430;
      }
      goto L_0883D4D8;
    }
L_0883D4D8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0883D718;
      }
      goto L_0883D4E8;
    }
L_0883D4E8:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883D710;
      }
      goto L_0883D4F8;
    }
L_0883D4F8:
    aot_gpr_4 = (ctx.gpr[16] << 2u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1892)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883D5B8;
      }
      goto L_0883D510;
    }
L_0883D510:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0883D700;
      }
      goto L_0883D518;
    }
L_0883D518:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    aot_gpr_4 = (ctx.gpr[16] << 5u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_31 = (0x0883D52Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D52Cu) goto L_0883D52C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D52C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    aot_gpr_31 = (0x0883D538u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D538u) goto L_0883D538;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D538:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (15692u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883D55Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D55Cu) goto L_0883D55C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D55C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883D56Cu);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D56Cu) goto L_0883D56C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D56C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883D580u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D580u) goto L_0883D580;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D580:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 66u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883D5B0u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D5B0u) goto L_0883D5B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D5B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883D700;
      }
      goto L_0883D5B8;
    }
L_0883D5B8:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883D668;
      }
      goto L_0883D5C0;
    }
L_0883D5C0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883D700;
      }
      goto L_0883D5C8;
    }
L_0883D5C8:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    aot_gpr_4 = (ctx.gpr[16] << 5u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_31 = (0x0883D5DCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D5DCu) goto L_0883D5DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D5DC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    aot_gpr_31 = (0x0883D5E8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D5E8u) goto L_0883D5E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D5E8:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (15692u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883D60Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D60Cu) goto L_0883D60C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D60C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883D61Cu);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D61Cu) goto L_0883D61C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D61C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883D630u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D630u) goto L_0883D630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D630:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 66u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883D660u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D660u) goto L_0883D660;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D660:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883D700;
      }
      goto L_0883D668;
    }
L_0883D668:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    aot_gpr_4 = (ctx.gpr[16] << 5u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_31 = (0x0883D67Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D67Cu) goto L_0883D67C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D67C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    aot_gpr_31 = (0x0883D688u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D688u) goto L_0883D688;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D688:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (15692u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883D6ACu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D6ACu) goto L_0883D6AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D6AC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883D6BCu);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D6BCu) goto L_0883D6BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D6BC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883D6D0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D6D0u) goto L_0883D6D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D6D0:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 66u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883D700u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D700u) goto L_0883D700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D700:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883D4F8;
      }
      goto L_0883D710;
    }
L_0883D710:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883E430;
      }
      goto L_0883D718;
    }
L_0883D718:
    aot_gpr_31 = (0x0883D720u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830934, 11u, 128u, 0x08830934u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D720u) goto L_0883D720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D720:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_0883D918;
      }
      goto L_0883D72C;
    }
L_0883D72C:
    aot_gpr_4 = (16320u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(352));
    aot_gpr_31 = (0x0883D740u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 86u, 0x08830694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D740u) goto L_0883D740;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D740:
    aot_gpr_31 = (0x0883D748u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1280)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D748u) goto L_0883D748;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D748:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883D758u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D758u) goto L_0883D758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D758:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(432));
    aot_gpr_31 = (0x0883D764u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D764u) goto L_0883D764;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D764:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883D770u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D770u) goto L_0883D770;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D770:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1632)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(448));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(336));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0883D794u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D794u) goto L_0883D794;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D794:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883D7A0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D7A0u) goto L_0883D7A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D7A0:
    ctx.gpr[21] = (aot_gpr_17 + static_cast<std::uint32_t>(1488));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0883D7B0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 137u, 0x08830A28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D7B0u) goto L_0883D7B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D7B0:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0883D7BCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 141u, 0x08830A68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D7BCu) goto L_0883D7BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D7BC:
    aot_gpr_31 = (0x0883D7C4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1292)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D7C4u) goto L_0883D7C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D7C4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883D7D4u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D7D4u) goto L_0883D7D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D7D4:
    aot_gpr_31 = (0x0883D7DCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D7DCu) goto L_0883D7DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D7DC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883D7E8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D7E8u) goto L_0883D7E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D7E8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1624)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0883D804u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D804u) goto L_0883D804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D804:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883D810u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D810u) goto L_0883D810;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D810:
    ctx.gpr[21] = (aot_gpr_17 + static_cast<std::uint32_t>(1424));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0883D820u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 137u, 0x08830A28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D820u) goto L_0883D820;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D820:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0883D82Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 141u, 0x08830A68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D82Cu) goto L_0883D82C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D82C:
    aot_gpr_31 = (0x0883D834u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1272)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D834u) goto L_0883D834;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D834:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883D844u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D844u) goto L_0883D844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D844:
    aot_gpr_31 = (0x0883D84Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D84Cu) goto L_0883D84C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D84C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883D858u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D858u) goto L_0883D858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D858:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1628)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0883D874u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D874u) goto L_0883D874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D874:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883D880u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D880u) goto L_0883D880;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D880:
    ctx.gpr[21] = (aot_gpr_17 + static_cast<std::uint32_t>(1456));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0883D890u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 137u, 0x08830A28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D890u) goto L_0883D890;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D890:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0883D89Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 141u, 0x08830A68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D89Cu) goto L_0883D89C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D89C:
    aot_gpr_31 = (0x0883D8A4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1284)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D8A4u) goto L_0883D8A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D8A4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883D8B4u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D8B4u) goto L_0883D8B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D8B4:
    aot_gpr_31 = (0x0883D8BCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D8BCu) goto L_0883D8BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D8BC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883D8C8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D8C8u) goto L_0883D8C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D8C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1620)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0883D8E4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D8E4u) goto L_0883D8E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D8E4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883D8F0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D8F0u) goto L_0883D8F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D8F0:
    ctx.gpr[18] = (aot_gpr_17 + static_cast<std::uint32_t>(1392));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883D900u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 137u, 0x08830A28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D900u) goto L_0883D900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D900:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883D90Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 141u, 0x08830A68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D90Cu) goto L_0883D90C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D90C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883D918u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 93u, 0x0883072Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D918u) goto L_0883D918;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D918:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0883D924u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 35u, 0x08830240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D924u) goto L_0883D924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D924:
    aot_gpr_4 = (17076u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[16] = (0u | 1u);
        goto L_0883D93C;
    }
    goto L_0883D93C;
L_0883D93C:
    aot_gpr_31 = (0x0883D944u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830934, 11u, 128u, 0x08830934u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D944u) goto L_0883D944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D944:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0883D988;
      }
      goto L_0883D950;
    }
L_0883D950:
    aot_gpr_31 = (0x0883D958u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830934, 11u, 128u, 0x08830934u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D958u) goto L_0883D958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D958:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0883D988;
      }
      goto L_0883D960;
    }
L_0883D960:
    aot_gpr_31 = (0x0883D968u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830934, 11u, 128u, 0x08830934u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D968u) goto L_0883D968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D968:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0883D988;
      }
      goto L_0883D974;
    }
L_0883D974:
    aot_gpr_31 = (0x0883D97Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830934, 11u, 128u, 0x08830934u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D97Cu) goto L_0883D97C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D97C:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_0883E430;
      }
      goto L_0883D988;
    }
L_0883D988:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1896)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0883D9AC;
      }
      goto L_0883D99C;
    }
L_0883D99C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1904)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0883D9B0;
      }
      goto L_0883D9AC;
    }
L_0883D9AC:
    ctx.gpr[18] = (0u | 1u);
    goto L_0883D9B0;
L_0883D9B0:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883E430;
      }
      goto L_0883D9C0;
    }
L_0883D9C0:
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1536)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_0883E008;
      }
      goto L_0883D9E0;
    }
L_0883D9E0:
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_31 = (0x0883D9ECu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883D9ECu) goto L_0883D9EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883D9EC:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0883E008;
      }
      goto L_0883D9F8;
    }
L_0883D9F8:
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1892)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883DA20;
      }
      goto L_0883DA10;
    }
L_0883DA10:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0883DF34;
      }
      goto L_0883DA18;
    }
L_0883DA18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883DA38;
      }
      goto L_0883DA20;
    }
L_0883DA20:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883DC88;
      }
      goto L_0883DA28;
    }
L_0883DA28:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883DDEC;
      }
      goto L_0883DA30;
    }
L_0883DA30:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883DF34;
      }
      goto L_0883DA38;
    }
L_0883DA38:
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_5 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1392));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0883DA50u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 861u, 0x08833F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DA50u) goto L_0883DA50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DA50:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0883DB78;
      }
      goto L_0883DA58;
    }
L_0883DA58:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(528));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(544));
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    ctx.gpr[22] = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    aot_gpr_31 = (0x0883DA74u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DA74u) goto L_0883DA74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DA74:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0883DA80u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DA80u) goto L_0883DA80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DA80:
    ctx.gpr[23] = (aot_gpr_2 | 0u);
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(560));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_4 = (16000u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883DAA8u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DAA8u) goto L_0883DAA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DAA8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x0883DAB8u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DAB8u) goto L_0883DAB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DAB8:
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(576));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883DAD0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DAD0u) goto L_0883DAD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DAD0:
    aot_gpr_4 = (0u | 67u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883DAF8u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DAF8u) goto L_0883DAF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DAF8:
    aot_gpr_31 = (0x0883DB00u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DB00u) goto L_0883DB00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DB00:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0883DB0Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DB0Cu) goto L_0883DB0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DB0C:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883DB24u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DB24u) goto L_0883DB24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DB24:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0883DB34u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DB34u) goto L_0883DB34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DB34:
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883DB50u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DB50u) goto L_0883DB50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DB50:
    aot_gpr_4 = (0u | 67u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883DB78u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DB78u) goto L_0883DB78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DB78:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(464));
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_31 = (0x0883DB8Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DB8Cu) goto L_0883DB8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DB8C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(480));
    aot_gpr_31 = (0x0883DB98u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DB98u) goto L_0883DB98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DB98:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(496));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16000u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883DBB8u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DBB8u) goto L_0883DBB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DBB8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0883DBC8u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DBC8u) goto L_0883DBC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DBC8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(512));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883DBDCu);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DBDCu) goto L_0883DBDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DBDC:
    aot_gpr_4 = (0u | 66u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883DC04u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DC04u) goto L_0883DC04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DC04:
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1552)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883DC80;
      }
      goto L_0883DC20;
    }
L_0883DC20:
    ctx.gpr[20] = (aot_gpr_17 + ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_31 = (0x0883DC34u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DC34u) goto L_0883DC34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DC34:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(592));
    aot_gpr_31 = (0x0883DC40u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DC40u) goto L_0883DC40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DC40:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883DC4Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DC4Cu) goto L_0883DC4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DC4C:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0883DC58u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DC58u) goto L_0883DC58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DC58:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1580)));
    ctx.gpr[7] = (aot_gpr_17 + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1596));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0883DC80u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DC80u) goto L_0883DC80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DC80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883E008;
      }
      goto L_0883DC88;
    }
L_0883DC88:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] == aot_gpr_4;
    aot_gpr_4 = (0u | 3u);
      if (branch_taken) {
          goto L_0883DCA4;
      }
      goto L_0883DC94;
    }
L_0883DC94:
    { const bool branch_taken = ctx.gpr[19] == aot_gpr_4;
      if (branch_taken) {
          goto L_0883DCA4;
      }
      goto L_0883DC9C;
    }
L_0883DC9C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0883DDE4;
      }
      goto L_0883DCA4;
    }
L_0883DCA4:
    aot_gpr_31 = (0x0883DCACu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(256)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 76u, 0x088305B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DCACu) goto L_0883DCAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DCAC:
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883DD64;
      }
      goto L_0883DCC4;
    }
L_0883DCC4:
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0883DCE0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 861u, 0x08833F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DCE0u) goto L_0883DCE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DCE0:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(608));
    aot_gpr_31 = (0x0883DCECu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DCECu) goto L_0883DCEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DCEC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(624));
    aot_gpr_31 = (0x0883DCF8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DCF8u) goto L_0883DCF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DCF8:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(640));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16000u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883DD18u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DD18u) goto L_0883DD18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DD18:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0883DD28u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DD28u) goto L_0883DD28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DD28:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(656));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883DD3Cu);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DD3Cu) goto L_0883DD3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DD3C:
    aot_gpr_4 = (0u | 66u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883DD64u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DD64u) goto L_0883DD64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DD64:
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1552)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883DDE4;
      }
      goto L_0883DD84;
    }
L_0883DD84:
    ctx.gpr[20] = (aot_gpr_17 + ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_31 = (0x0883DD98u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DD98u) goto L_0883DD98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DD98:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(672));
    aot_gpr_31 = (0x0883DDA4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DDA4u) goto L_0883DDA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DDA4:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883DDB0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DDB0u) goto L_0883DDB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DDB0:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0883DDBCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DDBCu) goto L_0883DDBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DDBC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1580)));
    ctx.gpr[7] = (aot_gpr_17 + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1596));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0883DDE4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DDE4u) goto L_0883DDE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DDE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883E008;
      }
      goto L_0883DDEC;
    }
L_0883DDEC:
    aot_gpr_31 = (0x0883DDF4u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(256)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 76u, 0x088305B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DDF4u) goto L_0883DDF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DDF4:
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883DEAC;
      }
      goto L_0883DE0C;
    }
L_0883DE0C:
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0883DE28u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 861u, 0x08833F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DE28u) goto L_0883DE28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DE28:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(688));
    aot_gpr_31 = (0x0883DE34u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DE34u) goto L_0883DE34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DE34:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(704));
    aot_gpr_31 = (0x0883DE40u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DE40u) goto L_0883DE40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DE40:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(720));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16000u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883DE60u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DE60u) goto L_0883DE60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DE60:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0883DE70u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DE70u) goto L_0883DE70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DE70:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(736));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883DE84u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DE84u) goto L_0883DE84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DE84:
    aot_gpr_4 = (0u | 66u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883DEACu);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DEACu) goto L_0883DEAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DEAC:
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1552)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883DF2C;
      }
      goto L_0883DECC;
    }
L_0883DECC:
    ctx.gpr[20] = (aot_gpr_17 + ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_31 = (0x0883DEE0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DEE0u) goto L_0883DEE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DEE0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(752));
    aot_gpr_31 = (0x0883DEECu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DEECu) goto L_0883DEEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DEEC:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883DEF8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DEF8u) goto L_0883DEF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DEF8:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0883DF04u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DF04u) goto L_0883DF04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DF04:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1580)));
    ctx.gpr[7] = (aot_gpr_17 + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1596));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0883DF2Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DF2Cu) goto L_0883DF2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DF2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883E008;
      }
      goto L_0883DF34;
    }
L_0883DF34:
    aot_gpr_31 = (0x0883DF3Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 35u, 0x08830240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DF3Cu) goto L_0883DF3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DF3C:
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883DF6C;
      }
      goto L_0883DF54;
    }
L_0883DF54:
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_5 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1392));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0883DF6Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 861u, 0x08833F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DF6Cu) goto L_0883DF6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DF6C:
    aot_gpr_4 = (aot_gpr_17 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1596)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_17 + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0883DF88;
      }
      goto L_0883DF7C;
    }
L_0883DF7C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1600)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883E008;
      }
      goto L_0883DF88;
    }
L_0883DF88:
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1552)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883E008;
      }
      goto L_0883DFA8;
    }
L_0883DFA8:
    ctx.gpr[20] = (aot_gpr_17 + ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_31 = (0x0883DFBCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DFBCu) goto L_0883DFBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DFBC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(768));
    aot_gpr_31 = (0x0883DFC8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DFC8u) goto L_0883DFC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DFC8:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883DFD4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DFD4u) goto L_0883DFD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DFD4:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0883DFE0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883DFE0u) goto L_0883DFE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883DFE0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1580)));
    ctx.gpr[7] = (aot_gpr_17 + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1596));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0883E008u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E008u) goto L_0883E008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E008:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0883E014u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E014u) goto L_0883E014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E014:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[19] << 2u);
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E020;
    }
L_0883E020:
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1536)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E03C;
    }
L_0883E03C:
    aot_gpr_31 = (0x0883E044u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E044u) goto L_0883E044;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E044:
    aot_gpr_31 = (0x0883E04Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 83u, 0x08830650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E04Cu) goto L_0883E04C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E04C:
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5988), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E068;
    }
L_0883E068:
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_31 = (0x0883E078u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E078u) goto L_0883E078;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E078:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E084;
    }
L_0883E084:
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_31 = (0x0883E090u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E090u) goto L_0883E090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E090:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E09C;
    }
L_0883E09C:
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_31 = (0x0883E0A8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E0A8u) goto L_0883E0A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E0A8:
    aot_gpr_4 = (0u | 18u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E0B4;
    }
L_0883E0B4:
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_31 = (0x0883E0C0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E0C0u) goto L_0883E0C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E0C0:
    aot_gpr_4 = (0u | 33u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E0CC;
    }
L_0883E0CC:
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_31 = (0x0883E0D8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E0D8u) goto L_0883E0D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E0D8:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E0E4;
    }
L_0883E0E4:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(784));
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    ctx.gpr[21] = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    aot_gpr_31 = (0x0883E0FCu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 139u, 0x08830A58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E0FCu) goto L_0883E0FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E0FC:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0883E108u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E108u) goto L_0883E108;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E108:
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883E114u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E114u) goto L_0883E114;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E114:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0883E120u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E120u) goto L_0883E120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E120:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x0883E12Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E12Cu) goto L_0883E12C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E12C:
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(800));
    aot_gpr_31 = (0x0883E13Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 139u, 0x08830A58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E13Cu) goto L_0883E13C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E13C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0883E148u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E148u) goto L_0883E148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E148:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883E158u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E158u) goto L_0883E158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E158:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(816));
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0883E168u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E168u) goto L_0883E168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E168:
    aot_gpr_31 = (0x0883E170u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E170u) goto L_0883E170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E170:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(832));
    aot_gpr_31 = (0x0883E17Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E17Cu) goto L_0883E17C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E17C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_0883E18C;
      }
      goto L_0883E184;
    }
L_0883E184:
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_0883E1F8;
      }
      goto L_0883E18C;
    }
L_0883E18C:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(848));
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0883E1A4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E1A4u) goto L_0883E1A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E1A4:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883E1B4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E1B4u) goto L_0883E1B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E1B4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(816));
    aot_gpr_31 = (0x0883E1C0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E1C0u) goto L_0883E1C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E1C0:
    aot_gpr_4 = (15897u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0883E1D4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E1D4u) goto L_0883E1D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E1D4:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883E1E4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E1E4u) goto L_0883E1E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E1E4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(832));
    aot_gpr_31 = (0x0883E1F0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E1F0u) goto L_0883E1F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E1F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883E25C;
      }
      goto L_0883E1F8;
    }
L_0883E1F8:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(864));
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0883E210u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E210u) goto L_0883E210;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E210:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883E220u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E220u) goto L_0883E220;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E220:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(816));
    aot_gpr_31 = (0x0883E22Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E22Cu) goto L_0883E22C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E22C:
    aot_gpr_4 = (15897u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0883E240u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E240u) goto L_0883E240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E240:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883E250u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E250u) goto L_0883E250;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E250:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(832));
    aot_gpr_31 = (0x0883E25Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E25Cu) goto L_0883E25C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E25C:
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_31 = (0x0883E26Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E26Cu) goto L_0883E26C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E26C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(784));
    aot_gpr_31 = (0x0883E278u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E278u) goto L_0883E278;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E278:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(800));
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(816));
    aot_gpr_31 = (0x0883E294u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E294u) goto L_0883E294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E294:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883E2BCu);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E2BCu) goto L_0883E2BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E2BC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5988)));
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883E33C;
      }
      goto L_0883E2DC;
    }
L_0883E2DC:
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_31 = (0x0883E2ECu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E2ECu) goto L_0883E2EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E2EC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(880));
    aot_gpr_31 = (0x0883E2F8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E2F8u) goto L_0883E2F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E2F8:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(896));
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(816));
    aot_gpr_31 = (0x0883E314u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E314u) goto L_0883E314;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E314:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883E33Cu);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E33Cu) goto L_0883E33C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E33C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5988)));
    aot_gpr_4 = (15907u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E35C;
    }
L_0883E35C:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(912));
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    ctx.gpr[21] = (aot_gpr_4 + static_cast<std::uint32_t>(1392));
    aot_gpr_31 = (0x0883E374u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E374u) goto L_0883E374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E374:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0883E380u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E380u) goto L_0883E380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E380:
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(928));
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(816));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883E3A4u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E3A4u) goto L_0883E3A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E3A4:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883E3D0u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E3D0u) goto L_0883E3D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E3D0:
    aot_gpr_31 = (0x0883E3D8u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E3D8u) goto L_0883E3D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E3D8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0883E3E4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E3E4u) goto L_0883E3E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E3E4:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883E3F8u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E3F8u) goto L_0883E3F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E3F8:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883E420u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E420u) goto L_0883E420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E420:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883D9C0;
      }
      goto L_0883E430;
    }
L_0883E430:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x0883E43Cu);
    aot_gpr_5 = (128u << 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E43Cu) goto L_0883E43C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E43C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0883E4BC;
      }
      goto L_0883E444;
    }
L_0883E444:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_5 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (0u | 160u);
    aot_gpr_31 = (0x0883E460u);
    ctx.gpr[6] = (0u | 196u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 325u, 0x088DDFD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E460u) goto L_0883E460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E460:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3904), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(3904)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(944), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_5 = (16230u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 26214u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16217u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 196u);
    aot_gpr_31 = (0x0883E494u);
    ctx.gpr[6] = (0u | 228u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 325u, 0x088DDFD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E494u) goto L_0883E494;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E494:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3908), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(3908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(948), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(948));
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(944));
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0883E4BCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0193_entry, 193u, 656u, 0x08B0B7F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E4BCu) goto L_0883E4BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E4BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1276)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883EC0C;
      }
      goto L_0883E4C8;
    }
L_0883E4C8:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(960));
    aot_gpr_31 = (0x0883E4D4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E4D4u) goto L_0883E4D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E4D4:
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883E4E8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E4E8u) goto L_0883E4E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E4E8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(976));
    aot_gpr_31 = (0x0883E4F4u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E4F4u) goto L_0883E4F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E4F4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1540)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883E880;
      }
      goto L_0883E50C;
    }
L_0883E50C:
    aot_gpr_31 = (0x0883E514u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1424));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E514u) goto L_0883E514;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E514:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0883E880;
      }
      goto L_0883E520;
    }
L_0883E520:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1896)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883E540;
      }
      goto L_0883E530;
    }
L_0883E530:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0883E880;
      }
      goto L_0883E538;
    }
L_0883E538:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883E558;
      }
      goto L_0883E540;
    }
L_0883E540:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883E668;
      }
      goto L_0883E548;
    }
L_0883E548:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883E778;
      }
      goto L_0883E550;
    }
L_0883E550:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883E880;
      }
      goto L_0883E558;
    }
L_0883E558:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(992));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1008));
    aot_gpr_31 = (0x0883E568u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1424));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E568u) goto L_0883E568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E568:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1024));
    aot_gpr_31 = (0x0883E574u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E574u) goto L_0883E574;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E574:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16000u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883E594u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E594u) goto L_0883E594;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E594:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883E5A4u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E5A4u) goto L_0883E5A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E5A4:
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(976));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883E5B4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E5B4u) goto L_0883E5B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E5B4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1056));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883E5C8u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E5C8u) goto L_0883E5C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E5C8:
    aot_gpr_4 = (0u | 66u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883E5F0u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E5F0u) goto L_0883E5F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E5F0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1556)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883E660;
      }
      goto L_0883E604;
    }
L_0883E604:
    ctx.gpr[16] = (aot_gpr_17 + static_cast<std::uint32_t>(5));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1072));
    aot_gpr_31 = (0x0883E614u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1424));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E614u) goto L_0883E614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E614:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1088));
    aot_gpr_31 = (0x0883E620u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E620u) goto L_0883E620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E620:
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(976));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883E630u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E630u) goto L_0883E630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E630:
    aot_gpr_31 = (0x0883E638u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E638u) goto L_0883E638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E638:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0883E644u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E644u) goto L_0883E644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E644:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1584)));
    ctx.gpr[7] = (aot_gpr_17 + static_cast<std::uint32_t>(1597));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883E660u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E660u) goto L_0883E660;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E660:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883E880;
      }
      goto L_0883E668;
    }
L_0883E668:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1056));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    aot_gpr_31 = (0x0883E678u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1424));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E678u) goto L_0883E678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E678:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1024));
    aot_gpr_31 = (0x0883E684u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E684u) goto L_0883E684;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E684:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1008));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16000u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883E6A4u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E6A4u) goto L_0883E6A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E6A4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883E6B4u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E6B4u) goto L_0883E6B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E6B4:
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(976));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883E6C4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E6C4u) goto L_0883E6C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E6C4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(992));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883E6D8u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E6D8u) goto L_0883E6D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E6D8:
    aot_gpr_4 = (0u | 66u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883E700u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E700u) goto L_0883E700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E700:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1556)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883E770;
      }
      goto L_0883E714;
    }
L_0883E714:
    ctx.gpr[16] = (aot_gpr_17 + static_cast<std::uint32_t>(5));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1104));
    aot_gpr_31 = (0x0883E724u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1424));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E724u) goto L_0883E724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E724:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1120));
    aot_gpr_31 = (0x0883E730u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E730u) goto L_0883E730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E730:
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(976));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883E740u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E740u) goto L_0883E740;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E740:
    aot_gpr_31 = (0x0883E748u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E748u) goto L_0883E748;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E748:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0883E754u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E754u) goto L_0883E754;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E754:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1584)));
    ctx.gpr[7] = (aot_gpr_17 + static_cast<std::uint32_t>(1597));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883E770u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E770u) goto L_0883E770;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E770:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883E880;
      }
      goto L_0883E778;
    }
L_0883E778:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1056));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    aot_gpr_31 = (0x0883E788u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1424));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E788u) goto L_0883E788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E788:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1024));
    aot_gpr_31 = (0x0883E794u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E794u) goto L_0883E794;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E794:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1008));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16000u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883E7B4u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E7B4u) goto L_0883E7B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E7B4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883E7C4u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E7C4u) goto L_0883E7C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E7C4:
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(976));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883E7D4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E7D4u) goto L_0883E7D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E7D4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(992));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883E7E8u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E7E8u) goto L_0883E7E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E7E8:
    aot_gpr_4 = (0u | 66u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883E810u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E810u) goto L_0883E810;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E810:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1556)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883E880;
      }
      goto L_0883E824;
    }
L_0883E824:
    ctx.gpr[16] = (aot_gpr_17 + static_cast<std::uint32_t>(5));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1136));
    aot_gpr_31 = (0x0883E834u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1424));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E834u) goto L_0883E834;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E834:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1152));
    aot_gpr_31 = (0x0883E840u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E840u) goto L_0883E840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E840:
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(976));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883E850u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E850u) goto L_0883E850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E850:
    aot_gpr_31 = (0x0883E858u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E858u) goto L_0883E858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E858:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0883E864u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E864u) goto L_0883E864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E864:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1584)));
    ctx.gpr[7] = (aot_gpr_17 + static_cast<std::uint32_t>(1597));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883E880u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E880u) goto L_0883E880;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E880:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1548)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883EC0C;
      }
      goto L_0883E898;
    }
L_0883E898:
    aot_gpr_31 = (0x0883E8A0u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1488));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E8A0u) goto L_0883E8A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E8A0:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0883EC0C;
      }
      goto L_0883E8AC;
    }
L_0883E8AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1904)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883E8CC;
      }
      goto L_0883E8BC;
    }
L_0883E8BC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0883EC0C;
      }
      goto L_0883E8C4;
    }
L_0883E8C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883E8E4;
      }
      goto L_0883E8CC;
    }
L_0883E8CC:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883E9F4;
      }
      goto L_0883E8D4;
    }
L_0883E8D4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883EB04;
      }
      goto L_0883E8DC;
    }
L_0883E8DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883EC0C;
      }
      goto L_0883E8E4;
    }
L_0883E8E4:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1168));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1184));
    aot_gpr_31 = (0x0883E8F4u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1488));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E8F4u) goto L_0883E8F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E8F4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1200));
    aot_gpr_31 = (0x0883E900u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E900u) goto L_0883E900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E900:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1216));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16000u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883E920u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E920u) goto L_0883E920;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E920:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883E930u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E930u) goto L_0883E930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E930:
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(976));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883E940u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E940u) goto L_0883E940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E940:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1232));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883E954u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E954u) goto L_0883E954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E954:
    aot_gpr_4 = (0u | 66u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883E97Cu);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E97Cu) goto L_0883E97C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E97C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1564)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883E9EC;
      }
      goto L_0883E990;
    }
L_0883E990:
    ctx.gpr[16] = (aot_gpr_17 + static_cast<std::uint32_t>(6));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1248));
    aot_gpr_31 = (0x0883E9A0u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1488));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E9A0u) goto L_0883E9A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E9A0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1264));
    aot_gpr_31 = (0x0883E9ACu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E9ACu) goto L_0883E9AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E9AC:
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(976));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883E9BCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E9BCu) goto L_0883E9BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E9BC:
    aot_gpr_31 = (0x0883E9C4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E9C4u) goto L_0883E9C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E9C4:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0883E9D0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E9D0u) goto L_0883E9D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E9D0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1592)));
    ctx.gpr[7] = (aot_gpr_17 + static_cast<std::uint32_t>(1599));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883E9ECu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883E9ECu) goto L_0883E9EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883E9EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883EC0C;
      }
      goto L_0883E9F4;
    }
L_0883E9F4:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1232));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1216));
    aot_gpr_31 = (0x0883EA04u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1488));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EA04u) goto L_0883EA04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EA04:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1200));
    aot_gpr_31 = (0x0883EA10u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EA10u) goto L_0883EA10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EA10:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1184));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16000u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883EA30u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EA30u) goto L_0883EA30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EA30:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883EA40u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EA40u) goto L_0883EA40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EA40:
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(976));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883EA50u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EA50u) goto L_0883EA50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EA50:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1168));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883EA64u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EA64u) goto L_0883EA64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EA64:
    aot_gpr_4 = (0u | 66u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883EA8Cu);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EA8Cu) goto L_0883EA8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EA8C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1564)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883EAFC;
      }
      goto L_0883EAA0;
    }
L_0883EAA0:
    ctx.gpr[16] = (aot_gpr_17 + static_cast<std::uint32_t>(6));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1280));
    aot_gpr_31 = (0x0883EAB0u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1488));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EAB0u) goto L_0883EAB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EAB0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1296));
    aot_gpr_31 = (0x0883EABCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EABCu) goto L_0883EABC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EABC:
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(976));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883EACCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EACCu) goto L_0883EACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EACC:
    aot_gpr_31 = (0x0883EAD4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EAD4u) goto L_0883EAD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EAD4:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0883EAE0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EAE0u) goto L_0883EAE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EAE0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1592)));
    ctx.gpr[7] = (aot_gpr_17 + static_cast<std::uint32_t>(1599));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883EAFCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EAFCu) goto L_0883EAFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EAFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883EC0C;
      }
      goto L_0883EB04;
    }
L_0883EB04:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1232));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1216));
    aot_gpr_31 = (0x0883EB14u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1488));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EB14u) goto L_0883EB14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EB14:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1200));
    aot_gpr_31 = (0x0883EB20u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EB20u) goto L_0883EB20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EB20:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1184));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16000u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883EB40u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EB40u) goto L_0883EB40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EB40:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883EB50u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EB50u) goto L_0883EB50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EB50:
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(976));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883EB60u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EB60u) goto L_0883EB60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EB60:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1168));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883EB74u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EB74u) goto L_0883EB74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EB74:
    aot_gpr_4 = (0u | 66u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883EB9Cu);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EB9Cu) goto L_0883EB9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EB9C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1564)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883EC0C;
      }
      goto L_0883EBB0;
    }
L_0883EBB0:
    ctx.gpr[16] = (aot_gpr_17 + static_cast<std::uint32_t>(6));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1312));
    aot_gpr_31 = (0x0883EBC0u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1488));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A50, 11u, 138u, 0x08830A50u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EBC0u) goto L_0883EBC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EBC0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1328));
    aot_gpr_31 = (0x0883EBCCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305EC, 11u, 80u, 0x088305ECu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EBCCu) goto L_0883EBCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EBCC:
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(976));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883EBDCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EBDCu) goto L_0883EBDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EBDC:
    aot_gpr_31 = (0x0883EBE4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EBE4u) goto L_0883EBE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EBE4:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0883EBF0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EBF0u) goto L_0883EBF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EBF0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1592)));
    ctx.gpr[7] = (aot_gpr_17 + static_cast<std::uint32_t>(1599));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883EC0Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EC0Cu) goto L_0883EC0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EC0C:
    aot_gpr_31 = (0x0883EC14u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EC14u) goto L_0883EC14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EC14:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0883EE3C;
      }
      goto L_0883EC1C;
    }
L_0883EC1C:
    aot_gpr_31 = (0x0883EC24u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EC24u) goto L_0883EC24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EC24:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0883EE3C;
      }
      goto L_0883EC2C;
    }
L_0883EC2C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883EE3C;
      }
      goto L_0883EC38;
    }
L_0883EC38:
    aot_gpr_31 = (0x0883EC40u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(256)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 76u, 0x088305B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EC40u) goto L_0883EC40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EC40:
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883EE3C;
      }
      goto L_0883EC58;
    }
L_0883EC58:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883EE3C;
      }
      goto L_0883EC78;
    }
L_0883EC78:
    aot_gpr_31 = (0x0883EC80u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EC80u) goto L_0883EC80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EC80:
    aot_gpr_31 = (0x0883EC88u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 114u, 0x08830840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EC88u) goto L_0883EC88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EC88:
    aot_gpr_31 = (0x0883EC90u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EC90u) goto L_0883EC90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EC90:
    aot_gpr_31 = (0x0883EC98u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 117u, 0x08830868u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EC98u) goto L_0883EC98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EC98:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883EE3C;
      }
      goto L_0883ECB0;
    }
L_0883ECB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (ctx.gpr[19] << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(1376));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(1392));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(1408));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0883ECDCu);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 44u, 0x08A9061Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883ECDCu) goto L_0883ECDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883ECDC:
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(1424));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0883ECF0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883ECF0u) goto L_0883ECF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883ECF0:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(1440));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0883ED04u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883ED04u) goto L_0883ED04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883ED04:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(1456));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0883ED18u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883ED18u) goto L_0883ED18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883ED18:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(1344));
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(1360));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x0883ED30u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883ED30u) goto L_0883ED30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883ED30:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0883ED40u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883ED40u) goto L_0883ED40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883ED40:
    aot_gpr_4 = (16042u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 42572u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1472));
    aot_gpr_31 = (0x0883ED58u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883ED58u) goto L_0883ED58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883ED58:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_gpr_4 = (16528u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883EE2C;
      }
      goto L_0883ED90;
    }
L_0883ED90:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(1504));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1472));
    aot_gpr_31 = (0x0883EDA0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EDA0u) goto L_0883EDA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EDA0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x0883EDB0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EDB0u) goto L_0883EDB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EDB0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1504)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[0];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1504), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x0883EDC8u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EDC8u) goto L_0883EDC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EDC8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1508)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[0];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1508), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1488));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x0883EDECu);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EDECu) goto L_0883EDEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EDEC:
    aot_gpr_31 = (0x0883EDF4u);
    ctx.gpr[23] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 143u, 0x08830A78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EDF4u) goto L_0883EDF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EDF4:
    ctx.gpr[10] = (aot_gpr_2 & 1u);
    aot_gpr_4 = (0u | 38u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x0883EE1Cu);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EE1Cu) goto L_0883EE1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EE1C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883ED90;
      }
      goto L_0883EE2C;
    }
L_0883EE2C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883ECB0;
      }
      goto L_0883EE3C;
    }
L_0883EE3C:
    aot_gpr_31 = (0x0883EE44u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 130u, 0x0884477Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EE44u) goto L_0883EE44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EE44:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883F178;
      }
      goto L_0883EE54;
    }
L_0883EE54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x0883EE60u);
    aot_gpr_5 = (0u | 4096u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EE60u) goto L_0883EE60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EE60:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0883F178;
      }
      goto L_0883EE68;
    }
L_0883EE68:
    aot_gpr_4 = (17154u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(256)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883F178;
      }
      goto L_0883EE84;
    }
L_0883EE84:
    aot_gpr_31 = (0x0883EE8Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EE8Cu) goto L_0883EE8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EE8C:
    aot_gpr_31 = (0x0883EE94u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 114u, 0x08830840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EE94u) goto L_0883EE94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EE94:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1536));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0883EEA4u);
    aot_gpr_5 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 184u, 0x08830DB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EEA4u) goto L_0883EEA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EEA4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883EEB0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EEB0u) goto L_0883EEB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EEB0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1520));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0883EEC4u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EEC4u) goto L_0883EEC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EEC4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883EED0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 461u, 0x08A93198u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EED0u) goto L_0883EED0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EED0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0883F178;
      }
      goto L_0883EED8;
    }
L_0883EED8:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1592), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1576), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(256)));
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883EF74;
      }
      goto L_0883EF00;
    }
L_0883EF00:
    aot_gpr_31 = (0x0883EF08u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(600)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EF08u) goto L_0883EF08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EF08:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x0883EF14u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(600)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 68u, 0x088304BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EF14u) goto L_0883EF14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EF14:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1632));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x0883EF28u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EF28u) goto L_0883EF28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EF28:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1648));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0883EF38u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 38u, 0x08830268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EF38u) goto L_0883EF38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EF38:
    aot_gpr_4 = (48501u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48373u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_gpr_31 = (0x0883EF54u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EF54u) goto L_0883EF54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EF54:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1648)));
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1568), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1652)));
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1572), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883EF94;
      }
      goto L_0883EF74;
    }
L_0883EF74:
    aot_gpr_31 = (0x0883EF7Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EF7Cu) goto L_0883EF7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EF7C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1568), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0883EF8Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830B10, 11u, 148u, 0x08830B10u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EF8Cu) goto L_0883EF8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EF8C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1572), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0883EF94;
L_0883EF94:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1552));
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(1536));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883EFA8u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EFA8u) goto L_0883EFA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EFA8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1600));
    aot_gpr_31 = (0x0883EFB4u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EFB4u) goto L_0883EFB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EFB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x0883EFC0u);
    aot_gpr_5 = (0u | 8192u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EFC0u) goto L_0883EFC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EFC0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0883F010;
      }
      goto L_0883EFC8;
    }
L_0883EFC8:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1680));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1536));
    aot_gpr_31 = (0x0883EFD8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EFD8u) goto L_0883EFD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EFD8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1680)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1680), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1664));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0883EFF8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883EFF8u) goto L_0883EFF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883EFF8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1616));
    aot_gpr_31 = (0x0883F004u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F004u) goto L_0883F004;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F004:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1584));
    aot_gpr_31 = (0x0883F010u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1568));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F010u) goto L_0883F010;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F010:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16448u << 16u);
    aot_gpr_31 = (0x0883F024u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F024u) goto L_0883F024;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F024:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x0883F030u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 191u, 0x08830E04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F030u) goto L_0883F030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F030:
    aot_gpr_4 = (16268u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[0] + aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29668)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883F178;
      }
      goto L_0883F058;
    }
L_0883F058:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1600));
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(1568));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (0u | 65u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883F080u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F080u) goto L_0883F080;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F080:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x0883F08Cu);
    aot_gpr_5 = (0u | 8192u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F08Cu) goto L_0883F08C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F08C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0883F0BC;
      }
      goto L_0883F094;
    }
L_0883F094:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1616));
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(1584));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (0u | 65u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883F0BCu);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F0BCu) goto L_0883F0BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F0BC:
    aot_gpr_31 = (0x0883F0C4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 191u, 0x08830E04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F0C4u) goto L_0883F0C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F0C4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29664)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883F168;
      }
      goto L_0883F0D8;
    }
L_0883F0D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(644)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883F168;
      }
      goto L_0883F0E8;
    }
L_0883F0E8:
    aot_gpr_31 = (0x0883F0F0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 143u, 0x08830A78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F0F0u) goto L_0883F0F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F0F0:
    aot_gpr_4 = (aot_gpr_2 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883F12C;
      }
      goto L_0883F0FC;
    }
L_0883F0FC:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1600));
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(1568));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (0u | 65u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883F124u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F124u) goto L_0883F124;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F124:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883F168;
      }
      goto L_0883F12C;
    }
L_0883F12C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x0883F138u);
    aot_gpr_5 = (0u | 8192u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F138u) goto L_0883F138;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F138:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0883F168;
      }
      goto L_0883F140;
    }
L_0883F140:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1616));
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(1584));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (0u | 65u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0883F168u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F168u) goto L_0883F168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F168:
    aot_gpr_4 = (0u | 99u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0883F058;
      }
      goto L_0883F178;
    }
L_0883F178:
    aot_gpr_31 = (0x0883F180u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F180u) goto L_0883F180;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F180:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 193 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 268u);
      if (branch_taken) {
          goto L_0883F1B4;
      }
      goto L_0883F190;
    }
L_0883F190:
    aot_gpr_5 = (0u | 183u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-937));
      if (branch_taken) {
          goto L_0883FAFC;
      }
      goto L_0883F19C;
    }
L_0883F19C:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-959));
      if (branch_taken) {
          goto L_0883FC40;
      }
      goto L_0883F1A4;
    }
L_0883F1A4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0883FC40;
      }
      goto L_0883F1AC;
    }
L_0883F1AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0015_entry, 15u, 5u, 0x0884007Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0883F1B4;
    }
L_0883F1B4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 234u);
      if (branch_taken) {
          goto L_0883FF44;
      }
      goto L_0883F1BC;
    }
L_0883F1BC:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 227u);
      if (branch_taken) {
          goto L_0883F1FC;
      }
      goto L_0883F1C4;
    }
L_0883F1C4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 226u);
      if (branch_taken) {
          goto L_0883F1FC;
      }
      goto L_0883F1CC;
    }
L_0883F1CC:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 207u);
      if (branch_taken) {
          goto L_0883F9AC;
      }
      goto L_0883F1D4;
    }
L_0883F1D4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 204u);
      if (branch_taken) {
          goto L_0883F1FC;
      }
      goto L_0883F1DC;
    }
L_0883F1DC:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 194u);
      if (branch_taken) {
          goto L_0883FD90;
      }
      goto L_0883F1E4;
    }
L_0883F1E4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 193u);
      if (branch_taken) {
          goto L_0883F1FC;
      }
      goto L_0883F1EC;
    }
L_0883F1EC:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0883FD90;
      }
      goto L_0883F1F4;
    }
L_0883F1F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0015_entry, 15u, 5u, 0x0884007Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0883F1FC;
    }
L_0883F1FC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(618))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883F9A4;
      }
      goto L_0883F20C;
    }
L_0883F20C:
    aot_gpr_31 = (0x0883F214u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F214u) goto L_0883F214;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F214:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 234u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 227u);
      if (branch_taken) {
          goto L_0883F350;
      }
      goto L_0883F224;
    }
L_0883F224:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 207u);
      if (branch_taken) {
          goto L_0883F3DC;
      }
      goto L_0883F22C;
    }
L_0883F22C:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 194u);
      if (branch_taken) {
          goto L_0883F2C8;
      }
      goto L_0883F234;
    }
L_0883F234:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0883F468;
      }
      goto L_0883F23C;
    }
L_0883F23C:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1760));
    aot_gpr_4 = (16232u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 62915u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16345u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16366u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 5243u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883F274u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F274u) goto L_0883F274;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F274:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x0883F280u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F280u) goto L_0883F280;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F280:
    aot_gpr_4 = (49000u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 62915u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883F29Cu);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F29Cu) goto L_0883F29C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F29C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x0883F2A8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F2A8u) goto L_0883F2A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F2A8:
    ctx.gpr[22] = (0u | 255u);
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3912), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[20] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883F468;
      }
      goto L_0883F2C8;
    }
L_0883F2C8:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1760));
    aot_gpr_4 = (16112u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 41943u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48844u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883F2FCu);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F2FCu) goto L_0883F2FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F2FC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x0883F308u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F308u) goto L_0883F308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F308:
    aot_gpr_4 = (48880u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 41943u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883F324u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F324u) goto L_0883F324;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F324:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x0883F330u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F330u) goto L_0883F330;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F330:
    ctx.gpr[20] = (0u | 255u);
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3912), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883F468;
      }
      goto L_0883F350;
    }
L_0883F350:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1760));
    aot_gpr_4 = (16179u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16250u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 57672u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16326u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883F388u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F388u) goto L_0883F388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F388:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x0883F394u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F394u) goto L_0883F394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F394:
    aot_gpr_4 = (48947u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883F3B0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F3B0u) goto L_0883F3B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F3B0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x0883F3BCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F3BCu) goto L_0883F3BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F3BC:
    ctx.gpr[20] = (0u | 255u);
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3912), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883F468;
      }
      goto L_0883F3DC;
    }
L_0883F3DC:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1760));
    aot_gpr_4 = (16243u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16163u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16332u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883F414u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F414u) goto L_0883F414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F414:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x0883F420u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F420u) goto L_0883F420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F420:
    aot_gpr_4 = (49011u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883F43Cu);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F43Cu) goto L_0883F43C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F43C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x0883F448u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F448u) goto L_0883F448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F448:
    ctx.gpr[22] = (0u | 255u);
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3912), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883F468;
      }
      goto L_0883F468;
    }
L_0883F468:
    aot_gpr_31 = (0x0883F470u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 120u, 0x08830890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F470u) goto L_0883F470;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F470:
    aot_gpr_4 = (aot_gpr_2 & 1023u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(512) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0883F4B8;
      }
      goto L_0883F480;
    }
L_0883F480:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(3912)));
    ctx.gpr[6] = (0u | 6u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[30]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[23]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[16] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_0883F4E8;
      }
      goto L_0883F4B8;
    }
L_0883F4B8:
    aot_gpr_5 = (0u | 6u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[22]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[21]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[20]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[16] = (ctx.lo);
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_0883F4E8;
L_0883F4E8:
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(100) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0883F5B0;
      }
      goto L_0883F4F8;
    }
L_0883F4F8:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0883F510;
      }
      goto L_0883F504;
    }
L_0883F504:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_0883F510;
L_0883F510:
    aot_gpr_5 = (17096u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[19]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0883F54C;
      }
      goto L_0883F540;
    }
L_0883F540:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_0883F54C;
L_0883F54C:
    aot_gpr_5 = (17096u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[18]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0883F588;
      }
      goto L_0883F57C;
    }
L_0883F57C:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_0883F588;
L_0883F588:
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[16]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_0883F688;
      }
      goto L_0883F5B0;
    }
L_0883F5B0:
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(413) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0883F688;
      }
      goto L_0883F5BC;
    }
L_0883F5BC:
    aot_gpr_5 = (0u | 512u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0883F5DC;
      }
      goto L_0883F5D0;
    }
L_0883F5D0:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_0883F5DC;
L_0883F5DC:
    aot_gpr_5 = (17096u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[19]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    aot_gpr_5 = (0u | 512u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0883F620;
      }
      goto L_0883F614;
    }
L_0883F614:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_0883F620;
L_0883F620:
    aot_gpr_5 = (17096u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[18]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    aot_gpr_5 = (0u | 512u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0883F664;
      }
      goto L_0883F658;
    }
L_0883F658:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_0883F664;
L_0883F664:
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[16]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_0883F688;
L_0883F688:
    aot_gpr_31 = (0x0883F690u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F690u) goto L_0883F690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F690:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1744));
    aot_gpr_31 = (0x0883F69Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F69Cu) goto L_0883F69C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F69C:
    aot_gpr_31 = (0x0883F6A4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 120u, 0x08830890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F6A4u) goto L_0883F6A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F6A4:
    aot_gpr_4 = (aot_gpr_2 & 1023u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0883F6C0;
      }
      goto L_0883F6B4;
    }
L_0883F6B4:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_0883F6C0;
L_0883F6C0:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3914), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3913), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_gpr_4 = (15304u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 62915u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_31 = (0x0883F6E0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F6E0u) goto L_0883F6E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F6E0:
    aot_gpr_31 = (0x0883F6E8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 68u, 0x088304BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F6E8u) goto L_0883F6E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F6E8:
    aot_gpr_4 = (16384u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0883F6F8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F6F8u) goto L_0883F6F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F6F8:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(1712));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x0883F70Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F70Cu) goto L_0883F70C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F70C:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(1696));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1744));
    aot_gpr_31 = (0x0883F720u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F720u) goto L_0883F720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F720:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1728));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0883F734u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F734u) goto L_0883F734;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F734:
    aot_gpr_4 = (16704u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[19]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 / ctx.fpr[15];
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[18]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_14 = aot_fpr_14 / ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0883F780u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F780u) goto L_0883F780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F780:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1776));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0883F798u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F798u) goto L_0883F798;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F798:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883F7A4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F7A4u) goto L_0883F7A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F7A4:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0883F7B8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F7B8u) goto L_0883F7B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F7B8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883F7C4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F7C4u) goto L_0883F7C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F7C4:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    ctx.gpr[20] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(3913)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(3914)));
      if (branch_taken) {
          goto L_0883F9A4;
      }
      goto L_0883F7D8;
    }
L_0883F7D8:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3913), static_cast<std::uint8_t>(ctx.gpr[20]));
    goto L_0883F7DC;
L_0883F7DC:
    aot_gpr_31 = (0x0883F7E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 120u, 0x08830890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F7E4u) goto L_0883F7E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F7E4:
    aot_gpr_4 = (ctx.gpr[16] << 6u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    ctx.gpr[18] = (aot_gpr_4 & 3u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3915), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(1824));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883F814u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F814u) goto L_0883F814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F814:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1840));
    aot_gpr_31 = (0x0883F830u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F830u) goto L_0883F830;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F830:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(1808));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883F844u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F844u) goto L_0883F844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F844:
    aot_gpr_4 = (16042u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 43691u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1792));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883F860u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F860u) goto L_0883F860;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F860:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x0883F86Cu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F86Cu) goto L_0883F86C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F86C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(3915)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    ctx.gpr[20] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(3913)));
      if (branch_taken) {
          goto L_0883F88C;
      }
      goto L_0883F87C;
    }
L_0883F87C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_0883F974;
      }
      goto L_0883F884;
    }
L_0883F884:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883F8F8;
      }
      goto L_0883F88C;
    }
L_0883F88C:
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0883F974;
      }
      goto L_0883F898;
    }
L_0883F898:
    aot_gpr_4 = (aot_gpr_17 + ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(21));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (16076u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x0883F8F0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F8F0u) goto L_0883F8F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F8F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883F990;
      }
      goto L_0883F8F8;
    }
L_0883F8F8:
    aot_gpr_5 = (aot_gpr_17 + ctx.gpr[16]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    if (ctx.gpr[16] == ctx.gpr[7]) {
    ctx.gpr[6] = (0u | 2u);
        goto L_0883F91C;
    }
    goto L_0883F91C;
L_0883F91C:
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[9] = (aot_gpr_4 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(3912)));
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x0883F96Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F96Cu) goto L_0883F96C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F96C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883F990;
      }
      goto L_0883F974;
    }
L_0883F974:
    aot_gpr_4 = (aot_gpr_17 + ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(21));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_31 = (0x0883F990u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F990u) goto L_0883F990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F990:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3913), static_cast<std::uint8_t>(ctx.gpr[20]));
        goto L_0883F7DC;
    }
    goto L_0883F9A4;
L_0883F9A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0015_entry, 15u, 5u, 0x0884007Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0883F9AC;
    }
L_0883F9AC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(1653))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883FAF4;
      }
      goto L_0883F9BC;
    }
L_0883F9BC:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1904));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1856));
    aot_gpr_31 = (0x0883F9CCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F9CCu) goto L_0883F9CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F9CC:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(1872));
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0883F9E8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F9E8u) goto L_0883F9E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F9E8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883F9F8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883F9F8u) goto L_0883F9F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883F9F8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883FA08u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FA08u) goto L_0883FA08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FA08:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(1888));
    aot_gpr_4 = (48793u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0883FA20u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FA20u) goto L_0883FA20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FA20:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883FA30u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FA30u) goto L_0883FA30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FA30:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883FA40u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FA40u) goto L_0883FA40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FA40:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(17));
    aot_gpr_5 = (16204u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_2 = (0u | 1u);
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883FA9Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FA9Cu) goto L_0883FA9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FA9C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883FAA8u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FAA8u) goto L_0883FAA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FAA8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883FAC0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FAC0u) goto L_0883FAC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FAC0:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0883FAF4u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FAF4u) goto L_0883FAF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FAF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0015_entry, 15u, 5u, 0x0884007Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0883FAFC;
    }
L_0883FAFC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(1653))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883FC38;
      }
      goto L_0883FB0C;
    }
L_0883FB0C:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1968));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1920));
    aot_gpr_31 = (0x0883FB1Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FB1Cu) goto L_0883FB1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FB1C:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(1936));
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0883FB38u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FB38u) goto L_0883FB38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FB38:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883FB48u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FB48u) goto L_0883FB48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FB48:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883FB58u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FB58u) goto L_0883FB58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FB58:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(1952));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x0883FB68u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FB68u) goto L_0883FB68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FB68:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x0883FB78u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FB78u) goto L_0883FB78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FB78:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883FB88u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FB88u) goto L_0883FB88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FB88:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(17));
    aot_gpr_5 = (16204u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_2 = (0u | 1u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x0883FBE0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FBE0u) goto L_0883FBE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FBE0:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883FBECu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FBECu) goto L_0883FBEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FBEC:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x0883FC04u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FC04u) goto L_0883FC04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FC04:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0883FC38u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FC38u) goto L_0883FC38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FC38:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0015_entry, 15u, 5u, 0x0884007Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0883FC40;
    }
L_0883FC40:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(1653))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883FD88;
      }
      goto L_0883FC50;
    }
L_0883FC50:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(2032));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1984));
    aot_gpr_31 = (0x0883FC60u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FC60u) goto L_0883FC60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FC60:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(2000));
    aot_gpr_4 = (16217u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0883FC7Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FC7Cu) goto L_0883FC7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FC7C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883FC8Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FC8Cu) goto L_0883FC8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FC8C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883FC9Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FC9Cu) goto L_0883FC9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FC9C:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(2016));
    aot_gpr_4 = (48793u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0883FCB4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FCB4u) goto L_0883FCB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FCB4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883FCC4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FCC4u) goto L_0883FCC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FCC4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0883FCD4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FCD4u) goto L_0883FCD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FCD4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(17));
    aot_gpr_5 = (16204u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_2 = (0u | 1u);
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883FD30u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FD30u) goto L_0883FD30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FD30:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883FD3Cu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FD3Cu) goto L_0883FD3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FD3C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0883FD54u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FD54u) goto L_0883FD54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FD54:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0883FD88u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FD88u) goto L_0883FD88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FD88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0015_entry, 15u, 5u, 0x0884007Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0883FD90;
    }
L_0883FD90:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(618))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883FF3C;
      }
      goto L_0883FDA0;
    }
L_0883FDA0:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(2048));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2064));
    aot_gpr_5 = (16076u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16153u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16025u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_gpr_31 = (0x0883FDD0u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FDD0u) goto L_0883FDD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FDD0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0883FDE0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FDE0u) goto L_0883FDE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FDE0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x0883FDECu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FDECu) goto L_0883FDEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FDEC:
    aot_gpr_31 = (0x0883FDF4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 120u, 0x08830890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FDF4u) goto L_0883FDF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FDF4:
    aot_gpr_4 = (aot_gpr_2 & 256u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0883FF24;
      }
      goto L_0883FE00;
    }
L_0883FE00:
    aot_gpr_31 = (0x0883FE08u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FE08u) goto L_0883FE08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FE08:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2064));
    aot_gpr_31 = (0x0883FE18u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FE18u) goto L_0883FE18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FE18:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x0883FE28u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FE28u) goto L_0883FE28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FE28:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883FE38u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FE38u) goto L_0883FE38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FE38:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883FE44u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FE44u) goto L_0883FE44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FE44:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0883FF24;
      }
      goto L_0883FE58;
    }
L_0883FE58:
    aot_gpr_31 = (0x0883FE60u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08830A20, 11u, 136u, 0x08830A20u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FE60u) goto L_0883FE60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FE60:
    aot_gpr_4 = (0u | 204u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_0883FEC8;
      }
      goto L_0883FE6C;
    }
L_0883FE6C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(21));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (16076u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 255u);
    ctx.gpr[6] = (0u | 70u);
    ctx.gpr[7] = (0u | 70u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x0883FEC0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FEC0u) goto L_0883FEC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FEC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883FF3C;
      }
      goto L_0883FEC8;
    }
L_0883FEC8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(21));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (16076u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x0883FF1Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FF1Cu) goto L_0883FF1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FF1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0883FF3C;
      }
      goto L_0883FF24;
    }
L_0883FF24:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(21));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_31 = (0x0883FF3Cu);
    aot_fpr_13 = std::bit_cast<float>(0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FF3Cu) goto L_0883FF3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FF3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0015_entry, 15u, 5u, 0x0884007Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0883FF44;
    }
L_0883FF44:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(618))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0015_entry, 15u, 5u, 0x0884007Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0883FF54;
    }
L_0883FF54:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(2080));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2096));
    aot_gpr_5 = (16102u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 26214u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16140u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_gpr_31 = (0x0883FF80u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088305D8, 11u, 79u, 0x088305D8u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FF80u) goto L_0883FF80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FF80:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0883FF90u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FF90u) goto L_0883FF90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FF90:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x0883FF9Cu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FF9Cu) goto L_0883FF9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FF9C:
    aot_gpr_31 = (0x0883FFA4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 120u, 0x08830890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FFA4u) goto L_0883FFA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FFA4:
    aot_gpr_4 = (aot_gpr_2 & 256u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0015_entry, 15u, 4u, 0x08840064u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0883FFB0;
    }
L_0883FFB0:
    aot_gpr_31 = (0x0883FFB8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0883079C, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FFB8u) goto L_0883FFB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FFB8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2096));
    aot_gpr_31 = (0x0883FFC8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FFC8u) goto L_0883FFC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FFC8:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x0883FFD8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088307E0, 11u, 108u, 0x088307E0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FFD8u) goto L_0883FFD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FFD8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0883FFE8u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FFE8u) goto L_0883FFE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FFE8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0883FFF4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0883FFF4u) goto L_0883FFF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0883FFF4:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    ctx.pc = 0x08840000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0014(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0014_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_14(Runtime &runtime) {
    runtime.register_generated_unit(14u, 0x0883C000u, 16384u, &recomp_unit_0014, &recomp_unit_0014_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x0883C004u, &recomp_unit_0014, "recomp_unit_0014",
                                          kEntryMasks_recomp_unit_0014, 64u);
}
} // namespace psprecomp
