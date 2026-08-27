#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0005[64] = {
    0x0000000000014D99ull, 0xA800000000041000ull, 0x0000000000000CD9ull, 0x1000900C00005000ull,
    0x0000400008008000ull, 0x0000000D98010001ull, 0x6A05028000400022ull, 0x04010000000035ADull,
    0x2040082440040101ull, 0x44002080152A0042ull, 0x0444042590140202ull, 0x002D1202C5488901ull,
    0x0494A2A954940840ull, 0x484AA4A044000100ull, 0x2152520440001000ull, 0x4A40880000800240ull,
    0x880000200048022Aull, 0x2800800120954940ull, 0x01002440C0041250ull, 0x8002484AA4A04400ull,
    0x1202552A40840000ull, 0x0800825548180080ull, 0x2CA40C0484808032ull, 0x0A41151454555280ull,
    0x522040204000040Aull, 0x4000548808088115ull, 0x0601122128921045ull, 0x0122100545402842ull,
    0x522022240AA91020ull, 0x8020012950A50001ull, 0x0430400088110202ull, 0x8402014504440112ull,
    0xA028205028168240ull, 0x0504802048000400ull, 0x20502A0010288A0Aull, 0x004148140A200105ull,
    0x0020031184000288ull, 0x2000440260320804ull, 0xA804950080400040ull, 0x8020800001004004ull,
    0x2154808200000000ull, 0x8484808200000080ull, 0x0000020001222200ull, 0x0000000000000000ull,
    0x2409024090240902ull, 0x0000000020480000ull, 0x0102000108008000ull, 0x70AAAA8024480000ull,
    0x1A40285242040377ull, 0x8000080092004811ull, 0x91010080D2081210ull, 0x00012122028C9026ull,
    0x2146481025091224ull, 0x000823240A050080ull, 0x102000820A104100ull, 0x01082000232CB2CAull,
    0xB81045C082242002ull, 0x5C0822E041170208ull, 0x2E041170208B8104ull, 0x0000000000000081ull,
    0x2400000000000484ull, 0x0001200000000000ull, 0x0000000900000000ull, 0x0000000000480000ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0005[64] = {
    1u, 10u, 15u, 22u, 29u, 32u, 40u, 51u, 62u, 71u, 83u, 96u, 113u, 132u, 145u, 156u,
    165u, 174u, 187u, 198u, 212u, 225u, 237u, 253u, 273u, 283u, 296u, 312u, 326u, 342u, 355u, 365u,
    378u, 393u, 401u, 415u, 427u, 437u, 448u, 459u, 465u, 473u, 481u, 487u, 487u, 500u, 503u, 508u,
    524u, 544u, 553u, 566u, 580u, 597u, 608u, 617u, 634u, 650u, 668u, 686u, 688u, 693u, 695u, 697u,
};
void recomp_unit_0005_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,6,29,17,31 fprs=12,13,14,15 gpr_occ=4073 fpr_occ=506 gpr_total=6201 fpr_total=700
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_17 = ctx.gpr[17];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[6] = aot_gpr_6; ctx.gpr[29] = aot_gpr_29; ctx.gpr[17] = aot_gpr_17; ctx.gpr[31] = aot_gpr_31; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_17 = ctx.gpr[17]; aot_gpr_31 = ctx.gpr[31]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08818000u;
        entry_id = 0u;
        if (entry_delta < 16220u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0005[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0005[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08818000;
    case 2u: goto L_0881800C;
    case 3u: goto L_08818010;
    case 4u: goto L_0881801C;
    case 5u: goto L_08818020;
    case 6u: goto L_08818028;
    case 7u: goto L_0881802C;
    case 8u: goto L_08818038;
    case 9u: goto L_08818040;
    case 10u: goto L_08818130;
    case 11u: goto L_08818148;
    case 12u: goto L_088181EC;
    case 13u: goto L_088181F4;
    case 14u: goto L_088181FC;
    case 15u: goto L_08818200;
    case 16u: goto L_0881820C;
    case 17u: goto L_08818210;
    case 18u: goto L_08818218;
    case 19u: goto L_0881821C;
    case 20u: goto L_08818228;
    case 21u: goto L_0881822C;
    case 22u: goto L_08818330;
    case 23u: goto L_08818338;
    case 24u: goto L_08818388;
    case 25u: goto L_0881838C;
    case 26u: goto L_088183B0;
    case 27u: goto L_088183BC;
    case 28u: goto L_088183F0;
    case 29u: goto L_0881843C;
    case 30u: goto L_0881846C;
    case 31u: goto L_088184B8;
    case 32u: goto L_08818500;
    case 33u: goto L_08818540;
    case 34u: goto L_0881856C;
    case 35u: goto L_08818570;
    case 36u: goto L_0881857C;
    case 37u: goto L_08818580;
    case 38u: goto L_08818588;
    case 39u: goto L_0881858C;
    case 40u: goto L_08818604;
    case 41u: goto L_08818614;
    case 42u: goto L_08818658;
    case 43u: goto L_0881869C;
    case 44u: goto L_088186A4;
    case 45u: goto L_088186C0;
    case 46u: goto L_088186C8;
    case 47u: goto L_088186E4;
    case 48u: goto L_088186EC;
    case 49u: goto L_088186F4;
    case 50u: goto L_088186F8;
    case 51u: goto L_08818700;
    case 52u: goto L_08818708;
    case 53u: goto L_0881870C;
    case 54u: goto L_08818714;
    case 55u: goto L_0881871C;
    case 56u: goto L_08818720;
    case 57u: goto L_08818728;
    case 58u: goto L_08818730;
    case 59u: goto L_08818734;
    case 60u: goto L_088187C0;
    case 61u: goto L_088187E8;
    case 62u: goto L_08818800;
    case 63u: goto L_08818820;
    case 64u: goto L_08818848;
    case 65u: goto L_08818878;
    case 66u: goto L_08818888;
    case 67u: goto L_08818894;
    case 68u: goto L_088188AC;
    case 69u: goto L_088188D8;
    case 70u: goto L_088188F4;
    case 71u: goto L_08818904;
    case 72u: goto L_08818918;
    case 73u: goto L_08818944;
    case 74u: goto L_0881894C;
    case 75u: goto L_08818954;
    case 76u: goto L_08818960;
    case 77u: goto L_08818968;
    case 78u: goto L_08818970;
    case 79u: goto L_0881899C;
    case 80u: goto L_088189B4;
    case 81u: goto L_088189E8;
    case 82u: goto L_088189F8;
    case 83u: goto L_08818A04;
    case 84u: goto L_08818A24;
    case 85u: goto L_08818A48;
    case 86u: goto L_08818A50;
    case 87u: goto L_08818A70;
    case 88u: goto L_08818A7C;
    case 89u: goto L_08818A80;
    case 90u: goto L_08818A88;
    case 91u: goto L_08818A94;
    case 92u: goto L_08818AA8;
    case 93u: goto L_08818AC8;
    case 94u: goto L_08818AD8;
    case 95u: goto L_08818AE8;
    case 96u: goto L_08818B00;
    case 97u: goto L_08818B20;
    case 98u: goto L_08818B2C;
    case 99u: goto L_08818B3C;
    case 100u: goto L_08818B4C;
    case 101u: goto L_08818B58;
    case 102u: goto L_08818B60;
    case 103u: goto L_08818B68;
    case 104u: goto L_08818B78;
    case 105u: goto L_08818B7C;
    case 106u: goto L_08818B84;
    case 107u: goto L_08818BA4;
    case 108u: goto L_08818BB0;
    case 109u: goto L_08818BC0;
    case 110u: goto L_08818BC8;
    case 111u: goto L_08818BCC;
    case 112u: goto L_08818BD4;
    case 113u: goto L_08818C18;
    case 114u: goto L_08818C2C;
    case 115u: goto L_08818C48;
    case 116u: goto L_08818C50;
    case 117u: goto L_08818C5C;
    case 118u: goto L_08818C68;
    case 119u: goto L_08818C70;
    case 120u: goto L_08818C78;
    case 121u: goto L_08818C80;
    case 122u: goto L_08818C8C;
    case 123u: goto L_08818C94;
    case 124u: goto L_08818C9C;
    case 125u: goto L_08818CA4;
    case 126u: goto L_08818CB4;
    case 127u: goto L_08818CBC;
    case 128u: goto L_08818CC8;
    case 129u: goto L_08818CD0;
    case 130u: goto L_08818CDC;
    case 131u: goto L_08818CE8;
    case 132u: goto L_08818D20;
    case 133u: goto L_08818D68;
    case 134u: goto L_08818D78;
    case 135u: goto L_08818D94;
    case 136u: goto L_08818D9C;
    case 137u: goto L_08818DA8;
    case 138u: goto L_08818DB4;
    case 139u: goto L_08818DBC;
    case 140u: goto L_08818DC4;
    case 141u: goto L_08818DCC;
    case 142u: goto L_08818DD8;
    case 143u: goto L_08818DEC;
    case 144u: goto L_08818DF8;
    case 145u: goto L_08818E30;
    case 146u: goto L_08818E78;
    case 147u: goto L_08818E88;
    case 148u: goto L_08818EA4;
    case 149u: goto L_08818EB0;
    case 150u: goto L_08818EB8;
    case 151u: goto L_08818EC4;
    case 152u: goto L_08818ED0;
    case 153u: goto L_08818ED8;
    case 154u: goto L_08818EE0;
    case 155u: goto L_08818EF4;
    case 156u: goto L_08818F18;
    case 157u: goto L_08818F24;
    case 158u: goto L_08818F5C;
    case 159u: goto L_08818FAC;
    case 160u: goto L_08818FBC;
    case 161u: goto L_08818FD8;
    case 162u: goto L_08818FE4;
    case 163u: goto L_08818FEC;
    case 164u: goto L_08818FF8;
    case 165u: goto L_08819004;
    case 166u: goto L_0881900C;
    case 167u: goto L_08819014;
    case 168u: goto L_08819024;
    case 169u: goto L_0881904C;
    case 170u: goto L_08819058;
    case 171u: goto L_08819094;
    case 172u: goto L_088190EC;
    case 173u: goto L_088190FC;
    case 174u: goto L_08819118;
    case 175u: goto L_08819120;
    case 176u: goto L_0881912C;
    case 177u: goto L_08819138;
    case 178u: goto L_08819140;
    case 179u: goto L_08819148;
    case 180u: goto L_08819150;
    case 181u: goto L_0881915C;
    case 182u: goto L_08819174;
    case 183u: goto L_08819180;
    case 184u: goto L_088191BC;
    case 185u: goto L_088191EC;
    case 186u: goto L_088191F4;
    case 187u: goto L_08819210;
    case 188u: goto L_08819218;
    case 189u: goto L_08819224;
    case 190u: goto L_08819230;
    case 191u: goto L_08819248;
    case 192u: goto L_08819278;
    case 193u: goto L_0881927C;
    case 194u: goto L_08819298;
    case 195u: goto L_088192A8;
    case 196u: goto L_088192B4;
    case 197u: goto L_088192E0;
    case 198u: goto L_08819328;
    case 199u: goto L_08819338;
    case 200u: goto L_08819354;
    case 201u: goto L_0881935C;
    case 202u: goto L_08819368;
    case 203u: goto L_08819374;
    case 204u: goto L_0881937C;
    case 205u: goto L_08819384;
    case 206u: goto L_0881938C;
    case 207u: goto L_08819398;
    case 208u: goto L_088193AC;
    case 209u: goto L_088193B8;
    case 210u: goto L_088193C4;
    case 211u: goto L_088193FC;
    case 212u: goto L_08819448;
    case 213u: goto L_0881945C;
    case 214u: goto L_08819478;
    case 215u: goto L_08819484;
    case 216u: goto L_0881948C;
    case 217u: goto L_08819494;
    case 218u: goto L_088194A0;
    case 219u: goto L_088194A8;
    case 220u: goto L_088194B0;
    case 221u: goto L_088194B8;
    case 222u: goto L_088194C4;
    case 223u: goto L_088194E4;
    case 224u: goto L_088194F0;
    case 225u: goto L_0881951C;
    case 226u: goto L_0881954C;
    case 227u: goto L_08819550;
    case 228u: goto L_0881956C;
    case 229u: goto L_08819578;
    case 230u: goto L_08819580;
    case 231u: goto L_08819588;
    case 232u: goto L_08819590;
    case 233u: goto L_08819598;
    case 234u: goto L_088195A4;
    case 235u: goto L_088195BC;
    case 236u: goto L_088195EC;
    case 237u: goto L_08819604;
    case 238u: goto L_08819610;
    case 239u: goto L_08819614;
    case 240u: goto L_0881963C;
    case 241u: goto L_0881965C;
    case 242u: goto L_08819668;
    case 243u: goto L_0881967C;
    case 244u: goto L_08819688;
    case 245u: goto L_088196A8;
    case 246u: goto L_088196AC;
    case 247u: goto L_088196C8;
    case 248u: goto L_088196D4;
    case 249u: goto L_088196DC;
    case 250u: goto L_088196E8;
    case 251u: goto L_088196EC;
    case 252u: goto L_088196F4;
    case 253u: goto L_0881971C;
    case 254u: goto L_08819724;
    case 255u: goto L_08819730;
    case 256u: goto L_08819738;
    case 257u: goto L_08819740;
    case 258u: goto L_08819748;
    case 259u: goto L_08819750;
    case 260u: goto L_08819758;
    case 261u: goto L_08819768;
    case 262u: goto L_08819770;
    case 263u: goto L_08819778;
    case 264u: goto L_08819788;
    case 265u: goto L_08819790;
    case 266u: goto L_088197A0;
    case 267u: goto L_088197A8;
    case 268u: goto L_088197B0;
    case 269u: goto L_088197C0;
    case 270u: goto L_088197D8;
    case 271u: goto L_088197E4;
    case 272u: goto L_088197EC;
    case 273u: goto L_08819804;
    case 274u: goto L_0881980C;
    case 275u: goto L_08819828;
    case 276u: goto L_08819878;
    case 277u: goto L_08819894;
    case 278u: goto L_088198B8;
    case 279u: goto L_088198D4;
    case 280u: goto L_088198E4;
    case 281u: goto L_088198F0;
    case 282u: goto L_088198F8;
    case 283u: goto L_08819900;
    case 284u: goto L_08819908;
    case 285u: goto L_08819910;
    case 286u: goto L_08819920;
    case 287u: goto L_0881993C;
    case 288u: goto L_0881994C;
    case 289u: goto L_0881996C;
    case 290u: goto L_0881998C;
    case 291u: goto L_0881999C;
    case 292u: goto L_088199A8;
    case 293u: goto L_088199B0;
    case 294u: goto L_088199B8;
    case 295u: goto L_088199F8;
    case 296u: goto L_08819A00;
    case 297u: goto L_08819A08;
    case 298u: goto L_08819A18;
    case 299u: goto L_08819A30;
    case 300u: goto L_08819A44;
    case 301u: goto L_08819A50;
    case 302u: goto L_08819A5C;
    case 303u: goto L_08819A6C;
    case 304u: goto L_08819A74;
    case 305u: goto L_08819A80;
    case 306u: goto L_08819A94;
    case 307u: goto L_08819AA4;
    case 308u: goto L_08819AB0;
    case 309u: goto L_08819AC0;
    case 310u: goto L_08819AE4;
    case 311u: goto L_08819AE8;
    case 312u: goto L_08819B04;
    case 313u: goto L_08819B18;
    case 314u: goto L_08819B2C;
    case 315u: goto L_08819B34;
    case 316u: goto L_08819B58;
    case 317u: goto L_08819B60;
    case 318u: goto L_08819B68;
    case 319u: goto L_08819B78;
    case 320u: goto L_08819B80;
    case 321u: goto L_08819B88;
    case 322u: goto L_08819BB0;
    case 323u: goto L_08819BC4;
    case 324u: goto L_08819BD4;
    case 325u: goto L_08819BE0;
    case 326u: goto L_08819C14;
    case 327u: goto L_08819C30;
    case 328u: goto L_08819C40;
    case 329u: goto L_08819C4C;
    case 330u: goto L_08819C54;
    case 331u: goto L_08819C5C;
    case 332u: goto L_08819C64;
    case 333u: goto L_08819C6C;
    case 334u: goto L_08819C88;
    case 335u: goto L_08819C94;
    case 336u: goto L_08819CA4;
    case 337u: goto L_08819CB4;
    case 338u: goto L_08819CD4;
    case 339u: goto L_08819CE4;
    case 340u: goto L_08819CF0;
    case 341u: goto L_08819CF8;
    case 342u: goto L_08819D00;
    case 343u: goto L_08819D40;
    case 344u: goto L_08819D48;
    case 345u: goto L_08819D54;
    case 346u: goto L_08819D5C;
    case 347u: goto L_08819D70;
    case 348u: goto L_08819D78;
    case 349u: goto L_08819D80;
    case 350u: goto L_08819D8C;
    case 351u: goto L_08819D94;
    case 352u: goto L_08819DA0;
    case 353u: goto L_08819DD4;
    case 354u: goto L_08819DFC;
    case 355u: goto L_08819E04;
    case 356u: goto L_08819E24;
    case 357u: goto L_08819E40;
    case 358u: goto L_08819E50;
    case 359u: goto L_08819E6C;
    case 360u: goto L_08819E7C;
    case 361u: goto L_08819EB8;
    case 362u: goto L_08819ED0;
    case 363u: goto L_08819ED4;
    case 364u: goto L_08819EE8;
    case 365u: goto L_08819F04;
    case 366u: goto L_08819F10;
    case 367u: goto L_08819F20;
    case 368u: goto L_08819F48;
    case 369u: goto L_08819F58;
    case 370u: goto L_08819F68;
    case 371u: goto L_08819F80;
    case 372u: goto L_08819F88;
    case 373u: goto L_08819F98;
    case 374u: goto L_08819FA0;
    case 375u: goto L_08819FC4;
    case 376u: goto L_08819FE8;
    case 377u: goto L_08819FFC;
    case 378u: goto L_0881A018;
    case 379u: goto L_0881A024;
    case 380u: goto L_0881A03C;
    case 381u: goto L_0881A044;
    case 382u: goto L_0881A048;
    case 383u: goto L_0881A050;
    case 384u: goto L_0881A06C;
    case 385u: goto L_0881A074;
    case 386u: goto L_0881A090;
    case 387u: goto L_0881A098;
    case 388u: goto L_0881A0B4;
    case 389u: goto L_0881A0CC;
    case 390u: goto L_0881A0D4;
    case 391u: goto L_0881A0F4;
    case 392u: goto L_0881A0FC;
    case 393u: goto L_0881A128;
    case 394u: goto L_0881A16C;
    case 395u: goto L_0881A178;
    case 396u: goto L_0881A194;
    case 397u: goto L_0881A1BC;
    case 398u: goto L_0881A1C8;
    case 399u: goto L_0881A1E0;
    case 400u: goto L_0881A1E8;
    case 401u: goto L_0881A204;
    case 402u: goto L_0881A20C;
    case 403u: goto L_0881A224;
    case 404u: goto L_0881A22C;
    case 405u: goto L_0881A23C;
    case 406u: goto L_0881A24C;
    case 407u: goto L_0881A254;
    case 408u: goto L_0881A270;
    case 409u: goto L_0881A2A4;
    case 410u: goto L_0881A2AC;
    case 411u: goto L_0881A2B4;
    case 412u: goto L_0881A2D0;
    case 413u: goto L_0881A2D8;
    case 414u: goto L_0881A2F4;
    case 415u: goto L_0881A300;
    case 416u: goto L_0881A308;
    case 417u: goto L_0881A320;
    case 418u: goto L_0881A354;
    case 419u: goto L_0881A364;
    case 420u: goto L_0881A36C;
    case 421u: goto L_0881A388;
    case 422u: goto L_0881A390;
    case 423u: goto L_0881A3AC;
    case 424u: goto L_0881A3B8;
    case 425u: goto L_0881A3C0;
    case 426u: goto L_0881A3D8;
    case 427u: goto L_0881A40C;
    case 428u: goto L_0881A41C;
    case 429u: goto L_0881A424;
    case 430u: goto L_0881A468;
    case 431u: goto L_0881A47C;
    case 432u: goto L_0881A480;
    case 433u: goto L_0881A490;
    case 434u: goto L_0881A4A0;
    case 435u: goto L_0881A4A4;
    case 436u: goto L_0881A4D4;
    case 437u: goto L_0881A508;
    case 438u: goto L_0881A52C;
    case 439u: goto L_0881A544;
    case 440u: goto L_0881A550;
    case 441u: goto L_0881A554;
    case 442u: goto L_0881A574;
    case 443u: goto L_0881A578;
    case 444u: goto L_0881A584;
    case 445u: goto L_0881A5A8;
    case 446u: goto L_0881A5B8;
    case 447u: goto L_0881A5F4;
    case 448u: goto L_0881A618;
    case 449u: goto L_0881A658;
    case 450u: goto L_0881A67C;
    case 451u: goto L_0881A6A0;
    case 452u: goto L_0881A6A8;
    case 453u: goto L_0881A6B0;
    case 454u: goto L_0881A6BC;
    case 455u: goto L_0881A6C8;
    case 456u: goto L_0881A6EC;
    case 457u: goto L_0881A6F4;
    case 458u: goto L_0881A6FC;
    case 459u: goto L_0881A708;
    case 460u: goto L_0881A738;
    case 461u: goto L_0881A760;
    case 462u: goto L_0881A7BC;
    case 463u: goto L_0881A7D4;
    case 464u: goto L_0881A7FC;
    case 465u: goto L_0881A884;
    case 466u: goto L_0881A89C;
    case 467u: goto L_0881A8BC;
    case 468u: goto L_0881A8C8;
    case 469u: goto L_0881A8D0;
    case 470u: goto L_0881A8D8;
    case 471u: goto L_0881A8E0;
    case 472u: goto L_0881A8F4;
    case 473u: goto L_0881A91C;
    case 474u: goto L_0881A984;
    case 475u: goto L_0881A99C;
    case 476u: goto L_0881A9BC;
    case 477u: goto L_0881A9C8;
    case 478u: goto L_0881A9DC;
    case 479u: goto L_0881A9E8;
    case 480u: goto L_0881A9FC;
    case 481u: goto L_0881AA24;
    case 482u: goto L_0881AA34;
    case 483u: goto L_0881AA44;
    case 484u: goto L_0881AA54;
    case 485u: goto L_0881AA60;
    case 486u: goto L_0881AAA4;
    case 487u: goto L_0881AC04;
    case 488u: goto L_0881AC20;
    case 489u: goto L_0881AC2C;
    case 490u: goto L_0881AC48;
    case 491u: goto L_0881AC54;
    case 492u: goto L_0881AC70;
    case 493u: goto L_0881AC7C;
    case 494u: goto L_0881AC98;
    case 495u: goto L_0881ACA4;
    case 496u: goto L_0881ACC0;
    case 497u: goto L_0881ACCC;
    case 498u: goto L_0881ACE8;
    case 499u: goto L_0881ACF4;
    case 500u: goto L_0881AD4C;
    case 501u: goto L_0881AD58;
    case 502u: goto L_0881AD74;
    case 503u: goto L_0881AE3C;
    case 504u: goto L_0881AE6C;
    case 505u: goto L_0881AE80;
    case 506u: goto L_0881AEC4;
    case 507u: goto L_0881AEE0;
    case 508u: goto L_0881AF4C;
    case 509u: goto L_0881AF58;
    case 510u: goto L_0881AF68;
    case 511u: goto L_0881AF74;
    case 512u: goto L_0881AF9C;
    case 513u: goto L_0881AFA4;
    case 514u: goto L_0881AFAC;
    case 515u: goto L_0881AFB4;
    case 516u: goto L_0881AFBC;
    case 517u: goto L_0881AFC4;
    case 518u: goto L_0881AFCC;
    case 519u: goto L_0881AFD4;
    case 520u: goto L_0881AFDC;
    case 521u: goto L_0881AFF0;
    case 522u: goto L_0881AFF4;
    case 523u: goto L_0881AFF8;
    case 524u: goto L_0881B000;
    case 525u: goto L_0881B004;
    case 526u: goto L_0881B008;
    case 527u: goto L_0881B010;
    case 528u: goto L_0881B014;
    case 529u: goto L_0881B018;
    case 530u: goto L_0881B020;
    case 531u: goto L_0881B024;
    case 532u: goto L_0881B048;
    case 533u: goto L_0881B064;
    case 534u: goto L_0881B078;
    case 535u: goto L_0881B084;
    case 536u: goto L_0881B090;
    case 537u: goto L_0881B098;
    case 538u: goto L_0881B0AC;
    case 539u: goto L_0881B0B4;
    case 540u: goto L_0881B0D8;
    case 541u: goto L_0881B0E4;
    case 542u: goto L_0881B0EC;
    case 543u: goto L_0881B0F0;
    case 544u: goto L_0881B100;
    case 545u: goto L_0881B110;
    case 546u: goto L_0881B12C;
    case 547u: goto L_0881B138;
    case 548u: goto L_0881B164;
    case 549u: goto L_0881B170;
    case 550u: goto L_0881B17C;
    case 551u: goto L_0881B1AC;
    case 552u: goto L_0881B1FC;
    case 553u: goto L_0881B210;
    case 554u: goto L_0881B224;
    case 555u: goto L_0881B230;
    case 556u: goto L_0881B24C;
    case 557u: goto L_0881B264;
    case 558u: goto L_0881B270;
    case 559u: goto L_0881B278;
    case 560u: goto L_0881B27C;
    case 561u: goto L_0881B29C;
    case 562u: goto L_0881B2C0;
    case 563u: goto L_0881B2E0;
    case 564u: goto L_0881B2F0;
    case 565u: goto L_0881B2FC;
    case 566u: goto L_0881B304;
    case 567u: goto L_0881B308;
    case 568u: goto L_0881B314;
    case 569u: goto L_0881B330;
    case 570u: goto L_0881B33C;
    case 571u: goto L_0881B348;
    case 572u: goto L_0881B34C;
    case 573u: goto L_0881B35C;
    case 574u: goto L_0881B364;
    case 575u: goto L_0881B384;
    case 576u: goto L_0881B394;
    case 577u: goto L_0881B3A0;
    case 578u: goto L_0881B3B4;
    case 579u: goto L_0881B3C0;
    case 580u: goto L_0881B408;
    case 581u: goto L_0881B414;
    case 582u: goto L_0881B424;
    case 583u: goto L_0881B430;
    case 584u: goto L_0881B440;
    case 585u: goto L_0881B44C;
    case 586u: goto L_0881B460;
    case 587u: goto L_0881B468;
    case 588u: goto L_0881B474;
    case 589u: goto L_0881B490;
    case 590u: goto L_0881B4AC;
    case 591u: goto L_0881B4B8;
    case 592u: goto L_0881B4C4;
    case 593u: goto L_0881B4C8;
    case 594u: goto L_0881B4D8;
    case 595u: goto L_0881B4E0;
    case 596u: goto L_0881B4F4;
    case 597u: goto L_0881B51C;
    case 598u: goto L_0881B540;
    case 599u: goto L_0881B548;
    case 600u: goto L_0881B564;
    case 601u: goto L_0881B56C;
    case 602u: goto L_0881B588;
    case 603u: goto L_0881B594;
    case 604u: goto L_0881B5A0;
    case 605u: goto L_0881B5A4;
    case 606u: goto L_0881B5B4;
    case 607u: goto L_0881B5CC;
    case 608u: goto L_0881B620;
    case 609u: goto L_0881B638;
    case 610u: goto L_0881B650;
    case 611u: goto L_0881B664;
    case 612u: goto L_0881B66C;
    case 613u: goto L_0881B684;
    case 614u: goto L_0881B69C;
    case 615u: goto L_0881B6D4;
    case 616u: goto L_0881B6F0;
    case 617u: goto L_0881B704;
    case 618u: goto L_0881B70C;
    case 619u: goto L_0881B718;
    case 620u: goto L_0881B71C;
    case 621u: goto L_0881B724;
    case 622u: goto L_0881B730;
    case 623u: goto L_0881B734;
    case 624u: goto L_0881B73C;
    case 625u: goto L_0881B748;
    case 626u: goto L_0881B74C;
    case 627u: goto L_0881B754;
    case 628u: goto L_0881B760;
    case 629u: goto L_0881B764;
    case 630u: goto L_0881B774;
    case 631u: goto L_0881B7B4;
    case 632u: goto L_0881B7CC;
    case 633u: goto L_0881B7E0;
    case 634u: goto L_0881B804;
    case 635u: goto L_0881B834;
    case 636u: goto L_0881B848;
    case 637u: goto L_0881B854;
    case 638u: goto L_0881B864;
    case 639u: goto L_0881B87C;
    case 640u: goto L_0881B898;
    case 641u: goto L_0881B89C;
    case 642u: goto L_0881B8A0;
    case 643u: goto L_0881B8A8;
    case 644u: goto L_0881B8B8;
    case 645u: goto L_0881B8D0;
    case 646u: goto L_0881B8EC;
    case 647u: goto L_0881B8F0;
    case 648u: goto L_0881B8F4;
    case 649u: goto L_0881B8FC;
    case 650u: goto L_0881B90C;
    case 651u: goto L_0881B924;
    case 652u: goto L_0881B940;
    case 653u: goto L_0881B944;
    case 654u: goto L_0881B948;
    case 655u: goto L_0881B950;
    case 656u: goto L_0881B960;
    case 657u: goto L_0881B978;
    case 658u: goto L_0881B994;
    case 659u: goto L_0881B998;
    case 660u: goto L_0881B99C;
    case 661u: goto L_0881B9A4;
    case 662u: goto L_0881B9B4;
    case 663u: goto L_0881B9CC;
    case 664u: goto L_0881B9E8;
    case 665u: goto L_0881B9EC;
    case 666u: goto L_0881B9F0;
    case 667u: goto L_0881B9F8;
    case 668u: goto L_0881BA08;
    case 669u: goto L_0881BA20;
    case 670u: goto L_0881BA3C;
    case 671u: goto L_0881BA40;
    case 672u: goto L_0881BA44;
    case 673u: goto L_0881BA4C;
    case 674u: goto L_0881BA5C;
    case 675u: goto L_0881BA74;
    case 676u: goto L_0881BA90;
    case 677u: goto L_0881BA94;
    case 678u: goto L_0881BA98;
    case 679u: goto L_0881BAA0;
    case 680u: goto L_0881BAB0;
    case 681u: goto L_0881BAC8;
    case 682u: goto L_0881BAE4;
    case 683u: goto L_0881BAE8;
    case 684u: goto L_0881BAEC;
    case 685u: goto L_0881BAF4;
    case 686u: goto L_0881BB00;
    case 687u: goto L_0881BB1C;
    case 688u: goto L_0881BC08;
    case 689u: goto L_0881BC1C;
    case 690u: goto L_0881BC28;
    case 691u: goto L_0881BCE8;
    case 692u: goto L_0881BCF4;
    case 693u: goto L_0881BDB4;
    case 694u: goto L_0881BDC0;
    case 695u: goto L_0881BE80;
    case 696u: goto L_0881BE8C;
    case 697u: goto L_0881BF4C;
    case 698u: goto L_0881BF58;
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
L_08818000:
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) >= 0;
    ctx.gpr[8] = (0u - ctx.gpr[8]);
      if (branch_taken) {
          goto L_08818010;
      }
      goto L_0881800C;
    }
L_0881800C:
    ctx.gpr[11] = (0u | 16u);
    goto L_08818010;
L_08818010:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[10]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08818020;
      }
      goto L_0881801C;
    }
