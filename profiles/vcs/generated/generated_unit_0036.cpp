#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0036[64] = {
    0x2AA209A145000801ull, 0x1080000000100044ull, 0x5140004000020002ull, 0x054A845000208268ull,
    0x5222840000000040ull, 0x0705622808000420ull, 0x2449A14504000B40ull, 0x2040150102121285ull,
    0x0000004502954AA8ull, 0x2A2108421013428Bull, 0x00022052A114A425ull, 0x1015568516000002ull,
    0x428B020008A10842ull, 0x0005A1454001440Bull, 0x80000000001008A0ull, 0xAA22404480848084ull,
    0x8802004010002448ull, 0x5520820000100008ull, 0x452A9552952A2110ull, 0x088B428A10010001ull,
    0x90428B5042285101ull, 0x4000005104824120ull, 0x5505055550505050ull, 0x5414150505550505ull,
    0x4000000000020035ull, 0xA940201402010080ull, 0x0240240201280402ull, 0x0000002003201804ull,
    0x4020140201008040ull, 0x1008048040240201ull, 0x428204440002001Aull, 0x3562A006A8822C84ull,
    0x10A0811100000200ull, 0x800620AD80A80041ull, 0x9084440011AA2A00ull, 0x408614A000002AE2ull,
    0xA834400048010028ull, 0x8143111604A6AAA5ull, 0x8A140A1940A48062ull, 0x00000800A840A490ull,
    0x0048002400151000ull, 0x280100056A200090ull, 0x020008A2A0040011ull, 0x4515002000895150ull,
    0x480000828A801000ull, 0x0002400120009000ull, 0x0328A80100064880ull, 0x4920000084540080ull,
    0x8010002515002000ull, 0x0128A8010004908Aull, 0x000480000A2A0040ull, 0x8800002400120009ull,
    0x0800328A80100064ull, 0x0004920000084540ull, 0x08A8010002515002ull, 0x0400128A80100049ull,
    0x00000000080062A0ull, 0x082A02E108201510ull, 0x89000122550002E1ull, 0xA111100012240004ull,
    0x100044A000040015ull, 0x1000010004510000ull, 0x8A20000200089501ull, 0x0020A02200002000ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0036[64] = {
    1u, 17u, 22u, 29u, 44u, 52u, 65u, 81u, 95u, 109u, 127u, 143u, 158u, 172u, 187u, 192u,
    207u, 216u, 225u, 248u, 261u, 279u, 289u, 309u, 329u, 335u, 346u, 356u, 363u, 371u, 380u, 391u,
    412u, 420u, 435u, 450u, 465u, 477u, 500u, 518u, 528u, 536u, 548u, 558u, 573u, 582u, 588u, 601u,
    611u, 620u, 633u, 641u, 649u, 661u, 670u, 682u, 693u, 699u, 714u, 729u, 740u, 749u, 755u, 766u,
};
void recomp_unit_0036_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,6,16,17 fprs=12,13,14,20 gpr_occ=3461 fpr_occ=607 gpr_total=5612 fpr_total=807
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_17 = ctx.gpr[17];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[16] = aot_gpr_16; ctx.gpr[17] = aot_gpr_17; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_17 = ctx.gpr[17]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08894000u;
        entry_id = 0u;
        if (entry_delta < 16344u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0036[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0036[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08894000;
    case 2u: goto L_0889402C;
    case 3u: goto L_08894060;
    case 4u: goto L_08894068;
    case 5u: goto L_08894078;
    case 6u: goto L_08894080;
    case 7u: goto L_08894094;
    case 8u: goto L_0889409C;
    case 9u: goto L_088940A0;
    case 10u: goto L_088940AC;
    case 11u: goto L_088940C4;
    case 12u: goto L_088940D4;
    case 13u: goto L_088940DC;
    case 14u: goto L_088940E4;
    case 15u: goto L_088940EC;
    case 16u: goto L_088940F4;
    case 17u: goto L_08894108;
    case 18u: goto L_08894118;
    case 19u: goto L_08894150;
    case 20u: goto L_088941DC;
    case 21u: goto L_088941F0;
    case 22u: goto L_08894204;
    case 23u: goto L_08894244;
    case 24u: goto L_08894298;
    case 25u: goto L_088942D8;
    case 26u: goto L_088942E0;
    case 27u: goto L_088942F0;
    case 28u: goto L_088942F8;
    case 29u: goto L_0889430C;
    case 30u: goto L_08894314;
    case 31u: goto L_08894318;
    case 32u: goto L_08894324;
    case 33u: goto L_0889433C;
    case 34u: goto L_08894354;
    case 35u: goto L_08894390;
    case 36u: goto L_08894398;
    case 37u: goto L_088943A8;
    case 38u: goto L_088943BC;
    case 39u: goto L_088943C4;
    case 40u: goto L_088943CC;
    case 41u: goto L_088943D8;
    case 42u: goto L_088943E0;
    case 43u: goto L_088943E8;
    case 44u: goto L_08894418;
    case 45u: goto L_088944A8;
    case 46u: goto L_088944BC;
    case 47u: goto L_088944C4;
    case 48u: goto L_088944D4;
    case 49u: goto L_088944E4;
    case 50u: goto L_088944F0;
    case 51u: goto L_088944F8;
    case 52u: goto L_08894514;
    case 53u: goto L_08894528;
    case 54u: goto L_0889456C;
    case 55u: goto L_0889458C;
    case 56u: goto L_08894594;
    case 57u: goto L_088945A4;
    case 58u: goto L_088945B4;
    case 59u: goto L_088945B8;
    case 60u: goto L_088945C0;
    case 61u: goto L_088945C8;
    case 62u: goto L_088945E0;
    case 63u: goto L_088945E4;
    case 64u: goto L_088945E8;
    case 65u: goto L_08894618;
    case 66u: goto L_08894620;
    case 67u: goto L_08894624;
    case 68u: goto L_0889462C;
    case 69u: goto L_08894668;
    case 70u: goto L_08894680;
    case 71u: goto L_08894688;
    case 72u: goto L_08894698;
    case 73u: goto L_088946A0;
    case 74u: goto L_088946B4;
    case 75u: goto L_088946BC;
    case 76u: goto L_088946C0;
    case 77u: goto L_088946CC;
    case 78u: goto L_088946D8;
    case 79u: goto L_088946E8;
    case 80u: goto L_088946F4;
    case 81u: goto L_08894700;
    case 82u: goto L_08894708;
    case 83u: goto L_0889471C;
    case 84u: goto L_08894724;
    case 85u: goto L_08894730;
    case 86u: goto L_08894744;
    case 87u: goto L_08894750;
    case 88u: goto L_08894764;
    case 89u: goto L_08894780;
    case 90u: goto L_088947A0;
    case 91u: goto L_088947A8;
    case 92u: goto L_088947B0;
    case 93u: goto L_088947D8;
    case 94u: goto L_088947F4;
    case 95u: goto L_0889480C;
    case 96u: goto L_08894814;
    case 97u: goto L_0889481C;
    case 98u: goto L_08894824;
    case 99u: goto L_0889482C;
    case 100u: goto L_08894838;
    case 101u: goto L_08894840;
    case 102u: goto L_08894848;
    case 103u: goto L_08894850;
    case 104u: goto L_0889485C;
    case 105u: goto L_08894864;
    case 106u: goto L_08894880;
    case 107u: goto L_08894888;
    case 108u: goto L_08894898;
    case 109u: goto L_08894900;
    case 110u: goto L_08894904;
    case 111u: goto L_0889490C;
    case 112u: goto L_0889491C;
    case 113u: goto L_08894924;
    case 114u: goto L_08894938;
    case 115u: goto L_08894940;
    case 116u: goto L_08894944;
    case 117u: goto L_08894950;
    case 118u: goto L_08894970;
    case 119u: goto L_08894984;
    case 120u: goto L_08894998;
    case 121u: goto L_088949AC;
    case 122u: goto L_088949C0;
    case 123u: goto L_088949D4;
    case 124u: goto L_088949E4;
    case 125u: goto L_088949EC;
    case 126u: goto L_088949F4;
    case 127u: goto L_08894A00;
    case 128u: goto L_08894A08;
    case 129u: goto L_08894A14;
    case 130u: goto L_08894A28;
    case 131u: goto L_08894A34;
    case 132u: goto L_08894A3C;
    case 133u: goto L_08894A48;
    case 134u: goto L_08894A50;
    case 135u: goto L_08894A60;
    case 136u: goto L_08894A74;
    case 137u: goto L_08894A7C;
    case 138u: goto L_08894A84;
    case 139u: goto L_08894A90;
    case 140u: goto L_08894A98;
    case 141u: goto L_08894AB4;
    case 142u: goto L_08894AC4;
    case 143u: goto L_08894B04;
    case 144u: goto L_08894B64;
    case 145u: goto L_08894B68;
    case 146u: goto L_08894B70;
    case 147u: goto L_08894B80;
    case 148u: goto L_08894B88;
    case 149u: goto L_08894B9C;
    case 150u: goto L_08894BA4;
    case 151u: goto L_08894BA8;
    case 152u: goto L_08894BB0;
    case 153u: goto L_08894BB8;
    case 154u: goto L_08894BC0;
    case 155u: goto L_08894BC8;
    case 156u: goto L_08894BD0;
    case 157u: goto L_08894BF0;
    case 158u: goto L_08894C04;
    case 159u: goto L_08894C18;
    case 160u: goto L_08894C2C;
    case 161u: goto L_08894C40;
    case 162u: goto L_08894C54;
    case 163u: goto L_08894C5C;
    case 164u: goto L_08894C6C;
    case 165u: goto L_08894CA4;
    case 166u: goto L_08894CC0;
    case 167u: goto L_08894CC4;
    case 168u: goto L_08894CCC;
    case 169u: goto L_08894CDC;
    case 170u: goto L_08894CE4;
    case 171u: goto L_08894CF8;
    case 172u: goto L_08894D00;
    case 173u: goto L_08894D04;
    case 174u: goto L_08894D0C;
    case 175u: goto L_08894D28;
    case 176u: goto L_08894D38;
    case 177u: goto L_08894D40;
    case 178u: goto L_08894D78;
    case 179u: goto L_08894D80;
    case 180u: goto L_08894D88;
    case 181u: goto L_08894D98;
    case 182u: goto L_08894DA0;
    case 183u: goto L_08894DB4;
    case 184u: goto L_08894DBC;
    case 185u: goto L_08894DC0;
    case 186u: goto L_08894DC8;
    case 187u: goto L_08894E14;
    case 188u: goto L_08894E1C;
    case 189u: goto L_08894E2C;
    case 190u: goto L_08894E50;
    case 191u: goto L_08894EFC;
    case 192u: goto L_08894F08;
    case 193u: goto L_08894F1C;
    case 194u: goto L_08894F3C;
    case 195u: goto L_08894F48;
    case 196u: goto L_08894F5C;
    case 197u: goto L_08894F7C;
    case 198u: goto L_08894F88;
    case 199u: goto L_08894F98;
    case 200u: goto L_08894FB8;
    case 201u: goto L_08894FC4;
    case 202u: goto L_08894FD4;
    case 203u: goto L_08894FE4;
    case 204u: goto L_08894FEC;
    case 205u: goto L_08894FF4;
    case 206u: goto L_08894FFC;
    case 207u: goto L_0889500C;
    case 208u: goto L_08895018;
    case 209u: goto L_08895028;
    case 210u: goto L_08895034;
    case 211u: goto L_08895070;
    case 212u: goto L_08895098;
    case 213u: goto L_088950C4;
    case 214u: goto L_088950EC;
    case 215u: goto L_088950FC;
    case 216u: goto L_0889510C;
    case 217u: goto L_08895150;
    case 218u: goto L_088951A4;
    case 219u: goto L_088951BC;
    case 220u: goto L_088951D4;
    case 221u: goto L_088951E0;
    case 222u: goto L_088951E8;
    case 223u: goto L_088951F0;
    case 224u: goto L_088951F8;
    case 225u: goto L_08895210;
    case 226u: goto L_08895220;
    case 227u: goto L_08895234;
    case 228u: goto L_08895244;
    case 229u: goto L_0889524C;
    case 230u: goto L_08895254;
    case 231u: goto L_08895260;
    case 232u: goto L_08895268;
    case 233u: goto L_08895270;
    case 234u: goto L_0889527C;
    case 235u: goto L_08895284;
    case 236u: goto L_08895290;
    case 237u: goto L_08895298;
    case 238u: goto L_088952A0;
    case 239u: goto L_088952A8;
    case 240u: goto L_088952B0;
    case 241u: goto L_088952BC;
    case 242u: goto L_088952C4;
    case 243u: goto L_088952CC;
    case 244u: goto L_088952D4;
    case 245u: goto L_088952E0;
    case 246u: goto L_088952E8;
    case 247u: goto L_088952F8;
    case 248u: goto L_08895300;
    case 249u: goto L_08895340;
    case 250u: goto L_08895370;
    case 251u: goto L_08895384;
    case 252u: goto L_0889538C;
    case 253u: goto L_0889539C;
    case 254u: goto L_088953A4;
    case 255u: goto L_088953B8;
    case 256u: goto L_088953C0;
    case 257u: goto L_088953C4;
    case 258u: goto L_088953CC;
    case 259u: goto L_088953DC;
    case 260u: goto L_088953EC;
    case 261u: goto L_08895400;
    case 262u: goto L_08895420;
    case 263u: goto L_08895430;
    case 264u: goto L_08895438;
    case 265u: goto L_0889544C;
    case 266u: goto L_08895454;
    case 267u: goto L_08895464;
    case 268u: goto L_08895478;
    case 269u: goto L_08895490;
    case 270u: goto L_08895498;
    case 271u: goto L_088954A0;
    case 272u: goto L_088954A4;
    case 273u: goto L_088954AC;
    case 274u: goto L_088954BC;
    case 275u: goto L_088954C4;
    case 276u: goto L_088954D8;
    case 277u: goto L_088954F0;
    case 278u: goto L_088954FC;
    case 279u: goto L_08895514;
    case 280u: goto L_08895520;
    case 281u: goto L_08895538;
    case 282u: goto L_08895544;
    case 283u: goto L_0889555C;
    case 284u: goto L_08895568;
    case 285u: goto L_08895580;
    case 286u: goto L_08895590;
    case 287u: goto L_08895598;
    case 288u: goto L_088955F8;
    case 289u: goto L_08895610;
    case 290u: goto L_08895618;
    case 291u: goto L_08895630;
    case 292u: goto L_08895638;
    case 293u: goto L_08895650;
    case 294u: goto L_08895658;
    case 295u: goto L_08895670;
    case 296u: goto L_08895678;
    case 297u: goto L_08895680;
    case 298u: goto L_08895688;
    case 299u: goto L_08895690;
    case 300u: goto L_08895698;
    case 301u: goto L_088956A0;
    case 302u: goto L_088956A8;
    case 303u: goto L_088956C0;
    case 304u: goto L_088956C8;
    case 305u: goto L_088956E0;
    case 306u: goto L_088956E8;
    case 307u: goto L_088956F0;
    case 308u: goto L_088956F8;
    case 309u: goto L_08895700;
    case 310u: goto L_08895708;
    case 311u: goto L_08895720;
    case 312u: goto L_08895728;
    case 313u: goto L_08895740;
    case 314u: goto L_08895748;
    case 315u: goto L_08895750;
    case 316u: goto L_08895758;
    case 317u: goto L_08895760;
    case 318u: goto L_08895768;
    case 319u: goto L_08895780;
    case 320u: goto L_08895788;
    case 321u: goto L_088957A0;
    case 322u: goto L_088957A8;
    case 323u: goto L_088957B0;
    case 324u: goto L_088957C8;
    case 325u: goto L_088957D0;
    case 326u: goto L_088957E8;
    case 327u: goto L_088957F0;
    case 328u: goto L_088957F8;
    case 329u: goto L_08895800;
    case 330u: goto L_08895808;
    case 331u: goto L_08895810;
    case 332u: goto L_08895814;
    case 333u: goto L_08895844;
    case 334u: goto L_088958F8;
    case 335u: goto L_0889591C;
    case 336u: goto L_08895940;
    case 337u: goto L_08895964;
    case 338u: goto L_08895988;
    case 339u: goto L_08895990;
    case 340u: goto L_088959B4;
    case 341u: goto L_088959D8;
    case 342u: goto L_088959E0;
    case 343u: goto L_088959EC;
    case 344u: goto L_088959F4;
    case 345u: goto L_088959FC;
    case 346u: goto L_08895A04;
    case 347u: goto L_08895A28;
    case 348u: goto L_08895A4C;
    case 349u: goto L_08895A54;
    case 350u: goto L_08895A60;
    case 351u: goto L_08895A84;
    case 352u: goto L_08895AA8;
    case 353u: goto L_08895AB4;
    case 354u: goto L_08895AD8;
    case 355u: goto L_08895AE4;
    case 356u: goto L_08895B08;
    case 357u: goto L_08895B2C;
    case 358u: goto L_08895B30;
    case 359u: goto L_08895B54;
    case 360u: goto L_08895B60;
    case 361u: goto L_08895B64;
    case 362u: goto L_08895B94;
    case 363u: goto L_08895C18;
    case 364u: goto L_08895C3C;
    case 365u: goto L_08895C60;
    case 366u: goto L_08895C84;
    case 367u: goto L_08895CA8;
    case 368u: goto L_08895CB0;
    case 369u: goto L_08895CD4;
    case 370u: goto L_08895CF8;
    case 371u: goto L_08895D00;
    case 372u: goto L_08895D24;
    case 373u: goto L_08895D48;
    case 374u: goto L_08895D54;
    case 375u: goto L_08895D78;
    case 376u: goto L_08895D9C;
    case 377u: goto L_08895DA8;
    case 378u: goto L_08895DCC;
    case 379u: goto L_08895DF0;
    case 380u: goto L_08895E04;
    case 381u: goto L_08895E0C;
    case 382u: goto L_08895E10;
    case 383u: goto L_08895E44;
    case 384u: goto L_08895E88;
    case 385u: goto L_08895E98;
    case 386u: goto L_08895EA8;
    case 387u: goto L_08895EC4;
    case 388u: goto L_08895EDC;
    case 389u: goto L_08895EE4;
    case 390u: goto L_08895EF8;
    case 391u: goto L_08895F08;
    case 392u: goto L_08895F1C;
    case 393u: goto L_08895F28;
    case 394u: goto L_08895F2C;
    case 395u: goto L_08895F34;
    case 396u: goto L_08895F44;
    case 397u: goto L_08895F5C;
    case 398u: goto L_08895F6C;
    case 399u: goto L_08895F74;
    case 400u: goto L_08895F7C;
    case 401u: goto L_08895F84;
    case 402u: goto L_08895F88;
    case 403u: goto L_08895FB4;
    case 404u: goto L_08895FBC;
    case 405u: goto L_08895FC4;
    case 406u: goto L_08895FD4;
    case 407u: goto L_08895FD8;
    case 408u: goto L_08895FE0;
    case 409u: goto L_08895FE8;
    case 410u: goto L_08895FF0;
    case 411u: goto L_08895FF4;
    case 412u: goto L_08896024;
    case 413u: goto L_08896080;
    case 414u: goto L_08896090;
    case 415u: goto L_088960A0;
    case 416u: goto L_088960BC;
    case 417u: goto L_088960D4;
    case 418u: goto L_088960DC;
    case 419u: goto L_088960F0;
    case 420u: goto L_08896100;
    case 421u: goto L_08896118;
    case 422u: goto L_0889614C;
    case 423u: goto L_08896154;
    case 424u: goto L_0889615C;
    case 425u: goto L_0889617C;
    case 426u: goto L_08896180;
    case 427u: goto L_08896188;
    case 428u: goto L_0889618C;
    case 429u: goto L_08896194;
    case 430u: goto L_0889619C;
    case 431u: goto L_088961B4;
    case 432u: goto L_088961C4;
    case 433u: goto L_088961C8;
    case 434u: goto L_088961FC;
    case 435u: goto L_08896224;
    case 436u: goto L_0889622C;
    case 437u: goto L_08896234;
    case 438u: goto L_08896244;
    case 439u: goto L_0889624C;
    case 440u: goto L_08896254;
    case 441u: goto L_0889625C;
    case 442u: goto L_08896260;
    case 443u: goto L_08896270;
    case 444u: goto L_088962A8;
    case 445u: goto L_088962B8;
    case 446u: goto L_088962C8;
    case 447u: goto L_088962DC;
    case 448u: goto L_088962F0;
    case 449u: goto L_088962FC;
    case 450u: goto L_08896304;
    case 451u: goto L_08896314;
    case 452u: goto L_08896318;
    case 453u: goto L_0889631C;
    case 454u: goto L_08896324;
    case 455u: goto L_0889632C;
    case 456u: goto L_08896334;
    case 457u: goto L_08896394;
    case 458u: goto L_0889639C;
    case 459u: goto L_088963A8;
    case 460u: goto L_088963B0;
    case 461u: goto L_088963C4;
    case 462u: goto L_088963C8;
    case 463u: goto L_088963DC;
    case 464u: goto L_088963F8;
    case 465u: goto L_0889640C;
    case 466u: goto L_08896414;
    case 467u: goto L_08896440;
    case 468u: goto L_0889646C;
    case 469u: goto L_08896478;
    case 470u: goto L_088964B8;
    case 471u: goto L_088964C8;
    case 472u: goto L_088964D0;
    case 473u: goto L_088964D4;
    case 474u: goto L_088964EC;
    case 475u: goto L_088964F4;
    case 476u: goto L_088964FC;
    case 477u: goto L_08896500;
    case 478u: goto L_08896508;
    case 479u: goto L_08896514;
    case 480u: goto L_0889651C;
    case 481u: goto L_08896524;
    case 482u: goto L_0889652C;
    case 483u: goto L_08896534;
    case 484u: goto L_0889653C;
    case 485u: goto L_08896544;
    case 486u: goto L_08896548;
    case 487u: goto L_08896554;
    case 488u: goto L_0889655C;
    case 489u: goto L_08896568;
    case 490u: goto L_08896584;
    case 491u: goto L_08896588;
    case 492u: goto L_08896590;
    case 493u: goto L_088965A0;
    case 494u: goto L_088965B0;
    case 495u: goto L_088965C0;
    case 496u: goto L_088965C4;
    case 497u: goto L_088965D8;
    case 498u: goto L_088965E0;
    case 499u: goto L_088965FC;
    case 500u: goto L_08896604;
    case 501u: goto L_08896614;
    case 502u: goto L_08896618;
    case 503u: goto L_0889663C;
    case 504u: goto L_08896648;
    case 505u: goto L_08896654;
    case 506u: goto L_0889665C;
    case 507u: goto L_08896678;
    case 508u: goto L_08896680;
    case 509u: goto L_0889668C;
    case 510u: goto L_08896690;
    case 511u: goto L_088966A4;
    case 512u: goto L_088966AC;
    case 513u: goto L_088966C8;
    case 514u: goto L_088966D0;
    case 515u: goto L_088966E4;
    case 516u: goto L_088966EC;
    case 517u: goto L_088966FC;
    case 518u: goto L_08896710;
    case 519u: goto L_0889671C;
    case 520u: goto L_08896728;
    case 521u: goto L_08896734;
    case 522u: goto L_0889673C;
    case 523u: goto L_08896758;
    case 524u: goto L_0889676C;
    case 525u: goto L_08896774;
    case 526u: goto L_0889677C;
    case 527u: goto L_088967AC;
    case 528u: goto L_08896830;
    case 529u: goto L_08896840;
    case 530u: goto L_08896848;
    case 531u: goto L_08896850;
    case 532u: goto L_08896888;
    case 533u: goto L_08896894;
    case 534u: goto L_088968CC;
    case 535u: goto L_088968D8;
    case 536u: goto L_08896910;
    case 537u: goto L_0889691C;
    case 538u: goto L_08896954;
    case 539u: goto L_08896964;
    case 540u: goto L_0889696C;
    case 541u: goto L_08896974;
    case 542u: goto L_08896978;
    case 543u: goto L_08896980;
    case 544u: goto L_08896988;
    case 545u: goto L_088969C0;
    case 546u: goto L_088969EC;
    case 547u: goto L_088969F4;
    case 548u: goto L_08896A00;
    case 549u: goto L_08896A10;
    case 550u: goto L_08896A48;
    case 551u: goto L_08896A74;
    case 552u: goto L_08896A7C;
    case 553u: goto L_08896A84;
    case 554u: goto L_08896A94;
    case 555u: goto L_08896A9C;
    case 556u: goto L_08896AAC;
    case 557u: goto L_08896AE4;
    case 558u: goto L_08896B10;
    case 559u: goto L_08896B18;
    case 560u: goto L_08896B20;
    case 561u: goto L_08896B30;
    case 562u: goto L_08896B38;
    case 563u: goto L_08896B40;
    case 564u: goto L_08896B4C;
    case 565u: goto L_08896B5C;
    case 566u: goto L_08896B94;
    case 567u: goto L_08896BC0;
    case 568u: goto L_08896BC8;
    case 569u: goto L_08896BD0;
    case 570u: goto L_08896BE0;
    case 571u: goto L_08896BE8;
    case 572u: goto L_08896BF8;
    case 573u: goto L_08896C30;
    case 574u: goto L_08896C5C;
    case 575u: goto L_08896C64;
    case 576u: goto L_08896C6C;
    case 577u: goto L_08896C7C;
    case 578u: goto L_08896C84;
    case 579u: goto L_08896C9C;
    case 580u: goto L_08896CEC;
    case 581u: goto L_08896CF8;
    case 582u: goto L_08896D30;
    case 583u: goto L_08896D3C;
    case 584u: goto L_08896D74;
    case 585u: goto L_08896D80;
    case 586u: goto L_08896DB8;
    case 587u: goto L_08896DC4;
    case 588u: goto L_08896E1C;
    case 589u: goto L_08896E2C;
    case 590u: goto L_08896E38;
    case 591u: goto L_08896E44;
    case 592u: goto L_08896E48;
    case 593u: goto L_08896E80;
    case 594u: goto L_08896EAC;
    case 595u: goto L_08896EB4;
    case 596u: goto L_08896EBC;
    case 597u: goto L_08896ECC;
    case 598u: goto L_08896ED4;
    case 599u: goto L_08896EE0;
    case 600u: goto L_08896EE4;
    case 601u: goto L_08896F1C;
    case 602u: goto L_08896F48;
    case 603u: goto L_08896F50;
    case 604u: goto L_08896F58;
    case 605u: goto L_08896F68;
    case 606u: goto L_08896F7C;
    case 607u: goto L_08896FD4;
    case 608u: goto L_08896FE0;
    case 609u: goto L_08896FEC;
    case 610u: goto L_08896FF8;
    case 611u: goto L_08897034;
    case 612u: goto L_08897060;
    case 613u: goto L_08897068;
    case 614u: goto L_08897070;
    case 615u: goto L_08897080;
    case 616u: goto L_08897088;
    case 617u: goto L_08897094;
    case 618u: goto L_088970D0;
    case 619u: goto L_088970FC;
    case 620u: goto L_08897104;
    case 621u: goto L_0889710C;
    case 622u: goto L_0889711C;
    case 623u: goto L_08897130;
    case 624u: goto L_0889713C;
    case 625u: goto L_08897148;
    case 626u: goto L_08897180;
    case 627u: goto L_088971AC;
    case 628u: goto L_088971B4;
    case 629u: goto L_088971BC;
    case 630u: goto L_088971CC;
    case 631u: goto L_088971D4;
    case 632u: goto L_088971E0;
    case 633u: goto L_08897218;
    case 634u: goto L_08897244;
    case 635u: goto L_0889724C;
    case 636u: goto L_08897254;
    case 637u: goto L_08897264;
    case 638u: goto L_0889726C;
    case 639u: goto L_088972BC;
    case 640u: goto L_088972C8;
    case 641u: goto L_08897300;
    case 642u: goto L_0889730C;
    case 643u: goto L_08897344;
    case 644u: goto L_08897350;
    case 645u: goto L_08897388;
    case 646u: goto L_08897394;
    case 647u: goto L_088973EC;
    case 648u: goto L_088973FC;
    case 649u: goto L_08897408;
    case 650u: goto L_08897414;
    case 651u: goto L_08897418;
    case 652u: goto L_08897450;
    case 653u: goto L_0889747C;
    case 654u: goto L_08897484;
    case 655u: goto L_0889748C;
    case 656u: goto L_0889749C;
    case 657u: goto L_088974A4;
    case 658u: goto L_088974B0;
    case 659u: goto L_088974B4;
    case 660u: goto L_088974EC;
    case 661u: goto L_08897518;
    case 662u: goto L_08897520;
    case 663u: goto L_08897528;
    case 664u: goto L_08897538;
    case 665u: goto L_0889754C;
    case 666u: goto L_088975A4;
    case 667u: goto L_088975B0;
    case 668u: goto L_088975BC;
    case 669u: goto L_088975C8;
    case 670u: goto L_08897604;
    case 671u: goto L_08897630;
    case 672u: goto L_08897638;
    case 673u: goto L_08897640;
    case 674u: goto L_08897650;
    case 675u: goto L_08897658;
    case 676u: goto L_08897664;
    case 677u: goto L_088976A0;
    case 678u: goto L_088976CC;
    case 679u: goto L_088976D4;
    case 680u: goto L_088976DC;
    case 681u: goto L_088976EC;
    case 682u: goto L_08897700;
    case 683u: goto L_0889770C;
    case 684u: goto L_08897718;
    case 685u: goto L_08897750;
    case 686u: goto L_0889777C;
    case 687u: goto L_08897784;
    case 688u: goto L_0889778C;
    case 689u: goto L_0889779C;
    case 690u: goto L_088977A4;
    case 691u: goto L_088977B0;
    case 692u: goto L_088977E8;
    case 693u: goto L_08897814;
    case 694u: goto L_0889781C;
    case 695u: goto L_08897824;
    case 696u: goto L_08897834;
    case 697u: goto L_08897838;
    case 698u: goto L_0889786C;
    case 699u: goto L_08897910;
    case 700u: goto L_08897920;
    case 701u: goto L_08897928;
    case 702u: goto L_08897930;
    case 703u: goto L_08897954;
    case 704u: goto L_0889796C;
    case 705u: goto L_08897980;
    case 706u: goto L_08897994;
    case 707u: goto L_08897998;
    case 708u: goto L_0889799C;
    case 709u: goto L_088979A4;
    case 710u: goto L_088979C4;
    case 711u: goto L_088979CC;
    case 712u: goto L_088979D4;
    case 713u: goto L_088979EC;
    case 714u: goto L_08897A00;
    case 715u: goto L_08897A14;
    case 716u: goto L_08897A18;
    case 717u: goto L_08897A1C;
    case 718u: goto L_08897A24;
    case 719u: goto L_08897A60;
    case 720u: goto L_08897A68;
    case 721u: goto L_08897A70;
    case 722u: goto L_08897A78;
    case 723u: goto L_08897A84;
    case 724u: goto L_08897A94;
    case 725u: goto L_08897AA0;
    case 726u: goto L_08897AE0;
    case 727u: goto L_08897AEC;
    case 728u: goto L_08897AFC;
    case 729u: goto L_08897B08;
    case 730u: goto L_08897B48;
    case 731u: goto L_08897B54;
    case 732u: goto L_08897B64;
    case 733u: goto L_08897B70;
    case 734u: goto L_08897BB0;
    case 735u: goto L_08897BC0;
    case 736u: goto L_08897BD0;
    case 737u: goto L_08897BE0;
    case 738u: goto L_08897BF4;
    case 739u: goto L_08897BFC;
    case 740u: goto L_08897C00;
    case 741u: goto L_08897C08;
    case 742u: goto L_08897C10;
    case 743u: goto L_08897C48;
    case 744u: goto L_08897C94;
    case 745u: goto L_08897C9C;
    case 746u: goto L_08897CA8;
    case 747u: goto L_08897CB8;
    case 748u: goto L_08897CF0;
    case 749u: goto L_08897D40;
    case 750u: goto L_08897D50;
    case 751u: goto L_08897D58;
    case 752u: goto L_08897D68;
    case 753u: goto L_08897DA0;
    case 754u: goto L_08897DF0;
    case 755u: goto L_08897E00;
    case 756u: goto L_08897E20;
    case 757u: goto L_08897E28;
    case 758u: goto L_08897E30;
    case 759u: goto L_08897E3C;
    case 760u: goto L_08897E4C;
    case 761u: goto L_08897E84;
    case 762u: goto L_08897ED4;
    case 763u: goto L_08897EE4;
    case 764u: goto L_08897EEC;
    case 765u: goto L_08897EFC;
    case 766u: goto L_08897F34;
    case 767u: goto L_08897F84;
    case 768u: goto L_08897F94;
    case 769u: goto L_08897FB4;
    case 770u: goto L_08897FBC;
    case 771u: goto L_08897FD4;
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
L_08894000:
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_16, aot_gpr_17, ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[23] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08894204;
      }
      goto L_0889402C;
    }
L_0889402C:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_gpr_4 = (18804u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 9214u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (50042u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (16384u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (ctx.lo);
    goto L_08894060;
L_08894060:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
      if (branch_taken) {
          goto L_08894078;
      }
      goto L_08894068;
    }
L_08894068:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
        goto L_08894080;
    }
    goto L_08894078;
L_08894078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088940A0;
      }
      goto L_08894080;
    }
