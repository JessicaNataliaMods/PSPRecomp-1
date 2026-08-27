#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0194[64] = {
    0x20152A0200848895ull, 0x000010102A004500ull, 0x009554A2A2A5290Aull, 0x0300880005000054ull,
    0x0028054800801004ull, 0x904400A128A41154ull, 0x0080802001554822ull, 0x0152040048440804ull,
    0x0002000290454810ull, 0x2208020805A92008ull, 0x4224201105080044ull, 0x8124442001091013ull,
    0xC22254A52900400Aull, 0x832A544891290080ull, 0x040CAA52A0892900ull, 0x4A0024AA4002A948ull,
    0x89514A4020C10410ull, 0x29008312A2948041ull, 0x1060484481062545ull, 0x4804192A5290089Aull,
    0x9128024008312A29ull, 0x492A420082549528ull, 0x0431440558215292ull, 0x851010C288086144ull,
    0x48200208009060A1ull, 0x8440200056494A82ull, 0x692A468A52429554ull, 0x24C0501020200080ull,
    0x2A8A5110A1222108ull, 0x5110110044024540ull, 0x00008100034A0000ull, 0x49522AAAAAA82010ull,
    0x089089084620102Aull, 0x1444294295554480ull, 0xAAAA254004021002ull, 0x1008400852214A14ull,
    0xA154282000204010ull, 0x02D5540009A8550Aull, 0x0401504208006922ull, 0x0024000043004010ull,
    0x120054824124120Aull, 0x0554824124120A00ull, 0x2080020908000480ull, 0x008D0A14000A9249ull,
    0x8002014104A22220ull, 0x94411010820A0842ull, 0x550289044042082Aull, 0x04002A841000A229ull,
    0x1430226200155580ull, 0x51044042082AA222ull, 0x540A2411010820AAull, 0x4C4002AAB0008005ull,
    0x0400015444428604ull, 0x0A08800150400015ull, 0x002A500882010A02ull, 0x054A011040214040ull,
    0x01140800A5400880ull, 0x44000012810014A8ull, 0x0A51044000014A90ull, 0x8A20880000254100ull,
    0x002A80411000004Aull, 0x2282280084105540ull, 0x04A880020945514Aull, 0x2014100AA5154550ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0194[64] = {
    1u, 17u, 25u, 47u, 56u, 65u, 82u, 94u, 105u, 115u, 128u, 140u, 154u, 172u, 190u, 208u,
    225u, 241u, 258u, 275u, 294u, 311u, 330u, 349u, 365u, 377u, 393u, 418u, 428u, 446u, 459u, 466u,
    488u, 503u, 523u, 539u, 553u, 565u, 585u, 598u, 605u, 620u, 635u, 643u, 659u, 671u, 685u, 701u,
    714u, 731u, 747u, 763u, 778u, 791u, 802u, 814u, 826u, 837u, 848u, 861u, 872u, 882u, 896u, 913u,
};
void recomp_unit_0194_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,29,16,2 fprs=12,14,13,20 gpr_occ=4252 fpr_occ=880 gpr_total=5287 fpr_total=1087
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[29] = aot_gpr_29; ctx.gpr[16] = aot_gpr_16; ctx.gpr[2] = aot_gpr_2; ctx.fpr[12] = aot_fpr_12; ctx.fpr[14] = aot_fpr_14; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_2 = ctx.gpr[2]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B0C000u;
        entry_id = 0u;
        if (entry_delta < 16376u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0194[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0194[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08B0C000;
    case 2u: goto L_08B0C008;
    case 3u: goto L_08B0C010;
    case 4u: goto L_08B0C01C;
    case 5u: goto L_08B0C02C;
    case 6u: goto L_08B0C03C;
    case 7u: goto L_08B0C048;
    case 8u: goto L_08B0C05C;
    case 9u: goto L_08B0C084;
    case 10u: goto L_08B0C0A4;
    case 11u: goto L_08B0C0AC;
    case 12u: goto L_08B0C0B4;
    case 13u: goto L_08B0C0C0;
    case 14u: goto L_08B0C0C8;
    case 15u: goto L_08B0C0D0;
    case 16u: goto L_08B0C0F4;
    case 17u: goto L_08B0C120;
    case 18u: goto L_08B0C128;
    case 19u: goto L_08B0C138;
    case 20u: goto L_08B0C164;
    case 21u: goto L_08B0C16C;
    case 22u: goto L_08B0C174;
    case 23u: goto L_08B0C190;
    case 24u: goto L_08B0C1B0;
    case 25u: goto L_08B0C204;
    case 26u: goto L_08B0C20C;
    case 27u: goto L_08B0C220;
    case 28u: goto L_08B0C22C;
    case 29u: goto L_08B0C234;
    case 30u: goto L_08B0C240;
    case 31u: goto L_08B0C248;
    case 32u: goto L_08B0C254;
    case 33u: goto L_08B0C25C;
    case 34u: goto L_08B0C264;
    case 35u: goto L_08B0C274;
    case 36u: goto L_08B0C27C;
    case 37u: goto L_08B0C284;
    case 38u: goto L_08B0C294;
    case 39u: goto L_08B0C29C;
    case 40u: goto L_08B0C2A8;
    case 41u: goto L_08B0C2B0;
    case 42u: goto L_08B0C2B8;
    case 43u: goto L_08B0C2C0;
    case 44u: goto L_08B0C2C8;
    case 45u: goto L_08B0C2D0;
    case 46u: goto L_08B0C2DC;
    case 47u: goto L_08B0C308;
    case 48u: goto L_08B0C310;
    case 49u: goto L_08B0C318;
    case 50u: goto L_08B0C360;
    case 51u: goto L_08B0C368;
    case 52u: goto L_08B0C3AC;
    case 53u: goto L_08B0C3BC;
    case 54u: goto L_08B0C3E0;
    case 55u: goto L_08B0C3E4;
    case 56u: goto L_08B0C408;
    case 57u: goto L_08B0C430;
    case 58u: goto L_08B0C45C;
    case 59u: goto L_08B0C48C;
    case 60u: goto L_08B0C498;
    case 61u: goto L_08B0C4A0;
    case 62u: goto L_08B0C4A8;
    case 63u: goto L_08B0C4CC;
    case 64u: goto L_08B0C4D4;
    case 65u: goto L_08B0C508;
    case 66u: goto L_08B0C510;
    case 67u: goto L_08B0C518;
    case 68u: goto L_08B0C520;
    case 69u: goto L_08B0C530;
    case 70u: goto L_08B0C548;
    case 71u: goto L_08B0C554;
    case 72u: goto L_08B0C55C;
    case 73u: goto L_08B0C56C;
    case 74u: goto L_08B0C574;
    case 75u: goto L_08B0C580;
    case 76u: goto L_08B0C594;
    case 77u: goto L_08B0C59C;
    case 78u: goto L_08B0C5C8;
    case 79u: goto L_08B0C5D8;
    case 80u: goto L_08B0C5F0;
    case 81u: goto L_08B0C5FC;
    case 82u: goto L_08B0C604;
    case 83u: goto L_08B0C614;
    case 84u: goto L_08B0C62C;
    case 85u: goto L_08B0C638;
    case 86u: goto L_08B0C640;
    case 87u: goto L_08B0C648;
    case 88u: goto L_08B0C650;
    case 89u: goto L_08B0C658;
    case 90u: goto L_08B0C660;
    case 91u: goto L_08B0C694;
    case 92u: goto L_08B0C6BC;
    case 93u: goto L_08B0C6DC;
    case 94u: goto L_08B0C708;
    case 95u: goto L_08B0C72C;
    case 96u: goto L_08B0C748;
    case 97u: goto L_08B0C758;
    case 98u: goto L_08B0C76C;
    case 99u: goto L_08B0C778;
    case 100u: goto L_08B0C7A8;
    case 101u: goto L_08B0C7C4;
    case 102u: goto L_08B0C7D0;
    case 103u: goto L_08B0C7D8;
    case 104u: goto L_08B0C7E0;
    case 105u: goto L_08B0C810;
    case 106u: goto L_08B0C82C;
    case 107u: goto L_08B0C838;
    case 108u: goto L_08B0C840;
    case 109u: goto L_08B0C848;
    case 110u: goto L_08B0C858;
    case 111u: goto L_08B0C870;
    case 112u: goto L_08B0C87C;
    case 113u: goto L_08B0C884;
    case 114u: goto L_08B0C8C4;
    case 115u: goto L_08B0C90C;
    case 116u: goto L_08B0C934;
    case 117u: goto L_08B0C940;
    case 118u: goto L_08B0C94C;
    case 119u: goto L_08B0C954;
    case 120u: goto L_08B0C95C;
    case 121u: goto L_08B0C960;
    case 122u: goto L_08B0C968;
    case 123u: goto L_08B0C98C;
    case 124u: goto L_08B0C9A4;
    case 125u: goto L_08B0C9CC;
    case 126u: goto L_08B0C9E4;
    case 127u: goto L_08B0C9F4;
    case 128u: goto L_08B0CA08;
    case 129u: goto L_08B0CA18;
    case 130u: goto L_08B0CA4C;
    case 131u: goto L_08B0CA60;
    case 132u: goto L_08B0CA68;
    case 133u: goto L_08B0CA80;
    case 134u: goto L_08B0CA90;
    case 135u: goto L_08B0CAB4;
    case 136u: goto L_08B0CAC8;
    case 137u: goto L_08B0CAD4;
    case 138u: goto L_08B0CAE4;
    case 139u: goto L_08B0CAF8;
    case 140u: goto L_08B0CB00;
    case 141u: goto L_08B0CB04;
    case 142u: goto L_08B0CB10;
    case 143u: goto L_08B0CB30;
    case 144u: goto L_08B0CB40;
    case 145u: goto L_08B0CB4C;
    case 146u: goto L_08B0CB60;
    case 147u: goto L_08B0CB94;
    case 148u: goto L_08B0CBA8;
    case 149u: goto L_08B0CBB8;
    case 150u: goto L_08B0CBC8;
    case 151u: goto L_08B0CBD4;
    case 152u: goto L_08B0CBE0;
    case 153u: goto L_08B0CBFC;
    case 154u: goto L_08B0CC04;
    case 155u: goto L_08B0CC0C;
    case 156u: goto L_08B0CC38;
    case 157u: goto L_08B0CC60;
    case 158u: goto L_08B0CC6C;
    case 159u: goto L_08B0CC74;
    case 160u: goto L_08B0CC80;
    case 161u: goto L_08B0CC88;
    case 162u: goto L_08B0CC94;
    case 163u: goto L_08B0CC9C;
    case 164u: goto L_08B0CCA8;
    case 165u: goto L_08B0CCB0;
    case 166u: goto L_08B0CCB8;
    case 167u: goto L_08B0CCC4;
    case 168u: goto L_08B0CCD4;
    case 169u: goto L_08B0CCE4;
    case 170u: goto L_08B0CCF8;
    case 171u: goto L_08B0CCFC;
    case 172u: goto L_08B0CD1C;
    case 173u: goto L_08B0CD40;
    case 174u: goto L_08B0CD4C;
    case 175u: goto L_08B0CD54;
    case 176u: goto L_08B0CD60;
    case 177u: goto L_08B0CD70;
    case 178u: goto L_08B0CD7C;
    case 179u: goto L_08B0CD8C;
    case 180u: goto L_08B0CD98;
    case 181u: goto L_08B0CDA8;
    case 182u: goto L_08B0CDB0;
    case 183u: goto L_08B0CDB8;
    case 184u: goto L_08B0CDC4;
    case 185u: goto L_08B0CDCC;
    case 186u: goto L_08B0CDD4;
    case 187u: goto L_08B0CDE0;
    case 188u: goto L_08B0CDE4;
    case 189u: goto L_08B0CDFC;
    case 190u: goto L_08B0CE20;
    case 191u: goto L_08B0CE2C;
    case 192u: goto L_08B0CE34;
    case 193u: goto L_08B0CE40;
    case 194u: goto L_08B0CE4C;
    case 195u: goto L_08B0CE5C;
    case 196u: goto L_08B0CE74;
    case 197u: goto L_08B0CE7C;
    case 198u: goto L_08B0CE84;
    case 199u: goto L_08B0CE90;
    case 200u: goto L_08B0CE98;
    case 201u: goto L_08B0CEA4;
    case 202u: goto L_08B0CEAC;
    case 203u: goto L_08B0CEB4;
    case 204u: goto L_08B0CEBC;
    case 205u: goto L_08B0CEC8;
    case 206u: goto L_08B0CECC;
    case 207u: goto L_08B0CEE8;
    case 208u: goto L_08B0CF0C;
    case 209u: goto L_08B0CF18;
    case 210u: goto L_08B0CF20;
    case 211u: goto L_08B0CF2C;
    case 212u: goto L_08B0CF34;
    case 213u: goto L_08B0CF3C;
    case 214u: goto L_08B0CF44;
    case 215u: goto L_08B0CF78;
    case 216u: goto L_08B0CF84;
    case 217u: goto L_08B0CF8C;
    case 218u: goto L_08B0CF94;
    case 219u: goto L_08B0CF9C;
    case 220u: goto L_08B0CFA8;
    case 221u: goto L_08B0CFB4;
    case 222u: goto L_08B0CFE4;
    case 223u: goto L_08B0CFEC;
    case 224u: goto L_08B0CFF8;
    case 225u: goto L_08B0D010;
    case 226u: goto L_08B0D028;
    case 227u: goto L_08B0D040;
    case 228u: goto L_08B0D058;
    case 229u: goto L_08B0D05C;
    case 230u: goto L_08B0D074;
    case 231u: goto L_08B0D098;
    case 232u: goto L_08B0D0A4;
    case 233u: goto L_08B0D0AC;
    case 234u: goto L_08B0D0B8;
    case 235u: goto L_08B0D0C0;
    case 236u: goto L_08B0D0D0;
    case 237u: goto L_08B0D0D8;
    case 238u: goto L_08B0D0E0;
    case 239u: goto L_08B0D0EC;
    case 240u: goto L_08B0D0FC;
    case 241u: goto L_08B0D100;
    case 242u: goto L_08B0D118;
    case 243u: goto L_08B0D13C;
    case 244u: goto L_08B0D148;
    case 245u: goto L_08B0D150;
    case 246u: goto L_08B0D15C;
    case 247u: goto L_08B0D164;
    case 248u: goto L_08B0D174;
    case 249u: goto L_08B0D17C;
    case 250u: goto L_08B0D184;
    case 251u: goto L_08B0D190;
    case 252u: goto L_08B0D1A0;
    case 253u: goto L_08B0D1A4;
    case 254u: goto L_08B0D1BC;
    case 255u: goto L_08B0D1E0;
    case 256u: goto L_08B0D1EC;
    case 257u: goto L_08B0D1F4;
    case 258u: goto L_08B0D200;
    case 259u: goto L_08B0D208;
    case 260u: goto L_08B0D218;
    case 261u: goto L_08B0D220;
    case 262u: goto L_08B0D228;
    case 263u: goto L_08B0D234;
    case 264u: goto L_08B0D244;
    case 265u: goto L_08B0D248;
    case 266u: goto L_08B0D260;
    case 267u: goto L_08B0D27C;
    case 268u: goto L_08B0D288;
    case 269u: goto L_08B0D298;
    case 270u: goto L_08B0D2AC;
    case 271u: goto L_08B0D2B8;
    case 272u: goto L_08B0D2D4;
    case 273u: goto L_08B0D2D8;
    case 274u: goto L_08B0D2F0;
    case 275u: goto L_08B0D304;
    case 276u: goto L_08B0D30C;
    case 277u: goto L_08B0D310;
    case 278u: goto L_08B0D31C;
    case 279u: goto L_08B0D32C;
    case 280u: goto L_08B0D350;
    case 281u: goto L_08B0D35C;
    case 282u: goto L_08B0D364;
    case 283u: goto L_08B0D370;
    case 284u: goto L_08B0D378;
    case 285u: goto L_08B0D384;
    case 286u: goto L_08B0D38C;
    case 287u: goto L_08B0D394;
    case 288u: goto L_08B0D3A0;
    case 289u: goto L_08B0D3AC;
    case 290u: goto L_08B0D3B0;
    case 291u: goto L_08B0D3C8;
    case 292u: goto L_08B0D3EC;
    case 293u: goto L_08B0D3F8;
    case 294u: goto L_08B0D400;
    case 295u: goto L_08B0D40C;
    case 296u: goto L_08B0D414;
    case 297u: goto L_08B0D424;
    case 298u: goto L_08B0D42C;
    case 299u: goto L_08B0D434;
    case 300u: goto L_08B0D440;
    case 301u: goto L_08B0D450;
    case 302u: goto L_08B0D454;
    case 303u: goto L_08B0D46C;
    case 304u: goto L_08B0D498;
    case 305u: goto L_08B0D4A4;
    case 306u: goto L_08B0D4CC;
    case 307u: goto L_08B0D4D4;
    case 308u: goto L_08B0D4E0;
    case 309u: goto L_08B0D4F0;
    case 310u: goto L_08B0D4FC;
    case 311u: goto L_08B0D50C;
    case 312u: goto L_08B0D514;
    case 313u: goto L_08B0D520;
    case 314u: goto L_08B0D528;
    case 315u: goto L_08B0D530;
    case 316u: goto L_08B0D53C;
    case 317u: goto L_08B0D548;
    case 318u: goto L_08B0D550;
    case 319u: goto L_08B0D558;
    case 320u: goto L_08B0D564;
    case 321u: goto L_08B0D57C;
    case 322u: goto L_08B0D5A4;
    case 323u: goto L_08B0D5B8;
    case 324u: goto L_08B0D5C4;
    case 325u: goto L_08B0D5CC;
    case 326u: goto L_08B0D5D4;
    case 327u: goto L_08B0D5E0;
    case 328u: goto L_08B0D5EC;
    case 329u: goto L_08B0D5F8;
    case 330u: goto L_08B0D604;
    case 331u: goto L_08B0D610;
    case 332u: goto L_08B0D61C;
    case 333u: goto L_08B0D624;
    case 334u: goto L_08B0D630;
    case 335u: goto L_08B0D638;
    case 336u: goto L_08B0D640;
    case 337u: goto L_08B0D654;
    case 338u: goto L_08B0D66C;
    case 339u: goto L_08B0D670;
    case 340u: goto L_08B0D678;
    case 341u: goto L_08B0D680;
    case 342u: goto L_08B0D688;
    case 343u: goto L_08B0D6A8;
    case 344u: goto L_08B0D6B8;
    case 345u: goto L_08B0D6C0;
    case 346u: goto L_08B0D6D0;
    case 347u: goto L_08B0D6D4;
    case 348u: goto L_08B0D6E8;
    case 349u: goto L_08B0D708;
    case 350u: goto L_08B0D718;
    case 351u: goto L_08B0D720;
    case 352u: goto L_08B0D734;
    case 353u: goto L_08B0D738;
    case 354u: goto L_08B0D74C;
    case 355u: goto L_08B0D76C;
    case 356u: goto L_08B0D77C;
    case 357u: goto L_08B0D784;
    case 358u: goto L_08B0D798;
    case 359u: goto L_08B0D79C;
    case 360u: goto L_08B0D7B0;
    case 361u: goto L_08B0D7D0;
    case 362u: goto L_08B0D7E0;
    case 363u: goto L_08B0D7E8;
    case 364u: goto L_08B0D7FC;
    case 365u: goto L_08B0D800;
    case 366u: goto L_08B0D814;
    case 367u: goto L_08B0D81C;
    case 368u: goto L_08B0D834;
    case 369u: goto L_08B0D838;
    case 370u: goto L_08B0D850;
    case 371u: goto L_08B0D85C;
    case 372u: goto L_08B0D88C;
    case 373u: goto L_08B0D8A4;
    case 374u: goto L_08B0D8D4;
    case 375u: goto L_08B0D8EC;
    case 376u: goto L_08B0D8F8;
    case 377u: goto L_08B0D904;
    case 378u: goto L_08B0D91C;
    case 379u: goto L_08B0D924;
    case 380u: goto L_08B0D92C;
    case 381u: goto L_08B0D938;
    case 382u: goto L_08B0D940;
    case 383u: goto L_08B0D94C;
    case 384u: goto L_08B0D958;
    case 385u: goto L_08B0D964;
    case 386u: goto L_08B0D968;
    case 387u: goto L_08B0D970;
    case 388u: goto L_08B0D978;
    case 389u: goto L_08B0D9B4;
    case 390u: goto L_08B0D9D8;
    case 391u: goto L_08B0D9E8;
    case 392u: goto L_08B0D9FC;
    case 393u: goto L_08B0DA08;
    case 394u: goto L_08B0DA10;
    case 395u: goto L_08B0DA18;
    case 396u: goto L_08B0DA20;
    case 397u: goto L_08B0DA28;
    case 398u: goto L_08B0DA30;
    case 399u: goto L_08B0DA3C;
    case 400u: goto L_08B0DA44;
    case 401u: goto L_08B0DA58;
    case 402u: goto L_08B0DA64;
    case 403u: goto L_08B0DA70;
    case 404u: goto L_08B0DA78;
    case 405u: goto L_08B0DA84;
    case 406u: goto L_08B0DA8C;
    case 407u: goto L_08B0DA9C;
    case 408u: goto L_08B0DAA4;
    case 409u: goto L_08B0DAA8;
    case 410u: goto L_08B0DAB8;
    case 411u: goto L_08B0DAC4;
    case 412u: goto L_08B0DACC;
    case 413u: goto L_08B0DAD4;
    case 414u: goto L_08B0DAE0;
    case 415u: goto L_08B0DAEC;
    case 416u: goto L_08B0DAF4;
    case 417u: goto L_08B0DAF8;
    case 418u: goto L_08B0DB1C;
    case 419u: goto L_08B0DB54;
    case 420u: goto L_08B0DB74;
    case 421u: goto L_08B0DB90;
    case 422u: goto L_08B0DBB0;
    case 423u: goto L_08B0DBB8;
    case 424u: goto L_08B0DBD8;
    case 425u: goto L_08B0DBDC;
    case 426u: goto L_08B0DBE8;
    case 427u: goto L_08B0DBF4;
    case 428u: goto L_08B0DC0C;
    case 429u: goto L_08B0DC20;
    case 430u: goto L_08B0DC34;
    case 431u: goto L_08B0DC44;
    case 432u: goto L_08B0DC54;
    case 433u: goto L_08B0DC60;
    case 434u: goto L_08B0DC74;
    case 435u: goto L_08B0DC7C;
    case 436u: goto L_08B0DC90;
    case 437u: goto L_08B0DCA0;
    case 438u: goto L_08B0DCB0;
    case 439u: goto L_08B0DCB8;
    case 440u: goto L_08B0DCC4;
    case 441u: goto L_08B0DCCC;
    case 442u: goto L_08B0DCDC;
    case 443u: goto L_08B0DCE4;
    case 444u: goto L_08B0DCEC;
    case 445u: goto L_08B0DCF4;
    case 446u: goto L_08B0DD18;
    case 447u: goto L_08B0DD20;
    case 448u: goto L_08B0DD28;
    case 449u: goto L_08B0DD38;
    case 450u: goto L_08B0DD44;
    case 451u: goto L_08B0DD68;
    case 452u: goto L_08B0DD78;
    case 453u: goto L_08B0DDA0;
    case 454u: goto L_08B0DDB0;
    case 455u: goto L_08B0DDD0;
    case 456u: goto L_08B0DDE0;
    case 457u: goto L_08B0DDF0;
    case 458u: goto L_08B0DDF8;
    case 459u: goto L_08B0DE44;
    case 460u: goto L_08B0DE4C;
    case 461u: goto L_08B0DE58;
    case 462u: goto L_08B0DE60;
    case 463u: goto L_08B0DE64;
    case 464u: goto L_08B0DEA0;
    case 465u: goto L_08B0DEBC;
    case 466u: goto L_08B0DF10;
    case 467u: goto L_08B0DF34;
    case 468u: goto L_08B0DF4C;
    case 469u: goto L_08B0DF54;
    case 470u: goto L_08B0DF5C;
    case 471u: goto L_08B0DF64;
    case 472u: goto L_08B0DF6C;
    case 473u: goto L_08B0DF74;
    case 474u: goto L_08B0DF7C;
    case 475u: goto L_08B0DF84;
    case 476u: goto L_08B0DF8C;
    case 477u: goto L_08B0DF94;
    case 478u: goto L_08B0DF9C;
    case 479u: goto L_08B0DFA4;
    case 480u: goto L_08B0DFAC;
    case 481u: goto L_08B0DFB4;
    case 482u: goto L_08B0DFC4;
    case 483u: goto L_08B0DFD0;
    case 484u: goto L_08B0DFD8;
    case 485u: goto L_08B0DFE0;
    case 486u: goto L_08B0DFEC;
    case 487u: goto L_08B0DFF8;
    case 488u: goto L_08B0E004;
    case 489u: goto L_08B0E00C;
    case 490u: goto L_08B0E014;
    case 491u: goto L_08B0E030;
    case 492u: goto L_08B0E054;
    case 493u: goto L_08B0E064;
    case 494u: goto L_08B0E068;
    case 495u: goto L_08B0E078;
    case 496u: goto L_08B0E08C;
    case 497u: goto L_08B0E0A0;
    case 498u: goto L_08B0E0AC;
    case 499u: goto L_08B0E0BC;
    case 500u: goto L_08B0E0D0;
    case 501u: goto L_08B0E0DC;
    case 502u: goto L_08B0E0EC;
    case 503u: goto L_08B0E11C;
    case 504u: goto L_08B0E128;
    case 505u: goto L_08B0E138;
    case 506u: goto L_08B0E140;
    case 507u: goto L_08B0E148;
    case 508u: goto L_08B0E150;
    case 509u: goto L_08B0E158;
    case 510u: goto L_08B0E160;
    case 511u: goto L_08B0E168;
    case 512u: goto L_08B0E170;
    case 513u: goto L_08B0E17C;
    case 514u: goto L_08B0E184;
    case 515u: goto L_08B0E198;
    case 516u: goto L_08B0E1A0;
    case 517u: goto L_08B0E1AC;
    case 518u: goto L_08B0E1B4;
    case 519u: goto L_08B0E1C8;
    case 520u: goto L_08B0E1D8;
    case 521u: goto L_08B0E1E8;
    case 522u: goto L_08B0E1F0;
    case 523u: goto L_08B0E204;
    case 524u: goto L_08B0E230;
    case 525u: goto L_08B0E244;
    case 526u: goto L_08B0E268;
    case 527u: goto L_08B0E298;
    case 528u: goto L_08B0E2A0;
    case 529u: goto L_08B0E2A8;
    case 530u: goto L_08B0E2B4;
    case 531u: goto L_08B0E2C4;
    case 532u: goto L_08B0E2CC;
    case 533u: goto L_08B0E2D4;
    case 534u: goto L_08B0E2DC;
    case 535u: goto L_08B0E2E4;
    case 536u: goto L_08B0E2EC;
    case 537u: goto L_08B0E2F4;
    case 538u: goto L_08B0E2FC;
    case 539u: goto L_08B0E308;
    case 540u: goto L_08B0E310;
    case 541u: goto L_08B0E324;
    case 542u: goto L_08B0E32C;
    case 543u: goto L_08B0E338;
    case 544u: goto L_08B0E340;
    case 545u: goto L_08B0E354;
    case 546u: goto L_08B0E364;
    case 547u: goto L_08B0E370;
    case 548u: goto L_08B0E378;
    case 549u: goto L_08B0E38C;
    case 550u: goto L_08B0E3B8;
    case 551u: goto L_08B0E3CC;
    case 552u: goto L_08B0E3F0;
    case 553u: goto L_08B0E410;
    case 554u: goto L_08B0E438;
    case 555u: goto L_08B0E454;
    case 556u: goto L_08B0E494;
    case 557u: goto L_08B0E4AC;
    case 558u: goto L_08B0E4B4;
    case 559u: goto L_08B0E4C8;
    case 560u: goto L_08B0E4D0;
    case 561u: goto L_08B0E4D8;
    case 562u: goto L_08B0E4E0;
    case 563u: goto L_08B0E4F4;
    case 564u: goto L_08B0E4FC;
    case 565u: goto L_08B0E504;
    case 566u: goto L_08B0E50C;
    case 567u: goto L_08B0E520;
    case 568u: goto L_08B0E528;
    case 569u: goto L_08B0E530;
    case 570u: goto L_08B0E538;
    case 571u: goto L_08B0E54C;
    case 572u: goto L_08B0E554;
    case 573u: goto L_08B0E55C;
    case 574u: goto L_08B0E560;
    case 575u: goto L_08B0E56C;
    case 576u: goto L_08B0E5A8;
    case 577u: goto L_08B0E5B0;
    case 578u: goto L_08B0E5B8;
    case 579u: goto L_08B0E5C0;
    case 580u: goto L_08B0E5C8;
    case 581u: goto L_08B0E5D0;
    case 582u: goto L_08B0E5D8;
    case 583u: goto L_08B0E5DC;
    case 584u: goto L_08B0E5E4;
    case 585u: goto L_08B0E604;
    case 586u: goto L_08B0E614;
    case 587u: goto L_08B0E620;
    case 588u: goto L_08B0E62C;
    case 589u: goto L_08B0E634;
    case 590u: goto L_08B0E638;
    case 591u: goto L_08B0E66C;
    case 592u: goto L_08B0E684;
    case 593u: goto L_08B0E698;
    case 594u: goto L_08B0E6B0;
    case 595u: goto L_08B0E6B8;
    case 596u: goto L_08B0E6C0;
    case 597u: goto L_08B0E6E8;
    case 598u: goto L_08B0E710;
    case 599u: goto L_08B0E738;
    case 600u: goto L_08B0E760;
    case 601u: goto L_08B0E764;
    case 602u: goto L_08B0E778;
    case 603u: goto L_08B0E7C8;
    case 604u: goto L_08B0E7D4;
    case 605u: goto L_08B0E804;
    case 606u: goto L_08B0E80C;
    case 607u: goto L_08B0E824;
    case 608u: goto L_08B0E830;
    case 609u: goto L_08B0E848;
    case 610u: goto L_08B0E854;
    case 611u: goto L_08B0E860;
    case 612u: goto L_08B0E878;
    case 613u: goto L_08B0E884;
    case 614u: goto L_08B0E89C;
    case 615u: goto L_08B0E8A8;
    case 616u: goto L_08B0E8B0;
    case 617u: goto L_08B0E8B8;
    case 618u: goto L_08B0E8E4;
    case 619u: goto L_08B0E8F0;
    case 620u: goto L_08B0E924;
    case 621u: goto L_08B0E92C;
    case 622u: goto L_08B0E944;
    case 623u: goto L_08B0E950;
    case 624u: goto L_08B0E968;
    case 625u: goto L_08B0E974;
    case 626u: goto L_08B0E980;
    case 627u: goto L_08B0E998;
    case 628u: goto L_08B0E9A4;
    case 629u: goto L_08B0E9BC;
    case 630u: goto L_08B0E9C8;
    case 631u: goto L_08B0E9D0;
    case 632u: goto L_08B0E9D8;
    case 633u: goto L_08B0E9E0;
    case 634u: goto L_08B0E9E8;
    case 635u: goto L_08B0EA1C;
    case 636u: goto L_08B0EA28;
    case 637u: goto L_08B0EA6C;
    case 638u: goto L_08B0EA80;
    case 639u: goto L_08B0EA8C;
    case 640u: goto L_08B0EAA4;
    case 641u: goto L_08B0EADC;
    case 642u: goto L_08B0EAF4;
    case 643u: goto L_08B0EB00;
    case 644u: goto L_08B0EB0C;
    case 645u: goto L_08B0EB18;
    case 646u: goto L_08B0EB24;
    case 647u: goto L_08B0EB30;
    case 648u: goto L_08B0EB3C;
    case 649u: goto L_08B0EB44;
    case 650u: goto L_08B0EB4C;
    case 651u: goto L_08B0EB88;
    case 652u: goto L_08B0EB90;
    case 653u: goto L_08B0EBA4;
    case 654u: goto L_08B0EBAC;
    case 655u: goto L_08B0EBC0;
    case 656u: goto L_08B0EBC8;
    case 657u: goto L_08B0EBCC;
    case 658u: goto L_08B0EBDC;
    case 659u: goto L_08B0EC14;
    case 660u: goto L_08B0EC24;
    case 661u: goto L_08B0EC34;
    case 662u: goto L_08B0EC44;
    case 663u: goto L_08B0EC54;
    case 664u: goto L_08B0EC5C;
    case 665u: goto L_08B0EC68;
    case 666u: goto L_08B0EC80;
    case 667u: goto L_08B0EC98;
    case 668u: goto L_08B0ECA0;
    case 669u: goto L_08B0ECC4;
    case 670u: goto L_08B0ECFC;
    case 671u: goto L_08B0ED04;
    case 672u: goto L_08B0ED18;
    case 673u: goto L_08B0ED2C;
    case 674u: goto L_08B0ED44;
    case 675u: goto L_08B0ED4C;
    case 676u: goto L_08B0ED64;
    case 677u: goto L_08B0ED7C;
    case 678u: goto L_08B0ED90;
    case 679u: goto L_08B0EDB0;
    case 680u: goto L_08B0EDC0;
    case 681u: goto L_08B0EDD8;
    case 682u: goto L_08B0EDE8;
    case 683u: goto L_08B0EDF0;
    case 684u: goto L_08B0EDFC;
    case 685u: goto L_08B0EE04;
    case 686u: goto L_08B0EE0C;
    case 687u: goto L_08B0EE14;
    case 688u: goto L_08B0EE2C;
    case 689u: goto L_08B0EE44;
    case 690u: goto L_08B0EE58;
    case 691u: goto L_08B0EE78;
    case 692u: goto L_08B0EE88;
    case 693u: goto L_08B0EEA0;
    case 694u: goto L_08B0EEAC;
    case 695u: goto L_08B0EEBC;
    case 696u: goto L_08B0EEC4;
    case 697u: goto L_08B0EEE0;
    case 698u: goto L_08B0EEE8;
    case 699u: goto L_08B0EEF0;
    case 700u: goto L_08B0EEF8;
    case 701u: goto L_08B0EF00;
    case 702u: goto L_08B0EF0C;
    case 703u: goto L_08B0EF14;
    case 704u: goto L_08B0EF24;
    case 705u: goto L_08B0EF34;
    case 706u: goto L_08B0EF3C;
    case 707u: goto L_08B0EF70;
    case 708u: goto L_08B0EF88;
    case 709u: goto L_08B0EF9C;
    case 710u: goto L_08B0EFA4;
    case 711u: goto L_08B0EFAC;
    case 712u: goto L_08B0EFB4;
    case 713u: goto L_08B0EFE8;
    case 714u: goto L_08B0F01C;
    case 715u: goto L_08B0F020;
    case 716u: goto L_08B0F028;
    case 717u: goto L_08B0F030;
    case 718u: goto L_08B0F038;
    case 719u: goto L_08B0F040;
    case 720u: goto L_08B0F048;
    case 721u: goto L_08B0F050;
    case 722u: goto L_08B0F084;
    case 723u: goto L_08B0F094;
    case 724u: goto L_08B0F098;
    case 725u: goto L_08B0F0A4;
    case 726u: goto L_08B0F0B4;
    case 727u: goto L_08B0F0D0;
    case 728u: goto L_08B0F0D4;
    case 729u: goto L_08B0F0E8;
    case 730u: goto L_08B0F0F0;
    case 731u: goto L_08B0F104;
    case 732u: goto L_08B0F114;
    case 733u: goto L_08B0F124;
    case 734u: goto L_08B0F134;
    case 735u: goto L_08B0F13C;
    case 736u: goto L_08B0F144;
    case 737u: goto L_08B0F14C;
    case 738u: goto L_08B0F154;
    case 739u: goto L_08B0F16C;
    case 740u: goto L_08B0F184;
    case 741u: goto L_08B0F198;
    case 742u: goto L_08B0F1B8;
    case 743u: goto L_08B0F1C8;
    case 744u: goto L_08B0F1E0;
    case 745u: goto L_08B0F1F0;
    case 746u: goto L_08B0F1F8;
    case 747u: goto L_08B0F204;
    case 748u: goto L_08B0F20C;
    case 749u: goto L_08B0F214;
    case 750u: goto L_08B0F21C;
    case 751u: goto L_08B0F234;
    case 752u: goto L_08B0F24C;
    case 753u: goto L_08B0F260;
    case 754u: goto L_08B0F280;
    case 755u: goto L_08B0F290;
    case 756u: goto L_08B0F2A8;
    case 757u: goto L_08B0F2B4;
    case 758u: goto L_08B0F2C4;
    case 759u: goto L_08B0F2CC;
    case 760u: goto L_08B0F2E8;
    case 761u: goto L_08B0F2F0;
    case 762u: goto L_08B0F2F8;
    case 763u: goto L_08B0F300;
    case 764u: goto L_08B0F308;
    case 765u: goto L_08B0F33C;
    case 766u: goto L_08B0F370;
    case 767u: goto L_08B0F374;
    case 768u: goto L_08B0F37C;
    case 769u: goto L_08B0F384;
    case 770u: goto L_08B0F38C;
    case 771u: goto L_08B0F394;
    case 772u: goto L_08B0F39C;
    case 773u: goto L_08B0F3A4;
    case 774u: goto L_08B0F3D8;
    case 775u: goto L_08B0F3E8;
    case 776u: goto L_08B0F3EC;
    case 777u: goto L_08B0F3F8;
    case 778u: goto L_08B0F408;
    case 779u: goto L_08B0F424;
    case 780u: goto L_08B0F428;
    case 781u: goto L_08B0F43C;
    case 782u: goto L_08B0F444;
    case 783u: goto L_08B0F458;
    case 784u: goto L_08B0F468;
    case 785u: goto L_08B0F478;
    case 786u: goto L_08B0F488;
    case 787u: goto L_08B0F490;
    case 788u: goto L_08B0F498;
    case 789u: goto L_08B0F4A0;
    case 790u: goto L_08B0F4E8;
    case 791u: goto L_08B0F500;
    case 792u: goto L_08B0F508;
    case 793u: goto L_08B0F510;
    case 794u: goto L_08B0F558;
    case 795u: goto L_08B0F570;
    case 796u: goto L_08B0F578;
    case 797u: goto L_08B0F580;
    case 798u: goto L_08B0F5BC;
    case 799u: goto L_08B0F5CC;
    case 800u: goto L_08B0F5E4;
    case 801u: goto L_08B0F5EC;
    case 802u: goto L_08B0F604;
    case 803u: goto L_08B0F624;
    case 804u: goto L_08B0F62C;
    case 805u: goto L_08B0F640;
    case 806u: goto L_08B0F664;
    case 807u: goto L_08B0F67C;
    case 808u: goto L_08B0F68C;
    case 809u: goto L_08B0F6B0;
    case 810u: goto L_08B0F6B8;
    case 811u: goto L_08B0F6C4;
    case 812u: goto L_08B0F6CC;
    case 813u: goto L_08B0F6D4;
    case 814u: goto L_08B0F718;
    case 815u: goto L_08B0F738;
    case 816u: goto L_08B0F740;
    case 817u: goto L_08B0F754;
    case 818u: goto L_08B0F778;
    case 819u: goto L_08B0F790;
    case 820u: goto L_08B0F7A0;
    case 821u: goto L_08B0F7C4;
    case 822u: goto L_08B0F7CC;
    case 823u: goto L_08B0F7D8;
    case 824u: goto L_08B0F7E0;
    case 825u: goto L_08B0F7E8;
    case 826u: goto L_08B0F81C;
    case 827u: goto L_08B0F82C;
    case 828u: goto L_08B0F858;
    case 829u: goto L_08B0F860;
    case 830u: goto L_08B0F868;
    case 831u: goto L_08B0F874;
    case 832u: goto L_08B0F87C;
    case 833u: goto L_08B0F8AC;
    case 834u: goto L_08B0F8C8;
    case 835u: goto L_08B0F8D0;
    case 836u: goto L_08B0F8E0;
    case 837u: goto L_08B0F90C;
    case 838u: goto L_08B0F914;
    case 839u: goto L_08B0F91C;
    case 840u: goto L_08B0F928;
    case 841u: goto L_08B0F930;
    case 842u: goto L_08B0F960;
    case 843u: goto L_08B0F97C;
    case 844u: goto L_08B0F984;
    case 845u: goto L_08B0F990;
    case 846u: goto L_08B0F9E8;
    case 847u: goto L_08B0F9F8;
    case 848u: goto L_08B0FA10;
    case 849u: goto L_08B0FA1C;
    case 850u: goto L_08B0FA24;
    case 851u: goto L_08B0FA2C;
    case 852u: goto L_08B0FA38;
    case 853u: goto L_08B0FA40;
    case 854u: goto L_08B0FA98;
    case 855u: goto L_08B0FAA8;
    case 856u: goto L_08B0FAC0;
    case 857u: goto L_08B0FAD0;
    case 858u: goto L_08B0FAD8;
    case 859u: goto L_08B0FAE4;
    case 860u: goto L_08B0FAEC;
    case 861u: goto L_08B0FB20;
    case 862u: goto L_08B0FB38;
    case 863u: goto L_08B0FB40;
    case 864u: goto L_08B0FB48;
    case 865u: goto L_08B0FB54;
    case 866u: goto L_08B0FBAC;
    case 867u: goto L_08B0FBBC;
    case 868u: goto L_08B0FBD4;
    case 869u: goto L_08B0FBE4;
    case 870u: goto L_08B0FBEC;
    case 871u: goto L_08B0FBFC;
    case 872u: goto L_08B0FC04;
    case 873u: goto L_08B0FC0C;
    case 874u: goto L_08B0FC18;
    case 875u: goto L_08B0FC70;
    case 876u: goto L_08B0FC80;
    case 877u: goto L_08B0FC98;
    case 878u: goto L_08B0FCBC;
    case 879u: goto L_08B0FCC4;
    case 880u: goto L_08B0FCCC;
    case 881u: goto L_08B0FCD4;
    case 882u: goto L_08B0FD18;
    case 883u: goto L_08B0FD20;
    case 884u: goto L_08B0FD28;
    case 885u: goto L_08B0FD30;
    case 886u: goto L_08B0FD38;
    case 887u: goto L_08B0FD50;
    case 888u: goto L_08B0FD68;
    case 889u: goto L_08B0FD7C;
    case 890u: goto L_08B0FDAC;
    case 891u: goto L_08B0FDB4;
    case 892u: goto L_08B0FDC4;
    case 893u: goto L_08B0FDDC;
    case 894u: goto L_08B0FDE4;
    case 895u: goto L_08B0FDF4;
    case 896u: goto L_08B0FE04;
    case 897u: goto L_08B0FE0C;
    case 898u: goto L_08B0FE18;
    case 899u: goto L_08B0FE20;
    case 900u: goto L_08B0FE30;
    case 901u: goto L_08B0FE38;
    case 902u: goto L_08B0FE40;
    case 903u: goto L_08B0FE48;
    case 904u: goto L_08B0FE58;
    case 905u: goto L_08B0FE60;
    case 906u: goto L_08B0FE6C;
    case 907u: goto L_08B0FE84;
    case 908u: goto L_08B0FEBC;
    case 909u: goto L_08B0FECC;
    case 910u: goto L_08B0FED4;
    case 911u: goto L_08B0FEDC;
    case 912u: goto L_08B0FEE8;
    case 913u: goto L_08B0FF10;
    case 914u: goto L_08B0FF18;
    case 915u: goto L_08B0FF20;
    case 916u: goto L_08B0FF28;
    case 917u: goto L_08B0FF38;
    case 918u: goto L_08B0FF40;
    case 919u: goto L_08B0FF48;
    case 920u: goto L_08B0FF50;
    case 921u: goto L_08B0FF60;
    case 922u: goto L_08B0FF68;
    case 923u: goto L_08B0FF74;
    case 924u: goto L_08B0FF7C;
    case 925u: goto L_08B0FF84;
    case 926u: goto L_08B0FF8C;
    case 927u: goto L_08B0FFB0;
    case 928u: goto L_08B0FFC8;
    case 929u: goto L_08B0FFD0;
    case 930u: goto L_08B0FFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08B0C000:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_16 = (0u | 0u);
    goto L_08B0C008;
L_08B0C008:
    aot_gpr_31 = (0x08B0C010u);
    goto L_08B0C48C;
L_08B0C010:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0C048;
      }
      goto L_08B0C01C;
    }
L_08B0C01C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1968)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_31 = (0x08B0C02Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 742u, 0x0897385Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C02Cu) goto L_08B0C02C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C02C:
    aot_gpr_5 = (ctx.gpr[17] << 24u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    aot_gpr_31 = (0x08B0C03Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 292u, 0x08AFD948u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C03Cu) goto L_08B0C03C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C03C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B0C008;
      }
      goto L_08B0C048;
    }