L_0881801C:
    ctx.gpr[10] = (0u | 0u);
    goto L_08818020;
L_08818020:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) >= 0;
      if (branch_taken) {
          goto L_0881802C;
      }
      goto L_08818028;
    }
L_08818028:
    ctx.gpr[9] = (0u | 16u);
    goto L_0881802C;
L_0881802C:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[8]) < 17 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[3] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08818040;
    }
    goto L_08818038;
L_08818038:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[3] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08818040;
L_08818040:
    ctx.gpr[2] = (ctx.gpr[11] << 4u);
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(8092));
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[3] = (ctx.gpr[2] + ctx.gpr[9]);
    ctx.gpr[12] = (ctx.gpr[3] << 5u);
    ctx.gpr[3] = (ctx.gpr[3] << 2u);
    ctx.gpr[3] = (ctx.gpr[12] - ctx.gpr[3]);
    ctx.gpr[12] = (ctx.lo);
    ctx.gpr[12] = (aot_gpr_4 + ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[12] + ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(20));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[10] << 4u);
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(8092));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[13]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[3] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[12] = (ctx.gpr[3] << 5u);
    ctx.gpr[3] = (ctx.gpr[3] << 2u);
    ctx.gpr[3] = (ctx.gpr[12] - ctx.gpr[3]);
    ctx.gpr[12] = (ctx.lo);
    ctx.gpr[12] = (aot_gpr_4 + ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[12] + ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(20));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(8092));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[8]);
    ctx.gpr[3] = (ctx.gpr[2] << 5u);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    ctx.gpr[2] = (ctx.gpr[3] - ctx.gpr[2]);
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[3] = (aot_gpr_4 + ctx.gpr[3]);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[2] = (ctx.gpr[3] + ctx.gpr[2]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(20));
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(8092));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
    ctx.gpr[10] = (ctx.gpr[8] << 5u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[10] - ctx.gpr[8]);
    ctx.gpr[9] = (ctx.lo);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[9]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08818130:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7760)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_14) || std::isnan(ctx.fpr[0])) && aot_fpr_14 == ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (17664u << 16u);
      if (branch_taken) {
          goto L_088181F4;
      }
      goto L_08818148;
    }