L_08894080:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_0889409C;
    }
    goto L_08894094;
L_08894094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088940A0;
      }
      goto L_0889409C;
    }
L_0889409C:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[20]);
    goto L_088940A0;
L_088940A0:
    aot_gpr_16 = (ctx.gpr[18] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088941F0;
      }
      goto L_088940AC;
    }
L_088940AC:
    aot_gpr_17 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088941F0;
      }
      goto L_088940C4;
    }
L_088940C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2276)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088940F4;
      }
      goto L_088940D4;
    }
L_088940D4:
    ctx.gpr[31] = (0x088940DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088940DCu) goto L_088940DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088940DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088940F4;
      }
      goto L_088940E4;
    }
L_088940E4:
    ctx.gpr[31] = (0x088940ECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088940ECu) goto L_088940EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088940EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088941F0;
      }
      goto L_088940F4;
    }
L_088940F4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08894118;
      }
      goto L_08894108;
    }
L_08894108:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08894118;
L_08894118:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(56)));
    ctx.gpr[11] = (aot_gpr_4 ^ 39u);
    ctx.gpr[11] = (ctx.gpr[11] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(0);
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
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08894150u);
    ctx.gpr[10] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894150u) goto L_08894150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894150:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[2] << 3u);
    aot_gpr_5 = (ctx.gpr[2] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[2] + aot_gpr_5);
    ctx.gpr[10] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(112));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x088941DCu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088941DCu) goto L_088941DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088941DC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088941F0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088941F0u) goto L_088941F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088941F0:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08894060;
      }
      goto L_08894204;
    }