L_08B0C048:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0C05C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_gpr_16 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    aot_gpr_31 = (0x08B0C084u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08B0C4A8;
L_08B0C084:
    aot_gpr_5 = (17391u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (17287u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B0C0A4u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, ctx.fpr[15]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C0A4u) goto L_08B0C0A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C0A4:
    aot_gpr_31 = (0x08B0C0ACu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_08B0C4D4;
L_08B0C0AC:
    aot_gpr_31 = (0x08B0C0B4u);
    aot_gpr_4 = (0u | 1u);
    goto L_08B0C510;
L_08B0C0B4:
    aot_gpr_4 = (16256u << 16u);
    aot_gpr_31 = (0x08B0C0C0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B0C520;
L_08B0C0C0:
    aot_gpr_31 = (0x08B0C0C8u);
    aot_gpr_4 = (0u | 1u);
    goto L_08B0C5C8;
L_08B0C0C8:
    aot_gpr_31 = (0x08B0C0D0u);
    aot_gpr_4 = (0u | 0u);
    goto L_08B0C604;
L_08B0C0D0:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_16));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_16));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B0C0F4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08B0C778;
L_08B0C0F4:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 128u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B0C120u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08B0C7E0;
L_08B0C120:
    aot_gpr_31 = (0x08B0C128u);
    aot_gpr_4 = (0u | 2u);
    goto L_08B0C848;