L_08818148:
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_gpr_5 = (17352u << 16u);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (15616u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_15;
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_gpr_5 = (16896u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16128u << 16u);
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
    ctx.fpr[16] = aot_fpr_13 - ctx.fpr[16];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[7] = (0u - ctx.gpr[7]);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    aot_gpr_5 = (0u - aot_gpr_5);
      if (branch_taken) {
          goto L_088181FC;
      }
      goto L_088181EC;
    }
L_088181EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08818200;
      }
      goto L_088181F4;
    }
L_088181F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08818330;
      }
      goto L_088181FC;
    }
L_088181FC:
    ctx.gpr[8] = (0u | 16u);
    goto L_08818200;
L_08818200:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_08818210;
      }
      goto L_0881820C;
    }
L_0881820C:
    ctx.gpr[7] = (0u | 0u);
    goto L_08818210;
L_08818210:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
      if (branch_taken) {
          goto L_0881821C;
      }
      goto L_08818218;
    }
L_08818218:
    aot_gpr_6 = (0u | 16u);
    goto L_0881821C;
L_0881821C:
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_5) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_0881822C;
      }
      goto L_08818228;
    }
L_08818228:
    aot_gpr_5 = (0u | 0u);
    goto L_0881822C;
L_0881822C:
    ctx.gpr[9] = (ctx.gpr[8] << 4u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[8]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
    ctx.gpr[8] = (ctx.gpr[9] + aot_gpr_6);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_gpr_4 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(17296));
    ctx.gpr[8] = (aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (16256u << 16u);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[16] = aot_fpr_15 - aot_fpr_13;
    aot_fpr_15 = aot_fpr_15 - aot_fpr_12;
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(17296));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_6);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    aot_gpr_6 = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_14 = aot_fpr_14 + aot_fpr_15;
    aot_gpr_6 = (ctx.gpr[9] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(17296));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_6);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    aot_gpr_6 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.fpr[0] = aot_fpr_14 + aot_fpr_15;
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17296));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + aot_fpr_12;
    goto L_08818330;
L_08818330:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08818338:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-368));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24256)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_5 = (16256u << 16u);
    aot_gpr_6 = (15820u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 | 52429u);
    ctx.fpr[19] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_6 = (16776u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(0u);
    aot_gpr_5 = (0u | 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(336), aot_run_words); }
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_6);
      if (branch_taken) {
          goto L_0881838C;
      }
      goto L_08818388;
    }
L_08818388:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_0881838C;
L_0881838C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[7] = (16230u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 4095u);
    ctx.gpr[7] = (ctx.gpr[7] | 26214u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
      if (branch_taken) {
          goto L_088183BC;
      }
      goto L_088183B0;
    }
L_088183B0:
    aot_gpr_6 = (20352u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[17];
    goto L_088183BC;
L_088183BC:
    aot_gpr_6 = (15049u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 3670u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[7] = (16585u << 16u);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[7] | 3670u);
    ctx.gpr[8] = (15692u << 16u);
    aot_gpr_6 = (0u | 0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.fpr[18] = aot_fpr_15 + ctx.fpr[18];
    goto L_088183F0;
L_088183F0:
    ctx.fpr[2] = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[2])));
    ctx.fpr[2] = ctx.fpr[2] / ctx.fpr[16];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[2] = aot_fpr_14 + ctx.fpr[2];
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[2] = aot_fpr_15 + ctx.fpr[2];
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088183F0;
      }
      goto L_0881843C;
    }
L_0881843C:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (15769u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_gpr_6 = (aot_gpr_6 | 39322u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[7] = (16201u << 16u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[17];
    ctx.gpr[7] = (ctx.gpr[7] | 3670u);
    aot_gpr_6 = (0u | 0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    goto L_0881846C;
L_0881846C:
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = aot_fpr_14 + ctx.fpr[18];
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[2]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < 33 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881846C;
      }
      goto L_088184B8;
    }
L_088184B8:
    aot_gpr_6 = (16841u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_6);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_6 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_15 + ctx.fpr[19];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (16457u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4059u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    goto L_08818500;
L_08818500:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 / ctx.fpr[16];
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08818500;
      }
      goto L_08818540;
    }
L_08818540:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(8092));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (aot_gpr_29 | 0u);
    aot_gpr_6 = (ctx.lo);
    ctx.gpr[2] = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.gpr[11] = (aot_gpr_4 + static_cast<std::uint32_t>(17296));
    goto L_0881856C;
L_0881856C:
    ctx.gpr[8] = (0u | 0u);
    goto L_08818570;
L_08818570:
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08818580;
      }
      goto L_0881857C;
    }
L_0881857C:
    aot_gpr_6 = (0u | 0u);
    goto L_08818580;
L_08818580:
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_5;
      if (branch_taken) {
          goto L_0881858C;
      }
      goto L_08818588;
    }
L_08818588:
    ctx.gpr[9] = (0u | 0u);
    goto L_0881858C;
L_0881858C:
    ctx.gpr[3] = (aot_gpr_6 - ctx.gpr[9]);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(17));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (aot_gpr_29 + ctx.gpr[9]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(200)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_6);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(200)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_6);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h_ct<64u, 0u, 2u>();
    aot_gpr_6 = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    ctx.gpr[9] = (ctx.gpr[3] << 2u);
    ctx.gpr[9] = (aot_gpr_29 + ctx.gpr[9]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(68)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(28));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_08818570;
      }
      goto L_08818604;
    }
L_08818604:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881856C;
      }
      goto L_08818614;
    }
L_08818614:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(8092));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(268), static_cast<std::uint16_t>(aot_gpr_6));
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (ctx.lo);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20));
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    ctx.gpr[11] = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    ctx.gpr[2] = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (aot_gpr_4 + ctx.gpr[8]);
    ctx.gpr[9] = (aot_gpr_4 + static_cast<std::uint32_t>(448));
    goto L_08818658;
L_08818658:
    ctx.gpr[12] = (ctx.gpr[7] << 5u);
    ctx.gpr[13] = (ctx.gpr[7] << 2u);
    ctx.gpr[13] = (ctx.gpr[12] - ctx.gpr[13]);
    ctx.gpr[12] = (aot_gpr_4 + ctx.gpr[13]);
    ctx.gpr[19] = (aot_gpr_4 + ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[7] << 5u);
    ctx.gpr[15] = (ctx.gpr[7] << 2u);
    ctx.gpr[13] = (ctx.gpr[13] - ctx.gpr[15]);
    ctx.gpr[14] = (0u | 0u);
    ctx.gpr[24] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28));
    ctx.gpr[16] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    ctx.gpr[21] = (aot_gpr_4 + ctx.gpr[13]);
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[14] = (aot_gpr_4 + ctx.gpr[14]);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(7616));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-476));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(476));
    goto L_0881869C;