L_08894204:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      aot_gpr_17 = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      ctx.gpr[20] = aot_run_words[8];
      ctx.gpr[21] = aot_run_words[9];
      ctx.gpr[22] = aot_run_words[10];
      ctx.gpr[23] = aot_run_words[11];
      ctx.gpr[30] = aot_run_words[12];
      ctx.gpr[31] = aot_run_words[13];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08894244:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const std::uint32_t aot_run_words[8]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), aot_gpr_16, aot_gpr_17, ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[30] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08894528;
      }
      goto L_08894298;
    }
L_08894298:
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    ctx.gpr[21] = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (18804u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 9214u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (50042u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16448u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    goto L_088942D8;
L_088942D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
      if (branch_taken) {
          goto L_088942F0;
      }
      goto L_088942E0;
    }
L_088942E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
        goto L_088942F8;
    }
    goto L_088942F0;
L_088942F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 0u);
      if (branch_taken) {
          goto L_08894318;
      }
      goto L_088942F8;
    }
L_088942F8:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_08894314;
    }
    goto L_0889430C;
L_0889430C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 0u);
      if (branch_taken) {
          goto L_08894318;
      }
      goto L_08894314;
    }
L_08894314:
    aot_gpr_17 = (aot_gpr_17 + ctx.gpr[21]);
    goto L_08894318;
L_08894318:
    aot_gpr_16 = (aot_gpr_17 | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08894514;
      }
      goto L_08894324;
    }
L_08894324:
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08894514;
      }
      goto L_0889433C;
    }
L_0889433C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(340)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08894398;
      }
      goto L_08894354;
    }
L_08894354:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(112));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x08894390u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894390u) goto L_08894390;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894390:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08894514;
      }
      goto L_08894398;
    }
L_08894398:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(612)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088943BC;
      }
      goto L_088943A8;
    }
L_088943A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (32u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088943E8;
      }
      goto L_088943BC;
    }
L_088943BC:
    ctx.gpr[31] = (0x088943C4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088943C4u) goto L_088943C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088943C4:
    { const bool branch_taken = aot_gpr_17 == ctx.gpr[2];
      if (branch_taken) {
          goto L_088943E8;
      }
      goto L_088943CC;
    }
L_088943CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088944C4;
      }
      goto L_088943D8;
    }
L_088943D8:
    ctx.gpr[31] = (0x088943E0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(900)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088943E0u) goto L_088943E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088943E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088944C4;
      }
      goto L_088943E8;
    }
L_088943E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08894418u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894418u) goto L_08894418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894418:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[2] << 3u);
    aot_gpr_5 = (ctx.gpr[2] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[2] + aot_gpr_5);
    ctx.gpr[10] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(112));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[28])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x088944A8u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088944A8u) goto L_088944A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088944A8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088944BCu);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088944BCu) goto L_088944BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088944BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08894514;
      }
      goto L_088944C4;
    }
L_088944C4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(612)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088944E4;
      }
      goto L_088944D4;
    }
L_088944D4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(612)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08894514;
      }
      goto L_088944E4;
    }
L_088944E4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088944F0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088944F0u) goto L_088944F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088944F0:
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08894514;
      }
      goto L_088944F8;
    }
L_088944F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08894514u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894514u) goto L_08894514;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894514:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_088942D8;
      }
      goto L_08894528;
    }
L_08894528:
    { std::uint32_t aot_run_words[15]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      aot_gpr_16 = aot_run_words[5];
      aot_gpr_17 = aot_run_words[6];
      ctx.gpr[18] = aot_run_words[7];
      ctx.gpr[19] = aot_run_words[8];
      ctx.gpr[20] = aot_run_words[9];
      ctx.gpr[21] = aot_run_words[10];
      ctx.gpr[22] = aot_run_words[11];
      ctx.gpr[23] = aot_run_words[12];
      ctx.gpr[30] = aot_run_words[13];
      ctx.gpr[31] = aot_run_words[14];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0889456C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088945C0;
      }
      goto L_0889458C;
    }
L_0889458C:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    goto L_08894594;
L_08894594:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(12));
        goto L_088945B4;
    }
    goto L_088945A4;
L_088945A4:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088945B8;
      }
      goto L_088945B4;
    }
L_088945B4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_088945B8;
L_088945B8:
    if (aot_gpr_6 != 0u) {
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
        goto L_08894594;
    }
    goto L_088945C0;
L_088945C0:
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_088945E4;
    }
    goto L_088945C8;
L_088945C8:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (ctx.gpr[7] < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
        goto L_088945E8;
    }
    goto L_088945E0;
L_088945E0:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_088945E4;
L_088945E4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    goto L_088945E8;
L_088945E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08894620;
      }
      goto L_08894618;
    }
L_08894618:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08894624;
      }
      goto L_08894620;
    }
L_08894620:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    goto L_08894624;
L_08894624:
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0889462C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[8]{aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08894744;
      }
      goto L_08894668;
    }
L_08894668:
    ctx.gpr[21] = (0u | 3u);
    ctx.gpr[22] = (0u | 500u);
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    ctx.gpr[20] = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_4);
    goto L_08894680;
L_08894680:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
      if (branch_taken) {
          goto L_08894698;
      }
      goto L_08894688;
    }