L_08B0C128:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_08B0C138:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x08B0C164u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_08B0C4CC;
L_08B0C164:
    aot_gpr_31 = (0x08B0C16Cu);
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    goto L_08B0C508;
L_08B0C16C:
    aot_gpr_31 = (0x08B0C174u);
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    goto L_08B0C518;
L_08B0C174:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B0C190u);
    ctx.gpr[9] = (aot_gpr_2 | 0u);
    goto L_08B0C1B0;
L_08B0C190:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08B0C1B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(29232));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(301)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.gpr[23] = (ctx.gpr[9] & 255u);
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B0C2C0;
      }
      goto L_08B0C204;
    }
L_08B0C204:
    aot_gpr_31 = (0x08B0C20Cu);
    goto L_08B0C4A0;
L_08B0C20C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1968)));
    aot_gpr_5 = (aot_gpr_2 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x08B0C220u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B0C554;
L_08B0C220:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0C22Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 15u, 0x08974134u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C22Cu) goto L_08B0C22C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C22C:
    aot_gpr_31 = (0x08B0C234u);
    goto L_08B0C5FC;
L_08B0C234:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0C240u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 17u, 0x08974144u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C240u) goto L_08B0C240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C240:
    aot_gpr_31 = (0x08B0C248u);
    goto L_08B0C638;
L_08B0C248:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0C254u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 19u, 0x08974154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C254u) goto L_08B0C254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C254:
    aot_gpr_31 = (0x08B0C25Cu);
    goto L_08B0C7D0;
L_08B0C25C:
    aot_gpr_31 = (0x08B0C264u);
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    goto L_08B0C7D8;
L_08B0C264:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B0C274u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 130u, 0x089748D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C274u) goto L_08B0C274;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C274:
    aot_gpr_31 = (0x08B0C27Cu);
    goto L_08B0C838;
L_08B0C27C:
    aot_gpr_31 = (0x08B0C284u);
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    goto L_08B0C840;
L_08B0C284:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B0C294u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 133u, 0x08974914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C294u) goto L_08B0C294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C294:
    aot_gpr_31 = (0x08B0C29Cu);
    goto L_08B0C87C;
L_08B0C29C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0C2A8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 136u, 0x08974950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C2A8u) goto L_08B0C2A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C2A8:
    aot_gpr_31 = (0x08B0C2B0u);
    goto L_08B0C4A0;
L_08B0C2B0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0C2DC;
      }
      goto L_08B0C2B8;
    }
L_08B0C2B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0C2C8;
      }
      goto L_08B0C2C0;
    }
L_08B0C2C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0C45C;
      }
      goto L_08B0C2C8;
    }
L_08B0C2C8:
    aot_gpr_31 = (0x08B0C2D0u);
    goto L_08B0C4A0;
L_08B0C2D0:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08B0C3E4;
      }
      goto L_08B0C2DC;
    }
L_08B0C2DC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[30] + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08B0C308u);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    goto L_08B0C4A0;
L_08B0C308:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08B0C360;
      }
      goto L_08B0C310;
    }
L_08B0C310:
    aot_gpr_31 = (0x08B0C318u);
    goto L_08B0C554;
L_08B0C318:
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[22]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[21]);
    aot_fpr_12 = aot_fpr_13 + ctx.fpr[17];
    aot_fpr_13 = aot_fpr_14 + ctx.fpr[17];
    aot_fpr_14 = ctx.fpr[15] + ctx.fpr[17];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[17];
      if (branch_taken) {
          goto L_08B0C3AC;
      }
      goto L_08B0C360;
    }
L_08B0C360:
    aot_gpr_31 = (0x08B0C368u);
    goto L_08B0C554;
L_08B0C368:
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[22]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[21]);
    aot_fpr_12 = aot_fpr_13 + ctx.fpr[17];
    aot_fpr_13 = aot_fpr_14 + ctx.fpr[17];
    aot_fpr_14 = ctx.fpr[15] + ctx.fpr[17];
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[17];
    goto L_08B0C3AC;
L_08B0C3AC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x08B0C3BCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, ctx.fpr[15]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C3BCu) goto L_08B0C3BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C3BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08B0C3E0u);
    ctx.gpr[11] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 138u, 0x08974960u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C3E0u) goto L_08B0C3E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C3E0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    goto L_08B0C3E4;
L_08B0C3E4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08B0C408u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 138u, 0x08974960u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C408u) goto L_08B0C408;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C408:
    aot_gpr_4 = (0u | 255u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B0C430u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08B0C778;
L_08B0C430:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 128u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B0C45Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08B0C7E0;
L_08B0C45C:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
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
L_08B0C48C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1968)));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
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
L_08B0C498:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1972), aot_gpr_4);
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
L_08B0C4A0:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1972)));
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
L_08B0C4A8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10440), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10441), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10442), static_cast<std::uint8_t>(ctx.gpr[7]));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10443), static_cast<std::uint8_t>(aot_gpr_4));
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
L_08B0C4CC:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (ctx.gpr[28] + static_cast<std::uint32_t>(10440));
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
L_08B0C4D4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10448), aot_gpr_5);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10452), ctx.gpr[6]);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10456), aot_gpr_4);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10460), aot_gpr_5);
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
L_08B0C508:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (ctx.gpr[28] + static_cast<std::uint32_t>(10448));
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
L_08B0C510:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1976), static_cast<std::uint8_t>(aot_gpr_4));
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
L_08B0C518:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1976)));
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
L_08B0C520:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B0C530u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1980), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B0C4A0;
L_08B0C530:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1968)));
    aot_gpr_5 = (aot_gpr_2 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B0C548u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1980)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 15u, 0x08974134u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C548u) goto L_08B0C548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C548:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0C554:
    jump_target = aot_gpr_31;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1980)));
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
L_08B0C55C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B0C56Cu);
    goto L_08B0C748;
L_08B0C56C:
    aot_gpr_31 = (0x08B0C574u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 263u, 0x08AFD780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C574u) goto L_08B0C574;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C574:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0C580:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08B0C594u);
    goto L_08B0C554;
L_08B0C594:
    aot_gpr_31 = (0x08B0C59Cu);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B0C55C;
L_08B0C59C:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(aot_fpr_12));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0C5C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B0C5D8u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1984), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0C4A0;
L_08B0C5D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1968)));
    aot_gpr_5 = (aot_gpr_2 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B0C5F0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1984)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 17u, 0x08974144u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C5F0u) goto L_08B0C5F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C5F0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0C5FC:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1984)));
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
L_08B0C604:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B0C614u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1988), aot_gpr_4);
    goto L_08B0C4A0;
L_08B0C614:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1968)));
    aot_gpr_5 = (aot_gpr_2 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B0C62Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1988)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 19u, 0x08974154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C62Cu) goto L_08B0C62C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C62C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0C638:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1988)));
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
L_08B0C640:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1992), aot_gpr_4);
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
L_08B0C648:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1992)));
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
L_08B0C650:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1996), aot_gpr_4);
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
L_08B0C658:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1996)));
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
L_08B0C660:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x08B0C694u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    goto L_08B0C4A0;
L_08B0C694:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1968)));
    aot_gpr_5 = (aot_gpr_2 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0C6BCu);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 65u, 0x089743F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C6BCu) goto L_08B0C6BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C6BC:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08B0C6DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08B0C708u);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    goto L_08B0C4A0;
L_08B0C708:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1968)));
    aot_gpr_5 = (aot_gpr_2 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0C72Cu);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 110u, 0x089746F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C72Cu) goto L_08B0C72C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C72C:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_08B0C748:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B0C758u);
    goto L_08B0C4A0;
L_08B0C758:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1968)));
    aot_gpr_5 = (aot_gpr_2 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x08B0C76Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 742u, 0x0897385Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C76Cu) goto L_08B0C76C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C76C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0C778:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(2000), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10464), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10465), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10466), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B0C7A8u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10467), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0C4A0;