L_0881869C:
    { const bool branch_taken = ctx.gpr[3] != aot_gpr_5;
    ctx.gpr[13] = (ctx.gpr[12] | 0u);
      if (branch_taken) {
          goto L_088186C0;
      }
      goto L_088186A4;
    }
L_088186A4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_088187C0;
      }
      goto L_088186C0;
    }
L_088186C0:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_088186E4;
      }
      goto L_088186C8;
    }
L_088186C8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[14] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[14] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[14] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_088187C0;
      }
      goto L_088186E4;
    }
L_088186E4:
    { const bool branch_taken = ctx.gpr[3] != 0u;
      if (branch_taken) {
          goto L_088186F4;
      }
      goto L_088186EC;
    }
L_088186EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[15] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_088186F8;
      }
      goto L_088186F4;
    }
L_088186F4:
    ctx.gpr[15] = (ctx.gpr[24] | 0u);
    goto L_088186F8;
L_088186F8:
    { const bool branch_taken = ctx.gpr[3] != aot_gpr_5;
      if (branch_taken) {
          goto L_08818708;
      }
      goto L_08818700;
    }
L_08818700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[25] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0881870C;
      }
      goto L_08818708;
    }
L_08818708:
    ctx.gpr[25] = (ctx.gpr[16] | 0u);
    goto L_0881870C;
L_0881870C:
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_0881871C;
      }
      goto L_08818714;
    }
L_08818714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_17 | 0u);
      if (branch_taken) {
          goto L_08818720;
      }
      goto L_0881871C;
    }
L_0881871C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08818720;
L_08818720:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_08818730;
      }
      goto L_08818728;
    }
L_08818728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[14] | 0u);
      if (branch_taken) {
          goto L_08818734;
      }
      goto L_08818730;
    }
L_08818730:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08818734;
L_08818734:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = aot_fpr_13 - aot_fpr_14;
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    aot_fpr_15 = aot_fpr_13 - aot_fpr_15;
    aot_fpr_14 = aot_fpr_14 - aot_fpr_15;
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(ctx.fpr[0]), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(272), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[15] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = aot_fpr_13 - aot_fpr_14;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[16];
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[0]), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(288), aot_run_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat_ct<0u, 1u, 2u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(304)));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(308)));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(312)));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_088187C0;
L_088187C0:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(28));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(28));
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(28));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(28));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[3]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0881869C;
      }
      goto L_088187E8;
    }
L_088187E8:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(476));
    ctx.gpr[3] = (static_cast<std::int32_t>(aot_gpr_6) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(476));
      if (branch_taken) {
          goto L_08818658;
      }
      goto L_08818800;
    }
L_08818800:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(336), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08818820:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(25))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    { const std::uint32_t aot_run_words[3]{0u, aot_gpr_5, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_5));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08818848:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (ctx.gpr[16] + static_cast<std::uint32_t>(260));
    ctx.gpr[7] = (2178u << 16u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_6 = (0u | 28u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08818878u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-30688));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08818878u) goto L_08818878;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08818878:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08818888u);
    aot_gpr_6 = (0u | 140u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08818888u) goto L_08818888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08818888:
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    goto L_08818894;
L_08818894:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 31 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08818894;
      }
      goto L_088188AC;
    }
L_088188AC:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(372), aot_gpr_4);
    aot_gpr_4 = (0u | 32u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(376), aot_gpr_4);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088188D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5976)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(19904));
      if (branch_taken) {
          goto L_08818904;
      }
      goto L_088188F4;
    }
L_088188F4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5976), aot_gpr_4);
    aot_gpr_31 = (0x08818904u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08818848;
L_08818904:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08818918:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], aot_gpr_17, ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x08818944u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    goto L_08818B84;
L_08818944:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08818968;
      }
      goto L_0881894C;
    }
L_0881894C:
    aot_gpr_31 = (0x08818954u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_088197D8;
L_08818954:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_gpr_17 << 5u);
      if (branch_taken) {
          goto L_08818970;
      }
      goto L_08818960;
    }
L_08818960:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0881899C;
      }
      goto L_08818968;
    }
L_08818968:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0881899C;
      }
      goto L_08818970;
    }
L_08818970:
    aot_gpr_6 = (aot_gpr_17 << 2u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(264)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(260), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(264), aot_gpr_4);
    ctx.gpr[2] = (0u | 1u);
    goto L_0881899C;
L_0881899C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088189B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_17 = (ctx.gpr[16] + aot_gpr_17);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08818A04;
      }
      goto L_088189E8;
    }
L_088189E8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088189F8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0881980C;
L_088189F8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088189E8;
      }
      goto L_08818A04;
    }
L_08818A04:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(260), 0u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(264), 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08818A24:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_17);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08818A48u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    goto L_08818B84;
L_08818A48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08818A94;
      }
      goto L_08818A50;
    }
L_08818A50:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[16] << 5u);
    ctx.gpr[8] = (ctx.gpr[16] << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[7] - ctx.gpr[8]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[16] = (aot_gpr_17 + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08818A7C;
      }
      goto L_08818A70;
    }
L_08818A70:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08818A80;
      }
      goto L_08818A7C;
    }
L_08818A7C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), aot_gpr_4);
    goto L_08818A80;
L_08818A80:
    aot_gpr_31 = (0x08818A88u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_0881980C;
L_08818A88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(264)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), aot_gpr_4);
    goto L_08818A94;
L_08818A94:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08818AA8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], aot_gpr_17, ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    goto L_08818AC8;
L_08818AC8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08818AD8u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    goto L_08818A24;
L_08818AD8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08818AC8;
      }
      goto L_08818AE8;
    }
L_08818AE8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08818B00:
    ctx.gpr[7] = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(260));
    aot_gpr_5 = (ctx.gpr[7] - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08818B4C;
      }
      goto L_08818B20;
    }
L_08818B20:
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
      if (branch_taken) {
          goto L_08818B3C;
      }
      goto L_08818B2C;
    }
L_08818B2C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
      if (branch_taken) {
          goto L_08818B58;
      }
      goto L_08818B3C;
    }
L_08818B3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08818B7C;
      }
      goto L_08818B4C;
    }
L_08818B4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08818B7C;
      }
      goto L_08818B58;
    }
L_08818B58:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08818B78;
      }
      goto L_08818B60;
    }
L_08818B60:
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08818B78;
      }
      goto L_08818B68;
    }
L_08818B68:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
      if (branch_taken) {
          goto L_08818B58;
      }
      goto L_08818B78;
    }
L_08818B78:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08818B7C;
L_08818B7C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08818B84:
    ctx.gpr[9] = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[9] - aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08818BC0;
      }
      goto L_08818BA4;
    }
L_08818BA4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08818BC8;
      }
      goto L_08818BB0;
    }
L_08818BB0:
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08818BA4;
      }
      goto L_08818BC0;
    }
L_08818BC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08818BCC;
      }
      goto L_08818BC8;
    }
L_08818BC8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08818BCC;
L_08818BCC:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08818BD4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (ctx.gpr[7] - aot_gpr_5);
    aot_gpr_17 = (aot_gpr_4 + aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08818CE8;
      }
      goto L_08818C18;
    }
L_08818C18:
    ctx.gpr[20] = (0u | 58u);
    ctx.gpr[21] = (0u | 57u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[23] = (0u | 16u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08818C2C;
L_08818C2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08818CDC;
      }
      goto L_08818C48;
    }
L_08818C48:
    aot_gpr_31 = (0x08818C50u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08818C50u) goto L_08818C50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08818C50:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[22]);
      if (branch_taken) {
          goto L_08818C80;
      }
      goto L_08818C5C;
    }
L_08818C5C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[20];
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08818C70;
      }
      goto L_08818C68;
    }
L_08818C68:
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[21];
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08818C78;
      }
      goto L_08818C70;
    }
L_08818C70:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08818C78;
L_08818C78:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08818C8C;
      }
      goto L_08818C80;
    }
L_08818C80:
    aot_gpr_4 = (aot_gpr_6 | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), aot_gpr_4);
      if (branch_taken) {
          goto L_08818CDC;
      }
      goto L_08818C8C;
    }
L_08818C8C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[23];
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), aot_gpr_6);
      if (branch_taken) {
          goto L_08818CD0;
      }
      goto L_08818C94;
    }
L_08818C94:
    aot_gpr_31 = (0x08818C9Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08818C9Cu) goto L_08818C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08818C9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08818CBC;
      }
      goto L_08818CA4;
    }
L_08818CA4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08818CB4u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08818CB4u) goto L_08818CB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08818CB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08818CC8;
      }
      goto L_08818CBC;
    }
L_08818CBC:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08818CC8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08818CC8u) goto L_08818CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08818CC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08818CDC;
      }
      goto L_08818CD0;
    }
L_08818CD0:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08818CDCu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08818CDCu) goto L_08818CDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08818CDC:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08818C2C;
    }
    goto L_08818CE8;
L_08818CE8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(285))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08818D20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[8] - aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_17 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08818DF8;
      }
      goto L_08818D68;
    }
L_08818D68:
    ctx.gpr[21] = (0u | 58u);
    ctx.gpr[22] = (0u | 57u);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08818D78;
L_08818D78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08818DEC;
      }
      goto L_08818D94;
    }
L_08818D94:
    aot_gpr_31 = (0x08818D9Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08818D9Cu) goto L_08818D9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08818D9C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[23]);
      if (branch_taken) {
          goto L_08818DCC;
      }
      goto L_08818DA8;
    }
L_08818DA8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[21];
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08818DBC;
      }
      goto L_08818DB4;
    }
L_08818DB4:
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[22];
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08818DC4;
      }
      goto L_08818DBC;
    }
L_08818DBC:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08818DC4;
L_08818DC4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08818DD8;
      }
      goto L_08818DCC;
    }
L_08818DCC:
    aot_gpr_4 = (aot_gpr_6 | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(460), aot_gpr_4);
      if (branch_taken) {
          goto L_08818DEC;
      }
      goto L_08818DD8;
    }
L_08818DD8:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(460), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08818DECu);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08818DECu) goto L_08818DEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08818DEC:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08818D78;
    }
    goto L_08818DF8;
L_08818DF8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(285))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08818E30:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    ctx.gpr[8] = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[8] - aot_gpr_5);
    ctx.gpr[23] = (aot_gpr_4 + ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08818F24;
      }
      goto L_08818E78;
    }
L_08818E78:
    ctx.gpr[20] = (0u | 58u);
    ctx.gpr[19] = (0u | 57u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-257));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    goto L_08818E88;
L_08818E88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08818F18;
      }
      goto L_08818EA4;
    }
L_08818EA4:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08818EB0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08818EB0u) goto L_08818EB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08818EB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08818EE0;
      }
      goto L_08818EB8;
    }
L_08818EB8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[20];
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08818ED0;
      }
      goto L_08818EC4;
    }
L_08818EC4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[19];
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08818ED8;
      }
      goto L_08818ED0;
    }
L_08818ED0:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08818ED8;
L_08818ED8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08818EF4;
      }
      goto L_08818EE0;
    }
L_08818EE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(460), aot_gpr_4);
      if (branch_taken) {
          goto L_08818F18;
      }
      goto L_08818EF4;
    }
L_08818EF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(460), aot_gpr_4);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08818F18u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 661u, 0x08ACDF58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08818F18u) goto L_08818F18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08818F18:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[22] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
        goto L_08818E88;
    }
    goto L_08818F24;
L_08818F24:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(285))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[23] + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08818F5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    ctx.gpr[8] = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[8] - aot_gpr_5);
    ctx.gpr[23] = (aot_gpr_4 + ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_17);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_17 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08819058;
      }
      goto L_08818FAC;
    }
L_08818FAC:
    ctx.gpr[20] = (0u | 58u);
    ctx.gpr[19] = (0u | 57u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-257));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    goto L_08818FBC;
L_08818FBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0881904C;
      }
      goto L_08818FD8;
    }
L_08818FD8:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08818FE4u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08818FE4u) goto L_08818FE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08818FE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08819014;
      }
      goto L_08818FEC;
    }
L_08818FEC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[20];
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08819004;
      }
      goto L_08818FF8;
    }
L_08818FF8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[19];
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0881900C;
      }
      goto L_08819004;
    }
L_08819004:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0881900C;
L_0881900C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08819024;
      }
      goto L_08819014;
    }
L_08819014:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(460), aot_gpr_4);
      if (branch_taken) {
          goto L_0881904C;
      }
      goto L_08819024;
    }
L_08819024:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(460), aot_gpr_4);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0881904Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 736u, 0x08ACE418u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881904Cu) goto L_0881904C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881904C:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[22] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
        goto L_08818FBC;
    }
    goto L_08819058;
L_08819058:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(285))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[23] + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      aot_gpr_17 = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      ctx.gpr[23] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08819094:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[9] - aot_gpr_5);
    ctx.gpr[19] = (aot_gpr_4 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_gpr_17 = (ctx.gpr[7] << 16u);
    ctx.gpr[18] = (ctx.gpr[8] << 16u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(260)));
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_17) >> 16u));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[16] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08819180;
      }
      goto L_088190EC;
    }