L_08894688:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
        goto L_088946A0;
    }
    goto L_08894698;
L_08894698:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088946C0;
      }
      goto L_088946A0;
    }
L_088946A0:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
        goto L_088946BC;
    }
    goto L_088946B4;
L_088946B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088946C0;
      }
      goto L_088946BC;
    }
L_088946BC:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    goto L_088946C0;
L_088946C0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08894730;
      }
      goto L_088946CC;
    }
L_088946CC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08894730;
      }
      goto L_088946D8;
    }
L_088946D8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1653))))));
    aot_gpr_5 = (aot_gpr_5 & 7u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[21];
      if (branch_taken) {
          goto L_08894730;
      }
      goto L_088946E8;
    }
L_088946E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1656)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_16;
      if (branch_taken) {
          goto L_08894730;
      }
      goto L_088946F4;
    }
L_088946F4:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(666)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 501 ? 1u : 0u);
      if (branch_taken) {
          goto L_08894708;
      }
      goto L_08894700;
    }
L_08894700:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08894730;
      }
      goto L_08894708;
    }
L_08894708:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(ctx.gpr[22]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1656)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(668), aot_gpr_5);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08894730;
      }
      goto L_0889471C;
    }
L_0889471C:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(668));
      if (branch_taken) {
          goto L_08894730;
      }
      goto L_08894724;
    }
L_08894724:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[31] = (0x08894730u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894730u) goto L_08894730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894730:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_08894680;
      }
      goto L_08894744;
    }
L_08894744:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088947A8;
      }
      goto L_08894750;
    }
L_08894750:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08894764u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0031_entry, 31u, 58u, 0x088806F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894764u) goto L_08894764;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894764:
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8433)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x08894780u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_0889456C;
L_08894780:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.gpr[31] = (0x088947A0u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 186u, 0x08ADC9FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088947A0u) goto L_088947A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088947A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088947B0;
      }
      goto L_088947A8;
    }
L_088947A8:
    ctx.gpr[31] = (0x088947B0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0031_entry, 31u, 58u, 0x088806F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088947B0u) goto L_088947B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088947B0:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[31] = aot_run_words[7];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088947D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 & 4u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08894814;
      }
      goto L_088947F4;
    }
L_088947F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0889481C;
      }
      goto L_0889480C;
    }
L_0889480C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08894850;
      }
      goto L_08894814;
    }
L_08894814:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08894888;
      }
      goto L_0889481C;
    }
L_0889481C:
    ctx.gpr[31] = (0x08894824u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894824u) goto L_08894824;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894824:
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_16;
      if (branch_taken) {
          goto L_08894840;
      }
      goto L_0889482C;
    }
L_0889482C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08894838u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894838u) goto L_08894838;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894838:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08894848;
      }
      goto L_08894840;
    }
L_08894840:
    ctx.gpr[31] = (0x08894848u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894848u) goto L_08894848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894848:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08894888;
      }
      goto L_08894850;
    }
L_08894850:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x0889485Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0889485Cu) goto L_0889485C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0889485C:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08894880;
      }
      goto L_08894864;
    }
L_08894864:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x08894880u);
    aot_gpr_5 = (0u | 3u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894880u) goto L_08894880;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894880:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08894848;
      }
      goto L_08894888;
    }
L_08894888:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08894898:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[14]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_08894AC4;
      }
      goto L_08894900;
    }
L_08894900:
    aot_gpr_17 = (0u | 0u);
    goto L_08894904;
L_08894904:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
      if (branch_taken) {
          goto L_0889491C;
      }
      goto L_0889490C;
    }
L_0889490C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
        goto L_08894924;
    }
    goto L_0889491C;
L_0889491C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08894944;
      }
      goto L_08894924;
    }
L_08894924:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_08894940;
    }
    goto L_08894938;
L_08894938:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08894944;
      }
      goto L_08894940;
    }
L_08894940:
    ctx.gpr[18] = (ctx.gpr[18] + aot_gpr_17);
    goto L_08894944;
L_08894944:
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_08894950;
    }
L_08894950:
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[30])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_08894970;
    }
L_08894970:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_08894984;
    }
L_08894984:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_08894998;
    }
L_08894998:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_088949AC;
    }
L_088949AC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_088949C0;
    }
L_088949C0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_088949D4;
    }
L_088949D4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_088949E4;
    }
L_088949E4:
    ctx.gpr[31] = (0x088949ECu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 772u, 0x08AFF508u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088949ECu) goto L_088949EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088949EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_088949F4;
    }
L_088949F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08894A14;
      }
      goto L_08894A00;
    }
L_08894A00:
    ctx.gpr[31] = (0x08894A08u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(900)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894A08u) goto L_08894A08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894A08:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08894A14u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894A14u) goto L_08894A14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894A14:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(565)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08894A74;
      }
      goto L_08894A28;
    }
L_08894A28:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08894A34u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894A34u) goto L_08894A34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894A34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08894A60;
      }
      goto L_08894A3C;
    }
L_08894A3C:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08894A48u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894A48u) goto L_08894A48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894A48:
    ctx.gpr[31] = (0x08894A50u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894A50u) goto L_08894A50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894A50:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08894A60u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894A60u) goto L_08894A60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894A60:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(565)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08894A28;
      }
      goto L_08894A74;
    }
L_08894A74:
    ctx.gpr[31] = (0x08894A7Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 369u, 0x08B41658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894A7Cu) goto L_08894A7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894A7C:
    ctx.gpr[31] = (0x08894A84u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 550u, 0x08B02100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894A84u) goto L_08894A84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894A84:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08894A90u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894A90u) goto L_08894A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894A90:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08894AB4;
      }
      goto L_08894A98;
    }
L_08894A98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x08894AB4u);
    aot_gpr_5 = (0u | 3u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894AB4u) goto L_08894AB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894AB4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(2080));
      if (branch_taken) {
          goto L_08894904;
      }
      goto L_08894AC4;
    }
L_08894AC4:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      aot_gpr_16 = aot_run_words[6];
      aot_gpr_17 = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      ctx.gpr[19] = aot_run_words[9];
      ctx.gpr[20] = aot_run_words[10];
      ctx.gpr[21] = aot_run_words[11];
      ctx.gpr[22] = aot_run_words[12];
      ctx.gpr[31] = aot_run_words[13];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08894B04:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[12]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_17 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_08894C6C;
      }
      goto L_08894B64;
    }
L_08894B64:
    aot_gpr_16 = (0u | 0u);
    goto L_08894B68;
L_08894B68:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_17) < 0;
      if (branch_taken) {
          goto L_08894B80;
      }
      goto L_08894B70;
    }
L_08894B70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08894B88;
    }
    goto L_08894B80;
L_08894B80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08894BA8;
      }
      goto L_08894B88;
    }
L_08894B88:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_17);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08894BA4;
    }
    goto L_08894B9C;
L_08894B9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08894BA8;
      }
      goto L_08894BA4;
    }
L_08894BA4:
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_16);
    goto L_08894BA8;
L_08894BA8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894BB0;
    }
L_08894BB0:
    ctx.gpr[31] = (0x08894BB8u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894BB8u) goto L_08894BB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894BB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894BC0;
    }
L_08894BC0:
    ctx.gpr[31] = (0x08894BC8u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 128u, 0x0890C798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894BC8u) goto L_08894BC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894BC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894BD0;
    }
L_08894BD0:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[30])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894BF0;
    }
L_08894BF0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894C04;
    }
L_08894C04:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894C18;
    }
L_08894C18:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894C2C;
    }
L_08894C2C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894C40;
    }
L_08894C40:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08894C5C;
      }
      goto L_08894C54;
    }
L_08894C54:
    ctx.gpr[31] = (0x08894C5Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894C5Cu) goto L_08894C5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894C5C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(3344));
      if (branch_taken) {
          goto L_08894B68;
      }
      goto L_08894C6C;
    }
L_08894C6C:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      aot_gpr_16 = aot_run_words[6];
      aot_gpr_17 = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      ctx.gpr[19] = aot_run_words[9];
      ctx.gpr[20] = aot_run_words[10];
      ctx.gpr[31] = aot_run_words[11];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08894CA4:
    ctx.gpr[7] = (aot_gpr_4 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-65));
      if (branch_taken) {
          goto L_08894D38;
      }
      goto L_08894CC0;
    }
L_08894CC0:
    ctx.gpr[9] = (0u | 0u);
    goto L_08894CC4;
L_08894CC4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08894CDC;
      }
      goto L_08894CCC;
    }
L_08894CCC:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
        goto L_08894CE4;
    }
    goto L_08894CDC;
L_08894CDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08894D04;
      }
      goto L_08894CE4;
    }
L_08894CE4:
    ctx.gpr[10] = (ctx.gpr[10] + aot_gpr_4);
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] & 128u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
        goto L_08894D00;
    }
    goto L_08894CF8;
L_08894CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08894D04;
      }
      goto L_08894D00;
    }
L_08894D00:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    goto L_08894D04;
L_08894D04:
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_08894D28;
      }
      goto L_08894D0C;
    }
L_08894D0C:
    ctx.gpr[11] = (ctx.gpr[7] & 255u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[11] & 1u);
    ctx.gpr[11] = (ctx.gpr[11] << 6u);
    ctx.gpr[11] = (ctx.gpr[2] | ctx.gpr[11]);
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[11]));
    goto L_08894D28;
L_08894D28:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2080));
      if (branch_taken) {
          goto L_08894CC4;
      }
      goto L_08894D38;
    }
L_08894D38:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08894D40:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[7]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08894E2C;
      }
      goto L_08894D78;
    }
L_08894D78:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_17 = (0u | 0u);
    goto L_08894D80;
L_08894D80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
      if (branch_taken) {
          goto L_08894D98;
      }
      goto L_08894D88;
    }
L_08894D88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08894DA0;
    }
    goto L_08894D98;
L_08894D98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08894DC0;
      }
      goto L_08894DA0;
    }
L_08894DA0:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08894DBC;
    }
    goto L_08894DB4;
L_08894DB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08894DC0;
      }
      goto L_08894DBC;
    }
L_08894DBC:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_17);
    goto L_08894DC0;
L_08894DC0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08894E1C;
      }
      goto L_08894DC8;
    }
L_08894DC8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[16];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08894E1C;
      }
      goto L_08894E14;
    }
L_08894E14:
    ctx.gpr[31] = (0x08894E1Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 479u, 0x08B01C90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08894E1Cu) goto L_08894E1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08894E1C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(2080));
      if (branch_taken) {
          goto L_08894D80;
      }
      goto L_08894E2C;
    }
L_08894E2C:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_17 = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[31] = aot_run_words[6];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08894E50:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    { const std::uint32_t aot_run_words[15]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words); }
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[26] = ctx.fpr[17] - aot_fpr_20;
    ctx.fpr[24] = ctx.fpr[30] + aot_fpr_20;
    ctx.fpr[22] = ctx.fpr[16] - aot_fpr_20;
    aot_fpr_20 = ctx.fpr[15] + aot_fpr_20;
    aot_gpr_5 = (0u | 49u);
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = ctx.fpr[26] / aot_fpr_12;
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    aot_gpr_5 = (16840u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 49u);
        goto L_08894EFC;
    }
    goto L_08894EFC;
L_08894EFC:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08894F08;
    }
    goto L_08894F08;
L_08894F08:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_16 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_16 = (aot_gpr_4 | 0u);
        goto L_08894F1C;
    }
    goto L_08894F1C;
L_08894F1C:
    aot_gpr_6 = (0u | 49u);
    ctx.fpr[15] = ctx.fpr[22] / aot_fpr_12;
    ctx.fpr[15] = ctx.fpr[15] + aot_fpr_14;
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 49u);
        goto L_08894F3C;
    }
    goto L_08894F3C;
L_08894F3C:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08894F48;
    }
    goto L_08894F48;
L_08894F48:
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[21] = (aot_gpr_4 | 0u);
        goto L_08894F5C;
    }
    goto L_08894F5C;
L_08894F5C:
    aot_gpr_6 = (0u | 49u);
    ctx.fpr[15] = ctx.fpr[24] / aot_fpr_12;
    aot_fpr_13 = ctx.fpr[15] + aot_fpr_13;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 49u);
        goto L_08894F7C;
    }
    goto L_08894F7C;
L_08894F7C:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08894F88;
    }
    goto L_08894F88;
L_08894F88:
    aot_gpr_17 = (0u | 50u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 50 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_17 = (aot_gpr_4 | 0u);
        goto L_08894F98;
    }
    goto L_08894F98;
L_08894F98:
    aot_gpr_6 = (0u | 49u);
    aot_fpr_12 = aot_fpr_20 / aot_fpr_12;
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 49u);
        goto L_08894FB8;
    }
    goto L_08894FB8;
L_08894FB8:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08894FC4;
    }
    goto L_08894FC4;
L_08894FC4:
    ctx.gpr[18] = (0u | 50u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 50 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[18] = (aot_gpr_4 | 0u);
        goto L_08894FD4;
    }
    goto L_08894FD4;
L_08894FD4:
    aot_gpr_4 = (0u | 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08894FEC;
      }
      goto L_08894FE4;
    }
L_08894FE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08894FFC;
      }
      goto L_08894FEC;
    }
L_08894FEC:
    ctx.gpr[31] = (0x08894FF4u);
    goto L_088954BC;
L_08894FF4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08894FFC;
L_08894FFC:
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[21] << 4u);
      if (branch_taken) {
          goto L_0889510C;
      }
      goto L_0889500C;
    }