L_08B0C7A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1968)));
    aot_gpr_5 = (aot_gpr_2 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(2000)));
    aot_gpr_31 = (0x08B0C7C4u);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(10464));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 130u, 0x089748D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C7C4u) goto L_08B0C7C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C7C4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0C7D0:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(2000)));
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
L_08B0C7D8:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (ctx.gpr[28] + static_cast<std::uint32_t>(10464));
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
L_08B0C7E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(2001), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10468), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10469), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10470), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B0C810u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10471), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0C4A0;
L_08B0C810:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1968)));
    aot_gpr_5 = (aot_gpr_2 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(2001)));
    aot_gpr_31 = (0x08B0C82Cu);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(10468));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 133u, 0x08974914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C82Cu) goto L_08B0C82C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C82C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0C838:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(2001)));
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
L_08B0C840:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (ctx.gpr[28] + static_cast<std::uint32_t>(10468));
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
L_08B0C848:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B0C858u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(2004), aot_gpr_4);
    goto L_08B0C4A0;
L_08B0C858:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1968)));
    aot_gpr_5 = (aot_gpr_2 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B0C870u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2004)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 136u, 0x08974950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C870u) goto L_08B0C870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C870:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0C87C:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2004)));
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
L_08B0C884:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10440), static_cast<std::uint8_t>(aot_gpr_16));
    aot_gpr_5 = (17391u << 16u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10441), static_cast<std::uint8_t>(aot_gpr_16));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10442), static_cast<std::uint8_t>(aot_gpr_16));
    aot_gpr_5 = (17287u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10443), static_cast<std::uint8_t>(aot_gpr_16));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08B0C8C4u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(10448));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, ctx.fpr[15]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C8C4u) goto L_08B0C8C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C8C4:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10464), static_cast<std::uint8_t>(aot_gpr_16));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10465), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10466), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10467), static_cast<std::uint8_t>(aot_gpr_16));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10468), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10469), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 128u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10470), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10471), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0C90C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31, ctx.gpr[6]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08B0C960;
    }
    goto L_08B0C934;
L_08B0C934:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08B0C940u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C940u) goto L_08B0C940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C940:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    if (aot_gpr_16 == 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_08B0C95C;
    }
    goto L_08B0C94C;
L_08B0C94C:
    aot_gpr_31 = (0x08B0C954u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C954u) goto L_08B0C954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C954:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08B0C95C;
L_08B0C95C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08B0C960;
L_08B0C960:
    aot_gpr_31 = (0x08B0C968u);
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(11));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C968u) goto L_08B0C968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C968:
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(6), aot_gpr_5));
    ctx.gpr[6] = (aot_mem.aot_direct_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(7), ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_direct_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(10), ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08B0C98Cu);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 216u, 0x08AB9068u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C98Cu) goto L_08B0C98C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C98C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0C9A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-320));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(288), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B0C9CCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C9CCu) goto L_08B0C9CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C9CC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08B0C9E4u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C9E4u) goto L_08B0C9E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C9E4:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0C9F4u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0C9F4u) goto L_08B0C9F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0C9F4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0CA08u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CA08u) goto L_08B0CA08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CA08:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_16 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x08B0CA18u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CA18u) goto L_08B0CA18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CA18:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10472)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), ctx.gpr[20]);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), ctx.gpr[20]);
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(23), aot_gpr_16);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(26), aot_gpr_16);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(27));
    aot_gpr_31 = (0x08B0CA4Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CA4Cu) goto L_08B0CA4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CA4C:
    aot_gpr_16 = (2237u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0CA60u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 8u, 0x08ADC0B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CA60u) goto L_08B0CA60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CA60:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0CA80;
      }
      goto L_08B0CA68;
    }
L_08B0CA68:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(284), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(284))))));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08B0CA80u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B0C90C;
L_08B0CA80:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B0CA90u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 186u, 0x08ADC9FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CA90u) goto L_08B0CA90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CA90:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(288), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
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
L_08B0CAB4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(2148));
    aot_gpr_31 = (0x08B0CAC8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CAC8u) goto L_08B0CAC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CAC8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0CB00;
      }
      goto L_08B0CAD4;
    }
L_08B0CAD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[6] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B0CB00;
      }
      goto L_08B0CAE4;
    }
L_08B0CAE4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_31 = (0x08B0CAF8u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CAF8u) goto L_08B0CAF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CAF8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0CB04;
      }
      goto L_08B0CB00;
    }
L_08B0CB00:
    aot_gpr_2 = (0u | 0u);
    goto L_08B0CB04;
L_08B0CB04:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0CB10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08B0CB30u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 555u, 0x088079D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CB30u) goto L_08B0CB30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CB30:
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(2148));
    aot_gpr_31 = (0x08B0CB40u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 249u, 0x0889D344u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CB40u) goto L_08B0CB40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CB40:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0CB4Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 492u, 0x08807510u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CB4Cu) goto L_08B0CB4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CB4C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0CB60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[8]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (0u | 1u);
    aot_gpr_31 = (0x08B0CB94u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CB94u) goto L_08B0CB94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CB94:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0CBA8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CBA8u) goto L_08B0CBA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CBA8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0CBB8u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CBB8u) goto L_08B0CBB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CBB8:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08B0CBC8u);
    aot_gpr_4 = (0u | 112u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CBC8u) goto L_08B0CBC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CBC8:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B0CC04;
      }
      goto L_08B0CBD4;
    }
L_08B0CBD4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0CBE0u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CBE0u) goto L_08B0CBE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CBE0:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08B0CBFCu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 170u, 0x08965650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CBFCu) goto L_08B0CBFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CBFC:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0CC04;
L_08B0CC04:
    aot_gpr_31 = (0x08B0CC0Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08B0CB10;
L_08B0CC0C:
    aot_gpr_2 = (ctx.gpr[20] | 0u);
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_08B0CC38:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B0CC60u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B0CAB4;
L_08B0CC60:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08B0CCB0;
      }
      goto L_08B0CC6C;
    }
L_08B0CC6C:
    aot_gpr_31 = (0x08B0CC74u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CC74u) goto L_08B0CC74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CC74:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_08B0CCB8;
      }
      goto L_08B0CC80;
    }
L_08B0CC80:
    aot_gpr_31 = (0x08B0CC88u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 203u, 0x089659ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CC88u) goto L_08B0CC88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CC88:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B0CC94u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CC94u) goto L_08B0CC94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CC94:
    aot_gpr_31 = (0x08B0CC9Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 203u, 0x089659ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CC9Cu) goto L_08B0CC9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CC9C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B0CCA8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CCA8u) goto L_08B0CCA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CCA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B0CCFC;
      }
      goto L_08B0CCB0;
    }
L_08B0CCB0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B0CCFC;
      }
      goto L_08B0CCB8;
    }
L_08B0CCB8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0CCC4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CCC4u) goto L_08B0CCC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CCC4:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0CCD4u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CCD4u) goto L_08B0CCD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CCD4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0CCE4u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CCE4u) goto L_08B0CCE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CCE4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08B0CCF8u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 196u, 0x08965864u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CCF8u) goto L_08B0CCF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CCF8:
    aot_gpr_2 = (0u | 0u);
    goto L_08B0CCFC;
L_08B0CCFC:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_08B0CD1C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B0CD40u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B0CAB4;
L_08B0CD40:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B0CDCC;
      }
      goto L_08B0CD4C;
    }
L_08B0CD4C:
    aot_gpr_31 = (0x08B0CD54u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CD54u) goto L_08B0CD54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CD54:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0CDB0;
      }
      goto L_08B0CD60;
    }
L_08B0CD60:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08B0CD70u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CD70u) goto L_08B0CD70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CD70:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08B0CD7Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CD7Cu) goto L_08B0CD7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CD7C:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0CD8Cu);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CD8Cu) goto L_08B0CD8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CD8C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B0CD98u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 187u, 0x089657B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CD98u) goto L_08B0CD98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CD98:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_16 != aot_gpr_4;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08B0CDD4;
      }
      goto L_08B0CDA8;
    }
L_08B0CDA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0CDE0;
      }
      goto L_08B0CDB0;
    }
L_08B0CDB0:
    aot_gpr_31 = (0x08B0CDB8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 192u, 0x08965818u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CDB8u) goto L_08B0CDB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CDB8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B0CDC4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CDC4u) goto L_08B0CDC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CDC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B0CDE4;
      }
      goto L_08B0CDCC;
    }
L_08B0CDCC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B0CDE4;
      }
      goto L_08B0CDD4;
    }
L_08B0CDD4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    aot_gpr_31 = (0x08B0CDE0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CDE0u) goto L_08B0CDE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CDE0:
    aot_gpr_2 = (0u | 0u);
    goto L_08B0CDE4;
L_08B0CDE4:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_08B0CDFC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B0CE20u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B0CAB4;
L_08B0CE20:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08B0CEAC;
      }
      goto L_08B0CE2C;
    }
L_08B0CE2C:
    aot_gpr_31 = (0x08B0CE34u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CE34u) goto L_08B0CE34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CE34:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_08B0CE7C;
      }
      goto L_08B0CE40;
    }
L_08B0CE40:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0CE4Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CE4Cu) goto L_08B0CE4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CE4C:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0CE5Cu);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CE5Cu) goto L_08B0CE5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CE5C:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_14)) && aot_fpr_13 == aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08B0CEB4;
      }
      goto L_08B0CE74;
    }
L_08B0CE74:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B0CEBC;
      }
      goto L_08B0CE7C;
    }
L_08B0CE7C:
    aot_gpr_31 = (0x08B0CE84u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 211u, 0x08965AACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CE84u) goto L_08B0CE84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CE84:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B0CE90u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CE90u) goto L_08B0CE90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CE90:
    aot_gpr_31 = (0x08B0CE98u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 211u, 0x08965AACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CE98u) goto L_08B0CE98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CE98:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B0CEA4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CEA4u) goto L_08B0CEA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CEA4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B0CECC;
      }
      goto L_08B0CEAC;
    }
L_08B0CEAC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B0CECC;
      }
      goto L_08B0CEB4;
    }
L_08B0CEB4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B0CEBC;
L_08B0CEBC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B0CEC8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 207u, 0x08965A38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CEC8u) goto L_08B0CEC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CEC8:
    aot_gpr_2 = (0u | 0u);
    goto L_08B0CECC;
L_08B0CECC:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_08B0CEE8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B0CF0Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B0CAB4;
L_08B0CF0C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B0CF34;
      }
      goto L_08B0CF18;
    }
L_08B0CF18:
    aot_gpr_31 = (0x08B0CF20u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CF20u) goto L_08B0CF20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CF20:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0CF3C;
      }
      goto L_08B0CF2C;
    }
L_08B0CF2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0CF94;
      }
      goto L_08B0CF34;
    }
L_08B0CF34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B0D05C;
      }
      goto L_08B0CF3C;
    }
L_08B0CF3C:
    aot_gpr_31 = (0x08B0CF44u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 57u, 0x089E84ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CF44u) goto L_08B0CF44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CF44:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_5 = (aot_gpr_5 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08B0CF84;
      }
      goto L_08B0CF78;
    }
L_08B0CF78:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08B0CF84;
L_08B0CF84:
    aot_gpr_31 = (0x08B0CF8Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CF8Cu) goto L_08B0CF8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CF8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B0D05C;
      }
      goto L_08B0CF94;
    }
L_08B0CF94:
    aot_gpr_31 = (0x08B0CF9Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CF9Cu) goto L_08B0CF9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CF9C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0CFEC;
      }
      goto L_08B0CFA8;
    }
L_08B0CFA8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0CFB4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 355u, 0x08931D08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CFB4u) goto L_08B0CFB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CFB4:
    aot_gpr_4 = (aot_gpr_2 << 8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(255));
    aot_gpr_5 = (aot_gpr_4 >> 24u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 >> 16u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 >> 8u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B0CFE4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 53u, 0x089E8474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CFE4u) goto L_08B0CFE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CFE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0D058;
      }
      goto L_08B0CFEC;
    }
L_08B0CFEC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0CFF8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0CFF8u) goto L_08B0CFF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0CFF8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0D010u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D010u) goto L_08B0D010;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D010:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0D028u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D028u) goto L_08B0D028;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D028:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0D040u);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D040u) goto L_08B0D040;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D040:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08B0D058u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 53u, 0x089E8474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D058u) goto L_08B0D058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D058:
    aot_gpr_2 = (0u | 0u);
    goto L_08B0D05C;
L_08B0D05C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_08B0D074:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B0D098u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B0CAB4;
L_08B0D098:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B0D0D8;
      }
      goto L_08B0D0A4;
    }
L_08B0D0A4:
    aot_gpr_31 = (0x08B0D0ACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D0ACu) goto L_08B0D0AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D0AC:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0D0E0;
      }
      goto L_08B0D0B8;
    }
L_08B0D0B8:
    aot_gpr_31 = (0x08B0D0C0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 235u, 0x08965C98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D0C0u) goto L_08B0D0C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D0C0:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08B0D0D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D0D0u) goto L_08B0D0D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D0D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B0D100;
      }
      goto L_08B0D0D8;
    }
L_08B0D0D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B0D100;
      }
      goto L_08B0D0E0;
    }
L_08B0D0E0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0D0ECu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D0ECu) goto L_08B0D0EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D0EC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B0D0FCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 231u, 0x08965C40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D0FCu) goto L_08B0D0FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D0FC:
    aot_gpr_2 = (0u | 0u);
    goto L_08B0D100;
L_08B0D100:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0D118:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B0D13Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B0CAB4;
L_08B0D13C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B0D17C;
      }
      goto L_08B0D148;
    }
L_08B0D148:
    aot_gpr_31 = (0x08B0D150u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D150u) goto L_08B0D150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D150:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0D184;
      }
      goto L_08B0D15C;
    }
L_08B0D15C:
    aot_gpr_31 = (0x08B0D164u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 219u, 0x08965B50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D164u) goto L_08B0D164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D164:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08B0D174u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D174u) goto L_08B0D174;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D174:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B0D1A4;
      }
      goto L_08B0D17C;
    }
L_08B0D17C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B0D1A4;
      }
      goto L_08B0D184;
    }
L_08B0D184:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0D190u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D190u) goto L_08B0D190;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D190:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B0D1A0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 215u, 0x08965AF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D1A0u) goto L_08B0D1A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D1A0:
    aot_gpr_2 = (0u | 0u);
    goto L_08B0D1A4;
L_08B0D1A4:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0D1BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B0D1E0u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B0CAB4;
L_08B0D1E0:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B0D220;
      }
      goto L_08B0D1EC;
    }
L_08B0D1EC:
    aot_gpr_31 = (0x08B0D1F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D1F4u) goto L_08B0D1F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D1F4:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0D228;
      }
      goto L_08B0D200;
    }
L_08B0D200:
    aot_gpr_31 = (0x08B0D208u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 227u, 0x08965BF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D208u) goto L_08B0D208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D208:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08B0D218u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D218u) goto L_08B0D218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D218:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B0D248;
      }
      goto L_08B0D220;
    }
L_08B0D220:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B0D248;
      }
      goto L_08B0D228;
    }
L_08B0D228:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0D234u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D234u) goto L_08B0D234;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D234:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B0D244u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 223u, 0x08965B9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D244u) goto L_08B0D244;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D244:
    aot_gpr_2 = (0u | 0u);
    goto L_08B0D248;
L_08B0D248:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0D260:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(2148));
    aot_gpr_31 = (0x08B0D27Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D27Cu) goto L_08B0D27C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D27C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B0D2D8;
      }
      goto L_08B0D288;
    }
L_08B0D288:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_16;
    ctx.gpr[6] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B0D2D8;
      }
      goto L_08B0D298;
    }
L_08B0D298:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_31 = (0x08B0D2ACu);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D2ACu) goto L_08B0D2AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D2AC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0D2D4;
      }
      goto L_08B0D2B8;
    }
L_08B0D2B8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    aot_gpr_31 = (0x08B0D2D4u);
    aot_gpr_5 = (0u | 3u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D2D4u) goto L_08B0D2D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D2D4:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_16);
    goto L_08B0D2D8;
L_08B0D2D8:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0D2F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08B0D310;
    }
    goto L_08B0D304;
L_08B0D304:
    aot_gpr_31 = (0x08B0D30Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D30Cu) goto L_08B0D30C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D30C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08B0D310;
L_08B0D310:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08B0D31Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 468u, 0x089BA604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D31Cu) goto L_08B0D31C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D31C:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0D32C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B0D350u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B0CAB4;
L_08B0D350:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B0D38C;
      }
      goto L_08B0D35C;
    }
L_08B0D35C:
    aot_gpr_31 = (0x08B0D364u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D364u) goto L_08B0D364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D364:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0D394;
      }
      goto L_08B0D370;
    }
L_08B0D370:
    aot_gpr_31 = (0x08B0D378u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 65u, 0x089E8590u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D378u) goto L_08B0D378;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D378:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0D384u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D384u) goto L_08B0D384;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D384:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B0D3B0;
      }
      goto L_08B0D38C;
    }
L_08B0D38C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B0D3B0;
      }
      goto L_08B0D394;
    }
L_08B0D394:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0D3A0u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D3A0u) goto L_08B0D3A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D3A0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B0D3ACu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 61u, 0x089E8538u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D3ACu) goto L_08B0D3AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D3AC:
    aot_gpr_2 = (0u | 0u);
    goto L_08B0D3B0;
L_08B0D3B0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0D3C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B0D3ECu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B0CAB4;
L_08B0D3EC:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B0D42C;
      }
      goto L_08B0D3F8;
    }
L_08B0D3F8:
    aot_gpr_31 = (0x08B0D400u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D400u) goto L_08B0D400;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D400:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0D434;
      }
      goto L_08B0D40C;
    }
L_08B0D40C:
    aot_gpr_31 = (0x08B0D414u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 243u, 0x08965D3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D414u) goto L_08B0D414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D414:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08B0D424u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D424u) goto L_08B0D424;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D424:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B0D454;
      }
      goto L_08B0D42C;
    }
L_08B0D42C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B0D454;
      }
      goto L_08B0D434;
    }
L_08B0D434:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0D440u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D440u) goto L_08B0D440;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D440:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B0D450u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 239u, 0x08965CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D450u) goto L_08B0D450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D450:
    aot_gpr_2 = (0u | 0u);
    goto L_08B0D454;
L_08B0D454:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0D46C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[18] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10472))))));
    aot_gpr_16 = (0u | 0u);
    aot_gpr_31 = (0x08B0D498u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D498u) goto L_08B0D498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D498:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08B0D4CC;
      }
      goto L_08B0D4A4;
    }