L_088190EC:
    ctx.gpr[22] = (0u | 58u);
    ctx.gpr[23] = (0u | 57u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_088190FC;
L_088190FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08819174;
      }
      goto L_08819118;
    }
L_08819118:
    aot_gpr_31 = (0x08819120u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819120u) goto L_08819120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819120:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[30]);
      if (branch_taken) {
          goto L_08819150;
      }
      goto L_0881912C;
    }
L_0881912C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[22];
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08819140;
      }
      goto L_08819138;
    }
L_08819138:
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[23];
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08819148;
      }
      goto L_08819140;
    }
L_08819140:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08819148;
L_08819148:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0881915C;
      }
      goto L_08819150;
    }
L_08819150:
    aot_gpr_4 = (aot_gpr_6 | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(460), aot_gpr_4);
      if (branch_taken) {
          goto L_08819174;
      }
      goto L_0881915C;
    }
L_0881915C:
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(460), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08819174u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 983u, 0x08AC7A58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819174u) goto L_08819174;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819174:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_088190FC;
    }
    goto L_08819180;
L_08819180:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(285))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088191BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[7] - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_17 == 0u;
    ctx.gpr[16] = (aot_gpr_6 << 24u);
      if (branch_taken) {
          goto L_08819230;
      }
      goto L_088191EC;
    }
L_088191EC:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 24u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    goto L_088191F4;
L_088191F4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 6u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08819224;
      }
      goto L_08819210;
    }
L_08819210:
    aot_gpr_31 = (0x08819218u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 899u, 0x0890B900u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819218u) goto L_08819218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819218:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08819224u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819224u) goto L_08819224;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819224:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_17 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
        goto L_088191F4;
    }
    goto L_08819230;
L_08819230:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08819248:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_17 == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-257));
      if (branch_taken) {
          goto L_088192B4;
      }
      goto L_08819278;
    }
L_08819278:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    goto L_0881927C;
L_0881927C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 6u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088192A8;
      }
      goto L_08819298;
    }
L_08819298:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(460)));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[16]);
    aot_gpr_31 = (0x088192A8u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(460), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088192A8u) goto L_088192A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088192A8:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_17 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
        goto L_0881927C;
    }
    goto L_088192B4;
L_088192B4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(285))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(276), 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088192E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[8] - aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_17 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088193C4;
      }
      goto L_08819328;
    }
L_08819328:
    ctx.gpr[21] = (0u | 58u);
    ctx.gpr[22] = (0u | 57u);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08819338;
L_08819338:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088193B8;
      }
      goto L_08819354;
    }
L_08819354:
    aot_gpr_31 = (0x0881935Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881935Cu) goto L_0881935C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881935C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[23]);
      if (branch_taken) {
          goto L_0881938C;
      }
      goto L_08819368;
    }
L_08819368:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[21];
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0881937C;
      }
      goto L_08819374;
    }
L_08819374:
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[22];
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08819384;
      }
      goto L_0881937C;
    }
L_0881937C:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08819384;
L_08819384:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08819398;
      }
      goto L_0881938C;
    }
L_0881938C:
    aot_gpr_4 = (aot_gpr_6 | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(460), aot_gpr_4);
      if (branch_taken) {
          goto L_088193B8;
      }
      goto L_08819398;
    }
L_08819398:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(460), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 15u);
    aot_gpr_31 = (0x088193ACu);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088193ACu) goto L_088193AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088193AC:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088193B8u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 391u, 0x08AC5410u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088193B8u) goto L_088193B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088193B8:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08819338;
    }
    goto L_088193C4;
L_088193C4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(285))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088193FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[8] - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_17);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_17 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088194F0;
      }
      goto L_08819448;
    }
L_08819448:
    ctx.gpr[18] = (15u << 16u);
    ctx.gpr[20] = (0u | 16u);
    ctx.gpr[19] = (0u | 17u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16959));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    goto L_0881945C;
L_0881945C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088194E4;
      }
      goto L_08819478;
    }
L_08819478:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_088194E4;
      }
      goto L_08819484;
    }
L_08819484:
    aot_gpr_31 = (0x0881948Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881948Cu) goto L_0881948C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881948C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088194E4;
      }
      goto L_08819494;
    }
L_08819494:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_088194E4;
      }
      goto L_088194A0;
    }
L_088194A0:
    aot_gpr_31 = (0x088194A8u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088194A8u) goto L_088194A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088194A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088194E4;
      }
      goto L_088194B0;
    }
L_088194B0:
    aot_gpr_31 = (0x088194B8u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 899u, 0x0890B900u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088194B8u) goto L_088194B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088194B8:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088194C4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 885u, 0x0890FF54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088194C4u) goto L_088194C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088194C4:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x088194E4u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 152u, 0x0891CA20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088194E4u) goto L_088194E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088194E4:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[22] != 0u) {
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
        goto L_0881945C;
    }
    goto L_088194F0;
L_088194F0:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      aot_gpr_17 = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881951C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (0u | 11u);
      if (branch_taken) {
          goto L_088195A4;
      }
      goto L_0881954C;
    }
L_0881954C:
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08819550;
L_08819550:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08819598;
      }
      goto L_0881956C;
    }
L_0881956C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
      if (branch_taken) {
          goto L_08819598;
      }
      goto L_08819578;
    }
L_08819578:
    aot_gpr_31 = (0x08819580u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819580u) goto L_08819580;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819580:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08819598;
      }
      goto L_08819588;
    }
L_08819588:
    aot_gpr_31 = (0x08819590u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819590u) goto L_08819590;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819590:
    aot_gpr_31 = (0x08819598u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819598u) goto L_08819598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819598:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[18] != 0u) {
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08819550;
    }
    goto L_088195A4;
L_088195A4:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088195BC:
    ctx.gpr[8] = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[8] - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(285))))));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(276), ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(284), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(aot_gpr_5));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(aot_fpr_12));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088195EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_5 = (aot_gpr_5 & 7u);
    if (aot_gpr_5 == 0u) {
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08819614;
    }
    goto L_08819604;
L_08819604:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0881967C;
      }
      goto L_08819610;
    }
L_08819610:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08819614;
L_08819614:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_6 = (aot_gpr_5 >> 4u);
    aot_gpr_6 = (aot_gpr_6 & 3u);
    aot_gpr_5 = (aot_gpr_6 << 5u);
    ctx.gpr[7] = (aot_gpr_6 << 2u);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_0881967C;
      }
      goto L_0881963C;
    }
L_0881963C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(285))))));
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    ctx.gpr[7] = (ctx.gpr[7] ^ 1u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_0881967C;
      }
      goto L_0881965C;
    }
L_0881965C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_0881967C;
      }
      goto L_08819668;
    }
L_08819668:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(284))))));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(280)));
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0881967Cu);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    goto L_08819828;
L_0881967C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08819688:
    aot_gpr_6 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(260));
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088196E8;
      }
      goto L_088196A8;
    }
L_088196A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    goto L_088196AC;
L_088196AC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_6 & 14u);
    aot_gpr_6 = (aot_gpr_6 ^ 6u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088196DC;
      }
      goto L_088196C8;
    }
L_088196C8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088196DC;
      }
      goto L_088196D4;
    }
L_088196D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088196EC;
      }
      goto L_088196DC;
    }
L_088196DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
        goto L_088196AC;
    }
    goto L_088196E8;
L_088196E8:
    ctx.gpr[2] = (0u | 1u);
    goto L_088196EC;
L_088196EC:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088196F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], aot_gpr_17, ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_gpr_17 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x0881971Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881971Cu) goto L_0881971C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881971C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08819740;
      }
      goto L_08819724;
    }
L_08819724:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08819748;
      }
      goto L_08819730;
    }
L_08819730:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
      if (branch_taken) {
          goto L_088197C0;
      }
      goto L_08819738;
    }
L_08819738:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08819758;
      }
      goto L_08819740;
    }
L_08819740:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088197C0;
      }
      goto L_08819748;
    }
L_08819748:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08819790;
      }
      goto L_08819750;
    }
L_08819750:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088197C0;
      }
      goto L_08819758;
    }
L_08819758:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08819778;
      }
      goto L_08819768;
    }
L_08819768:
    aot_gpr_31 = (0x08819770u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819770u) goto L_08819770;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819770:
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_17;
      if (branch_taken) {
          goto L_08819788;
      }
      goto L_08819778;
    }
L_08819778:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 8u);
    aot_gpr_31 = (0x08819788u);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819788u) goto L_08819788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819788:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088197C0;
      }
      goto L_08819790;
    }
L_08819790:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 12u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088197B0;
      }
      goto L_088197A0;
    }
L_088197A0:
    aot_gpr_31 = (0x088197A8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088197A8u) goto L_088197A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088197A8:
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_17;
      if (branch_taken) {
          goto L_088197C0;
      }
      goto L_088197B0;
    }
L_088197B0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 12u);
    aot_gpr_31 = (0x088197C0u);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088197C0u) goto L_088197C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088197C0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088197D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(376)));
    if (aot_gpr_5 != 0u) {
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(372)));
        goto L_088197EC;
    }
    goto L_088197E4;
L_088197E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08819804;
      }
      goto L_088197EC;
    }
L_088197EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(372), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(376)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(376), aot_gpr_5);
    goto L_08819804;
L_08819804:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881980C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(372)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(376)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(372), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(376), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08819828:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-400));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(360), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(368), ctx.gpr[18]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(392), ctx.gpr[30]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[30] = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(364), aot_gpr_17);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(372), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(396), aot_gpr_31);
    aot_gpr_31 = (0x08819878u);
    aot_gpr_6 = (0u | 256u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819878u) goto L_08819878;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819878:
    aot_gpr_4 = (ctx.gpr[16] << 5u);
    aot_gpr_5 = (ctx.gpr[16] << 2u);
    ctx.gpr[22] = (aot_gpr_4 - aot_gpr_5);
    ctx.gpr[22] = (ctx.gpr[18] + ctx.gpr[22]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (0u | 255u);
      if (branch_taken) {
          goto L_08819A5C;
      }
      goto L_08819894;
    }
L_08819894:
    aot_gpr_5 = (ctx.gpr[30] << 5u);
    aot_gpr_6 = (ctx.gpr[30] << 2u);
    ctx.gpr[10] = (aot_gpr_5 - aot_gpr_6);
    ctx.gpr[3] = (0u | 58u);
    ctx.gpr[2] = (0u | 57u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    ctx.gpr[11] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (ctx.gpr[18] + ctx.gpr[10]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    goto L_088198B8;
L_088198B8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 6u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08819A50;
      }
      goto L_088198D4;
    }
L_088198D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_088198F0;
      }
      goto L_088198E4;
    }
L_088198E4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[2];
    aot_gpr_5 = (aot_gpr_6 & 255u);
      if (branch_taken) {
          goto L_088198F8;
      }
      goto L_088198F0;
    }
L_088198F0:
    aot_gpr_6 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_6 & 255u);
    goto L_088198F8;
L_088198F8:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08819A50;
      }
      goto L_08819900;
    }
L_08819900:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_gpr_4 - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08819910;
      }
      goto L_08819908;
    }
L_08819908:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08819920;
      }
      goto L_08819910;
    }
L_08819910:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 3u));
    aot_gpr_6 = (aot_gpr_6 >> 29u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 3u));
    goto L_08819920;
L_08819920:
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08819A50;
      }
      goto L_0881993C;
    }
L_0881993C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
      if (branch_taken) {
          goto L_08819A44;
      }
      goto L_0881994C;
    }
L_0881994C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[7] & 14u);
    ctx.gpr[7] = (ctx.gpr[7] ^ 6u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08819A44;
      }
      goto L_0881996C;
    }
L_0881996C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[7] & 14u);
    ctx.gpr[7] = (ctx.gpr[7] ^ 6u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08819A44;
      }
      goto L_0881998C;
    }
L_0881998C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[3];
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_088199A8;
      }
      goto L_0881999C;
    }
L_0881999C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
      if (branch_taken) {
          goto L_088199B0;
      }
      goto L_088199A8;
    }
L_088199A8:
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
    goto L_088199B0;
L_088199B0:
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08819A44;
      }
      goto L_088199B8;
    }
L_088199B8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08819A44;
      }
      goto L_088199F8;
    }
L_088199F8:
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[7] = (aot_gpr_6 - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08819A08;
      }
      goto L_08819A00;
    }
L_08819A00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08819A18;
      }
      goto L_08819A08;
    }
L_08819A08:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[8] = (ctx.gpr[8] >> 29u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    goto L_08819A18;
L_08819A18:
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[7] = (aot_gpr_29 + ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08819A44;
      }
      goto L_08819A30;
    }
L_08819A30:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[12] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_direct_store8(ctx.gpr[12] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_08819A44;
L_08819A44:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_0881993C;
      }
      goto L_08819A50;
    }
L_08819A50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
        goto L_088198B8;
    }
    goto L_08819A5C;
L_08819A5C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_31 = (0x08819A6Cu);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819A6Cu) goto L_08819A6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819A6C:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08819A74;
L_08819A74:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08819A94;
      }
      goto L_08819A80;
    }
L_08819A80:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(255)));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(255), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08819A94;
L_08819A94:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08819A74;
      }
      goto L_08819AA4;
    }
L_08819AA4:
    aot_gpr_17 = (0u | 0u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (0u | 1u);
    goto L_08819AB0;
L_08819AB0:
    ctx.gpr[19] = (aot_gpr_29 + aot_gpr_17);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[16];
      if (branch_taken) {
          goto L_08819BC4;
      }
      goto L_08819AC0;
    }