L_0889500C:
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    ctx.gpr[21] = (aot_gpr_4 + ctx.gpr[21]);
    goto L_08895018;
L_08895018:
    ctx.gpr[20] = (aot_gpr_16 | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_16 + ctx.gpr[21]);
      if (branch_taken) {
          goto L_088950FC;
      }
      goto L_08895028;
    }
L_08895028:
    ctx.gpr[22] = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[22] = (ctx.gpr[22] - aot_gpr_4);
    goto L_08895034;
L_08895034:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[23] = (aot_gpr_4 + ctx.gpr[22]);
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(28));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08895070u);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 655u, 0x0889BA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08895070u) goto L_08895070;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08895070:
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08895098u);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 655u, 0x0889BA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08895098u) goto L_08895098;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08895098:
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(36));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x088950C4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08895150;
L_088950C4:
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(40));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088950ECu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08895150;
L_088950EC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08895034;
      }
      goto L_088950FC;
    }
L_088950FC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08895018;
      }
      goto L_0889510C;
    }
L_0889510C:
    { std::uint32_t aot_run_words[15]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      aot_gpr_16 = aot_run_words[6];
      aot_gpr_17 = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      ctx.gpr[19] = aot_run_words[9];
      ctx.gpr[20] = aot_run_words[10];
      ctx.gpr[21] = aot_run_words[11];
      ctx.gpr[22] = aot_run_words[12];
      ctx.gpr[23] = aot_run_words[13];
      ctx.gpr[31] = aot_run_words[14];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08895150:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[14]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const bool branch_taken = aot_gpr_16 == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08895300;
      }
      goto L_088951A4;
    }
L_088951A4:
    ctx.gpr[19] = (0u | 58u);
    ctx.gpr[20] = (0u | 57u);
    ctx.gpr[21] = (0u | 8u);
    ctx.gpr[22] = (0u | 18u);
    ctx.gpr[23] = (0u | 9u);
    ctx.gpr[30] = (0u | 6u);
    goto L_088951BC;
L_088951BC:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_088951D4;
    }
L_088951D4:
    aot_mem.aot_direct_store16(aot_gpr_17 + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[31] = (0x088951E0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088951E0u) goto L_088951E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088951E0:
    { const bool branch_taken = aot_gpr_17 == ctx.gpr[2];
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_088951E8;
    }
L_088951E8:
    ctx.gpr[31] = (0x088951F0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(676)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088951F0u) goto L_088951F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088951F0:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_088951F8;
    }
L_088951F8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_08895210;
    }
L_08895210:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_08895220;
    }
L_08895220:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_08895234;
    }
L_08895234:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_08895244;
    }
L_08895244:
    ctx.gpr[31] = (0x0889524Cu);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(2192)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0889524Cu) goto L_0889524C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0889524C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
      if (branch_taken) {
          goto L_08895270;
      }
      goto L_08895254;
    }
L_08895254:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_08895260;
    }
L_08895260:
    ctx.gpr[31] = (0x08895268u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08895268u) goto L_08895268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08895268:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_08895270;
    }
L_08895270:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_0889527C;
    }
L_0889527C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_08895284;
    }
L_08895284:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
      if (branch_taken) {
          goto L_088952A0;
      }
      goto L_08895290;
    }
L_08895290:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
      if (branch_taken) {
          goto L_088952A0;
      }
      goto L_08895298;
    }
L_08895298:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[23];
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_088952A0;
    }
L_088952A0:
    ctx.gpr[31] = (0x088952A8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088952A8u) goto L_088952A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088952A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088952E8;
      }
      goto L_088952B0;
    }
L_088952B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[30];
      if (branch_taken) {
          goto L_088952CC;
      }
      goto L_088952BC;
    }
L_088952BC:
    ctx.gpr[31] = (0x088952C4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 712u, 0x08A33164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088952C4u) goto L_088952C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088952C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088952D4;
      }
      goto L_088952CC;
    }
L_088952CC:
    ctx.gpr[31] = (0x088952D4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088952D4u) goto L_088952D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088952D4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x088952E0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088952E0u) goto L_088952E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088952E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088952F8;
      }
      goto L_088952E8;
    }
L_088952E8:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(640), 0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x088952F8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088952F8u) goto L_088952F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088952F8:
    { const bool branch_taken = aot_gpr_16 != 0u;
      if (branch_taken) {
          goto L_088951BC;
      }
      goto L_08895300;
    }
L_08895300:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      aot_gpr_17 = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      ctx.gpr[20] = aot_run_words[8];
      ctx.gpr[21] = aot_run_words[9];
      ctx.gpr[22] = aot_run_words[10];
      ctx.gpr[23] = aot_run_words[11];
      ctx.gpr[30] = aot_run_words[12];
      ctx.gpr[31] = aot_run_words[13];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08895340:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_gpr_17 | 0u);
      if (branch_taken) {
          goto L_08895400;
      }
      goto L_08895370;
    }
L_08895370:
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_17 << 5u);
    aot_gpr_16 = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_gpr_16 = (aot_gpr_16 + aot_gpr_4);
    goto L_08895384;
L_08895384:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_17) < 0;
      if (branch_taken) {
          goto L_0889539C;
      }
      goto L_0889538C;
    }
L_0889538C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_088953A4;
    }
    goto L_0889539C;
L_0889539C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088953C4;
      }
      goto L_088953A4;
    }
L_088953A4:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_17);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088953C0;
    }
    goto L_088953B8;
L_088953B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088953C4;
      }
      goto L_088953C0;
    }
L_088953C0:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    goto L_088953C4;
L_088953C4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088953EC;
      }
      goto L_088953CC;
    }
L_088953CC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088953EC;
      }
      goto L_088953DC;
    }
L_088953DC:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[31] = (0x088953ECu);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088953ECu) goto L_088953EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088953EC:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_17 = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (aot_gpr_17 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_08895384;
      }
      goto L_08895400;
    }
L_08895400:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_17 = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08895420:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25484)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08895438;
      }
      goto L_08895430;
    }
L_08895430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889544C;
      }
      goto L_08895438;
    }
L_08895438:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(27872));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_0889544C;
L_0889544C:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08895454:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2276)));
    aot_gpr_6 = (0u | 2u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08895490;
      }
      goto L_08895464;
    }
L_08895464:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-120));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(34) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088954A0;
      }
      goto L_08895478;
    }
L_08895478:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-22992)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08895490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088954A4;
      }
      goto L_08895498;
    }
L_08895498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088954A4;
      }
      goto L_088954A0;
    }
L_088954A0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088954A4;
L_088954A4:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088954AC:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2052)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088954BC:
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    goto L_088954C4;
L_088954C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088954F0;
      }
      goto L_088954D8;
    }
L_088954D8:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088954D8;
      }
      goto L_088954F0;
    }
L_088954F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08895514;
      }
      goto L_088954FC;
    }
L_088954FC:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088954FC;
      }
      goto L_08895514;
    }
L_08895514:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08895538;
      }
      goto L_08895520;
    }
L_08895520:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08895520;
      }
      goto L_08895538;
    }
L_08895538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0889555C;
      }
      goto L_08895544;
    }
L_08895544:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08895544;
      }
      goto L_0889555C;
    }
L_0889555C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08895580;
      }
      goto L_08895568;
    }
L_08895568:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08895568;
      }
      goto L_08895580;
    }
L_08895580:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[7]) < 2500 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088954C4;
      }
      goto L_08895590;
    }
L_08895590:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08895598:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[10]{aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[30] = (ctx.gpr[7] & 255u);
    ctx.gpr[23] = (ctx.gpr[8] & 255u);
    ctx.gpr[22] = (ctx.gpr[9] & 255u);
    ctx.gpr[21] = (ctx.gpr[10] & 255u);
    ctx.gpr[20] = (ctx.gpr[11] & 255u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08895678;
      }
      goto L_088955F8;
    }
L_088955F8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08895610u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_08895610:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088956A0;
      }
      goto L_08895618;
    }
L_08895618:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08895630u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_08895630:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08895698;
      }
      goto L_08895638;
    }
L_08895638:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08895650u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_08895650:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08895690;
      }
      goto L_08895658;
    }
L_08895658:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08895670u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_08895670:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08895688;
      }
      goto L_08895678;
    }
L_08895678:
    { const bool branch_taken = ctx.gpr[30] != 0u;
      if (branch_taken) {
          goto L_088956A8;
      }
      goto L_08895680;
    }
L_08895680:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088956E8;
      }
      goto L_08895688;
    }
L_08895688:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895690;
    }
L_08895690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895698;
    }
L_08895698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_088956A0;
    }
L_088956A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_088956A8;
    }
L_088956A8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(28));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088956C0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_088956C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08895700;
      }
      goto L_088956C8;
    }
L_088956C8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088956E0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_088956E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088956F8;
      }
      goto L_088956E8;
    }
L_088956E8:
    { const bool branch_taken = ctx.gpr[23] != 0u;
      if (branch_taken) {
          goto L_08895708;
      }
      goto L_088956F0;
    }
L_088956F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08895748;
      }
      goto L_088956F8;
    }
L_088956F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895700;
    }
L_08895700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895708;
    }
L_08895708:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(36));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08895720u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_08895720:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08895760;
      }
      goto L_08895728;
    }
L_08895728:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(40));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08895740u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_08895740:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08895758;
      }
      goto L_08895748;
    }
L_08895748:
    { const bool branch_taken = ctx.gpr[22] != 0u;
      if (branch_taken) {
          goto L_08895768;
      }
      goto L_08895750;
    }
L_08895750:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088957A8;
      }
      goto L_08895758;
    }
L_08895758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895760;
    }
L_08895760:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895768;
    }
L_08895768:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08895780u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    goto L_08895E44;
L_08895780:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08895810;
      }
      goto L_08895788;
    }
L_08895788:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088957A0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    goto L_08895E44;
L_088957A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08895808;
      }
      goto L_088957A8;
    }
L_088957A8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_08895800;
      }
      goto L_088957B0;
    }
L_088957B0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088957C8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_088957C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088957F8;
      }
      goto L_088957D0;
    }
L_088957D0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(52));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088957E8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08895E44;
L_088957E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08895800;
      }
      goto L_088957F0;
    }
L_088957F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_088957F8;
    }
L_088957F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895800;
    }
L_08895800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895808;
    }
L_08895808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895814;
      }
      goto L_08895810;
    }
L_08895810:
    ctx.gpr[2] = (0u | 0u);
    goto L_08895814;
L_08895814:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08895844:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[10]{aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[22] = (ctx.gpr[10] & 255u);
    ctx.gpr[23] = (ctx.gpr[11] & 255u);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    aot_gpr_17 = (aot_gpr_17 & 255u);
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_gpr_16 = (aot_gpr_16 & 255u);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8072)));
    ctx.gpr[10] = (0u < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[11] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8423)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (0u < ctx.gpr[11] ? 1u : 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08895988;
      }
      goto L_088958F8;
    }
L_088958F8:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0889591Cu);
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0889591Cu) goto L_0889591C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0889591C:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08895940u);
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08895940u) goto L_08895940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08895940:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08895964u);
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08895964u) goto L_08895964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08895964:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08895988u);
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08895988u) goto L_08895988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08895988:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_088959D8;
      }
      goto L_08895990;
    }
L_08895990:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088959B4u);
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088959B4u) goto L_088959B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088959B4:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088959D8u);
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088959D8u) goto L_088959D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088959D8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[22] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08895A54;
      }
      goto L_088959E0;
    }
L_088959E0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088959F4;
      }
      goto L_088959EC;
    }
L_088959EC:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088959F4;
L_088959F4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08895A04;
      }
      goto L_088959FC;
    }
L_088959FC:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08895A04;
L_08895A04:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(36));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08895A28u);
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08895A28u) goto L_08895A28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08895A28:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(40));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08895A4Cu);
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08895A4Cu) goto L_08895A4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08895A4C:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(0u));
    goto L_08895A54;
L_08895A54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08895AA8;
      }
      goto L_08895A60;
    }
L_08895A60:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08895A84u);
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08895A84u) goto L_08895A84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08895A84:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08895AA8u);
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08895AA8u) goto L_08895AA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08895AA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08895AD8;
      }
      goto L_08895AB4;
    }
L_08895AB4:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08895AD8u);
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08895AD8u) goto L_08895AD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08895AD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(9)));
        goto L_08895B30;
    }
    goto L_08895AE4;
L_08895AE4:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08895B08u);
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08895B08u) goto L_08895B08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08895B08:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(52));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08895B2Cu);
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 691u, 0x0889BE28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08895B2Cu) goto L_08895B2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08895B2C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(9)));
    goto L_08895B30;
L_08895B30:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08895B60;
      }
      goto L_08895B54;
    }
L_08895B54:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08895B64;
      }
      goto L_08895B60;
    }
L_08895B60:
    ctx.gpr[2] = (0u | 0u);
    goto L_08895B64;
L_08895B64:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08895B94:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[11]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[22] = (ctx.gpr[9] & 255u);
    ctx.gpr[23] = (ctx.gpr[10] & 255u);
    ctx.gpr[9] = (ctx.gpr[11] & 255u);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_gpr_17 = (aot_gpr_17 & 255u);
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (16256u << 16u);
    aot_fpr_20 = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_gpr_6 | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08895CA8;
      }
      goto L_08895C18;
    }
L_08895C18:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08895C3Cu);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895C3C:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08895C60u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895C60:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08895C84u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895C84:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08895CA8u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895CA8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08895CF8;
      }
      goto L_08895CB0;
    }