L_08B0D4A4:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2225u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-14068));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_08B0D4CC;
L_08B0D4CC:
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
      if (branch_taken) {
          goto L_08B0D4E0;
      }
      goto L_08B0D4D4;
    }
L_08B0D4D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08B0D4E0;
L_08B0D4E0:
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B0D4F0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D4F0u) goto L_08B0D4F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D4F0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08B0D514;
      }
      goto L_08B0D4FC;
    }
L_08B0D4FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B0D514;
      }
      goto L_08B0D50C;
    }
L_08B0D50C:
    aot_gpr_31 = (0x08B0D514u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D514u) goto L_08B0D514;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D514:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (2232u << 16u);
      if (branch_taken) {
          goto L_08B0D530;
      }
      goto L_08B0D520;
    }
L_08B0D520:
    aot_gpr_31 = (0x08B0D528u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D528u) goto L_08B0D528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D528:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (2232u << 16u);
    goto L_08B0D530;
L_08B0D530:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(31272));
    aot_gpr_31 = (0x08B0D53Cu);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(2148));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 270u, 0x08885284u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D53Cu) goto L_08B0D53C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D53C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (2232u << 16u);
      if (branch_taken) {
          goto L_08B0D558;
      }
      goto L_08B0D548;
    }
L_08B0D548:
    aot_gpr_31 = (0x08B0D550u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D550u) goto L_08B0D550;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D550:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (2232u << 16u);
    goto L_08B0D558;
L_08B0D558:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(31368));
    aot_gpr_31 = (0x08B0D564u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0D564u) goto L_08B0D564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0D564:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
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
L_08B0D57C:
    aot_gpr_4 = (0u | 51u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10472), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(2160));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10472)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30144));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[6]);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
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
L_08B0D5A4:
    aot_gpr_4 = (0u | 254u);
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0D5E0;
      }
      goto L_08B0D5B8;
    }
L_08B0D5B8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B0D5CC;
      }
      goto L_08B0D5C4;
    }
L_08B0D5C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08B0D5D4;
      }
      goto L_08B0D5CC;
    }
L_08B0D5CC:
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08B0D5D4;
L_08B0D5D4:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-11));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0D670;
      }
      goto L_08B0D5E0;
    }
L_08B0D5E0:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0D630;
      }
      goto L_08B0D5EC;
    }
L_08B0D5EC:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B0D604;
      }
      goto L_08B0D5F8;
    }
L_08B0D5F8:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B0D624;
      }
      goto L_08B0D604;
    }
L_08B0D604:
    aot_gpr_4 = (0u | 6u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08B0D61C;
      }
      goto L_08B0D610;
    }
L_08B0D610:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B0D624;
      }
      goto L_08B0D61C;
    }
L_08B0D61C:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08B0D624;
L_08B0D624:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0D670;
      }
      goto L_08B0D630;
    }
L_08B0D630:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
      if (branch_taken) {
          goto L_08B0D654;
      }
      goto L_08B0D638;
    }
L_08B0D638:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
      if (branch_taken) {
          goto L_08B0D66C;
      }
      goto L_08B0D640;
    }
L_08B0D640:
    aot_gpr_4 = (0u | 6u);
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B0D670;
      }
      goto L_08B0D654;
    }
L_08B0D654:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B0D670;
      }
      goto L_08B0D66C;
    }
L_08B0D66C:
    aot_gpr_2 = (0u | 0u);
    goto L_08B0D670;
L_08B0D670:
    jump_target = aot_gpr_31;
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
L_08B0D678:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B0D680;
      }
      goto L_08B0D680;
    }
L_08B0D680:
    jump_target = aot_gpr_31;
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
L_08B0D688:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B0D6A8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08B0D940;
L_08B0D6A8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B0D6C0;
      }
      goto L_08B0D6B8;
    }
L_08B0D6B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B0D6D4;
      }
      goto L_08B0D6C0;
    }
L_08B0D6C0:
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0D6D0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08B0D904;
L_08B0D6D0:
    aot_gpr_2 = (0u | 1u);
    goto L_08B0D6D4;
L_08B0D6D4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0D6E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B0D708u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08B0D8D4;
L_08B0D708:
    aot_gpr_4 = (aot_gpr_2 & 255u);
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B0D720;
      }
      goto L_08B0D718;
    }
L_08B0D718:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B0D738;
      }
      goto L_08B0D720;
    }
L_08B0D720:
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0D734u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08B0D8A4;
L_08B0D734:
    aot_gpr_2 = (0u | 1u);
    goto L_08B0D738;
L_08B0D738:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0D74C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B0D76Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08B0D8F8;
L_08B0D76C:
    aot_gpr_4 = (aot_gpr_2 & 255u);
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B0D784;
      }
      goto L_08B0D77C;
    }
L_08B0D77C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B0D79C;
      }
      goto L_08B0D784;
    }
L_08B0D784:
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0D798u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08B0D8EC;
L_08B0D798:
    aot_gpr_2 = (0u | 1u);
    goto L_08B0D79C;
L_08B0D79C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0D7B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B0D7D0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08B0DB54;
L_08B0D7D0:
    aot_gpr_4 = (aot_gpr_2 & 255u);
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B0D7E8;
      }
      goto L_08B0D7E0;
    }
L_08B0D7E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B0D800;
      }
      goto L_08B0D7E8;
    }
L_08B0D7E8:
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0D7FCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08B0DB1C;
L_08B0D7FC:
    aot_gpr_2 = (0u | 1u);
    goto L_08B0D800;
L_08B0D800:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0D814:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    goto L_08B0D81C;
L_08B0D81C:
    ctx.gpr[6] = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
      if (branch_taken) {
          goto L_08B0D81C;
      }
      goto L_08B0D834;
    }
L_08B0D834:
    aot_gpr_5 = (0u | 0u);
    goto L_08B0D838;
L_08B0D838:
    ctx.gpr[6] = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
      if (branch_taken) {
          goto L_08B0D838;
      }
      goto L_08B0D850;
    }
L_08B0D850:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), 0u);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), 0u);
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
L_08B0D85C:
    aot_gpr_5 = (aot_gpr_5 << 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] << (aot_gpr_5 & 31u));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[7]);
    aot_gpr_5 = (ctx.gpr[6] << (aot_gpr_5 & 31u));
    aot_gpr_5 = (ctx.gpr[7] | aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
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
L_08B0D88C:
    aot_gpr_5 = (aot_gpr_5 << 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_2 = (aot_gpr_4 >> (aot_gpr_5 & 31u));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_2 & 3u);
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
L_08B0D8A4:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[7] = (0u | 15u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] << (aot_gpr_5 & 31u));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[7]);
    aot_gpr_5 = (ctx.gpr[6] << (aot_gpr_5 & 31u));
    aot_gpr_5 = (ctx.gpr[7] | aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), aot_gpr_5);
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
L_08B0D8D4:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_2 = (aot_gpr_4 >> (aot_gpr_5 & 31u));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_2 & 15u);
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
L_08B0D8EC:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[6]));
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
L_08B0D8F8:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6)));
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
L_08B0D904:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08B0D938;
      }
      goto L_08B0D91C;
    }
L_08B0D91C:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08B0D938;
      }
      goto L_08B0D924;
    }
L_08B0D924:
    { const bool branch_taken = ctx.gpr[6] != aot_gpr_5;
      if (branch_taken) {
          goto L_08B0D938;
      }
      goto L_08B0D92C;
    }
L_08B0D92C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(10)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B0D938;
L_08B0D938:
    jump_target = aot_gpr_31;
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
L_08B0D940:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(10)));
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
L_08B0D94C:
    ctx.gpr[6] = (aot_gpr_5 < static_cast<std::uint32_t>(251) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
      if (branch_taken) {
          goto L_08B0D964;
      }
      goto L_08B0D958;
    }
L_08B0D958:
    aot_gpr_5 = (0u | 250u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B0D968;
      }
      goto L_08B0D964;
    }
L_08B0D964:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B0D968;
L_08B0D968:
    jump_target = aot_gpr_31;
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
L_08B0D970:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(5)));
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
L_08B0D978:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_gpr_31 = (0x08B0D9B4u);
    ctx.gpr[6] = (aot_gpr_29 | 0u);
    goto L_08B0D5A4;
L_08B0D9B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (2234u << 16u);
    ctx.gpr[6] = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(13408));
    aot_gpr_5 = (ctx.gpr[6] + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 15u);
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[19];
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08B0D9E8;
      }
      goto L_08B0D9D8;
    }
L_08B0D9D8:
    aot_gpr_5 = (16153u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08B0D9E8;
L_08B0D9E8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2176)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0DAF4;
      }
      goto L_08B0D9FC;
    }
L_08B0D9FC:
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08B0DAEC;
      }
      goto L_08B0DA08;
    }
L_08B0DA08:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B0DAA4;
      }
      goto L_08B0DA10;
    }
L_08B0DA10:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B0DA78;
      }
      goto L_08B0DA18;
    }
L_08B0DA18:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B0DA44;
      }
      goto L_08B0DA20;
    }
L_08B0DA20:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08B0DA78;
      }
      goto L_08B0DA28;
    }
L_08B0DA28:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08B0DA8C;
      }
      goto L_08B0DA30;
    }
L_08B0DA30:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B0DA3Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08B0D74C;
L_08B0DA3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0DAEC;
      }
      goto L_08B0DA44;
    }
L_08B0DA44:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2180)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0DA64;
      }
      goto L_08B0DA58;
    }
L_08B0DA58:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B0DA64u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08B0D678;
L_08B0DA64:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B0DA70u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08B0D688;
L_08B0DA70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0DAEC;
      }
      goto L_08B0DA78;
    }
L_08B0DA78:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B0DA84u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08B0D688;
L_08B0DA84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0DAEC;
      }
      goto L_08B0DA8C;
    }
L_08B0DA8C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B0DA9Cu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08B0D85C;
L_08B0DA9C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2180)));
      if (branch_taken) {
          goto L_08B0DAA8;
      }
      goto L_08B0DAA4;
    }
L_08B0DAA4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2180)));
    goto L_08B0DAA8;
L_08B0DAA8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0DAE0;
      }
      goto L_08B0DAB8;
    }
L_08B0DAB8:
    aot_gpr_4 = (0u | 11u);
    { const bool branch_taken = aot_gpr_16 == aot_gpr_4;
    aot_gpr_4 = (0u | 12u);
      if (branch_taken) {
          goto L_08B0DAD4;
      }
      goto L_08B0DAC4;
    }
L_08B0DAC4:
    { const bool branch_taken = aot_gpr_16 == aot_gpr_4;
      if (branch_taken) {
          goto L_08B0DAD4;
      }
      goto L_08B0DACC;
    }
L_08B0DACC:
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[19];
      if (branch_taken) {
          goto L_08B0DAE0;
      }
      goto L_08B0DAD4;
    }
L_08B0DAD4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B0DAE0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08B0D678;
L_08B0DAE0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B0DAECu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08B0D6E8;
L_08B0DAEC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B0DAF8;
      }
      goto L_08B0DAF4;
    }
L_08B0DAF4:
    aot_gpr_2 = (0u | 0u);
    goto L_08B0DAF8;
L_08B0DAF8:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
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
L_08B0DB1C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_gpr_5 << 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] << (aot_gpr_5 & 31u));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[7]);
    aot_gpr_5 = (ctx.gpr[6] << (aot_gpr_5 & 31u));
    aot_gpr_5 = (ctx.gpr[7] | aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), aot_gpr_5);
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
L_08B0DB54:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_gpr_5 << 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_2 = (aot_gpr_4 >> (aot_gpr_5 & 31u));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_2 & 3u);
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
L_08B0DB74:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    goto L_08B0DB90;
L_08B0DB90:
    aot_gpr_5 = (aot_gpr_16 + ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[6] << 16u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B0DB90;
      }
      goto L_08B0DBB0;
    }
L_08B0DBB0:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (0u | 3u);
    goto L_08B0DBB8;
L_08B0DBB8:
    aot_gpr_5 = (aot_gpr_16 + ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[6] << 16u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B0DBB8;
      }
      goto L_08B0DBD8;
    }
L_08B0DBD8:
    ctx.gpr[17] = (0u | 0u);
    goto L_08B0DBDC;
L_08B0DBDC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0DBE8u);
    aot_gpr_5 = (0u | 16u);
    goto L_08B0D6E8;
L_08B0DBE8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0DBF4u);
    aot_gpr_5 = (0u | 17u);
    goto L_08B0D6E8;
L_08B0DBF4:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_gpr_4 << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0DBDC;
      }
      goto L_08B0DC0C;
    }
L_08B0DC0C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0DC20u);
    aot_gpr_5 = (0u | 250u);
    goto L_08B0D94C;
L_08B0DC20:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0DC34:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(446)));
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = aot_gpr_31;
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
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
L_08B0DC44:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(446)));
        goto L_08B0DC60;
    }
    goto L_08B0DC54;
L_08B0DC54:
    aot_gpr_4 = (16968u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B0DC74;
      }
      goto L_08B0DC60;
    }
L_08B0DC60:
    aot_gpr_5 = (16544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[0] = ctx.fpr[0] + aot_fpr_13;
    goto L_08B0DC74;
L_08B0DC74:
    jump_target = aot_gpr_31;
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
L_08B0DC7C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08B0DC90u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0DC90u) goto L_08B0DC90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0DC90:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2318))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0DCEC;
      }
      goto L_08B0DCA0;
    }
L_08B0DCA0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0DD28;
      }
      goto L_08B0DCB0;
    }
L_08B0DCB0:
    aot_gpr_31 = (0x08B0DCB8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0DCB8u) goto L_08B0DCB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0DCB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0DCEC;
      }
      goto L_08B0DCC4;
    }
L_08B0DCC4:
    aot_gpr_31 = (0x08B0DCCCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0DCCCu) goto L_08B0DCCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0DCCC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2318))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0DCEC;
      }
      goto L_08B0DCDC;
    }
L_08B0DCDC:
    aot_gpr_31 = (0x08B0DCE4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE958u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0DCE4u) goto L_08B0DCE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0DCE4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0DD28;
      }
      goto L_08B0DCEC;
    }
L_08B0DCEC:
    aot_gpr_31 = (0x08B0DCF4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0DCF4u) goto L_08B0DCF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0DCF4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(618))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_31 = (0x08B0DD18u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE958u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0DD18u) goto L_08B0DD18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0DD18:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0DD28;
      }
      goto L_08B0DD20;
    }
L_08B0DD20:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0DD28;
L_08B0DD28:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0DD38:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(504), aot_gpr_5);
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
L_08B0DD44:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(533))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 8u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B0DD78;
      }
      goto L_08B0DD68;
    }
L_08B0DD68:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(533))))));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B0DDF8;
      }
      goto L_08B0DD78;
    }
L_08B0DD78:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(448)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_14 = aot_fpr_14 - aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14) ^ 0x80000000u);
        goto L_08B0DDA0;
    }
    goto L_08B0DDA0;
L_08B0DDA0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0DDE0;
      }
      goto L_08B0DDB0;
    }
L_08B0DDB0:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(452)));
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[15])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
        goto L_08B0DDD0;
    }
    goto L_08B0DDD0;
L_08B0DDD0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0DDF0;
      }
      goto L_08B0DDE0;
    }
L_08B0DDE0:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(384));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B0DDF0u);
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0118_entry, 118u, 187u, 0x089DD29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0DDF0u) goto L_08B0DDF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0DDF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B0DE64;
      }
      goto L_08B0DDF8;
    }
L_08B0DDF8:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 20u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(504), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 48u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B0DE44u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 391u, 0x08B4196Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0DE44u) goto L_08B0DE44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0DE44:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0DE58;
      }
      goto L_08B0DE4C;
    }
L_08B0DE4C:
    aot_gpr_4 = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0DE60;
      }
      goto L_08B0DE58;
    }
L_08B0DE58:
    aot_gpr_4 = (0u | 8u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0DE60;
L_08B0DE60:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    goto L_08B0DE64;
L_08B0DE64:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[0] = aot_fpr_12 + aot_fpr_14;
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
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
L_08B0DEA0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B0DEBCu);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_08B0DD44;
L_08B0DEBC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(617))))));
    aot_gpr_4 = (aot_gpr_4 | 64u);
    aot_gpr_5 = (0u | 10u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[0] = aot_fpr_12 + aot_fpr_14;
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0DF10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(616))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_4 & 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B0DF54;
      }
      goto L_08B0DF34;
    }
L_08B0DF34:
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 246u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B0DFA4;
      }
      goto L_08B0DF4C;
    }
L_08B0DF4C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 234u);
      if (branch_taken) {
          goto L_08B0DF5C;
      }
      goto L_08B0DF54;
    }
L_08B0DF54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0E078;
      }
      goto L_08B0DF5C;
    }
L_08B0DF5C:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 219u);
      if (branch_taken) {
          goto L_08B0DFD8;
      }
      goto L_08B0DF64;
    }
L_08B0DF64:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 218u);
      if (branch_taken) {
          goto L_08B0DF94;
      }
      goto L_08B0DF6C;
    }
L_08B0DF6C:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 207u);
      if (branch_taken) {
          goto L_08B0DFA4;
      }
      goto L_08B0DF74;
    }
L_08B0DF74:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 204u);
      if (branch_taken) {
          goto L_08B0DFA4;
      }
      goto L_08B0DF7C;
    }
L_08B0DF7C:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 193u);
      if (branch_taken) {
          goto L_08B0E00C;
      }
      goto L_08B0DF84;
    }
L_08B0DF84:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 191u);
      if (branch_taken) {
          goto L_08B0DFD8;
      }
      goto L_08B0DF8C;
    }
L_08B0DF8C:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B0E078;
      }
      goto L_08B0DF94;
    }
L_08B0DF94:
    aot_gpr_31 = (0x08B0DF9Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 106u, 0x08B00708u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0DF9Cu) goto L_08B0DF9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0DF9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0E078;
      }
      goto L_08B0DFA4;
    }
L_08B0DFA4:
    aot_gpr_31 = (0x08B0DFACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 106u, 0x08B00708u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0DFACu) goto L_08B0DFAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0DFAC:
    aot_gpr_31 = (0x08B0DFB4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0DFB4u) goto L_08B0DFB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0DFB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(2320)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0DFD0;
      }
      goto L_08B0DFC4;
    }