L_08819AC0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(256)));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[20] = (aot_gpr_5 << 3u);
    ctx.gpr[20] = (aot_gpr_29 + ctx.gpr[20]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (0u | 9999u);
      if (branch_taken) {
          goto L_08819B2C;
      }
      goto L_08819AE4;
    }
L_08819AE4:
    ctx.gpr[7] = (aot_gpr_6 + ctx.gpr[20]);
    goto L_08819AE8;
L_08819AE8:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[8] = (aot_gpr_29 + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08819B18;
      }
      goto L_08819B04;
    }
L_08819B04:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4))))));
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    goto L_08819B18;
L_08819B18:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (aot_gpr_6 + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08819AE8;
      }
      goto L_08819B2C;
    }
L_08819B2C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08819BB0;
      }
      goto L_08819B34;
    }
L_08819B34:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[21];
    aot_gpr_5 = (aot_gpr_5 << 3u);
      if (branch_taken) {
          goto L_08819B60;
      }
      goto L_08819B58;
    }
L_08819B58:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08819B68;
      }
      goto L_08819B60;
    }
L_08819B60:
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    goto L_08819B68;
L_08819B68:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[21];
    aot_gpr_5 = (aot_gpr_5 << 3u);
      if (branch_taken) {
          goto L_08819B80;
      }
      goto L_08819B78;
    }
L_08819B78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08819B88;
      }
      goto L_08819B80;
    }
L_08819B80:
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    goto L_08819B88;
L_08819B88:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_gpr_31 = (0x08819BB0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_088196F4;
L_08819BB0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
      if (branch_taken) {
          goto L_08819AC0;
      }
      goto L_08819BC4;
    }
L_08819BC4:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08819AB0;
      }
      goto L_08819BD4;
    }
L_08819BD4:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_gpr_4 = (ctx.gpr[30] << 5u);
      if (branch_taken) {
          goto L_08819DA0;
      }
      goto L_08819BE0;
    }
L_08819BE0:
    aot_gpr_6 = (ctx.gpr[30] << 2u);
    ctx.gpr[30] = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (25587u << 16u);
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 | 61964u);
    ctx.gpr[20] = (0u | 58u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 57u);
    aot_gpr_17 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    ctx.gpr[30] = (ctx.gpr[18] + ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(352), aot_gpr_5);
    ctx.gpr[23] = (0u | 55u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08819C14;
L_08819C14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08819D94;
      }
      goto L_08819C30;
    }
L_08819C30:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[20];
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08819C4C;
      }
      goto L_08819C40;
    }
L_08819C40:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[19];
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08819C54;
      }
      goto L_08819C4C;
    }
L_08819C4C:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08819C54;
L_08819C54:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08819D94;
      }
      goto L_08819C5C;
    }
L_08819C5C:
    if (ctx.gpr[16] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(352)));
        goto L_08819C6C;
    }
    goto L_08819C64;
L_08819C64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08819C88;
      }
      goto L_08819C6C;
    }
L_08819C6C:
    aot_gpr_4 = (ctx.gpr[16] - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 3u));
    aot_gpr_5 = (aot_gpr_5 >> 29u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 3u));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    goto L_08819C88;
L_08819C88:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08819D94;
      }
      goto L_08819C94;
    }
L_08819C94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(260)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08819D54;
      }
      goto L_08819CA4;
    }
L_08819CA4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
      if (branch_taken) {
          goto L_08819D48;
      }
      goto L_08819CB4;
    }
L_08819CB4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_6 & 14u);
    aot_gpr_6 = (aot_gpr_6 ^ 6u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08819D48;
      }
      goto L_08819CD4;
    }
L_08819CD4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[20];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08819CF0;
      }
      goto L_08819CE4;
    }
L_08819CE4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[19];
    aot_gpr_6 = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08819CF8;
      }
      goto L_08819CF0;
    }
L_08819CF0:
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_6 = (ctx.gpr[7] & 255u);
    goto L_08819CF8;
L_08819CF8:
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08819D48;
      }
      goto L_08819D00;
    }
L_08819D00:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    aot_gpr_6 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08819D48;
      }
      goto L_08819D40;
    }
L_08819D40:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08819D48;
L_08819D48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08819CA4;
      }
      goto L_08819D54;
    }
L_08819D54:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08819D78;
      }
      goto L_08819D5C;
    }
L_08819D5C:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(276)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08819D70u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    goto L_088196F4;
L_08819D70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08819D94;
      }
      goto L_08819D78;
    }
L_08819D78:
    aot_gpr_31 = (0x08819D80u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819D80u) goto L_08819D80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819D80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[23];
      if (branch_taken) {
          goto L_08819D94;
      }
      goto L_08819D8C;
    }
L_08819D8C:
    aot_gpr_31 = (0x08819D94u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819D94u) goto L_08819D94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819D94:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[16] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08819C14;
    }
    goto L_08819DA0;
L_08819DA0:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(356), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      aot_gpr_17 = aot_run_words[2];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08819DD4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_17 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08819DFCu);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 473u, 0x08B65EA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819DFCu) goto L_08819DFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819DFC:
    aot_gpr_31 = (0x08819E04u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 473u, 0x08B65EA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819E04u) goto L_08819E04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819E04:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), aot_gpr_17);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08819E24:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08819E40u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08819EE8;
L_08819E40:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08819E50u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), 0u);
    goto L_0881A0B4;
L_08819E50:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_17);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08819E7C;
      }
      goto L_08819E6C;
    }
L_08819E6C:
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08819ED4;
      }
      goto L_08819E7C;
    }
L_08819E7C:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store16(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x08819EB8u);
    aot_gpr_6 = (ctx.gpr[9] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819EB8u) goto L_08819EB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819EB8:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_direct_store16(aot_gpr_17 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08819ED0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819ED0u) goto L_08819ED0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819ED0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08819ED4;
L_08819ED4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08819EE8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08819F04u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 499u, 0x08B660D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819F04u) goto L_08819F04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819F04:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08819F10u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 499u, 0x08B660D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819F10u) goto L_08819F10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819F10:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08819F20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[5]{aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x08819F48u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    goto L_08819FC4;
L_08819F48:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_31 = (0x08819F58u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_0881A018;
L_08819F58:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 65535u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08819F98;
      }
      goto L_08819F68;
    }
L_08819F68:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08819F80u);
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    goto L_0881A050;
L_08819F80:
    aot_gpr_31 = (0x08819F88u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_0881A018;
L_08819F88:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[19];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08819F68;
      }
      goto L_08819F98;
    }
L_08819F98:
    aot_gpr_31 = (0x08819FA0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_0881A06C;
L_08819FA0:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
L_08819FC4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08819FE8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 478u, 0x08B65F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819FE8u) goto L_08819FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819FE8:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08819FFCu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08819FFCu) goto L_08819FFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08819FFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881A018:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0881A044;
      }
      goto L_0881A024;
    }
L_0881A024:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0881A044;
      }
      goto L_0881A03C;
    }
L_0881A03C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881A048;
      }
      goto L_0881A044;
    }
L_0881A044:
    ctx.gpr[2] = (0u | 65535u);
    goto L_0881A048;
L_0881A048:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881A050:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881A06C:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881A074:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0881A090u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 473u, 0x08B65EA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A090u) goto L_0881A090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A090:
    aot_gpr_31 = (0x0881A098u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 473u, 0x08B65EA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A098u) goto L_0881A098;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A098:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881A0B4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
        goto L_0881A0D4;
    }
    goto L_0881A0CC;
L_0881A0CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0881A0F4;
      }
      goto L_0881A0D4;
    }
L_0881A0D4:
    aot_gpr_6 = (0u | 65535u);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    goto L_0881A0F4;
L_0881A0F4:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881A0FC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 4u));
    aot_gpr_6 = (aot_gpr_6 >> 28u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 4u));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881A128:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-208));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), ctx.gpr[18]);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(172), aot_run_words); }
    aot_gpr_31 = (0x0881A16Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 478u, 0x08B65F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A16Cu) goto L_0881A16C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A16C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_0881A22C;
      }
      goto L_0881A178;
    }
L_0881A178:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0881A20C;
      }
      goto L_0881A194;
    }
L_0881A194:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(44)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(24));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(132));
    jump_target = ctx.gpr[9];
    aot_gpr_31 = (0x0881A1BCu);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A1BCu) goto L_0881A1BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A1BC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0881A1E8;
      }
      goto L_0881A1C8;
    }
L_0881A1C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_5);
      if (branch_taken) {
          goto L_0881A23C;
      }
      goto L_0881A1E0;
    }
L_0881A1E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0881A490;
      }
      goto L_0881A1E8;
    }
L_0881A1E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0881A204u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A204u) goto L_0881A204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0881A4A4;
      }
      goto L_0881A20C;
    }
L_0881A20C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0881A224u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A224u) goto L_0881A224;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0881A4A4;
      }
      goto L_0881A22C;
    }
L_0881A22C:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0881A4A4;
      }
      goto L_0881A23C;
    }
L_0881A23C:
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(140));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(136));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    ctx.gpr[18] = (aot_gpr_29 | 0u);
    goto L_0881A24C;
L_0881A24C:
    aot_gpr_31 = (0x0881A254u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_0881A0B4;
L_0881A254:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_4 ^ ctx.gpr[16]);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0881A2B4;
      }
      goto L_0881A270;
    }
L_0881A270:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0881A2A4u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 491u, 0x08B66024u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A2A4u) goto L_0881A2A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A2A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0881A2D8;
      }
      goto L_0881A2AC;
    }
L_0881A2AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0881A36C;
      }
      goto L_0881A2B4;
    }
L_0881A2B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0881A2D0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A2D0u) goto L_0881A2D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A2D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0881A4A4;
      }
      goto L_0881A2D8;
    }
L_0881A2D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0881A308;
      }
      goto L_0881A2F4;
    }
L_0881A2F4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0881A300u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    goto L_0881A0FC;
L_0881A300:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_0881A480;
      }
      goto L_0881A308;
    }
L_0881A308:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0881A320u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 505u, 0x08B66170u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A320u) goto L_0881A320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A320:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[21] - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 4u));
    aot_gpr_5 = (aot_gpr_5 >> 28u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 4u));
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0881A354u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    goto L_0881A0FC;
L_0881A354:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0881A364u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A364u) goto L_0881A364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_0881A480;
      }
      goto L_0881A36C;
    }
L_0881A36C:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x0881A388u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 491u, 0x08B66024u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A388u) goto L_0881A388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A388:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
        goto L_0881A424;
    }
    goto L_0881A390;
L_0881A390:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0881A3C0;
      }
      goto L_0881A3AC;
    }
L_0881A3AC:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0881A3B8u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    goto L_0881A0FC;
L_0881A3B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_0881A480;
      }
      goto L_0881A3C0;
    }
L_0881A3C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    aot_gpr_31 = (0x0881A3D8u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 505u, 0x08B66170u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A3D8u) goto L_0881A3D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A3D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[21] - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 4u));
    aot_gpr_5 = (aot_gpr_5 >> 28u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 4u));
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0881A40Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    goto L_0881A0FC;
L_0881A40C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0881A41Cu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A41Cu) goto L_0881A41C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A41C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_0881A480;
      }
      goto L_0881A424;
    }
L_0881A424:
    aot_gpr_4 = (ctx.gpr[21] - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 4u));
    aot_gpr_5 = (aot_gpr_5 >> 28u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 4u));
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x0881A468u);
    aot_gpr_6 = (ctx.gpr[9] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A468u) goto L_0881A468;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A468:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0881A47Cu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A47Cu) goto L_0881A47C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A47C:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    goto L_0881A480;
L_0881A480:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0881A24C;
      }
      goto L_0881A490;
    }
L_0881A490:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0881A4A0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 475u, 0x08B65ED0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A4A0u) goto L_0881A4A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A4A0:
    ctx.gpr[2] = (0u | 0u);
    goto L_0881A4A4;
L_0881A4A4:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881A4D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_17);
    aot_gpr_17 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 12u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_31);
    aot_gpr_31 = (0x0881A508u);
    ctx.gpr[7] = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A508u) goto L_0881A508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A508:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (49864u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0881A544;
      }
      goto L_0881A52C;
    }
L_0881A52C:
    aot_gpr_4 = (50042u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0881A554;
      }
      goto L_0881A544;
    }
L_0881A544:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_31 = (0x0881A550u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A550u) goto L_0881A550;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A550:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0881A554;
L_0881A554:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_17 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_15 = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[16] = std::bit_cast<float>(aot_run_words[3]);
    }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
      if (branch_taken) {
          goto L_0881A578;
      }
      goto L_0881A574;
    }
L_0881A574:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_0881A578;
L_0881A578:
    aot_gpr_4 = (0u | 17u);
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_4;
      if (branch_taken) {
          goto L_0881A5A8;
      }
      goto L_0881A584;
    }
L_0881A584:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0881A5B8;
      }
      goto L_0881A5A8;
    }
L_0881A5A8:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    goto L_0881A5B8;
L_0881A5B8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (ctx.gpr[16] & 65535u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0881A5F4u);
    ctx.gpr[9] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 352u, 0x089421CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A5F4u) goto L_0881A5F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A5F4:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.gpr[16] = aot_run_words[3];
      aot_gpr_17 = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881A618:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_17);
    aot_gpr_17 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 6u);
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    aot_gpr_31 = (0x0881A658u);
    ctx.gpr[7] = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A658u) goto L_0881A658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A658:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_17 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[4]);
    }
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18160)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_0881A6BC;
      }
      goto L_0881A67C;
    }