L_08895CB0:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08895CD4u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895CD4:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08895CF8u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895CF8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_08895D48;
      }
      goto L_08895D00;
    }
L_08895D00:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(36));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08895D24u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895D24:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(40));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08895D48u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895D48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08895D9C;
      }
      goto L_08895D54;
    }
L_08895D54:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08895D78u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    goto L_08896024;
L_08895D78:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08895D9Cu);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    goto L_08896024;
L_08895D9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08895DF0;
      }
      goto L_08895DA8;
    }
L_08895DA8:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08895DCCu);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895DCC:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(52));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[10] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08895DF0u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08896024;
L_08895DF0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08895E0C;
      }
      goto L_08895E04;
    }
L_08895E04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08895E10;
      }
      goto L_08895E0C;
    }
L_08895E0C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08895E10;
L_08895E10:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_17 = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      ctx.gpr[23] = aot_run_words[8];
      ctx.gpr[30] = aot_run_words[9];
      ctx.gpr[31] = aot_run_words[10];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08895E44:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[10]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_17 = (aot_gpr_6 & 255u);
    ctx.gpr[18] = (ctx.gpr[7] & 255u);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08895FF0;
      }
      goto L_08895E88;
    }
L_08895E88:
    aot_gpr_4 = (16168u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 62915u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (0u | 58u);
    goto L_08895E98;
L_08895E98:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_08895FE8;
      }
      goto L_08895EA8;
    }
L_08895EA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_5 = (aot_gpr_4 ^ 8u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08895EF8;
      }
      goto L_08895EC4;
    }
L_08895EC4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(483))))));
    aot_gpr_5 = (aot_gpr_5 & 2u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08895EF8;
      }
      goto L_08895EDC;
    }
L_08895EDC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08895EF8;
      }
      goto L_08895EE4;
    }
L_08895EE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08895FE8;
      }
      goto L_08895EF8;
    }
L_08895EF8:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8072)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08895F2C;
      }
      goto L_08895F08;
    }
L_08895F08:
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08895F2C;
      }
      goto L_08895F1C;
    }
L_08895F1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[22];
      if (branch_taken) {
          goto L_08895F2C;
      }
      goto L_08895F28;
    }
L_08895F28:
    aot_gpr_5 = (0u | 0u);
    goto L_08895F2C;
L_08895F2C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08895FE8;
      }
      goto L_08895F34;
    }
L_08895F34:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08895FE8;
      }
      goto L_08895F44;
    }
L_08895F44:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 512u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08895FE8;
      }
      goto L_08895F5C;
    }
L_08895F5C:
    aot_mem.aot_direct_store16(ctx.gpr[21] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8068)));
    { const bool branch_taken = ctx.gpr[21] == aot_gpr_4;
      if (branch_taken) {
          goto L_08895FE8;
      }
      goto L_08895F6C;
    }
L_08895F6C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_5 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08895F88;
      }
      goto L_08895F74;
    }
L_08895F74:
    ctx.gpr[31] = (0x08895F7Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    goto L_088961FC;
L_08895F7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08895FE8;
      }
      goto L_08895F84;
    }
L_08895F84:
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    goto L_08895F88;
L_08895F88:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (aot_gpr_17 & 255u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08895FB4u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 207u, 0x088B1820u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08895FB4u) goto L_08895FB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08895FB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08895FC4;
      }
      goto L_08895FBC;
    }
L_08895FBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08895FD8;
      }
      goto L_08895FC4;
    }
L_08895FC4:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08895FD4u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 435u, 0x088B3800u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08895FD4u) goto L_08895FD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08895FD4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08895FD8;
L_08895FD8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_08895FE8;
      }
      goto L_08895FE0;
    }
L_08895FE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08895FF4;
      }
      goto L_08895FE8;
    }
L_08895FE8:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_08895E98;
      }
      goto L_08895FF0;
    }
L_08895FF0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08895FF4;
L_08895FF4:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_17 = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      ctx.gpr[23] = aot_run_words[8];
      ctx.gpr[31] = aot_run_words[9];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08896024:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    { const std::uint32_t aot_run_words[11]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words); }
    ctx.gpr[22] = (ctx.gpr[9] & 255u);
    ctx.gpr[21] = (ctx.gpr[11] & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_5);
    ctx.gpr[30] = (ctx.gpr[8] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_6);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[23] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_0889619C;
      }
      goto L_08896080;
    }
L_08896080:
    aot_gpr_4 = (16168u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 62915u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    goto L_08896090;
L_08896090:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0889618C;
      }
      goto L_088960A0;
    }
L_088960A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 8u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088960F0;
      }
      goto L_088960BC;
    }
L_088960BC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(483))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088960F0;
      }
      goto L_088960D4;
    }
L_088960D4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_088960F0;
      }
      goto L_088960DC;
    }
L_088960DC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0889618C;
      }
      goto L_088960F0;
    }
L_088960F0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    aot_gpr_16 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_16;
      if (branch_taken) {
          goto L_0889618C;
      }
      goto L_08896100;
    }
L_08896100:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0889618C;
      }
      goto L_08896118;
    }
L_08896118:
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(aot_gpr_16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_17 = (ctx.gpr[22] & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889614Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 207u, 0x088B1820u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0889614Cu) goto L_0889614C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0889614C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_0889615C;
      }
      goto L_08896154;
    }
L_08896154:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_08896180;
      }
      goto L_0889615C;
    }
L_0889615C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    ctx.gpr[8] = (aot_gpr_29 | 0u);
    ctx.gpr[9] = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x0889617Cu);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 23u, 0x088B426Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0889617Cu) goto L_0889617C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0889617C:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    goto L_08896180;
L_08896180:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_0889618C;
      }
      goto L_08896188;
    }
L_08896188:
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_0889618C;
L_0889618C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08896090;
      }
      goto L_08896194;
    }
L_08896194:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_0889619C;
L_0889619C:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088961C4;
      }
      goto L_088961B4;
    }
L_088961B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088961C8;
      }
      goto L_088961C4;
    }
L_088961C4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088961C8;
L_088961C8:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_17 = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      ctx.gpr[23] = aot_run_words[8];
      ctx.gpr[30] = aot_run_words[9];
      ctx.gpr[31] = aot_run_words[10];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088961FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 10u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08896254;
      }
      goto L_08896224;
    }
L_08896224:
    ctx.gpr[31] = (0x0889622Cu);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 426u, 0x0896DA80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0889622Cu) goto L_0889622C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0889622C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0889624C;
      }
      goto L_08896234;
    }
L_08896234:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(483))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0889625C;
      }
      goto L_08896244;
    }
L_08896244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08896260;
      }
      goto L_0889624C;
    }
L_0889624C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08896260;
      }
      goto L_08896254;
    }
L_08896254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08896260;
      }
      goto L_0889625C;
    }
L_0889625C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08896260;
L_08896260:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08896270:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    { const std::uint32_t aot_run_words[9]{aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25484), 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7636)));
    ctx.gpr[31] = (0x088962A8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088962A8u) goto L_088962A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088962A8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[22] = (2235u << 16u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(27872));
      if (branch_taken) {
          goto L_088963A8;
      }
      goto L_088962B8;
    }
L_088962B8:
    ctx.gpr[18] = (0u | 4u);
    ctx.gpr[20] = (0u | 65535u);
    ctx.gpr[21] = (0u | 80u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    goto L_088962C8;
L_088962C8:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_0889639C;
      }
      goto L_088962DC;
    }
L_088962DC:
    ctx.gpr[19] = (aot_gpr_17 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(618))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08896324;
      }
      goto L_088962F0;
    }
L_088962F0:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(558)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08896318;
      }
      goto L_088962FC;
    }
L_088962FC:
    if (aot_gpr_5 == ctx.gpr[20]) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_0889631C;
    }
    goto L_08896304;
L_08896304:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 496u);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[21];
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0889631C;
      }
      goto L_08896314;
    }
L_08896314:
    aot_gpr_4 = (0u | 1u);
    goto L_08896318;
L_08896318:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0889631C;
L_0889631C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0889639C;
      }
      goto L_08896324;
    }
L_08896324:
    ctx.gpr[31] = (0x0889632Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0889632Cu) goto L_0889632C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0889632C:
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_17;
      if (branch_taken) {
          goto L_0889639C;
      }
      goto L_08896334;
    }
L_08896334:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25484)));
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_5 + ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25484), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0889639C;
      }
      goto L_08896394;
    }
L_08896394:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088963A8;
      }
      goto L_0889639C;
    }
L_0889639C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_16 != 0u;
      if (branch_taken) {
          goto L_088962C8;
      }
      goto L_088963A8;
    }
L_088963A8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25484)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    goto L_088963B0;
L_088963B0:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (aot_gpr_29 | 0u);
      if (branch_taken) {
          goto L_0889640C;
      }
      goto L_088963C4;
    }
L_088963C4:
    ctx.gpr[10] = (ctx.gpr[22] | 0u);
    goto L_088963C8;
L_088963C8:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
      if (branch_taken) {
          goto L_088963F8;
      }
      goto L_088963DC;
    }
L_088963DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    goto L_088963F8;
L_088963F8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088963C8;
      }
      goto L_0889640C;
    }
L_0889640C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088963B0;
      }
      goto L_08896414;
    }
L_08896414:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[31] = aot_run_words[8];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08896440:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6992));
    ctx.gpr[7] = (2231u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32020));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 352u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x0889646Cu);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0889646Cu) goto L_0889646C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0889646C:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08896478:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[8]{aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_16 = (2237u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[31] = (0x088964B8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 530u, 0x0886A6D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088964B8u) goto L_088964B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088964B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    aot_gpr_17 = (2238u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(-6992));
      if (branch_taken) {
          goto L_088964D4;
      }
      goto L_088964C8;
    }
L_088964C8:
    ctx.gpr[31] = (0x088964D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088964D0u) goto L_088964D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088964D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_088964D4;
L_088964D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_gpr_5 ^ 2u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08896508;
      }
      goto L_088964EC;
    }
L_088964EC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08896500;
      }
      goto L_088964F4;
    }
L_088964F4:
    ctx.gpr[31] = (0x088964FCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088964FCu) goto L_088964FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088964FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_08896500;
L_08896500:
    ctx.gpr[31] = (0x08896508u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 93u, 0x0884C8F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08896508u) goto L_08896508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08896508:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_gpr_17 | 0u);
      if (branch_taken) {
          goto L_0889651C;
      }
      goto L_08896514;
    }
L_08896514:
    ctx.gpr[31] = (0x0889651Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0889651Cu) goto L_0889651C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0889651C:
    ctx.gpr[31] = (0x08896524u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0122_entry, 122u, 47u, 0x089EC3FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08896524u) goto L_08896524;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08896524:
    ctx.gpr[31] = (0x0889652Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0031_entry, 31u, 66u, 0x088807A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0889652Cu) goto L_0889652C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0889652C:
    ctx.gpr[31] = (0x08896534u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 62u, 0x0882C3C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08896534u) goto L_08896534;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08896534:
    ctx.gpr[31] = (0x0889653Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 93u, 0x0882C628u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0889653Cu) goto L_0889653C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0889653C:
    ctx.gpr[31] = (0x08896544u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 867u, 0x089C7CE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08896544u) goto L_08896544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08896544:
    aot_gpr_17 = (0u | 0u);
    goto L_08896548;
L_08896548:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08896588;
      }
      goto L_08896554;
    }
L_08896554:
    ctx.gpr[31] = (0x0889655Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0889655Cu) goto L_0889655C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0889655C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08896584;
      }
      goto L_08896568;
    }
L_08896568:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x08896584u);
    aot_gpr_5 = (0u | 3u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08896584u) goto L_08896584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08896584:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_08896588;
L_08896588:
    ctx.gpr[31] = (0x08896590u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 87u, 0x089606D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08896590u) goto L_08896590;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08896590:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(352));
      if (branch_taken) {
          goto L_08896548;
      }
      goto L_088965A0;
    }
L_088965A0:
    aot_gpr_17 = (0u | 0u);
    ctx.gpr[21] = (0u | 5u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[18] = (0u | 0u);
    goto L_088965B0;
L_088965B0:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[18]);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08896604;
      }
      goto L_088965C0;
    }
L_088965C0:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_088965C4;
L_088965C4:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088965D8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088965D8u) goto L_088965D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088965D8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088965FC;
      }
      goto L_088965E0;
    }
L_088965E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x088965FCu);
    aot_gpr_5 = (0u | 3u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088965FCu) goto L_088965FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088965FC:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    aot_gpr_4 = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_088965C4;
      }
      goto L_08896604;
    }
L_08896604:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25488)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08896680;
      }
      goto L_08896614;
    }
L_08896614:
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    goto L_08896618;
L_08896618:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08896678;
      }
      goto L_0889663C;
    }
L_0889663C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
      if (branch_taken) {
          goto L_08896678;
      }
      goto L_08896648;
    }
L_08896648:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08896654u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08896654u) goto L_08896654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08896654:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08896678;
      }
      goto L_0889665C;
    }
L_0889665C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x08896678u);
    aot_gpr_5 = (0u | 3u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08896678u) goto L_08896678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08896678:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08896618;
      }
      goto L_08896680;
    }
L_08896680:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088966D0;
      }
      goto L_0889668C;
    }
L_0889668C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    goto L_08896690;
L_08896690:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088966A4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088966A4u) goto L_088966A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088966A4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088966C8;
      }
      goto L_088966AC;
    }
L_088966AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x088966C8u);
    aot_gpr_5 = (0u | 3u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088966C8u) goto L_088966C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088966C8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08896690;
      }
      goto L_088966D0;
    }