L_08B0DFC4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0DFD0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 120u, 0x08B007DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0DFD0u) goto L_08B0DFD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0DFD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0E078;
      }
      goto L_08B0DFD8;
    }
L_08B0DFD8:
    aot_gpr_31 = (0x08B0DFE0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 106u, 0x08B00708u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0DFE0u) goto L_08B0DFE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0DFE0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0DFECu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 120u, 0x08B007DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0DFECu) goto L_08B0DFEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0DFEC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0DFF8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 120u, 0x08B007DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0DFF8u) goto L_08B0DFF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0DFF8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0E004u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 120u, 0x08B007DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E004u) goto L_08B0E004;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E004:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0E078;
      }
      goto L_08B0E00C;
    }
L_08B0E00C:
    aot_gpr_31 = (0x08B0E014u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 106u, 0x08B00708u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E014u) goto L_08B0E014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E014:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(464)));
    ctx.gpr[17] = (32u << 16u);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0E030u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 120u, 0x08B007DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E030u) goto L_08B0E030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E030:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11816)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5472)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11816), aot_gpr_4);
      if (branch_taken) {
          goto L_08B0E064;
      }
      goto L_08B0E054;
    }
L_08B0E054:
    aot_gpr_4 = (0u - aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u - aot_gpr_16);
      if (branch_taken) {
          goto L_08B0E068;
      }
      goto L_08B0E064;
    }
L_08B0E064:
    aot_gpr_16 = (aot_gpr_16 & 3u);
    goto L_08B0E068;
L_08B0E068:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5472), aot_gpr_16);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5476), aot_gpr_4);
      if (branch_taken) {
          goto L_08B0E078;
      }
      goto L_08B0E078;
    }
L_08B0E078:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0E08C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08B0E0A0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 106u, 0x08B00708u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E0A0u) goto L_08B0E0A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E0A0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0E0ACu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 120u, 0x08B007DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E0ACu) goto L_08B0E0AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E0AC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0E0BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08B0E0D0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 106u, 0x08B00708u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E0D0u) goto L_08B0E0D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E0D0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0E0DCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 120u, 0x08B007DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E0DCu) goto L_08B0E0DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E0DC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0E0EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(900)));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0E184;
      }
      goto L_08B0E11C;
    }
L_08B0E11C:
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x08B0E128u);
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E128u) goto L_08B0E128;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E128:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 246u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 234u);
      if (branch_taken) {
          goto L_08B0E168;
      }
      goto L_08B0E138;
    }
L_08B0E138:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 227u);
      if (branch_taken) {
          goto L_08B0E168;
      }
      goto L_08B0E140;
    }
L_08B0E140:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 218u);
      if (branch_taken) {
          goto L_08B0E170;
      }
      goto L_08B0E148;
    }
L_08B0E148:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 207u);
      if (branch_taken) {
          goto L_08B0E168;
      }
      goto L_08B0E150;
    }
L_08B0E150:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 194u);
      if (branch_taken) {
          goto L_08B0E168;
      }
      goto L_08B0E158;
    }
L_08B0E158:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 193u);
      if (branch_taken) {
          goto L_08B0E184;
      }
      goto L_08B0E160;
    }
L_08B0E160:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B0E184;
      }
      goto L_08B0E168;
    }
L_08B0E168:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0E184;
      }
      goto L_08B0E170;
    }
L_08B0E170:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(900)));
    aot_gpr_31 = (0x08B0E17Cu);
    aot_gpr_5 = (0u | 140u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E17Cu) goto L_08B0E17C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E17C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0E184;
      }
      goto L_08B0E184;
    }
L_08B0E184:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (0u | 100u);
      if (branch_taken) {
          goto L_08B0E244;
      }
      goto L_08B0E198;
    }
L_08B0E198:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2204)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2200)));
    goto L_08B0E1A0;
L_08B0E1A0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0E1ACu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E1ACu) goto L_08B0E1AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E1AC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0E230;
      }
      goto L_08B0E1B4;
    }
L_08B0E1B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[21] = (aot_gpr_5 + ctx.gpr[20]);
    aot_gpr_31 = (0x08B0E1C8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E1C8u) goto L_08B0E1C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E1C8:
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(1728), ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0E1D8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E1D8u) goto L_08B0E1D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E1D8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x08B0E1E8u);
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E1E8u) goto L_08B0E1E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E1E8:
    aot_gpr_31 = (0x08B0E1F0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E1F0u) goto L_08B0E1F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E1F0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B0E204u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E204u) goto L_08B0E204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E204:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[6] | 0u);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_4);
    goto L_08B0E230;
L_08B0E230:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0E1A0;
      }
      goto L_08B0E244;
    }
L_08B0E244:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_08B0E268:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(900)));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0E310;
      }
      goto L_08B0E298;
    }
L_08B0E298:
    aot_gpr_31 = (0x08B0E2A0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E2A0u) goto L_08B0E2A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E2A0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08B0E310;
      }
      goto L_08B0E2A8;
    }
L_08B0E2A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(900)));
    aot_gpr_31 = (0x08B0E2B4u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E2B4u) goto L_08B0E2B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E2B4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 246u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 234u);
      if (branch_taken) {
          goto L_08B0E2F4;
      }
      goto L_08B0E2C4;
    }
L_08B0E2C4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 227u);
      if (branch_taken) {
          goto L_08B0E2F4;
      }
      goto L_08B0E2CC;
    }
L_08B0E2CC:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 218u);
      if (branch_taken) {
          goto L_08B0E2FC;
      }
      goto L_08B0E2D4;
    }
L_08B0E2D4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 207u);
      if (branch_taken) {
          goto L_08B0E2F4;
      }
      goto L_08B0E2DC;
    }
L_08B0E2DC:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 194u);
      if (branch_taken) {
          goto L_08B0E2F4;
      }
      goto L_08B0E2E4;
    }
L_08B0E2E4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 193u);
      if (branch_taken) {
          goto L_08B0E310;
      }
      goto L_08B0E2EC;
    }
L_08B0E2EC:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B0E310;
      }
      goto L_08B0E2F4;
    }
L_08B0E2F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0E310;
      }
      goto L_08B0E2FC;
    }
L_08B0E2FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(900)));
    aot_gpr_31 = (0x08B0E308u);
    aot_gpr_5 = (0u | 140u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E308u) goto L_08B0E308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E308:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0E310;
      }
      goto L_08B0E310;
    }
L_08B0E310:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (0u | 100u);
      if (branch_taken) {
          goto L_08B0E3CC;
      }
      goto L_08B0E324;
    }
L_08B0E324:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2204)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2200)));
    goto L_08B0E32C;
L_08B0E32C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0E338u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E338u) goto L_08B0E338;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E338:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0E3B8;
      }
      goto L_08B0E340;
    }
L_08B0E340:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[21] = (aot_gpr_5 + ctx.gpr[20]);
    aot_gpr_31 = (0x08B0E354u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E354u) goto L_08B0E354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E354:
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(1728), ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0E364u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E364u) goto L_08B0E364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E364:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08B0E370u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E370u) goto L_08B0E370;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E370:
    aot_gpr_31 = (0x08B0E378u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E378u) goto L_08B0E378;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E378:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B0E38Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E38Cu) goto L_08B0E38C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E38C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[6] | 0u);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_4);
    goto L_08B0E3B8;
L_08B0E3B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0E32C;
      }
      goto L_08B0E3CC;
    }
L_08B0E3CC:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_08B0E3F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[6] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(384));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08B0E410u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0118_entry, 118u, 181u, 0x089DD244u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E410u) goto L_08B0E410;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E410:
    aot_gpr_4 = (0u | 15u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 | 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(535))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 6u);
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_08B0E438;
    }
    goto L_08B0E438;
L_08B0E438:
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0E454:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (ctx.gpr[6] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2320)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B0E55C;
      }
      goto L_08B0E494;
    }
L_08B0E494:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31400)));
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
L_08B0E4AC:
    aot_gpr_31 = (0x08B0E4B4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E4B4u) goto L_08B0E4B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E4B4:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0E4D0;
      }
      goto L_08B0E4C8;
    }
L_08B0E4C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 4u);
      if (branch_taken) {
          goto L_08B0E560;
      }
      goto L_08B0E4D0;
    }
L_08B0E4D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 2u);
      if (branch_taken) {
          goto L_08B0E560;
      }
      goto L_08B0E4D8;
    }
L_08B0E4D8:
    aot_gpr_31 = (0x08B0E4E0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E4E0u) goto L_08B0E4E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E4E0:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 7u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0E4FC;
      }
      goto L_08B0E4F4;
    }
L_08B0E4F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 4u);
      if (branch_taken) {
          goto L_08B0E560;
      }
      goto L_08B0E4FC;
    }
L_08B0E4FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 2u);
      if (branch_taken) {
          goto L_08B0E560;
      }
      goto L_08B0E504;
    }
L_08B0E504:
    aot_gpr_31 = (0x08B0E50Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E50Cu) goto L_08B0E50C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E50C:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 7u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0E528;
      }
      goto L_08B0E520;
    }
L_08B0E520:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 4u);
      if (branch_taken) {
          goto L_08B0E560;
      }
      goto L_08B0E528;
    }
L_08B0E528:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 2u);
      if (branch_taken) {
          goto L_08B0E560;
      }
      goto L_08B0E530;
    }
L_08B0E530:
    aot_gpr_31 = (0x08B0E538u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E538u) goto L_08B0E538;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E538:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 7u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0E554;
      }
      goto L_08B0E54C;
    }
L_08B0E54C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 4u);
      if (branch_taken) {
          goto L_08B0E560;
      }
      goto L_08B0E554;
    }
L_08B0E554:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 2u);
      if (branch_taken) {
          goto L_08B0E560;
      }
      goto L_08B0E55C;
    }
L_08B0E55C:
    aot_gpr_2 = (0u | 4u);
    goto L_08B0E560;
L_08B0E560:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0E56C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (ctx.gpr[6] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2320)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B0E5D0;
      }
      goto L_08B0E5A8;
    }
L_08B0E5A8:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0E5D8;
      }
      goto L_08B0E5B0;
    }
L_08B0E5B0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B0E5D8;
      }
      goto L_08B0E5B8;
    }
L_08B0E5B8:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B0E5D8;
      }
      goto L_08B0E5C0;
    }
L_08B0E5C0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B0E5D8;
      }
      goto L_08B0E5C8;
    }
L_08B0E5C8:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08B0E5D8;
      }
      goto L_08B0E5D0;
    }
L_08B0E5D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 4u);
      if (branch_taken) {
          goto L_08B0E5DC;
      }
      goto L_08B0E5D8;
    }
L_08B0E5D8:
    aot_gpr_2 = (0u | 21u);
    goto L_08B0E5DC;
L_08B0E5DC:
    jump_target = aot_gpr_31;
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
L_08B0E5E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (0u | 191u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_5 != ctx.gpr[6]) {
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08B0E638;
    }
    goto L_08B0E604;
L_08B0E604:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(533))))));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[6];
      if (branch_taken) {
          goto L_08B0E620;
      }
      goto L_08B0E614;
    }
L_08B0E614:
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B0E634;
      }
      goto L_08B0E620;
    }
L_08B0E620:
    ctx.gpr[6] = (0u | 3u);
    if (aot_gpr_5 != ctx.gpr[6]) {
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08B0E638;
    }
    goto L_08B0E62C;
L_08B0E62C:
    aot_gpr_5 = (0u | 5u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B0E634;
L_08B0E634:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_08B0E638;
L_08B0E638:
    ctx.gpr[6] = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[6]);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    ctx.gpr[6] = (2238u << 16u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[6]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(2320)));
    ctx.gpr[6] = (aot_gpr_5 < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_08B0E760;
      }
      goto L_08B0E66C;
    }
L_08B0E66C:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_5);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31432)));
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
L_08B0E684:
    aot_gpr_4 = (16704u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16768u << 16u);
    aot_gpr_31 = (0x08B0E698u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E698u) goto L_08B0E698;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E698:
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B0E764;
      }
      goto L_08B0E6B0;
    }
L_08B0E6B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 25u);
      if (branch_taken) {
          goto L_08B0E764;
      }
      goto L_08B0E6B8;
    }
L_08B0E6B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 34u);
      if (branch_taken) {
          goto L_08B0E764;
      }
      goto L_08B0E6C0;
    }
L_08B0E6C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(352)));
    aot_gpr_5 = (17008u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2184)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B0E764;
      }
      goto L_08B0E6E8;
    }
L_08B0E6E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(352)));
    aot_gpr_5 = (17008u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2188)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B0E764;
      }
      goto L_08B0E710;
    }
L_08B0E710:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(352)));
    aot_gpr_5 = (17008u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2192)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B0E764;
      }
      goto L_08B0E738;
    }
L_08B0E738:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(352)));
    aot_gpr_5 = (17008u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2196)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B0E764;
      }
      goto L_08B0E760;
    }
L_08B0E760:
    aot_gpr_2 = (0u | 0u);
    goto L_08B0E764;
L_08B0E764:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0E778:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-192));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[7] = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[8] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_gpr_16);
    ctx.gpr[6] = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(2320)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_31);
    if (aot_gpr_5 != ctx.gpr[6]) {
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08B0E8B8;
    }
    goto L_08B0E7C8;
L_08B0E7C8:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B0E7D4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E7D4u) goto L_08B0E7D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E7D4:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08B0E804u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E804u) goto L_08B0E804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E804:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0E860;
      }
      goto L_08B0E80C;
    }
L_08B0E80C:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0E830;
      }
      goto L_08B0E824;
    }
L_08B0E824:
    aot_gpr_4 = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0E8B0;
      }
      goto L_08B0E830;
    }
L_08B0E830:
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0E854;
      }
      goto L_08B0E848;
    }
L_08B0E848:
    aot_gpr_4 = (0u | 22u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0E8B0;
      }
      goto L_08B0E854;
    }
L_08B0E854:
    aot_gpr_4 = (0u | 25u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0E8B0;
      }
      goto L_08B0E860;
    }
L_08B0E860:
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0E884;
      }
      goto L_08B0E878;
    }
L_08B0E878:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0E8B0;
      }
      goto L_08B0E884;
    }
L_08B0E884:
    aot_gpr_4 = (16928u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0E8A8;
      }
      goto L_08B0E89C;
    }
L_08B0E89C:
    aot_gpr_4 = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0E8B0;
      }
      goto L_08B0E8A8;
    }
L_08B0E8A8:
    aot_gpr_4 = (0u | 25u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0E8B0;
L_08B0E8B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0E9D0;
      }
      goto L_08B0E8B8;
    }
L_08B0E8B8:
    ctx.gpr[6] = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[6]);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B0E9D0;
      }
      goto L_08B0E8E4;
    }
L_08B0E8E4:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08B0E8F0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E8F0u) goto L_08B0E8F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E8F0:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08B0E924u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E924u) goto L_08B0E924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E924:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0E980;
      }
      goto L_08B0E92C;
    }
L_08B0E92C:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0E950;
      }
      goto L_08B0E944;
    }
L_08B0E944:
    aot_gpr_4 = (0u | 27u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0E9D0;
      }
      goto L_08B0E950;
    }
L_08B0E950:
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0E974;
      }
      goto L_08B0E968;
    }
L_08B0E968:
    aot_gpr_4 = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0E9D0;
      }
      goto L_08B0E974;
    }
L_08B0E974:
    aot_gpr_4 = (0u | 34u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0E9D0;
      }
      goto L_08B0E980;
    }
L_08B0E980:
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0E9A4;
      }
      goto L_08B0E998;
    }
L_08B0E998:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0E9D0;
      }
      goto L_08B0E9A4;
    }
L_08B0E9A4:
    aot_gpr_4 = (16928u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0E9C8;
      }
      goto L_08B0E9BC;
    }
L_08B0E9BC:
    aot_gpr_4 = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0E9D0;
      }
      goto L_08B0E9C8;
    }
L_08B0E9C8:
    aot_gpr_4 = (0u | 34u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0E9D0;
L_08B0E9D0:
    aot_gpr_31 = (0x08B0E9D8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E9D8u) goto L_08B0E9D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E9D8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08B0EA8C;
      }
      goto L_08B0E9E0;
    }
L_08B0E9E0:
    aot_gpr_31 = (0x08B0E9E8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0E9E8u) goto L_08B0E9E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0E9E8:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (15759u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0EA8C;
      }
      goto L_08B0EA1C;
    }
L_08B0EA1C:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08B0EA28u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0EA28u) goto L_08B0EA28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0EA28:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0EA8C;
      }
      goto L_08B0EA6C;
    }
L_08B0EA6C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(535))))));
    aot_gpr_4 = (0u | 10u);
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 10 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_08B0EA80;
    }
    goto L_08B0EA80;
L_08B0EA80:
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0EA8C;
L_08B0EA8C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
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
L_08B0EAA4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[6]);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    ctx.gpr[6] = (2238u << 16u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[6]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(2320)));
    ctx.gpr[6] = (aot_gpr_5 < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_08B0EB44;
      }
      goto L_08B0EADC;
    }
L_08B0EADC:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_5);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31464)));
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
L_08B0EAF4:
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B0EB44;
      }
      goto L_08B0EB00;
    }
L_08B0EB00:
    aot_gpr_5 = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B0EB44;
      }
      goto L_08B0EB0C;
    }
L_08B0EB0C:
    aot_gpr_5 = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B0EB44;
      }
      goto L_08B0EB18;
    }
L_08B0EB18:
    aot_gpr_5 = (0u | 20u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B0EB44;
      }
      goto L_08B0EB24;
    }
L_08B0EB24:
    aot_gpr_5 = (0u | 25u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B0EB44;
      }
      goto L_08B0EB30;
    }
L_08B0EB30:
    aot_gpr_5 = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B0EB44;
      }
      goto L_08B0EB3C;
    }
L_08B0EB3C:
    aot_gpr_5 = (0u | 40u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B0EB44;
L_08B0EB44:
    jump_target = aot_gpr_31;
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
L_08B0EB4C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (ctx.gpr[6] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08B0EB88u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0EB88u) goto L_08B0EB88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0EB88:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0EBC8;
      }
      goto L_08B0EB90;
    }