L_0881A67C:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x0881A6A0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 799u, 0x08AAF984u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A6A0u) goto L_0881A6A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A6A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0881A6B0;
      }
      goto L_0881A6A8;
    }
L_0881A6A8:
    aot_gpr_31 = (0x0881A6B0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 282u, 0x08941D50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A6B0u) goto L_0881A6B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A6B0:
    aot_gpr_17 = (ctx.gpr[16] | 0u);
    { const bool branch_taken = aot_gpr_17 != 0u;
      if (branch_taken) {
          goto L_0881A67C;
      }
      goto L_0881A6BC;
    }
L_0881A6BC:
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18156)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_0881A708;
      }
      goto L_0881A6C8;
    }
L_0881A6C8:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x0881A6ECu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 799u, 0x08AAF984u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A6ECu) goto L_0881A6EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A6EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0881A6FC;
      }
      goto L_0881A6F4;
    }
L_0881A6F4:
    aot_gpr_31 = (0x0881A6FCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 282u, 0x08941D50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A6FCu) goto L_0881A6FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A6FC:
    aot_gpr_17 = (ctx.gpr[16] | 0u);
    { const bool branch_taken = aot_gpr_17 != 0u;
      if (branch_taken) {
          goto L_0881A6C8;
      }
      goto L_0881A708;
    }
L_0881A708:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      ctx.gpr[16] = aot_run_words[6];
      aot_gpr_17 = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881A738:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_17);
    aot_gpr_17 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_31);
    aot_gpr_31 = (0x0881A760u);
    ctx.gpr[7] = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A760u) goto L_0881A760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A760:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_17 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
      aot_fpr_15 = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[16] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[17] = std::bit_cast<float>(aot_run_words[5]);
      ctx.fpr[18] = std::bit_cast<float>(aot_run_words[6]);
    }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0881A7BCu);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A7BCu) goto L_0881A7BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A7BC:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881A7D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], aot_gpr_17, aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    aot_gpr_17 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    aot_gpr_6 = (0u | 10u);
    aot_gpr_31 = (0x0881A7FCu);
    ctx.gpr[7] = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A7FCu) goto L_0881A7FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A7FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_17 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_17 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(28)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
    aot_gpr_31 = (0x0881A884u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 755u, 0x088FF544u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A884u) goto L_0881A884;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A884:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881A89C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0881A8BCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A8BCu) goto L_0881A8BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A8BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0881A8D8;
      }
      goto L_0881A8C8;
    }
L_0881A8C8:
    aot_gpr_31 = (0x0881A8D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 303u, 0x08A3D9FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A8D0u) goto L_0881A8D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A8D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0881A8E0;
      }
      goto L_0881A8D8;
    }
L_0881A8D8:
    aot_gpr_31 = (0x0881A8E0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 308u, 0x08A3DA48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A8E0u) goto L_0881A8E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A8E0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881A8F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], aot_gpr_17, aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    aot_gpr_17 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    aot_gpr_6 = (0u | 8u);
    aot_gpr_31 = (0x0881A91Cu);
    ctx.gpr[7] = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A91Cu) goto L_0881A91C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A91C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_17 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_17 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6480)));
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
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_31 = (0x0881A984u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 325u, 0x08A3DBD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A984u) goto L_0881A984;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A984:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881A99C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0881A9BCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881A9BCu) goto L_0881A9BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881A9BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0881A9DC;
      }
      goto L_0881A9C8;
    }
L_0881A9C8:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2988), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0881A9E8;
      }
      goto L_0881A9DC;
    }
L_0881A9DC:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2988), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0881A9E8;
L_0881A9E8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881A9FC:
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vtfm_ct<0u, 36u, 1u, 3u, 3u>();
    ctx.execute_vfpu_vec3_ct<0u, 0u, 7u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881AA24:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (2235u << 16u);
      if (branch_taken) {
          goto L_0881AA54;
      }
      goto L_0881AA34;
    }
L_0881AA34:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28628));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
      if (branch_taken) {
          goto L_0881AA54;
      }
      goto L_0881AA44;
    }
L_0881AA44:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x0881AA54u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881AA54u) goto L_0881AA54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881AA54:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881AA60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], aot_gpr_17, aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_17 = (aot_gpr_5 | 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x0881AAA4u);
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(16));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881AAA4u) goto L_0881AAA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881AAA4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(160)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28596));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(176)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(184)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(188)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(192)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(193)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(194)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(195)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(195), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(196)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(200)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(204))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(204))))));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(204))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(204))))));
    aot_gpr_5 = (aot_gpr_5 & 2u);
    aot_gpr_5 = (aot_gpr_5 >> 1u);
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_5 = (aot_gpr_5 << 1u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(204))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(204))))));
    aot_gpr_5 = (aot_gpr_5 & 4u);
    aot_gpr_5 = (aot_gpr_5 >> 2u);
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(204))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(204))))));
    aot_gpr_5 = (aot_gpr_5 & 8u);
    aot_gpr_5 = (aot_gpr_5 >> 3u);
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(205))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(206))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(206), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(207))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(207), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(208))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_17);
    goto L_0881AC04;
L_0881AC04:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(209)));
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_17);
      if (branch_taken) {
          goto L_0881AC04;
      }
      goto L_0881AC20;
    }
L_0881AC20:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    goto L_0881AC2C;
L_0881AC2C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(216)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(216), ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881AC2C;
      }
      goto L_0881AC48;
    }
L_0881AC48:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    goto L_0881AC54;
L_0881AC54:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(232)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881AC54;
      }
      goto L_0881AC70;
    }
L_0881AC70:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    goto L_0881AC7C;
L_0881AC7C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(248)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881AC7C;
      }
      goto L_0881AC98;
    }
L_0881AC98:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    goto L_0881ACA4;
L_0881ACA4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(264)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881ACA4;
      }
      goto L_0881ACC0;
    }
L_0881ACC0:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    goto L_0881ACCC;
L_0881ACCC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(280)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881ACCC;
      }
      goto L_0881ACE8;
    }
L_0881ACE8:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    aot_gpr_6 = (aot_gpr_17 + static_cast<std::uint32_t>(304));
    goto L_0881ACF4;
L_0881ACF4:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[7] = aot_run_words[0];
      ctx.gpr[8] = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[3]);
    }
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(28)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[9], ctx.gpr[7], ctx.gpr[8]};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0881ACF4;
      }
      goto L_0881AD4C;
    }
L_0881AD4C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    goto L_0881AD58;
L_0881AD58:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(432)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(432), ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881AD58;
      }
      goto L_0881AD74;
    }
L_0881AD74:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(448)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(452)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(452), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(468));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(460)));
    aot_gpr_6 = (ctx.gpr[16] + static_cast<std::uint32_t>(468));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(464))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(464), static_cast<std::uint8_t>(aot_gpr_5));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      ctx.gpr[7] = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[8], aot_gpr_5, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_6 + static_cast<std::uint32_t>(44), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(524)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(528)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(528), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881AE3C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881AE6C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0881AE80u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 74u, 0x08AAC48Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881AE80u) goto L_0881AE80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881AE80:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28564));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), aot_gpr_4);
    { const std::uint32_t aot_run_words[8]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(752), aot_run_words); }
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881AEC4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0881AEE0u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 101u, 0x08AAC5E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881AEE0u) goto L_0881AEE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881AEE0:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28564));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(356)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(356)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1980)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(760), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1920)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(764), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(768), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1928)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(772), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1932)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1988)));
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(780), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881AF4C:
    ctx.gpr[2] = (2178u << 16u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-20660));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881AF58:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0881AF68u);
    goto L_0881AF4C;
L_0881AF68:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881AF74:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[5]{aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x0881AF9Cu);
    ctx.gpr[20] = (0u | 0u);
    goto L_0881AF4C;
L_0881AF9C:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[20] = (0u | 1u);
        goto L_0881B024;
    }
    goto L_0881AFA4;
L_0881AFA4:
    aot_gpr_31 = (0x0881AFACu);
    ctx.gpr[19] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 139u, 0x08AACA60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881AFACu) goto L_0881AFAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881AFAC:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[19] = (0u | 1u);
        goto L_0881B014;
    }
    goto L_0881AFB4;
L_0881AFB4:
    aot_gpr_31 = (0x0881AFBCu);
    ctx.gpr[18] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881AFBCu) goto L_0881AFBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881AFBC:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (0u | 1u);
        goto L_0881B004;
    }
    goto L_0881AFC4;
L_0881AFC4:
    aot_gpr_31 = (0x0881AFCCu);
    aot_gpr_17 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 400u, 0x0888E51Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881AFCCu) goto L_0881AFCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881AFCC:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    aot_gpr_17 = (0u | 1u);
        goto L_0881AFF4;
    }
    goto L_0881AFD4;
L_0881AFD4:
    aot_gpr_31 = (0x0881AFDCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 295u, 0x08A9A6CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881AFDCu) goto L_0881AFDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881AFDC:
    aot_gpr_4 = (ctx.gpr[2] ^ ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_17 & 255u);
      if (branch_taken) {
          goto L_0881AFF8;
      }
      goto L_0881AFF0;
    }
L_0881AFF0:
    aot_gpr_17 = (0u | 1u);
    goto L_0881AFF4;
L_0881AFF4:
    aot_gpr_4 = (aot_gpr_17 & 255u);
    goto L_0881AFF8;
L_0881AFF8:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_0881B008;
      }
      goto L_0881B000;
    }
L_0881B000:
    ctx.gpr[18] = (0u | 1u);
    goto L_0881B004;
L_0881B004:
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_0881B008;
L_0881B008:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_0881B018;
      }
      goto L_0881B010;
    }
L_0881B010:
    ctx.gpr[19] = (0u | 1u);
    goto L_0881B014;
L_0881B014:
    aot_gpr_4 = (ctx.gpr[19] & 255u);
    goto L_0881B018;
L_0881B018:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0881B024;
      }
      goto L_0881B020;
    }
L_0881B020:
    ctx.gpr[20] = (0u | 1u);
    goto L_0881B024;
L_0881B024:
    ctx.gpr[2] = (ctx.gpr[20] & 255u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
L_0881B048:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0881B098;
      }
      goto L_0881B064;
    }
L_0881B064:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28548));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(108), aot_gpr_4);
    aot_gpr_31 = (0x0881B078u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 425u, 0x08A9B6A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B078u) goto L_0881B078;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B078:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0881B084u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 161u, 0x08AACB80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B084u) goto L_0881B084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B084:
    aot_gpr_4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0881B098;
      }
      goto L_0881B090;
    }
L_0881B090:
    aot_gpr_31 = (0x0881B098u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B098u) goto L_0881B098;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B098:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881B0AC:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 9u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881B0B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 784u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0881B0D8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B0D8u) goto L_0881B0D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B0D8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881B0F0;
      }
      goto L_0881B0E4;
    }
L_0881B0E4:
    aot_gpr_31 = (0x0881B0ECu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0881AE6C;
L_0881B0EC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_0881B0F0;
L_0881B0F0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881B100:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0881B12C;
      }
      goto L_0881B110;
    }
L_0881B110:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0881B12Cu);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B12Cu) goto L_0881B12C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B12C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881B138:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 784u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x0881B164u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B164u) goto L_0881B164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B164:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881B1FC;
      }
      goto L_0881B170;
    }
L_0881B170:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0881B17Cu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    goto L_0881AA60;
L_0881B17C:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28580));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[7] = (2178u << 16u);
    aot_mem.aot_direct_store16(aot_gpr_17 + static_cast<std::uint32_t>(544), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(560));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(560));
    aot_gpr_5 = (0u | 6u);
    aot_gpr_6 = (0u | 32u);
    aot_gpr_31 = (0x0881B1ACu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-20932));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 115u, 0x08B6095Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B1ACu) goto L_0881B1AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B1AC:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28564));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(760), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(764)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(764), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(768)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(768), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(772)));
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(772), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(780)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(780), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0881B1FC;
L_0881B1FC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881B210:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0881B224u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0158_entry, 158u, 660u, 0x08A7FA3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B224u) goto L_0881B224;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B224:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881B230:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], aot_gpr_17, ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x0881B24Cu);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 158u, 0x08AACB34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B24Cu) goto L_0881B24C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B24C:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(18888));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), aot_gpr_4);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0881B264u);
    aot_gpr_4 = (0u | 400u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B264u) goto L_0881B264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B264:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_gpr_4 = (aot_gpr_17 | 0u);
      if (branch_taken) {
          goto L_0881B27C;
      }
      goto L_0881B270;
    }
L_0881B270:
    aot_gpr_31 = (0x0881B278u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 28u, 0x0881C6F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B278u) goto L_0881B278;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B278:
    ctx.gpr[18] = (aot_gpr_17 | 0u);
    goto L_0881B27C;
L_0881B27C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881B29C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_31 = (0x0881B2C0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 158u, 0x08AACB34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B2C0u) goto L_0881B2C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B2C0:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(18888));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(108), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0881B2E0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 736u, 0x08ADEF00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B2E0u) goto L_0881B2E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B2E0:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0881B2F0u);
    aot_gpr_4 = (0u | 400u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B2F0u) goto L_0881B2F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B2F0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0881B308;
      }
      goto L_0881B2FC;
    }
L_0881B2FC:
    aot_gpr_31 = (0x0881B304u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 28u, 0x0881C6F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B304u) goto L_0881B304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B304:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0881B308;