L_088966D0:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(56));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 2500 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
      if (branch_taken) {
          goto L_088965B0;
      }
      goto L_088966E4;
    }
L_088966E4:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    goto L_088966EC;
L_088966EC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2500 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088966EC;
      }
      goto L_088966FC;
    }
L_088966FC:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0889676C;
      }
      goto L_08896710;
    }
L_08896710:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[31] = (0x0889671Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0889671Cu) goto L_0889671C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0889671C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08896758;
      }
      goto L_08896728;
    }
L_08896728:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08896734u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08896734u) goto L_08896734;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08896734:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08896758;
      }
      goto L_0889673C;
    }
L_0889673C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x08896758u);
    aot_gpr_5 = (0u | 3u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08896758u) goto L_08896758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08896758:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08896710;
      }
      goto L_0889676C;
    }
L_0889676C:
    ctx.gpr[31] = (0x08896774u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 771u, 0x08B67310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08896774u) goto L_08896774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08896774:
    ctx.gpr[31] = (0x0889677Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 49u, 0x08990290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0889677Cu) goto L_0889677C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0889677C:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[31] = aot_run_words[7];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088967AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-720));
    { const std::uint32_t aot_run_words[11]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(672), aot_run_words); }
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(645), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (ctx.gpr[8] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(644), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[9] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(643), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (ctx.gpr[10] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(642), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_16 = (ctx.gpr[11] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(641), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(720)));
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(724)));
    ctx.gpr[23] = (ctx.gpr[23] & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[7] = (0u | 65535u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[22] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08896840;
      }
      goto L_08896830;
    }
L_08896830:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08896850;
      }
      goto L_08896840;
    }
L_08896840:
    ctx.gpr[31] = (0x08896848u);
    goto L_088954BC;
L_08896848:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08896850;
L_08896850:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (17056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_6 = (16880u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[20] = (aot_gpr_5 | 0u);
        goto L_08896888;
    }
    goto L_08896888;
L_08896888:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[20] = (aot_gpr_4 | 0u);
        goto L_08896894;
    }
    goto L_08896894;
L_08896894:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (17056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_6 = (16840u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[19] = (aot_gpr_5 | 0u);
        goto L_088968CC;
    }
    goto L_088968CC;
L_088968CC:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[19] = (aot_gpr_4 | 0u);
        goto L_088968D8;
    }
    goto L_088968D8;
L_088968D8:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (17056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_6 = (16880u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[18] = (aot_gpr_5 | 0u);
        goto L_08896910;
    }
    goto L_08896910;
L_08896910:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[18] = (aot_gpr_4 | 0u);
        goto L_0889691C;
    }
    goto L_0889691C;
L_0889691C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (17056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_6 = (16840u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_08896954;
    }
    goto L_08896954;
L_08896954:
    aot_gpr_17 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_17 = (aot_gpr_4 | 0u);
        goto L_08896964;
    }
    goto L_08896964;
L_08896964:
    if (ctx.gpr[18] != ctx.gpr[20]) {
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(640), static_cast<std::uint8_t>(aot_gpr_16));
        goto L_08896978;
    }
    goto L_0889696C;
L_0889696C:
    { const bool branch_taken = aot_gpr_17 == ctx.gpr[19];
      if (branch_taken) {
          goto L_08896988;
      }
      goto L_08896974;
    }
L_08896974:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(640), static_cast<std::uint8_t>(aot_gpr_16));
    goto L_08896978;
L_08896978:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[20];
      if (branch_taken) {
          goto L_088969F4;
      }
      goto L_08896980;
    }
L_08896980:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08896B38;
      }
      goto L_08896988;
    }
L_08896988:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (ctx.gpr[19] << 4u);
    aot_gpr_6 = (ctx.gpr[19] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_17 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088969C0u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088969C0u) goto L_088969C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088969C0:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x088969ECu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_088969EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_088969F4;
    }
L_088969F4:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08896A9C;
      }
      goto L_08896A00;
    }
L_08896A00:
    aot_gpr_16 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08896A94;
      }
      goto L_08896A10;
    }
L_08896A10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08896A48u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08896A48u) goto L_08896A48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08896A48:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08896A74u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08896A74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08896A84;
      }
      goto L_08896A7C;
    }
L_08896A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08896A84;
    }
L_08896A84:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08896A10;
      }
      goto L_08896A94;
    }
L_08896A94:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08896B30;
      }
      goto L_08896A9C;
    }
L_08896A9C:
    aot_gpr_16 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08896B30;
      }
      goto L_08896AAC;
    }
L_08896AAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08896AE4u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08896AE4u) goto L_08896AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08896AE4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08896B10u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08896B10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08896B20;
      }
      goto L_08896B18;
    }
L_08896B18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08896B20;
    }
L_08896B20:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08896AAC;
      }
      goto L_08896B30;
    }
L_08896B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08896B38;
    }
L_08896B38:
    { const bool branch_taken = aot_gpr_17 != ctx.gpr[19];
      if (branch_taken) {
          goto L_08896C84;
      }
      goto L_08896B40;
    }
L_08896B40:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08896BE8;
      }
      goto L_08896B4C;
    }
L_08896B4C:
    aot_gpr_16 = (ctx.gpr[20] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08896BE0;
      }
      goto L_08896B5C;
    }
L_08896B5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (ctx.gpr[19] << 4u);
    aot_gpr_6 = (ctx.gpr[19] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_17 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08896B94u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08896B94u) goto L_08896B94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08896B94:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08896BC0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08896BC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08896BD0;
      }
      goto L_08896BC8;
    }
L_08896BC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08896BD0;
    }
L_08896BD0:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08896B5C;
      }
      goto L_08896BE0;
    }
L_08896BE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08896C7C;
      }
      goto L_08896BE8;
    }
L_08896BE8:
    aot_gpr_16 = (ctx.gpr[20] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08896C7C;
      }
      goto L_08896BF8;
    }
L_08896BF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (ctx.gpr[19] << 4u);
    aot_gpr_6 = (ctx.gpr[19] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_17 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08896C30u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08896C30u) goto L_08896C30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08896C30:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08896C5Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08896C5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08896C6C;
      }
      goto L_08896C64;
    }
L_08896C64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08896C6C;
    }
L_08896C6C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08896BF8;
      }
      goto L_08896C7C;
    }
L_08896C7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08896C84;
    }
L_08896C84:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0889726C;
      }
      goto L_08896C9C;
    }
L_08896C9C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_fpr_20 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    aot_fpr_20 = aot_fpr_20 / aot_fpr_14;
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_gpr_6 = (17056u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = ctx.fpr[15] / aot_fpr_12;
    aot_gpr_6 = (16880u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[18] = (aot_gpr_5 | 0u);
        goto L_08896CEC;
    }
    goto L_08896CEC;
L_08896CEC:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[18] = (aot_gpr_4 | 0u);
        goto L_08896CF8;
    }
    goto L_08896CF8;
L_08896CF8:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (17056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_6 = (16880u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[20] = (aot_gpr_5 | 0u);
        goto L_08896D30;
    }
    goto L_08896D30;
L_08896D30:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[20] = (aot_gpr_4 | 0u);
        goto L_08896D3C;
    }
    goto L_08896D3C;
L_08896D3C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (17056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_6 = (16840u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_16 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_16 = (aot_gpr_5 | 0u);
        goto L_08896D74;
    }
    goto L_08896D74;
L_08896D74:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_16 = (aot_gpr_4 | 0u);
        goto L_08896D80;
    }
    goto L_08896D80;
L_08896D80:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (17056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_6 = (16840u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[19] = (aot_gpr_5 | 0u);
        goto L_08896DB8;
    }
    goto L_08896DB8;
L_08896DB8:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[19] = (aot_gpr_4 | 0u);
        goto L_08896DC4;
    }
    goto L_08896DC4;
L_08896DC4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-29));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[15];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_6 = (16840u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_08896E1C;
    }
    goto L_08896E1C;
L_08896E1C:
    aot_gpr_17 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_17 = (aot_gpr_4 | 0u);
        goto L_08896E2C;
    }
    goto L_08896E2C;
L_08896E2C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08896ED4;
      }
      goto L_08896E38;
    }
L_08896E38:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08896ECC;
      }
      goto L_08896E44;
    }
L_08896E44:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(648), aot_gpr_17);
    goto L_08896E48;
L_08896E48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_17 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08896E80u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08896E80u) goto L_08896E80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08896E80:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08896EACu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08896EAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(648)));
      if (branch_taken) {
          goto L_08896EBC;
      }
      goto L_08896EB4;
    }
L_08896EB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08896EBC;
    }
L_08896EBC:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(648), aot_gpr_17);
        goto L_08896E48;
    }
    goto L_08896ECC;
L_08896ECC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08896F68;
      }
      goto L_08896ED4;
    }
L_08896ED4:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08896F68;
      }
      goto L_08896EE0;
    }
L_08896EE0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(648), aot_gpr_17);
    goto L_08896EE4;
L_08896EE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_17 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08896F1Cu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08896F1Cu) goto L_08896F1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08896F1C:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08896F48u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08896F48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(648)));
      if (branch_taken) {
          goto L_08896F58;
      }
      goto L_08896F50;
    }
L_08896F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08896F58;
    }
L_08896F58:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(648), aot_gpr_17);
        goto L_08896EE4;
    }
    goto L_08896F68;
L_08896F68:
    aot_gpr_16 = (aot_gpr_17 | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08897130;
      }
      goto L_08896F7C;
    }
L_08896F7C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-29));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[15];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_6 = (16840u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_17 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_17 = (aot_gpr_5 | 0u);
        goto L_08896FD4;
    }
    goto L_08896FD4;
L_08896FD4:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_17 = (aot_gpr_4 | 0u);
        goto L_08896FE0;
    }
    goto L_08896FE0;
L_08896FE0:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08897088;
      }
      goto L_08896FEC;
    }
L_08896FEC:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08897080;
      }
      goto L_08896FF8;
    }
L_08896FF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), aot_gpr_16);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_16 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897034u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08897034u) goto L_08897034;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08897034:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08897060u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08897060:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(652)));
      if (branch_taken) {
          goto L_08897070;
      }
      goto L_08897068;
    }
L_08897068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08897070;
    }
L_08897070:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08896FF8;
      }
      goto L_08897080;
    }
L_08897080:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0889711C;
      }
      goto L_08897088;
    }
L_08897088:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0889711C;
      }
      goto L_08897094;
    }
L_08897094:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(656), aot_gpr_16);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_16 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088970D0u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088970D0u) goto L_088970D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088970D0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x088970FCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_088970FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
      if (branch_taken) {
          goto L_0889710C;
      }
      goto L_08897104;
    }
L_08897104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_0889710C;
    }
L_0889710C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08897094;
      }
      goto L_0889711C;
    }
L_0889711C:
    aot_gpr_16 = (aot_gpr_17 | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08896F7C;
      }
      goto L_08897130;
    }
L_08897130:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(640)));
      if (branch_taken) {
          goto L_088971D4;
      }
      goto L_0889713C;
    }
L_0889713C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088971CC;
      }
      goto L_08897148;
    }
L_08897148:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(352));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897180u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08897180u) goto L_08897180;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08897180:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_gpr_17 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x088971ACu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_088971AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088971BC;
      }
      goto L_088971B4;
    }
L_088971B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_088971BC;
    }
L_088971BC:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08897148;
      }
      goto L_088971CC;
    }
L_088971CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08897264;
      }
      goto L_088971D4;
    }
L_088971D4:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08897264;
      }
      goto L_088971E0;
    }
L_088971E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(384));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897218u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08897218u) goto L_08897218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08897218:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_gpr_17 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08897244u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08897244:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08897254;
      }
      goto L_0889724C;
    }
L_0889724C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08897254;
    }
L_08897254:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088971E0;
      }
      goto L_08897264;
    }
L_08897264:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08897834;
      }
      goto L_0889726C;
    }
L_0889726C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_fpr_20 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    aot_fpr_20 = aot_fpr_20 / aot_fpr_14;
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_gpr_6 = (17056u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = ctx.fpr[15] / aot_fpr_12;
    aot_gpr_6 = (16880u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[18] = (aot_gpr_5 | 0u);
        goto L_088972BC;
    }
    goto L_088972BC;
L_088972BC:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[18] = (aot_gpr_4 | 0u);
        goto L_088972C8;
    }
    goto L_088972C8;
L_088972C8:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (17056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_6 = (16880u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[20] = (aot_gpr_5 | 0u);
        goto L_08897300;
    }
    goto L_08897300;
L_08897300:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[20] = (aot_gpr_4 | 0u);
        goto L_0889730C;
    }
    goto L_0889730C;
L_0889730C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (17056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_6 = (16840u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_16 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_16 = (aot_gpr_5 | 0u);
        goto L_08897344;
    }
    goto L_08897344;
L_08897344:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_16 = (aot_gpr_4 | 0u);
        goto L_08897350;
    }
    goto L_08897350;
L_08897350:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (17056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_6 = (16840u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[19] = (aot_gpr_5 | 0u);
        goto L_08897388;
    }
    goto L_08897388;
L_08897388:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[19] = (aot_gpr_4 | 0u);
        goto L_08897394;
    }
    goto L_08897394;
L_08897394:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-30));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[15];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_6 = (16840u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_088973EC;
    }
    goto L_088973EC;
L_088973EC:
    aot_gpr_17 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_17 = (aot_gpr_4 | 0u);
        goto L_088973FC;
    }
    goto L_088973FC;