L_08B0EB90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B0EBC8;
      }
      goto L_08B0EBA4;
    }
L_08B0EBA4:
    aot_gpr_31 = (0x08B0EBACu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0EBACu) goto L_08B0EBAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0EBAC:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0EBC8;
      }
      goto L_08B0EBC0;
    }
L_08B0EBC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 2u);
      if (branch_taken) {
          goto L_08B0EBCC;
      }
      goto L_08B0EBC8;
    }
L_08B0EBC8:
    aot_gpr_2 = (0u | 4u);
    goto L_08B0EBCC;
L_08B0EBCC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_08B0EBDC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-512));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(613))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(492), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 & 1u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(476), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(496), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0EC68;
      }
      goto L_08B0EC14;
    }
L_08B0EC14:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(533))))));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B0EC54;
      }
      goto L_08B0EC24;
    }
L_08B0EC24:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(533))))));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B0EC54;
      }
      goto L_08B0EC34;
    }
L_08B0EC34:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(533))))));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B0EC54;
      }
      goto L_08B0EC44;
    }
L_08B0EC44:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(533))))));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B0EC68;
      }
      goto L_08B0EC54;
    }
L_08B0EC54:
    aot_gpr_31 = (0x08B0EC5Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0E5E4;
L_08B0EC5C:
    aot_gpr_4 = (aot_gpr_2 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0EC68;
L_08B0EC68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_4 = (aot_gpr_4 >> 4u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 24u, 0x08B10148u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B0EC80;
    }
L_08B0EC80:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31496)));
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
L_08B0EC98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 24u, 0x08B10148u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B0ECA0;
    }
L_08B0ECA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_4 & 63u);
    aot_gpr_5 = (aot_gpr_5 & 63u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B0ED18;
      }
      goto L_08B0ECC4;
    }
L_08B0ECC4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_2 = (49152u << 16u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08B0ECFCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0ECFCu) goto L_08B0ECFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0ECFC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08B0ED18;
      }
      goto L_08B0ED04;
    }
L_08B0ED04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 48u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_08B0ED18;
L_08B0ED18:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(533))))));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08B0FF50;
      }
      goto L_08B0ED2C;
    }
L_08B0ED2C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31552)));
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
L_08B0ED44:
    aot_gpr_31 = (0x08B0ED4Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0ED4Cu) goto L_08B0ED4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0ED4C:
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_gpr_31 = (0x08B0ED64u);
    aot_fpr_20 = aot_fpr_12 - aot_fpr_13;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0ED64u) goto L_08B0ED64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0ED64:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    aot_gpr_31 = (0x08B0ED7Cu);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0ED7Cu) goto L_08B0ED7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0ED7C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    aot_gpr_31 = (0x08B0ED90u);
    ctx.fpr[22] = aot_fpr_12 - aot_fpr_13;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0ED90u) goto L_08B0ED90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0ED90:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = ctx.fpr[15] - aot_fpr_14;
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = aot_fpr_20 + aot_fpr_14;
    ctx.fpr[24] = std::sqrt(aot_fpr_14);
    aot_gpr_31 = (0x08B0EDB0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0DC34;
L_08B0EDB0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0EDD8;
      }
      goto L_08B0EDC0;
    }
L_08B0EDC0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(538))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0EDFC;
      }
      goto L_08B0EDD8;
    }
L_08B0EDD8:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08B0EDE8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 238u, 0x08B00E18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0EDE8u) goto L_08B0EDE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0EDE8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0EDFC;
      }
      goto L_08B0EDF0;
    }
L_08B0EDF0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(618))))));
    aot_gpr_4 = (aot_gpr_4 | 32u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0EDFC;
L_08B0EDFC:
    aot_gpr_31 = (0x08B0EE04u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0DC7C;
L_08B0EE04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 24u, 0x08B10148u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B0EE0C;
    }
L_08B0EE0C:
    aot_gpr_31 = (0x08B0EE14u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0EE14u) goto L_08B0EE14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0EE14:
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_31 = (0x08B0EE2Cu);
    aot_fpr_20 = aot_fpr_12 - aot_fpr_13;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0EE2Cu) goto L_08B0EE2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0EE2C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    aot_gpr_31 = (0x08B0EE44u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0EE44u) goto L_08B0EE44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0EE44:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08B0EE58u);
    ctx.fpr[22] = aot_fpr_12 - aot_fpr_13;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0EE58u) goto L_08B0EE58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0EE58:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = ctx.fpr[15] - aot_fpr_14;
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 + aot_fpr_14;
    aot_fpr_20 = std::sqrt(aot_fpr_20);
    aot_gpr_31 = (0x08B0EE78u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0DC44;
L_08B0EE78:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0EEE8;
      }
      goto L_08B0EE88;
    }
L_08B0EE88:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(538))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0EEE8;
      }
      goto L_08B0EEA0;
    }
L_08B0EEA0:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_31 = (0x08B0EEACu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0EEACu) goto L_08B0EEAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0EEAC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B0EEBCu);
    ctx.gpr[6] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 391u, 0x08B4196Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0EEBCu) goto L_08B0EEBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0EEBC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08B0EEE0;
      }
      goto L_08B0EEC4;
    }
L_08B0EEC4:
    aot_gpr_4 = (0u | 2u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(618))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(700), 0u);
    goto L_08B0EEE0;
L_08B0EEE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0F124;
      }
      goto L_08B0EEE8;
    }
L_08B0EEE8:
    aot_gpr_31 = (0x08B0EEF0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0EEF0u) goto L_08B0EEF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0EEF0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0EF9C;
      }
      goto L_08B0EEF8;
    }
L_08B0EEF8:
    aot_gpr_31 = (0x08B0EF00u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0EF00u) goto L_08B0EF00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0EF00:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0EF0Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 587u, 0x08A66C04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0EF0Cu) goto L_08B0EF0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0EF0C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0EF9C;
      }
      goto L_08B0EF14;
    }
L_08B0EF14:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(534))))));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B0EF9C;
      }
      goto L_08B0EF24;
    }
L_08B0EF24:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(534))))));
    aot_gpr_5 = (0u | 7u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B0EF9C;
      }
      goto L_08B0EF34;
    }
L_08B0EF34:
    aot_gpr_31 = (0x08B0EF3Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0EF3Cu) goto L_08B0EF3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0EF3C:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0EF88;
      }
      goto L_08B0EF70;
    }
L_08B0EF70:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(800));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(512), aot_gpr_4);
      if (branch_taken) {
          goto L_08B0EF9C;
      }
      goto L_08B0EF88;
    }
L_08B0EF88:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(50));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(512), aot_gpr_4);
    goto L_08B0EF9C;
L_08B0EF9C:
    aot_gpr_31 = (0x08B0EFA4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0EFA4u) goto L_08B0EFA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0EFA4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0F01C;
      }
      goto L_08B0EFAC;
    }
L_08B0EFAC:
    aot_gpr_31 = (0x08B0EFB4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0EFB4u) goto L_08B0EFB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0EFB4:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0F01C;
      }
      goto L_08B0EFE8;
    }
L_08B0EFE8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(664)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16773u << 16u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (aot_gpr_4 | 21845u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(664), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0F020;
      }
      goto L_08B0F01C;
    }
L_08B0F01C:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(664), static_cast<std::uint16_t>(0u));
    goto L_08B0F020;
L_08B0F020:
    aot_gpr_31 = (0x08B0F028u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F028u) goto L_08B0F028;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F028:
    if (aot_gpr_2 == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
        goto L_08B0F098;
    }
    goto L_08B0F030;
L_08B0F030:
    aot_gpr_31 = (0x08B0F038u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F038u) goto L_08B0F038;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F038:
    aot_gpr_31 = (0x08B0F040u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F040u) goto L_08B0F040;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F040:
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
        goto L_08B0F098;
    }
    goto L_08B0F048;
L_08B0F048:
    aot_gpr_31 = (0x08B0F050u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F050u) goto L_08B0F050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F050:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0F124;
      }
      goto L_08B0F084;
    }
L_08B0F084:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(664)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 101 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0F124;
      }
      goto L_08B0F094;
    }
L_08B0F094:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    goto L_08B0F098;
L_08B0F098:
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0F124;
      }
      goto L_08B0F0A4;
    }
L_08B0F0A4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 246u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (16736u << 16u);
      if (branch_taken) {
          goto L_08B0F0D4;
      }
      goto L_08B0F0B4;
    }
L_08B0F0B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 10001 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0F124;
      }
      goto L_08B0F0D0;
    }
L_08B0F0D0:
    aot_gpr_4 = (16736u << 16u);
    goto L_08B0F0D4;
L_08B0F0D4:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0F124;
      }
      goto L_08B0F0E8;
    }
L_08B0F0E8:
    aot_gpr_31 = (0x08B0F0F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0E0EC;
L_08B0F0F0:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B0F104u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F104u) goto L_08B0F104;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F104:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(2320)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0F124;
      }
      goto L_08B0F114;
    }
L_08B0F114:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(618))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0F124;
L_08B0F124:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0F13C;
      }
      goto L_08B0F134;
    }
L_08B0F134:
    aot_gpr_31 = (0x08B0F13Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0E778;
L_08B0F13C:
    aot_gpr_31 = (0x08B0F144u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0DC7C;
L_08B0F144:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0F14C;
    }
L_08B0F14C:
    aot_gpr_31 = (0x08B0F154u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F154u) goto L_08B0F154;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F154:
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_31 = (0x08B0F16Cu);
    aot_fpr_20 = aot_fpr_12 - aot_fpr_13;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F16Cu) goto L_08B0F16C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F16C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    aot_gpr_31 = (0x08B0F184u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F184u) goto L_08B0F184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F184:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08B0F198u);
    ctx.fpr[22] = aot_fpr_12 - aot_fpr_13;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F198u) goto L_08B0F198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F198:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = ctx.fpr[15] - aot_fpr_14;
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = aot_fpr_20 + aot_fpr_14;
    ctx.fpr[24] = std::sqrt(aot_fpr_14);
    aot_gpr_31 = (0x08B0F1B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0DC34;
L_08B0F1B8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0F1E0;
      }
      goto L_08B0F1C8;
    }
L_08B0F1C8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(538))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0F204;
      }
      goto L_08B0F1E0;
    }
L_08B0F1E0:
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08B0F1F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 238u, 0x08B00E18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F1F0u) goto L_08B0F1F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F1F0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0F204;
      }
      goto L_08B0F1F8;
    }
L_08B0F1F8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(618))))));
    aot_gpr_4 = (aot_gpr_4 | 32u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0F204;
L_08B0F204:
    aot_gpr_31 = (0x08B0F20Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0DC7C;
L_08B0F20C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0F214;
    }
L_08B0F214:
    aot_gpr_31 = (0x08B0F21Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F21Cu) goto L_08B0F21C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F21C:
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_31 = (0x08B0F234u);
    aot_fpr_20 = aot_fpr_12 - aot_fpr_13;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F234u) goto L_08B0F234;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F234:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    aot_gpr_31 = (0x08B0F24Cu);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F24Cu) goto L_08B0F24C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F24C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08B0F260u);
    ctx.fpr[22] = aot_fpr_12 - aot_fpr_13;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F260u) goto L_08B0F260;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F260:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = ctx.fpr[15] - aot_fpr_14;
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 + aot_fpr_14;
    aot_fpr_20 = std::sqrt(aot_fpr_20);
    aot_gpr_31 = (0x08B0F280u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0DC44;
L_08B0F280:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0F2F0;
      }
      goto L_08B0F290;
    }
L_08B0F290:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(538))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0F2F0;
      }
      goto L_08B0F2A8;
    }
L_08B0F2A8:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    aot_gpr_31 = (0x08B0F2B4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F2B4u) goto L_08B0F2B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F2B4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B0F2C4u);
    ctx.gpr[6] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 391u, 0x08B4196Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F2C4u) goto L_08B0F2C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F2C4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08B0F2E8;
      }
      goto L_08B0F2CC;
    }
L_08B0F2CC:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(618))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(700), 0u);
    goto L_08B0F2E8;
L_08B0F2E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0F478;
      }
      goto L_08B0F2F0;
    }
L_08B0F2F0:
    aot_gpr_31 = (0x08B0F2F8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F2F8u) goto L_08B0F2F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F2F8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0F370;
      }
      goto L_08B0F300;
    }
L_08B0F300:
    aot_gpr_31 = (0x08B0F308u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F308u) goto L_08B0F308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F308:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0F370;
      }
      goto L_08B0F33C;
    }
L_08B0F33C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(664)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16773u << 16u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (aot_gpr_4 | 21845u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(664), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0F374;
      }
      goto L_08B0F370;
    }
L_08B0F370:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(664), static_cast<std::uint16_t>(0u));
    goto L_08B0F374;
L_08B0F374:
    aot_gpr_31 = (0x08B0F37Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F37Cu) goto L_08B0F37C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F37C:
    if (aot_gpr_2 == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
        goto L_08B0F3EC;
    }
    goto L_08B0F384;
L_08B0F384:
    aot_gpr_31 = (0x08B0F38Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F38Cu) goto L_08B0F38C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F38C:
    aot_gpr_31 = (0x08B0F394u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F394u) goto L_08B0F394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F394:
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
        goto L_08B0F3EC;
    }
    goto L_08B0F39C;
L_08B0F39C:
    aot_gpr_31 = (0x08B0F3A4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F3A4u) goto L_08B0F3A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F3A4:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0F478;
      }
      goto L_08B0F3D8;
    }
L_08B0F3D8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(664)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 101 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0F478;
      }
      goto L_08B0F3E8;
    }
L_08B0F3E8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    goto L_08B0F3EC;
L_08B0F3EC:
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0F478;
      }
      goto L_08B0F3F8;
    }
L_08B0F3F8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 246u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (16736u << 16u);
      if (branch_taken) {
          goto L_08B0F428;
      }
      goto L_08B0F408;
    }
L_08B0F408:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 10001 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0F478;
      }
      goto L_08B0F424;
    }
L_08B0F424:
    aot_gpr_4 = (16736u << 16u);
    goto L_08B0F428;
L_08B0F428:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0F478;
      }
      goto L_08B0F43C;
    }
L_08B0F43C:
    aot_gpr_31 = (0x08B0F444u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0E0EC;
L_08B0F444:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B0F458u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F458u) goto L_08B0F458;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F458:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(2320)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0F478;
      }
      goto L_08B0F468;
    }
L_08B0F468:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(618))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0F478;
L_08B0F478:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0F490;
      }
      goto L_08B0F488;
    }
L_08B0F488:
    aot_gpr_31 = (0x08B0F490u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0E778;
L_08B0F490:
    aot_gpr_31 = (0x08B0F498u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0DC7C;
L_08B0F498:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0F4A0;
    }
L_08B0F4A0:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(448)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(452)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(446)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0F500;
      }
      goto L_08B0F4E8;
    }
L_08B0F4E8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(538))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0F508;
      }
      goto L_08B0F500;
    }
L_08B0F500:
    aot_gpr_4 = (0u | 9u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0F508;
L_08B0F508:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0F510;
    }
L_08B0F510:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(448)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(452)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(446)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0F570;
      }
      goto L_08B0F558;
    }
L_08B0F558:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(538))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0F578;
      }
      goto L_08B0F570;
    }
L_08B0F570:
    aot_gpr_4 = (0u | 13u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0F578;
L_08B0F578:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0F580;
    }
L_08B0F580:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(448)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(452)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_20 = std::sqrt(aot_fpr_20);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0F5CC;
      }
      goto L_08B0F5BC;
    }
L_08B0F5BC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0F5EC;
      }
      goto L_08B0F5CC;
    }
L_08B0F5CC:
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0F5EC;
      }
      goto L_08B0F5E4;
    }
L_08B0F5E4:
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0F5EC;
L_08B0F5EC:
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(446)));
        goto L_08B0F640;
    }
    goto L_08B0F604;
L_08B0F604:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(617))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0F6CC;
      }
      goto L_08B0F624;
    }
L_08B0F624:
    aot_gpr_31 = (0x08B0F62Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0E0EC;
L_08B0F62C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(617))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0F6CC;
      }
      goto L_08B0F640;
    }
L_08B0F640:
    aot_gpr_5 = (16544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0F6CC;
      }
      goto L_08B0F664;
    }
L_08B0F664:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(538))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0F6CC;
      }
      goto L_08B0F67C;
    }
L_08B0F67C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0F6CC;
      }
      goto L_08B0F68C;
    }
L_08B0F68C:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(448));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0F6B0u);
    ctx.gpr[6] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 391u, 0x08B4196Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F6B0u) goto L_08B0F6B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F6B0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0F6C4;
      }
      goto L_08B0F6B8;
    }
L_08B0F6B8:
    aot_gpr_4 = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0F6CC;
      }
      goto L_08B0F6C4;
    }
L_08B0F6C4:
    aot_gpr_4 = (0u | 8u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0F6CC;
L_08B0F6CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0F6D4;
    }
L_08B0F6D4:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(448)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(452)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_20 = std::sqrt(aot_fpr_20);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(446)));
        goto L_08B0F754;
    }
    goto L_08B0F718;
L_08B0F718:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(617))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0F7E0;
      }
      goto L_08B0F738;
    }
L_08B0F738:
    aot_gpr_31 = (0x08B0F740u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0E0EC;
L_08B0F740:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(617))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0F7E0;
      }
      goto L_08B0F754;
    }
L_08B0F754:
    aot_gpr_5 = (16544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0F7E0;
      }
      goto L_08B0F778;
    }
L_08B0F778:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(538))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0F7E0;
      }
      goto L_08B0F790;
    }
L_08B0F790:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0F7E0;
      }
      goto L_08B0F7A0;
    }
L_08B0F7A0:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(448));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0F7C4u);
    ctx.gpr[6] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 391u, 0x08B4196Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F7C4u) goto L_08B0F7C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F7C4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0F7D8;
      }
      goto L_08B0F7CC;
    }
L_08B0F7CC:
    aot_gpr_4 = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0F7E0;
      }
      goto L_08B0F7D8;
    }
L_08B0F7D8:
    aot_gpr_4 = (0u | 12u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0F7E0;
L_08B0F7E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0F7E8;
    }
L_08B0F7E8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(320)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(324)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0F97C;
      }
      goto L_08B0F81C;
    }