L_0881B308:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_gpr_31 = (0x0881B314u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_0881B384;
L_0881B314:
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 784u);
    aot_gpr_31 = (0x0881B330u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B330u) goto L_0881B330;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B330:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0881B34C;
      }
      goto L_0881B33C;
    }
L_0881B33C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0881B348u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    goto L_0881AEC4;
L_0881B348:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_0881B34C;
L_0881B34C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0881B35Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 456u, 0x08A9B9F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B35Cu) goto L_0881B35C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B35C:
    aot_gpr_31 = (0x0881B364u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 562u, 0x0888F9A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B364u) goto L_0881B364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B364:
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881B384:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0881B394u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 166u, 0x08AACBDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B394u) goto L_0881B394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B394:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881B3A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x0881B3B4u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 169u, 0x08AACC08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B3B4u) goto L_0881B3B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B3B4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881B3C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_0881B4E0;
      }
      goto L_0881B408;
    }
L_0881B408:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0881B430;
      }
      goto L_0881B414;
    }
L_0881B414:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x0881B424u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B424u) goto L_0881B424;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B424:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0881B430;
L_0881B430:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_31 = (0x0881B440u);
    aot_gpr_4 = (0u | 2064u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B440u) goto L_0881B440;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B440:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0881B468;
      }
      goto L_0881B44C;
    }
L_0881B44C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_31 = (0x0881B460u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 257u, 0x089D96B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B460u) goto L_0881B460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B460:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    goto L_0881B468;
L_0881B468:
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0881B474u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 736u, 0x08ADEF00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B474u) goto L_0881B474;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B474:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(64))))));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0881B490u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 171u, 0x08AACC28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B490u) goto L_0881B490;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B490:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 784u);
    aot_gpr_31 = (0x0881B4ACu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B4ACu) goto L_0881B4AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B4AC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0881B4C8;
      }
      goto L_0881B4B8;
    }
L_0881B4B8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0881B4C4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_0881AEC4;
L_0881B4C4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_0881B4C8;
L_0881B4C8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0881B4D8u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 456u, 0x08A9B9F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B4D8u) goto L_0881B4D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B4D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0881B4F4;
      }
      goto L_0881B4E0;
    }
L_0881B4E0:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(64))))));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0881B4F4u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 171u, 0x08AACC28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B4F4u) goto L_0881B4F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B4F4:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881B51C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], aot_gpr_17, ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0881B56C;
      }
      goto L_0881B540;
    }
L_0881B540:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0881B564;
      }
      goto L_0881B548;
    }
L_0881B548:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x0881B564u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B564u) goto L_0881B564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B564:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0881B5B4;
      }
      goto L_0881B56C;
    }
L_0881B56C:
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 784u);
    aot_gpr_31 = (0x0881B588u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B588u) goto L_0881B588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B588:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0881B5A4;
      }
      goto L_0881B594;
    }
L_0881B594:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr_31 = (0x0881B5A0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_0881AEC4;
L_0881B5A0:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_0881B5A4;
L_0881B5A4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0881B5B4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 456u, 0x08A9B9F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B5B4u) goto L_0881B5B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B5B4:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881B5CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(54))))));
    aot_gpr_6 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 << 16u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 0 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0881B66C;
      }
      goto L_0881B620;
    }
L_0881B620:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(96))))));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(56))))));
    aot_gpr_31 = (0x0881B638u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B638u) goto L_0881B638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B638:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x0881B650u);
    aot_gpr_6 = (0u | 36u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B650u) goto L_0881B650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B650:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0881B664u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_0881BB1C;
L_0881B664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0881B6D4;
      }
      goto L_0881B66C;
    }
L_0881B66C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(96))))));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(58))))));
    aot_gpr_31 = (0x0881B684u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B684u) goto L_0881B684;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B684:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(60))))));
    aot_gpr_31 = (0x0881B69Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 440u, 0x08A9B864u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B69Cu) goto L_0881B69C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B69C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(96))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(62))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(64))))));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_5 << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0881B6D4u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0881B774;
L_0881B6D4:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881B6F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0881B704u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 178u, 0x08AACCCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B704u) goto L_0881B704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B704:
    aot_gpr_31 = (0x0881B70Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 598u, 0x0889E930u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B70Cu) goto L_0881B70C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B70C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0881B71C;
      }
      goto L_0881B718;
    }
L_0881B718:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_0881B71C;
L_0881B71C:
    aot_gpr_31 = (0x0881B724u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 598u, 0x0889E930u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B724u) goto L_0881B724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B724:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0881B734;
      }
      goto L_0881B730;
    }
L_0881B730:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_0881B734;
L_0881B734:
    aot_gpr_31 = (0x0881B73Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 598u, 0x0889E930u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B73Cu) goto L_0881B73C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B73C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0881B74C;
      }
      goto L_0881B748;
    }
L_0881B748:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_0881B74C;
L_0881B74C:
    aot_gpr_31 = (0x0881B754u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 598u, 0x0889E930u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B754u) goto L_0881B754;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B754:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0881B764;
      }
      goto L_0881B760;
    }
L_0881B760:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_0881B764;
L_0881B764:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881B774:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], aot_gpr_17, ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    aot_gpr_17 = (aot_gpr_6 | 0u);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_31);
    aot_gpr_31 = (0x0881B7B4u);
    aot_gpr_6 = (0u | 36u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B7B4u) goto L_0881B7B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B7B4:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0881B7CCu);
    ctx.gpr[8] = (aot_gpr_29 | 0u);
    goto L_0881B804;
L_0881B7CC:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0881B7E0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    goto L_0881BB1C;
L_0881B7E0:
    ctx.gpr[2] = (0u | 1u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881B804:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_gpr_17 = (aot_gpr_6 | 0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x0881B834u);
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 182u, 0x08AACD10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881B834u) goto L_0881B834;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881B834:
    aot_gpr_5 = (46470u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 | 14269u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_0881B854;
      }
      goto L_0881B848;
    }
L_0881B848:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (aot_gpr_4 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(752)));
        goto L_0881B864;
    }
    goto L_0881B854;
L_0881B854:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(752)));
    goto L_0881B864;
L_0881B864:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0881B89C;
      }
      goto L_0881B87C;
    }
L_0881B87C:
    aot_gpr_5 = (13702u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 14269u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0881B8A0;
      }
      goto L_0881B898;
    }
L_0881B898:
    aot_gpr_4 = (0u | 1u);
    goto L_0881B89C;
L_0881B89C:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0881B8A0;
L_0881B8A0:
    if (aot_gpr_4 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(756)));
        goto L_0881B8B8;
    }
    goto L_0881B8A8;
L_0881B8A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(756)));
    goto L_0881B8B8;
L_0881B8B8:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0881B8F0;
      }
      goto L_0881B8D0;
    }
L_0881B8D0:
    aot_gpr_5 = (13702u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 14269u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0881B8F4;
      }
      goto L_0881B8EC;
    }
L_0881B8EC:
    aot_gpr_4 = (0u | 1u);
    goto L_0881B8F0;
L_0881B8F0:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0881B8F4;
L_0881B8F4:
    if (aot_gpr_4 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(760)));
        goto L_0881B90C;
    }
    goto L_0881B8FC;
L_0881B8FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(760)));
    goto L_0881B90C;
L_0881B90C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0881B944;
      }
      goto L_0881B924;
    }
L_0881B924:
    aot_gpr_5 = (13702u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 14269u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0881B948;
      }
      goto L_0881B940;
    }
L_0881B940:
    aot_gpr_4 = (0u | 1u);
    goto L_0881B944;
L_0881B944:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0881B948;
L_0881B948:
    if (aot_gpr_4 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(764)));
        goto L_0881B960;
    }
    goto L_0881B950;
L_0881B950:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 8u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(764)));
    goto L_0881B960;
L_0881B960:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(764)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0881B998;
      }
      goto L_0881B978;
    }
L_0881B978:
    aot_gpr_5 = (13702u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 14269u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0881B99C;
      }
      goto L_0881B994;
    }
L_0881B994:
    aot_gpr_4 = (0u | 1u);
    goto L_0881B998;
L_0881B998:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0881B99C;
L_0881B99C:
    if (aot_gpr_4 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(768)));
        goto L_0881B9B4;
    }
    goto L_0881B9A4;
L_0881B9A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 16u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(768)));
    goto L_0881B9B4;
L_0881B9B4:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(768)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0881B9EC;
      }
      goto L_0881B9CC;
    }
L_0881B9CC:
    aot_gpr_5 = (13702u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 14269u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0881B9F0;
      }
      goto L_0881B9E8;
    }
L_0881B9E8:
    aot_gpr_4 = (0u | 1u);
    goto L_0881B9EC;
L_0881B9EC:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0881B9F0;
L_0881B9F0:
    if (aot_gpr_4 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(772)));
        goto L_0881BA08;
    }
    goto L_0881B9F8;
L_0881B9F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 32u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(772)));
    goto L_0881BA08;
L_0881BA08:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(772)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0881BA40;
      }
      goto L_0881BA20;
    }
L_0881BA20:
    aot_gpr_5 = (13702u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 14269u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0881BA44;
      }
      goto L_0881BA3C;
    }
L_0881BA3C:
    aot_gpr_4 = (0u | 1u);
    goto L_0881BA40;
L_0881BA40:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0881BA44;
L_0881BA44:
    if (aot_gpr_4 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(776)));
        goto L_0881BA5C;
    }
    goto L_0881BA4C;
L_0881BA4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 64u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(776)));
    goto L_0881BA5C;
L_0881BA5C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0881BA94;
      }
      goto L_0881BA74;
    }
L_0881BA74:
    aot_gpr_5 = (13702u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 14269u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0881BA98;
      }
      goto L_0881BA90;
    }
L_0881BA90:
    aot_gpr_4 = (0u | 1u);
    goto L_0881BA94;
L_0881BA94:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0881BA98;
L_0881BA98:
    if (aot_gpr_4 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(780)));
        goto L_0881BAB0;
    }
    goto L_0881BAA0;
L_0881BAA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 128u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(780)));
    goto L_0881BAB0;
L_0881BAB0:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(780)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0881BAE8;
      }
      goto L_0881BAC8;
    }
L_0881BAC8:
    aot_gpr_4 = (13702u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 14269u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_0881BAEC;
      }
      goto L_0881BAE4;
    }
L_0881BAE4:
    ctx.gpr[16] = (0u | 1u);
    goto L_0881BAE8;
L_0881BAE8:
    aot_gpr_4 = (ctx.gpr[16] & 255u);
    goto L_0881BAEC;
L_0881BAEC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0881BB00;
      }
      goto L_0881BAF4;
    }
L_0881BAF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 256u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_0881BB00;
L_0881BB00:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0881BB1C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], aot_gpr_17, ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_17 = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[18] & 65535u);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    ctx.gpr[8] = (aot_gpr_5 & 255u);
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (aot_gpr_17 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (aot_gpr_17 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (ctx.gpr[18] >> 16u);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    ctx.gpr[8] = (aot_gpr_5 & 255u);
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (aot_gpr_17 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (aot_gpr_17 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[8] = (ctx.gpr[18] & 1u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_0881BC1C;
      }
      goto L_0881BC08;
    }
L_0881BC08:
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0881BC1Cu);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 206u, 0x08AACEA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0881BC1Cu) goto L_0881BC1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0881BC1C:
    aot_gpr_4 = (ctx.gpr[18] & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0881BCE8;
      }
      goto L_0881BC28;
    }
L_0881BC28:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (aot_gpr_5 & 255u);
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (aot_gpr_17 + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[7] = (aot_gpr_17 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 >> 16u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[7] = (aot_gpr_17 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (aot_gpr_17 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0881BCE8;
L_0881BCE8:
    aot_gpr_4 = (ctx.gpr[18] & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0881BDB4;
      }
      goto L_0881BCF4;
    }
L_0881BCF4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (aot_gpr_5 & 255u);
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (aot_gpr_17 + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[7] = (aot_gpr_17 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 >> 16u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[7] = (aot_gpr_17 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (aot_gpr_17 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0881BDB4;
L_0881BDB4:
    aot_gpr_4 = (ctx.gpr[18] & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0881BE80;
      }
      goto L_0881BDC0;
    }
L_0881BDC0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(760)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (aot_gpr_5 & 255u);
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (aot_gpr_17 + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[7] = (aot_gpr_17 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 >> 16u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[7] = (aot_gpr_17 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (aot_gpr_17 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0881BE80;
L_0881BE80:
    aot_gpr_4 = (ctx.gpr[18] & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0881BF4C;
      }
      goto L_0881BE8C;
    }
L_0881BE8C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(764)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (aot_gpr_5 & 255u);
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (aot_gpr_17 + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[7] = (aot_gpr_17 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 >> 16u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[7] = (aot_gpr_17 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (aot_gpr_17 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0881BF4C;
L_0881BF4C:
    aot_gpr_4 = (ctx.gpr[18] & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 2u, 0x0881C018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0881BF58;
    }
L_0881BF58:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(768)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (aot_gpr_5 & 255u);
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (aot_gpr_17 + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[7] = (aot_gpr_17 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 >> 16u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[7] = (aot_gpr_17 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_17 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    ctx.pc = 0x0881C000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0005(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0005_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_5(Runtime &runtime) {
    runtime.register_generated_unit(5u, 0x08818000u, 16384u, &recomp_unit_0005, &recomp_unit_0005_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08818000u, &recomp_unit_0005, "recomp_unit_0005",
                                          kEntryMasks_recomp_unit_0005, 64u);
}
} // namespace psprecomp