L_088973FC:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088974A4;
      }
      goto L_08897408;
    }
L_08897408:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0889749C;
      }
      goto L_08897414;
    }
L_08897414:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(660), aot_gpr_17);
    goto L_08897418;
L_08897418:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_17 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(432));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897450u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08897450u) goto L_08897450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08897450:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x0889747Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_0889747C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(660)));
      if (branch_taken) {
          goto L_0889748C;
      }
      goto L_08897484;
    }
L_08897484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_0889748C;
    }
L_0889748C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(660), aot_gpr_17);
        goto L_08897418;
    }
    goto L_0889749C;
L_0889749C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08897538;
      }
      goto L_088974A4;
    }
L_088974A4:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08897538;
      }
      goto L_088974B0;
    }
L_088974B0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(660), aot_gpr_17);
    goto L_088974B4;
L_088974B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_17 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(464));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088974ECu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088974ECu) goto L_088974EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088974EC:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08897518u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08897518:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(660)));
      if (branch_taken) {
          goto L_08897528;
      }
      goto L_08897520;
    }
L_08897520:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08897528;
    }
L_08897528:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(660), aot_gpr_17);
        goto L_088974B4;
    }
    goto L_08897538;
L_08897538:
    aot_gpr_16 = (aot_gpr_17 | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08897700;
      }
      goto L_0889754C;
    }
L_0889754C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-30));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[15];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_6 = (16840u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_17 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_17 = (aot_gpr_5 | 0u);
        goto L_088975A4;
    }
    goto L_088975A4;
L_088975A4:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_17 = (aot_gpr_4 | 0u);
        goto L_088975B0;
    }
    goto L_088975B0;
L_088975B0:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08897658;
      }
      goto L_088975BC;
    }
L_088975BC:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08897650;
      }
      goto L_088975C8;
    }
L_088975C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(664), aot_gpr_16);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_16 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(512));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897604u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08897604u) goto L_08897604;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08897604:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08897630u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08897630:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(664)));
      if (branch_taken) {
          goto L_08897640;
      }
      goto L_08897638;
    }
L_08897638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08897640;
    }
L_08897640:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088975C8;
      }
      goto L_08897650;
    }
L_08897650:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088976EC;
      }
      goto L_08897658;
    }
L_08897658:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088976EC;
      }
      goto L_08897664;
    }
L_08897664:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(668), aot_gpr_16);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_16 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(544));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088976A0u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088976A0u) goto L_088976A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088976A0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x088976CCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_088976CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(668)));
      if (branch_taken) {
          goto L_088976DC;
      }
      goto L_088976D4;
    }
L_088976D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_088976DC;
    }
L_088976DC:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08897664;
      }
      goto L_088976EC;
    }
L_088976EC:
    aot_gpr_16 = (aot_gpr_17 | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0889754C;
      }
      goto L_08897700;
    }
L_08897700:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(640)));
      if (branch_taken) {
          goto L_088977A4;
      }
      goto L_0889770C;
    }
L_0889770C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0889779C;
      }
      goto L_08897718;
    }
L_08897718:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(576));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897750u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08897750u) goto L_08897750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08897750:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_gpr_17 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x0889777Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_0889777C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0889778C;
      }
      goto L_08897784;
    }
L_08897784:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_0889778C;
    }
L_0889778C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08897718;
      }
      goto L_0889779C;
    }
L_0889779C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08897834;
      }
      goto L_088977A4;
    }
L_088977A4:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08897834;
      }
      goto L_088977B0;
    }
L_088977B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(608));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088977E8u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088977E8u) goto L_088977E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088977E8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(645)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(643)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(642)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(641)));
    ctx.gpr[11] = (aot_gpr_17 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08897814u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_08895598;
L_08897814:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08897824;
      }
      goto L_0889781C;
    }
L_0889781C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08897824;
    }
L_08897824:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088977B0;
      }
      goto L_08897834;
    }
L_08897834:
    ctx.gpr[2] = (0u | 1u);
    goto L_08897838;
L_08897838:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(672), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_17 = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      ctx.gpr[23] = aot_run_words[8];
      ctx.gpr[30] = aot_run_words[9];
      ctx.gpr[31] = aot_run_words[10];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0889786C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-768));
    { const std::uint32_t aot_run_words[11]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(716), aot_run_words); }
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[10] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(694), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[11] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(693), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(768)));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(692), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(772)));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(691), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(776)));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(690), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(780)));
    aot_gpr_16 = (aot_gpr_16 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(689), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(784)));
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[8] = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[9] = (0u | 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    ctx.gpr[22] = (aot_gpr_5 | 0u);
    ctx.gpr[23] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(696), aot_gpr_6);
      if (branch_taken) {
          goto L_08897920;
      }
      goto L_08897910;
    }
L_08897910:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08897930;
      }
      goto L_08897920;
    }
L_08897920:
    ctx.gpr[31] = (0x08897928u);
    goto L_088954BC;
L_08897928:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08897930;
L_08897930:
    aot_mem.aot_direct_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (50454u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08897998;
      }
      goto L_08897954;
    }
L_08897954:
    aot_gpr_5 = (17608u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (50426u << 16u);
      if (branch_taken) {
          goto L_08897998;
      }
      goto L_0889796C;
    }
L_0889796C:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (17658u << 16u);
      if (branch_taken) {
          goto L_08897998;
      }
      goto L_08897980;
    }
L_08897980:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0889799C;
      }
      goto L_08897994;
    }
L_08897994:
    aot_gpr_4 = (0u | 1u);
    goto L_08897998;
L_08897998:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0889799C;
L_0889799C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088979CC;
      }
      goto L_088979A4;
    }
L_088979A4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (50454u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088979D4;
      }
      goto L_088979C4;
    }
L_088979C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08897A1C;
      }
      goto L_088979CC;
    }
L_088979CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 92u, 0x08898C70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088979D4;
    }
L_088979D4:
    aot_gpr_5 = (17608u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (50426u << 16u);
      if (branch_taken) {
          goto L_08897A18;
      }
      goto L_088979EC;
    }
L_088979EC:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (17658u << 16u);
      if (branch_taken) {
          goto L_08897A18;
      }
      goto L_08897A00;
    }
L_08897A00:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08897A1C;
      }
      goto L_08897A14;
    }
L_08897A14:
    aot_gpr_4 = (0u | 1u);
    goto L_08897A18;
L_08897A18:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08897A1C;
L_08897A1C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08897A68;
      }
      goto L_08897A24;
    }
L_08897A24:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (17056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[8]);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    ctx.gpr[8] = (16880u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[8]);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08897A70;
      }
      goto L_08897A60;
    }
L_08897A60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08897A78;
      }
      goto L_08897A68;
    }
L_08897A68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 92u, 0x08898C70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08897A70;
    }
L_08897A70:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08897A78;
L_08897A78:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (aot_gpr_6 | 0u);
        goto L_08897A84;
    }
    goto L_08897A84;
L_08897A84:
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[20] = (aot_gpr_5 | 0u);
        goto L_08897A94;
    }
    goto L_08897A94;
L_08897A94:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[20] = (aot_gpr_4 | 0u);
        goto L_08897AA0;
    }
    goto L_08897AA0;
L_08897AA0:
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[8] = (0u | 49u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (17056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_5 = (16840u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    aot_gpr_5 = (aot_gpr_6 | 0u);
        goto L_08897AE0;
    }
    goto L_08897AE0;
L_08897AE0:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (ctx.gpr[7] | 0u);
        goto L_08897AEC;
    }
    goto L_08897AEC;
L_08897AEC:
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
        goto L_08897AFC;
    }
    goto L_08897AFC;
L_08897AFC:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[19] = (aot_gpr_4 | 0u);
        goto L_08897B08;
    }
    goto L_08897B08;
L_08897B08:
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[8] = (0u | 49u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (17056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_5 = (16880u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    aot_gpr_5 = (aot_gpr_6 | 0u);
        goto L_08897B48;
    }
    goto L_08897B48;
L_08897B48:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (ctx.gpr[7] | 0u);
        goto L_08897B54;
    }
    goto L_08897B54;
L_08897B54:
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
        goto L_08897B64;
    }
    goto L_08897B64;
L_08897B64:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[18] = (aot_gpr_4 | 0u);
        goto L_08897B70;
    }
    goto L_08897B70;
L_08897B70:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (17056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[8]);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    ctx.gpr[8] = (16840u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[8]);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
        goto L_08897BB0;
    }
    goto L_08897BB0;
L_08897BB0:
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (aot_gpr_6 | 0u);
        goto L_08897BC0;
    }
    goto L_08897BC0;
L_08897BC0:
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_08897BD0;
    }
    goto L_08897BD0;
L_08897BD0:
    aot_gpr_17 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_17 = (aot_gpr_4 | 0u);
        goto L_08897BE0;
    }
    goto L_08897BE0;
L_08897BE0:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (ctx.gpr[18] != ctx.gpr[20]) {
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(688), static_cast<std::uint8_t>(aot_gpr_16));
        goto L_08897C00;
    }
    goto L_08897BF4;
L_08897BF4:
    { const bool branch_taken = aot_gpr_17 == ctx.gpr[19];
      if (branch_taken) {
          goto L_08897C10;
      }
      goto L_08897BFC;
    }
L_08897BFC:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(688), static_cast<std::uint8_t>(aot_gpr_16));
    goto L_08897C00;
L_08897C00:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[20];
      if (branch_taken) {
          goto L_08897C9C;
      }
      goto L_08897C08;
    }
L_08897C08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08897E28;
      }
      goto L_08897C10;
    }
L_08897C10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (ctx.gpr[19] << 4u);
    aot_gpr_6 = (ctx.gpr[19] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_17 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897C48u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08897C48u) goto L_08897C48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08897C48:
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(696)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(693)));
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(692)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(689)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[2], ctx.gpr[3], ctx.gpr[12], aot_gpr_16};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[31] = (0x08897C94u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_08895844;
L_08897C94:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 92u, 0x08898C70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08897C9C;
    }
L_08897C9C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08897D58;
      }
      goto L_08897CA8;
    }
L_08897CA8:
    aot_gpr_16 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08897D50;
      }
      goto L_08897CB8;
    }
L_08897CB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897CF0u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08897CF0u) goto L_08897CF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08897CF0:
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(696)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(693)));
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(692)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(689)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(688)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[3], ctx.gpr[12], ctx.gpr[2]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[31] = (0x08897D40u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_08895844;
L_08897D40:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08897CB8;
      }
      goto L_08897D50;
    }
L_08897D50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08897E00;
      }
      goto L_08897D58;
    }
L_08897D58:
    aot_gpr_16 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08897E00;
      }
      goto L_08897D68;
    }
L_08897D68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897DA0u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08897DA0u) goto L_08897DA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08897DA0:
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(696)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(693)));
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(692)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(689)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(688)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[3], ctx.gpr[12], ctx.gpr[2]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[31] = (0x08897DF0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_08895844;
L_08897DF0:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08897D68;
      }
      goto L_08897E00;
    }
L_08897E00:
    aot_gpr_4 = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (0u | 1u);
        goto L_08897E20;
    }
    goto L_08897E20;
L_08897E20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 & 255u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 92u, 0x08898C70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08897E28;
    }
L_08897E28:
    { const bool branch_taken = aot_gpr_17 != ctx.gpr[19];
      if (branch_taken) {
          goto L_08897FBC;
      }
      goto L_08897E30;
    }
L_08897E30:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08897EEC;
      }
      goto L_08897E3C;
    }
L_08897E3C:
    aot_gpr_16 = (ctx.gpr[20] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08897EE4;
      }
      goto L_08897E4C;
    }
L_08897E4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (ctx.gpr[19] << 4u);
    aot_gpr_6 = (ctx.gpr[19] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_17 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897E84u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08897E84u) goto L_08897E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08897E84:
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(696)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(693)));
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(692)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(689)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(688)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[3], ctx.gpr[12], ctx.gpr[2]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[31] = (0x08897ED4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_08895844;
L_08897ED4:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08897E4C;
      }
      goto L_08897EE4;
    }
L_08897EE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08897F94;
      }
      goto L_08897EEC;
    }
L_08897EEC:
    aot_gpr_16 = (ctx.gpr[20] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08897F94;
      }
      goto L_08897EFC;
    }
L_08897EFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (ctx.gpr[19] << 4u);
    aot_gpr_6 = (ctx.gpr[19] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_17 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08897F34u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08897F34u) goto L_08897F34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08897F34:
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(696)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(693)));
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(692)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(689)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(688)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[3], ctx.gpr[12], ctx.gpr[2]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[31] = (0x08897F84u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_08895844;
L_08897F84:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08897EFC;
      }
      goto L_08897F94;
    }
L_08897F94:
    aot_gpr_4 = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (0u | 1u);
        goto L_08897FB4;
    }
    goto L_08897FB4;
L_08897FB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 & 255u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 92u, 0x08898C70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08897FBC;
    }
L_08897FBC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 46u, 0x08898614u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08897FD4;
    }
L_08897FD4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_fpr_20 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    aot_fpr_20 = aot_fpr_20 / aot_fpr_14;
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_gpr_6 = (17056u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    ctx.pc = 0x08898000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0036(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0036_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_36(Runtime &runtime) {
    runtime.register_generated_unit(36u, 0x08894000u, 16384u, &recomp_unit_0036, &recomp_unit_0036_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08894000u, &recomp_unit_0036, "recomp_unit_0036",
                                          kEntryMasks_recomp_unit_0036, 64u);
}
} // namespace psprecomp