L_08B0F81C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0F8D0;
      }
      goto L_08B0F82C;
    }
L_08B0F82C:
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (2280u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2352));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08B0F858u);
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 175u, 0x08B20EB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F858u) goto L_08B0F858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F858:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0F874;
      }
      goto L_08B0F860;
    }
L_08B0F860:
    aot_gpr_31 = (0x08B0F868u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0E0EC;
L_08B0F868:
    aot_gpr_4 = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0F8C8;
      }
      goto L_08B0F874;
    }
L_08B0F874:
    aot_gpr_31 = (0x08B0F87Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F87Cu) goto L_08B0F87C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F87C:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(618))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 17u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0F8C8;
      }
      goto L_08B0F8AC;
    }
L_08B0F8AC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5452)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5452), aot_gpr_4);
    goto L_08B0F8C8;
L_08B0F8C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0F97C;
      }
      goto L_08B0F8D0;
    }
L_08B0F8D0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0F97C;
      }
      goto L_08B0F8E0;
    }
L_08B0F8E0:
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(14864));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08B0F90Cu);
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0114_entry, 114u, 688u, 0x089CFB70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F90Cu) goto L_08B0F90C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F90C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0F928;
      }
      goto L_08B0F914;
    }
L_08B0F914:
    aot_gpr_31 = (0x08B0F91Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0E0EC;
L_08B0F91C:
    aot_gpr_4 = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0F97C;
      }
      goto L_08B0F928;
    }
L_08B0F928:
    aot_gpr_31 = (0x08B0F930u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0F930u) goto L_08B0F930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0F930:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(618))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 17u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0F97C;
      }
      goto L_08B0F960;
    }
L_08B0F960:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5456)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5456), aot_gpr_4);
    goto L_08B0F97C;
L_08B0F97C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0F984;
    }
L_08B0F984:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0FA1C;
      }
      goto L_08B0F990;
    }
L_08B0F990:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(440)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    aot_fpr_14 = ctx.fpr[17] - ctx.fpr[16];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_20 = std::sqrt(aot_fpr_12);
    aot_gpr_31 = (0x08B0F9E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0DC34;
L_08B0F9E8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0FA10;
      }
      goto L_08B0F9F8;
    }
L_08B0F9F8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(538))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0FA24;
      }
      goto L_08B0FA10;
    }
L_08B0FA10:
    aot_gpr_4 = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0FA24;
      }
      goto L_08B0FA1C;
    }
L_08B0FA1C:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0FA24;
L_08B0FA24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0FA2C;
    }
L_08B0FA2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0FB38;
      }
      goto L_08B0FA38;
    }
L_08B0FA38:
    aot_gpr_31 = (0x08B0FA40u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0DC7C;
L_08B0FA40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(440)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    aot_fpr_14 = ctx.fpr[17] - ctx.fpr[16];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_20 = std::sqrt(aot_fpr_12);
    aot_gpr_31 = (0x08B0FA98u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0DC44;
L_08B0FA98:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0FAD8;
      }
      goto L_08B0FAA8;
    }
L_08B0FAA8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(538))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0FAD8;
      }
      goto L_08B0FAC0;
    }
L_08B0FAC0:
    aot_gpr_4 = (0u | 15u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08B0FAD0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FAD0u) goto L_08B0FAD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FAD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0FB40;
      }
      goto L_08B0FAD8;
    }
L_08B0FAD8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(440)));
    aot_gpr_31 = (0x08B0FAE4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 587u, 0x08A66C04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FAE4u) goto L_08B0FAE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FAE4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0FB40;
      }
      goto L_08B0FAEC;
    }
L_08B0FAEC:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0FB40;
      }
      goto L_08B0FB20;
    }
L_08B0FB20:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(800));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(512), aot_gpr_4);
      if (branch_taken) {
          goto L_08B0FB40;
      }
      goto L_08B0FB38;
    }
L_08B0FB38:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0FB40;
L_08B0FB40:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0FB48;
    }
L_08B0FB48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0FBFC;
      }
      goto L_08B0FB54;
    }
L_08B0FB54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(440)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    aot_fpr_14 = ctx.fpr[17] - ctx.fpr[16];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_20 = std::sqrt(aot_fpr_12);
    aot_gpr_31 = (0x08B0FBACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0DC34;
L_08B0FBAC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0FBD4;
      }
      goto L_08B0FBBC;
    }
L_08B0FBBC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(538))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0FC04;
      }
      goto L_08B0FBD4;
    }
L_08B0FBD4:
    aot_gpr_4 = (0u | 18u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08B0FBE4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 238u, 0x08B00E18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FBE4u) goto L_08B0FBE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FBE4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0FC04;
      }
      goto L_08B0FBEC;
    }
L_08B0FBEC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(618))))));
    aot_gpr_4 = (aot_gpr_4 | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0FC04;
      }
      goto L_08B0FBFC;
    }
L_08B0FBFC:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0FC04;
L_08B0FC04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0FC0C;
    }
L_08B0FC0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0FCC4;
      }
      goto L_08B0FC18;
    }
L_08B0FC18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(440)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    aot_fpr_14 = ctx.fpr[17] - ctx.fpr[16];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_20 = std::sqrt(aot_fpr_12);
    aot_gpr_31 = (0x08B0FC70u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0DC44;
L_08B0FC70:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0FCCC;
      }
      goto L_08B0FC80;
    }
L_08B0FC80:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(538))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0FCCC;
      }
      goto L_08B0FC98;
    }
L_08B0FC98:
    aot_gpr_4 = (0u | 17u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(618))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(700), 0u);
    aot_gpr_31 = (0x08B0FCBCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FCBCu) goto L_08B0FCBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FCBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0FCCC;
      }
      goto L_08B0FCC4;
    }
L_08B0FCC4:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0FCCC;
L_08B0FCCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0FCD4;
    }
L_08B0FCD4:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(448)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(452)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_gpr_4 = (16320u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0FD20;
      }
      goto L_08B0FD18;
    }
L_08B0FD18:
    aot_gpr_4 = (0u | 25u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0FD20;
L_08B0FD20:
    aot_gpr_31 = (0x08B0FD28u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0DC7C;
L_08B0FD28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0FD30;
    }
L_08B0FD30:
    aot_gpr_31 = (0x08B0FD38u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FD38u) goto L_08B0FD38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FD38:
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_31 = (0x08B0FD50u);
    aot_fpr_20 = aot_fpr_12 - aot_fpr_13;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FD50u) goto L_08B0FD50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FD50:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    aot_gpr_31 = (0x08B0FD68u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FD68u) goto L_08B0FD68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FD68:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08B0FD7Cu);
    ctx.fpr[22] = aot_fpr_12 - aot_fpr_13;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FD7Cu) goto L_08B0FD7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FD7C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = ctx.fpr[15] - aot_fpr_14;
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 + aot_fpr_14;
    aot_fpr_20 = std::sqrt(aot_fpr_20);
    aot_gpr_4 = (16720u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0FDC4;
      }
      goto L_08B0FDAC;
    }
L_08B0FDAC:
    aot_gpr_31 = (0x08B0FDB4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0E0EC;
L_08B0FDB4:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 11u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0FDC4;
L_08B0FDC4:
    aot_gpr_4 = (17036u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0FE40;
      }
      goto L_08B0FDDC;
    }
L_08B0FDDC:
    aot_gpr_31 = (0x08B0FDE4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FDE4u) goto L_08B0FDE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FDE4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2318))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0FE40;
      }
      goto L_08B0FDF4;
    }
L_08B0FDF4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0FE58;
      }
      goto L_08B0FE04;
    }
L_08B0FE04:
    aot_gpr_31 = (0x08B0FE0Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FE0Cu) goto L_08B0FE0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FE0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0FE40;
      }
      goto L_08B0FE18;
    }
L_08B0FE18:
    aot_gpr_31 = (0x08B0FE20u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FE20u) goto L_08B0FE20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FE20:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2318))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B0FE40;
      }
      goto L_08B0FE30;
    }
L_08B0FE30:
    aot_gpr_31 = (0x08B0FE38u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE958u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FE38u) goto L_08B0FE38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FE38:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0FE58;
      }
      goto L_08B0FE40;
    }
L_08B0FE40:
    aot_gpr_31 = (0x08B0FE48u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0E0EC;
L_08B0FE48:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 11u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0FE58;
L_08B0FE58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0FE60;
    }
L_08B0FE60:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    aot_gpr_31 = (0x08B0FE6Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FE6Cu) goto L_08B0FE6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FE6C:
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B0FE84u);
    ctx.fpr[22] = ctx.fpr[22] - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FE84u) goto L_08B0FE84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FE84:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 - aot_fpr_13;
    aot_gpr_4 = (14979u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_08B0FEBC;
    }
    goto L_08B0FEBC;
L_08B0FEBC:
    ctx.fpr[22] = ctx.fpr[22] / aot_fpr_12;
    aot_fpr_20 = aot_fpr_20 / aot_fpr_12;
    aot_gpr_31 = (0x08B0FECCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FECCu) goto L_08B0FECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FECC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B0FF10;
      }
      goto L_08B0FED4;
    }
L_08B0FED4:
    aot_gpr_31 = (0x08B0FEDCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FEDCu) goto L_08B0FEDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FEDC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B0FEE8u);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FEE8u) goto L_08B0FEE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FEE8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (15692u << 16u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = ctx.fpr[22] + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B0FF18;
      }
      goto L_08B0FF10;
    }
L_08B0FF10:
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B0FF18;
L_08B0FF18:
    aot_gpr_31 = (0x08B0FF20u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0DC7C;
L_08B0FF20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0FF28;
    }
L_08B0FF28:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0FF40;
      }
      goto L_08B0FF38;
    }
L_08B0FF38:
    aot_gpr_31 = (0x08B0FF40u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0EAA4;
L_08B0FF40:
    aot_gpr_31 = (0x08B0FF48u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B0DC7C;
L_08B0FF48:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0FF50;
    }
L_08B0FF50:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0FF60;
    }
L_08B0FF60:
    aot_gpr_31 = (0x08B0FF68u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FF68u) goto L_08B0FF68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FF68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0FF74;
    }
L_08B0FF74:
    aot_gpr_31 = (0x08B0FF7Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE958u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FF7Cu) goto L_08B0FF7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FF7C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08B0EE04;
      }
      goto L_08B0FF84;
    }
L_08B0FF84:
    aot_gpr_31 = (0x08B0FF8Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FF8Cu) goto L_08B0FF8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FF8C:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08B0FFB0;
    }
    goto L_08B0FFB0;
L_08B0FFB0:
    aot_gpr_4 = (16736u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 2u, 0x08B1000Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B0FFC8;
    }
L_08B0FFC8:
    aot_gpr_31 = (0x08B0FFD0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0FFD0u) goto L_08B0FFD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0FFD0:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(308)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08B0FFF4;
    }
    goto L_08B0FFF4;
L_08B0FFF4:
    aot_gpr_4 = (16736u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    ctx.pc = 0x08B10000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0194(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0194_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_194(Runtime &runtime) {
    runtime.register_generated_unit(194u, 0x08B0C000u, 16384u, &recomp_unit_0194, &recomp_unit_0194_entry);
    runtime.register_function(0x08B0C000u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C008u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C010u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C01Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C02Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C03Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C048u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C05Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C084u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C120u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C128u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C138u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C164u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C16Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C174u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C190u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C204u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C20Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C220u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C22Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C234u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C240u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C248u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C254u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C25Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C264u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C274u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C27Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C284u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C294u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C29Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C308u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C310u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C318u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C360u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C368u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C408u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C430u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C45Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C48Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C498u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C508u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C510u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C518u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C520u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C530u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C548u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C554u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C55Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C56Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C574u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C580u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C594u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C59Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C604u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C614u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C62Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C638u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C640u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C648u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C650u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C658u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C660u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C694u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C708u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C72Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C748u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C758u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C76Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C778u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C810u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C82Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C838u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C840u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C848u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C858u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C870u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C87Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C884u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C90Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C934u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C940u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C94Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C954u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C95Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C960u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C968u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C98Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA08u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA60u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA80u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA90u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAB4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAC8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAD4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAF8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB00u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB04u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB10u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB30u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB60u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB94u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CBA8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CBB8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CBC8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CBD4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CBE0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CBFCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC04u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC60u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC6Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC74u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC80u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC88u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC94u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC9Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CCA8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CCB0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CCB8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CCC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CCD4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CCE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CCF8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CCFCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD1Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD54u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD60u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD70u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD7Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CDA8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CDB0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CDB8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CDC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CDCCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CDD4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CDE0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CDE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CDFCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE20u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE2Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE34u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE5Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE74u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE7Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE84u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE90u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CEA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CEACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CEB4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CEBCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CEC8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CECCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CEE8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF20u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF2Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF34u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF3Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF78u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF84u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF94u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF9Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFA8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFB4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFF8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D010u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D028u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D040u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D058u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D05Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D074u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D098u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D100u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D118u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D13Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D148u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D150u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D15Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D164u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D174u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D17Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D184u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D190u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D1F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D200u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D208u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D218u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D220u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D228u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D234u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D244u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D248u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D260u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D27Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D288u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D298u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D304u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D30Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D310u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D31Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D32Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D350u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D35Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D364u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D370u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D378u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D384u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D38Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D394u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D400u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D40Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D414u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D424u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D42Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D434u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D440u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D450u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D454u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D46Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D498u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D50Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D514u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D520u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D528u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D530u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D53Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D548u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D550u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D558u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D564u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D57Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D604u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D610u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D61Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D624u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D630u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D638u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D640u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D654u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D66Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D670u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D678u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D680u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D688u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D708u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D718u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D720u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D734u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D738u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D74Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D76Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D77Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D784u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D798u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D79Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D7B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D7D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D7E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D7E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D7FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D800u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D814u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D81Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D834u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D838u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D850u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D85Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D88Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D8A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D8D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D8ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D8F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D904u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D91Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D924u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D92Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D938u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D940u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D94Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D958u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D964u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D968u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D970u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D978u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA08u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA10u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA20u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA28u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA30u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA3Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA58u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA64u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA70u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA78u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA84u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA9Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAA8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAB8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DACCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAD4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAE0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAF4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAF8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB1Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB54u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB74u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB90u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DBB0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DBB8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DBD8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DBDCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DBE8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DBF4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC20u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC34u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC54u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC60u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC74u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC7Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC90u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCA0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCB0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCB8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCCCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCDCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCF4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD20u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD28u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD78u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDA0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDB0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDD0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDE0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDF0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDF8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE58u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE60u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE64u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEA0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEBCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF10u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF34u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF54u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF5Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF64u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF6Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF74u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF7Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF84u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF94u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF9Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFB4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFD0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFD8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFE0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFF8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E004u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E00Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E014u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E030u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E054u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E064u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E068u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E078u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E08Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E11Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E128u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E138u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E140u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E148u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E150u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E158u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E160u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E168u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E170u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E17Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E184u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E198u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E204u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E230u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E244u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E268u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E298u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E308u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E310u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E324u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E32Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E338u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E340u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E354u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E364u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E370u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E378u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E38Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E3F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E410u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E438u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E454u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E494u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E4FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E504u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E50Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E520u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E528u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E530u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E538u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E54Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E554u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E55Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E560u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E56Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E5E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E604u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E614u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E620u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E62Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E634u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E638u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E66Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E684u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E698u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E6E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E710u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E738u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E760u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E764u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E778u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E7D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E804u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E80Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E824u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E830u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E848u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E854u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E860u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E878u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E884u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E89Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E8F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E924u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E92Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E944u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E950u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E968u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E974u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E980u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E998u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E9E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA1Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA28u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA6Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA80u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EA8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EADCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EAF4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB00u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB24u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB30u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB3Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB88u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EB90u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EBA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EBACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EBC0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EBC8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EBCCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EBDCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EC14u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EC24u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EC34u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EC44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EC54u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EC5Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EC68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EC80u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EC98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0ECA0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0ECC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0ECFCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0ED04u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0ED18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0ED2Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0ED44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0ED4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0ED64u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0ED7Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0ED90u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EDB0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EDC0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EDD8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EDE8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EDF0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EDFCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EE04u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EE0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EE14u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EE2Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EE44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EE58u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EE78u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EE88u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EEA0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EEACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EEBCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EEC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EEE0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EEE8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EEF0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EEF8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF00u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF14u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF24u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF34u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF3Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF70u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF88u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EF9Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EFA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EFACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EFB4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0EFE8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F01Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F020u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F028u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F030u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F038u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F040u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F048u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F050u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F084u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F094u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F098u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F0A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F0B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F0D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F0D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F0E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F0F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F104u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F114u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F124u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F134u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F13Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F144u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F14Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F154u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F16Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F184u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F198u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F1B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F1C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F1E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F1F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F1F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F204u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F20Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F214u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F21Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F234u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F24Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F260u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F280u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F290u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F2F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F300u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F308u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F33Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F370u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F374u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F37Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F384u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F38Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F394u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F39Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F3F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F408u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F424u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F428u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F43Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F444u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F458u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F468u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F478u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F488u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F490u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F498u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F4E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F500u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F508u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F510u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F558u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F570u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F578u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F580u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F5ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F604u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F624u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F62Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F640u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F664u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F67Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F68Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F6D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F718u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F738u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F740u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F754u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F778u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F790u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F7A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F7C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F7CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F7D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F7E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F7E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F81Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F82Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F858u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F860u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F868u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F874u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F87Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F8ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F8C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F8D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F8E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F90Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F914u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F91Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F928u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F930u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F960u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F97Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F984u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F990u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F9E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0F9F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FA10u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FA1Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FA24u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FA2Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FA38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FA40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FA98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FAA8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FAC0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FAD0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FAD8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FAE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FAECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FB20u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FB38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FB40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FB48u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FB54u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FBACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FBBCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FBD4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FBE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FBECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FBFCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FC04u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FC0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FC18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FC70u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FC80u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FC98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FCBCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FCC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FCCCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FCD4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FD18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FD20u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FD28u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FD30u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FD38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FD50u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FD68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FD7Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FDACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FDB4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FDC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FDDCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FDE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FDF4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FE04u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FE0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FE18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FE20u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FE30u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FE38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FE40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FE48u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FE58u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FE60u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FE6Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FE84u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FEBCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FECCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FED4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FEDCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FEE8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF10u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF20u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF28u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF48u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF50u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF60u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF74u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF7Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF84u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FF8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FFB0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FFC8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FFD0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0FFF4u, &recomp_unit_0194, "recomp_unit_0194");
}
} // namespace psprecomp
