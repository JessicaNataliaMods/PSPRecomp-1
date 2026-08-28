#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0096[64] = {
    0x12A5514484289129ull, 0x9224892248454512ull, 0x001708041048A248ull, 0x21010A5020A92A01ull,
    0x40A0481054569281ull, 0x48809A0419452440ull, 0x948656565208328Aull, 0x1000059656556595ull,
    0x128800A9494204D0ull, 0x4240800020922549ull, 0x4D010A8AD29A4142ull, 0xA488024142508021ull,
    0xA490810421010328ull, 0x0014A490004D4910ull, 0x6524020104A94480ull, 0x490494A5284020CAull,
    0x290020502894A020ull, 0x25252481224A04A1ull, 0x1065229008520810ull, 0x0653052010929009ull,
    0x94D29A5348204891ull, 0x2481065200148042ull, 0x4A24928924A24021ull, 0x6522900852081092ull,
    0x0400041092900910ull, 0x2949008042000402ull, 0xA49AA84A54820043ull, 0x0604691A48682A10ull,
    0x329A402095940C04ull, 0x1140210920968408ull, 0x2880004000280440ull, 0x142502A015528200ull,
    0x105294A481020024ull, 0x404002900A810402ull, 0x8008200208008285ull, 0x0500104000040020ull,
    0x01041000820C0041ull, 0x10010400820020A0ull, 0x0001002C20828010ull, 0x245486AA890A5005ull,
    0xA029040AAAAA052Aull, 0x06A920A44204D404ull, 0x200001354554AAA5ull, 0x0022480400080510ull,
    0x8400443428428820ull, 0x4001100050A12848ull, 0x8000440012A881AAull, 0x8905AD40B48108A8ull,
    0x48526A081202282Aull, 0x0040025508015022ull, 0x8A0455090500AA11ull, 0x2A844804500000AAull,
    0xA228110220440882ull, 0x0000002040650804ull, 0x0000000000000000ull, 0x5555400000000000ull,
    0x08010281200C1000ull, 0x812A219092238445ull, 0xC84952AA552A9250ull, 0x6A952A5549409510ull,
    0x8003000200000041ull, 0x5008000004242C00ull, 0x4020900000A04200ull, 0x0284800082409000ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0096[64] = {
    1u, 22u, 42u, 56u, 72u, 90u, 107u, 131u, 154u, 171u, 185u, 207u, 222u, 237u, 252u, 268u,
    287u, 301u, 320u, 335u, 352u, 375u, 389u, 408u, 425u, 436u, 447u, 468u, 487u, 506u, 521u, 529u,
    545u, 560u, 571u, 581u, 587u, 596u, 604u, 613u, 634u, 655u, 673u, 693u, 702u, 716u, 728u, 742u,
    763u, 781u, 793u, 811u, 825u, 839u, 847u, 847u, 856u, 865u, 885u, 910u, 934u, 940u, 949u, 957u,
};
void recomp_unit_0096_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,31,6,17 fprs=12,14,13,15 gpr_occ=4471 fpr_occ=82 gpr_total=6162 fpr_total=101
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_17 = ctx.gpr[17];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[31] = aot_gpr_31; ctx.gpr[6] = aot_gpr_6; ctx.gpr[17] = aot_gpr_17; ctx.fpr[12] = aot_fpr_12; ctx.fpr[14] = aot_fpr_14; ctx.fpr[13] = aot_fpr_13; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_17 = ctx.gpr[17]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08984004u;
        entry_id = 0u;
        if (entry_delta < 16360u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0096[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0096[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08984004;
    case 2u: goto L_08984010;
    case 3u: goto L_08984018;
    case 4u: goto L_08984024;
    case 5u: goto L_08984034;
    case 6u: goto L_08984040;
    case 7u: goto L_08984050;
    case 8u: goto L_08984058;
    case 9u: goto L_0898406C;
    case 10u: goto L_08984080;
    case 11u: goto L_0898408C;
    case 12u: goto L_0898409C;
    case 13u: goto L_089840A4;
    case 14u: goto L_089840B4;
    case 15u: goto L_089840BC;
    case 16u: goto L_089840C4;
    case 17u: goto L_089840CC;
    case 18u: goto L_089840D8;
    case 19u: goto L_089840E0;
    case 20u: goto L_089840E8;
    case 21u: goto L_089840F4;
    case 22u: goto L_08984108;
    case 23u: goto L_08984114;
    case 24u: goto L_08984124;
    case 25u: goto L_0898412C;
    case 26u: goto L_0898413C;
    case 27u: goto L_08984144;
    case 28u: goto L_0898414C;
    case 29u: goto L_0898415C;
    case 30u: goto L_08984170;
    case 31u: goto L_0898417C;
    case 32u: goto L_08984188;
    case 33u: goto L_08984198;
    case 34u: goto L_089841A4;
    case 35u: goto L_089841B0;
    case 36u: goto L_089841C0;
    case 37u: goto L_089841CC;
    case 38u: goto L_089841D8;
    case 39u: goto L_089841E8;
    case 40u: goto L_089841F4;
    case 41u: goto L_08984200;
    case 42u: goto L_08984210;
    case 43u: goto L_0898421C;
    case 44u: goto L_08984228;
    case 45u: goto L_08984238;
    case 46u: goto L_08984240;
    case 47u: goto L_08984250;
    case 48u: goto L_0898425C;
    case 49u: goto L_08984274;
    case 50u: goto L_0898428C;
    case 51u: goto L_089842B0;
    case 52u: goto L_089842C4;
    case 53u: goto L_089842C8;
    case 54u: goto L_089842CC;
    case 55u: goto L_089842D4;
    case 56u: goto L_08984304;
    case 57u: goto L_08984328;
    case 58u: goto L_08984330;
    case 59u: goto L_08984338;
    case 60u: goto L_08984344;
    case 61u: goto L_08984350;
    case 62u: goto L_08984358;
    case 63u: goto L_08984360;
    case 64u: goto L_08984378;
    case 65u: goto L_08984394;
    case 66u: goto L_0898439C;
    case 67u: goto L_089843A8;
    case 68u: goto L_089843B0;
    case 69u: goto L_089843C4;
    case 70u: goto L_089843E4;
    case 71u: goto L_089843F8;
    case 72u: goto L_08984404;
    case 73u: goto L_08984420;
    case 74u: goto L_08984428;
    case 75u: goto L_08984434;
    case 76u: goto L_08984440;
    case 77u: goto L_08984448;
    case 78u: goto L_0898444C;
    case 79u: goto L_08984454;
    case 80u: goto L_0898445C;
    case 81u: goto L_0898446C;
    case 82u: goto L_08984474;
    case 83u: goto L_0898447C;
    case 84u: goto L_08984494;
    case 85u: goto L_089844B0;
    case 86u: goto L_089844BC;
    case 87u: goto L_089844D8;
    case 88u: goto L_089844E0;
    case 89u: goto L_089844FC;
    case 90u: goto L_0898451C;
    case 91u: goto L_0898452C;
    case 92u: goto L_08984538;
    case 93u: goto L_08984544;
    case 94u: goto L_0898454C;
    case 95u: goto L_0898455C;
    case 96u: goto L_08984564;
    case 97u: goto L_08984570;
    case 98u: goto L_08984574;
    case 99u: goto L_0898458C;
    case 100u: goto L_089845A8;
    case 101u: goto L_089845B0;
    case 102u: goto L_089845B4;
    case 103u: goto L_089845C0;
    case 104u: goto L_089845E0;
    case 105u: goto L_089845F0;
    case 106u: goto L_089845FC;
    case 107u: goto L_08984608;
    case 108u: goto L_08984610;
    case 109u: goto L_08984620;
    case 110u: goto L_08984628;
    case 111u: goto L_08984634;
    case 112u: goto L_08984638;
    case 113u: goto L_08984650;
    case 114u: goto L_08984668;
    case 115u: goto L_08984674;
    case 116u: goto L_0898467C;
    case 117u: goto L_08984688;
    case 118u: goto L_0898468C;
    case 119u: goto L_08984694;
    case 120u: goto L_0898469C;
    case 121u: goto L_089846A8;
    case 122u: goto L_089846AC;
    case 123u: goto L_089846B4;
    case 124u: goto L_089846BC;
    case 125u: goto L_089846C8;
    case 126u: goto L_089846CC;
    case 127u: goto L_089846E0;
    case 128u: goto L_089846EC;
    case 129u: goto L_089846F4;
    case 130u: goto L_08984700;
    case 131u: goto L_08984704;
    case 132u: goto L_0898470C;
    case 133u: goto L_08984714;
    case 134u: goto L_08984720;
    case 135u: goto L_08984724;
    case 136u: goto L_0898472C;
    case 137u: goto L_08984738;
    case 138u: goto L_0898473C;
    case 139u: goto L_08984744;
    case 140u: goto L_0898474C;
    case 141u: goto L_08984754;
    case 142u: goto L_0898475C;
    case 143u: goto L_08984768;
    case 144u: goto L_0898476C;
    case 145u: goto L_08984774;
    case 146u: goto L_0898477C;
    case 147u: goto L_08984788;
    case 148u: goto L_0898478C;
    case 149u: goto L_08984794;
    case 150u: goto L_089847A0;
    case 151u: goto L_089847A4;
    case 152u: goto L_089847AC;
    case 153u: goto L_089847F4;
    case 154u: goto L_08984814;
    case 155u: goto L_0898481C;
    case 156u: goto L_08984820;
    case 157u: goto L_0898482C;
    case 158u: goto L_08984848;
    case 159u: goto L_0898485C;
    case 160u: goto L_08984864;
    case 161u: goto L_08984870;
    case 162u: goto L_0898487C;
    case 163u: goto L_08984884;
    case 164u: goto L_08984890;
    case 165u: goto L_08984898;
    case 166u: goto L_089848A0;
    case 167u: goto L_089848D0;
    case 168u: goto L_089848E0;
    case 169u: goto L_089848E8;
    case 170u: goto L_089848F4;
    case 171u: goto L_08984904;
    case 172u: goto L_08984910;
    case 173u: goto L_0898491C;
    case 174u: goto L_08984924;
    case 175u: goto L_0898492C;
    case 176u: goto L_08984938;
    case 177u: goto L_08984948;
    case 178u: goto L_08984954;
    case 179u: goto L_08984960;
    case 180u: goto L_08984978;
    case 181u: goto L_089849C0;
    case 182u: goto L_089849DC;
    case 183u: goto L_089849E8;
    case 184u: goto L_089849FC;
    case 185u: goto L_08984A08;
    case 186u: goto L_08984A1C;
    case 187u: goto L_08984A24;
    case 188u: goto L_08984A3C;
    case 189u: goto L_08984A48;
    case 190u: goto L_08984A50;
    case 191u: goto L_08984A54;
    case 192u: goto L_08984A60;
    case 193u: goto L_08984A68;
    case 194u: goto L_08984A74;
    case 195u: goto L_08984A7C;
    case 196u: goto L_08984A80;
    case 197u: goto L_08984A88;
    case 198u: goto L_08984A90;
    case 199u: goto L_08984AA0;
    case 200u: goto L_08984AA8;
    case 201u: goto L_08984AB0;
    case 202u: goto L_08984AC4;
    case 203u: goto L_08984AE4;
    case 204u: goto L_08984AEC;
    case 205u: goto L_08984AF0;
    case 206u: goto L_08984AFC;
    case 207u: goto L_08984B04;
    case 208u: goto L_08984B18;
    case 209u: goto L_08984B40;
    case 210u: goto L_08984B54;
    case 211u: goto L_08984B5C;
    case 212u: goto L_08984B68;
    case 213u: goto L_08984B7C;
    case 214u: goto L_08984B84;
    case 215u: goto L_08984B9C;
    case 216u: goto L_08984BA8;
    case 217u: goto L_08984BD0;
    case 218u: goto L_08984BE0;
    case 219u: goto L_08984BEC;
    case 220u: goto L_08984BF8;
    case 221u: goto L_08984C00;
    case 222u: goto L_08984C10;
    case 223u: goto L_08984C18;
    case 224u: goto L_08984C24;
    case 225u: goto L_08984C28;
    case 226u: goto L_08984C44;
    case 227u: goto L_08984C64;
    case 228u: goto L_08984C78;
    case 229u: goto L_08984C8C;
    case 230u: goto L_08984CA4;
    case 231u: goto L_08984CC0;
    case 232u: goto L_08984CD4;
    case 233u: goto L_08984CE0;
    case 234u: goto L_08984CEC;
    case 235u: goto L_08984CF8;
    case 236u: goto L_08984D00;
    case 237u: goto L_08984D14;
    case 238u: goto L_08984D24;
    case 239u: goto L_08984D30;
    case 240u: goto L_08984D3C;
    case 241u: goto L_08984D44;
    case 242u: goto L_08984D4C;
    case 243u: goto L_08984D50;
    case 244u: goto L_08984D5C;
    case 245u: goto L_08984D94;
    case 246u: goto L_08984DA0;
    case 247u: goto L_08984DAC;
    case 248u: goto L_08984DB8;
    case 249u: goto L_08984DC0;
    case 250u: goto L_08984DCC;
    case 251u: goto L_08984DD4;
    case 252u: goto L_08984E20;
    case 253u: goto L_08984E2C;
    case 254u: goto L_08984E3C;
    case 255u: goto L_08984E44;
    case 256u: goto L_08984E50;
    case 257u: goto L_08984E58;
    case 258u: goto L_08984E60;
    case 259u: goto L_08984E6C;
    case 260u: goto L_08984E84;
    case 261u: goto L_08984EA8;
    case 262u: goto L_08984ECC;
    case 263u: goto L_08984ED8;
    case 264u: goto L_08984EE4;
    case 265u: goto L_08984EEC;
    case 266u: goto L_08984EF8;
    case 267u: goto L_08984EFC;
    case 268u: goto L_08984F08;
    case 269u: goto L_08984F10;
    case 270u: goto L_08984F1C;
    case 271u: goto L_08984F20;
    case 272u: goto L_08984F38;
    case 273u: goto L_08984F5C;
    case 274u: goto L_08984F70;
    case 275u: goto L_08984F78;
    case 276u: goto L_08984F84;
    case 277u: goto L_08984F8C;
    case 278u: goto L_08984F98;
    case 279u: goto L_08984FA0;
    case 280u: goto L_08984FAC;
    case 281u: goto L_08984FB4;
    case 282u: goto L_08984FC0;
    case 283u: goto L_08984FCC;
    case 284u: goto L_08984FE4;
    case 285u: goto L_08984FF0;
    case 286u: goto L_08984FFC;
    case 287u: goto L_08985018;
    case 288u: goto L_08985038;
    case 289u: goto L_08985040;
    case 290u: goto L_0898504C;
    case 291u: goto L_08985054;
    case 292u: goto L_08985060;
    case 293u: goto L_08985070;
    case 294u: goto L_08985078;
    case 295u: goto L_08985094;
    case 296u: goto L_0898509C;
    case 297u: goto L_089850B8;
    case 298u: goto L_089850E4;
    case 299u: goto L_089850F0;
    case 300u: goto L_089850F8;
    case 301u: goto L_08985104;
    case 302u: goto L_08985118;
    case 303u: goto L_08985120;
    case 304u: goto L_0898512C;
    case 305u: goto L_08985148;
    case 306u: goto L_08985150;
    case 307u: goto L_0898515C;
    case 308u: goto L_08985168;
    case 309u: goto L_08985178;
    case 310u: goto L_08985184;
    case 311u: goto L_089851A0;
    case 312u: goto L_089851AC;
    case 313u: goto L_089851B8;
    case 314u: goto L_089851C4;
    case 315u: goto L_089851CC;
    case 316u: goto L_089851D8;
    case 317u: goto L_089851E4;
    case 318u: goto L_089851EC;
    case 319u: goto L_089851F8;
    case 320u: goto L_08985214;
    case 321u: goto L_08985230;
    case 322u: goto L_08985248;
    case 323u: goto L_08985254;
    case 324u: goto L_0898525C;
    case 325u: goto L_08985270;
    case 326u: goto L_08985294;
    case 327u: goto L_089852A0;
    case 328u: goto L_089852A8;
    case 329u: goto L_089852B8;
    case 330u: goto L_089852C4;
    case 331u: goto L_089852CC;
    case 332u: goto L_089852D8;
    case 333u: goto L_089852DC;
    case 334u: goto L_089852F4;
    case 335u: goto L_08985304;
    case 336u: goto L_08985310;
    case 337u: goto L_08985334;
    case 338u: goto L_08985340;
    case 339u: goto L_08985348;
    case 340u: goto L_08985354;
    case 341u: goto L_08985360;
    case 342u: goto L_08985374;
    case 343u: goto L_08985398;
    case 344u: goto L_089853A4;
    case 345u: goto L_089853AC;
    case 346u: goto L_089853C4;
    case 347u: goto L_089853C8;
    case 348u: goto L_089853D4;
    case 349u: goto L_089853DC;
    case 350u: goto L_089853E8;
    case 351u: goto L_089853EC;
    case 352u: goto L_08985404;
    case 353u: goto L_08985414;
    case 354u: goto L_08985420;
    case 355u: goto L_08985430;
    case 356u: goto L_0898543C;
    case 357u: goto L_08985458;
    case 358u: goto L_08985470;
    case 359u: goto L_0898547C;
    case 360u: goto L_08985484;
    case 361u: goto L_08985488;
    case 362u: goto L_08985494;
    case 363u: goto L_0898549C;
    case 364u: goto L_089854A8;
    case 365u: goto L_089854B0;
    case 366u: goto L_089854B4;
    case 367u: goto L_089854C0;
    case 368u: goto L_089854C8;
    case 369u: goto L_089854D4;
    case 370u: goto L_089854DC;
    case 371u: goto L_089854E0;
    case 372u: goto L_089854EC;
    case 373u: goto L_089854F4;
    case 374u: goto L_08985500;
    case 375u: goto L_08985508;
    case 376u: goto L_0898551C;
    case 377u: goto L_08985540;
    case 378u: goto L_0898554C;
    case 379u: goto L_08985554;
    case 380u: goto L_08985588;
    case 381u: goto L_08985594;
    case 382u: goto L_0898559C;
    case 383u: goto L_089855A8;
    case 384u: goto L_089855AC;
    case 385u: goto L_089855C4;
    case 386u: goto L_089855E0;
    case 387u: goto L_089855EC;
    case 388u: goto L_089855F8;
    case 389u: goto L_08985604;
    case 390u: goto L_08985618;
    case 391u: goto L_0898563C;
    case 392u: goto L_08985648;
    case 393u: goto L_08985658;
    case 394u: goto L_08985660;
    case 395u: goto L_0898566C;
    case 396u: goto L_08985678;
    case 397u: goto L_08985684;
    case 398u: goto L_08985690;
    case 399u: goto L_089856A0;
    case 400u: goto L_089856A8;
    case 401u: goto L_089856B4;
    case 402u: goto L_089856C0;
    case 403u: goto L_089856CC;
    case 404u: goto L_089856D8;
    case 405u: goto L_089856E8;
    case 406u: goto L_089856F0;
    case 407u: goto L_089856FC;
    case 408u: goto L_08985708;
    case 409u: goto L_08985714;
    case 410u: goto L_08985720;
    case 411u: goto L_08985734;
    case 412u: goto L_08985750;
    case 413u: goto L_08985768;
    case 414u: goto L_08985774;
    case 415u: goto L_0898577C;
    case 416u: goto L_08985790;
    case 417u: goto L_089857B4;
    case 418u: goto L_089857C0;
    case 419u: goto L_089857C8;
    case 420u: goto L_089857D8;
    case 421u: goto L_089857E4;
    case 422u: goto L_089857EC;
    case 423u: goto L_089857F8;
    case 424u: goto L_089857FC;
    case 425u: goto L_08985814;
    case 426u: goto L_08985824;
    case 427u: goto L_08985830;
    case 428u: goto L_08985854;
    case 429u: goto L_08985860;
    case 430u: goto L_08985868;
    case 431u: goto L_08985874;
    case 432u: goto L_08985880;
    case 433u: goto L_08985894;
    case 434u: goto L_089858AC;
    case 435u: goto L_089858EC;
    case 436u: goto L_08985908;
    case 437u: goto L_0898592C;
    case 438u: goto L_08985968;
    case 439u: goto L_0898597C;
    case 440u: goto L_089859A0;
    case 441u: goto L_089859C4;
    case 442u: goto L_089859D0;
    case 443u: goto L_089859DC;
    case 444u: goto L_089859E4;
    case 445u: goto L_089859F0;
    case 446u: goto L_089859F8;
    case 447u: goto L_08985A04;
    case 448u: goto L_08985A08;
    case 449u: goto L_08985A1C;
    case 450u: goto L_08985A48;
    case 451u: goto L_08985A60;
    case 452u: goto L_08985A6C;
    case 453u: goto L_08985A74;
    case 454u: goto L_08985A7C;
    case 455u: goto L_08985A88;
    case 456u: goto L_08985A90;
    case 457u: goto L_08985A9C;
    case 458u: goto L_08985AB0;
    case 459u: goto L_08985AB8;
    case 460u: goto L_08985AC0;
    case 461u: goto L_08985AC8;
    case 462u: goto L_08985AD0;
    case 463u: goto L_08985AD4;
    case 464u: goto L_08985AE0;
    case 465u: goto L_08985AEC;
    case 466u: goto L_08985AF8;
    case 467u: goto L_08985B00;
    case 468u: goto L_08985B14;
    case 469u: goto L_08985B28;
    case 470u: goto L_08985B30;
    case 471u: goto L_08985B38;
    case 472u: goto L_08985B50;
    case 473u: goto L_08985B58;
    case 474u: goto L_08985B5C;
    case 475u: goto L_08985B70;
    case 476u: goto L_08985B7C;
    case 477u: goto L_08985B88;
    case 478u: goto L_08985B90;
    case 479u: goto L_08985B94;
    case 480u: goto L_08985BA4;
    case 481u: goto L_08985BB0;
    case 482u: goto L_08985BB8;
    case 483u: goto L_08985BBC;
    case 484u: goto L_08985BCC;
    case 485u: goto L_08985BE8;
    case 486u: goto L_08985BEC;
    case 487u: goto L_08985C0C;
    case 488u: goto L_08985C2C;
    case 489u: goto L_08985C30;
    case 490u: goto L_08985C4C;
    case 491u: goto L_08985C54;
    case 492u: goto L_08985C60;
    case 493u: goto L_08985C64;
    case 494u: goto L_08985C6C;
    case 495u: goto L_08985C74;
    case 496u: goto L_08985C80;
    case 497u: goto L_08985C98;
    case 498u: goto L_08985CBC;
    case 499u: goto L_08985CC8;
    case 500u: goto L_08985CD0;
    case 501u: goto L_08985CD4;
    case 502u: goto L_08985CE0;
    case 503u: goto L_08985CE8;
    case 504u: goto L_08985CF4;
    case 505u: goto L_08985CF8;
    case 506u: goto L_08985D10;
    case 507u: goto L_08985D2C;
    case 508u: goto L_08985D40;
    case 509u: goto L_08985D48;
    case 510u: goto L_08985D4C;
    case 511u: goto L_08985D54;
    case 512u: goto L_08985D60;
    case 513u: goto L_08985D78;
    case 514u: goto L_08985D84;
    case 515u: goto L_08985D90;
    case 516u: goto L_08985DA4;
    case 517u: goto L_08985DB8;
    case 518u: goto L_08985DDC;
    case 519u: goto L_08985DE4;
    case 520u: goto L_08985DF4;
    case 521u: goto L_08985E1C;
    case 522u: goto L_08985E2C;
    case 523u: goto L_08985E50;
    case 524u: goto L_08985E58;
    case 525u: goto L_08985E9C;
    case 526u: goto L_08985EE0;
    case 527u: goto L_08985EF0;
    case 528u: goto L_08985EF8;
    case 529u: goto L_08985F28;
    case 530u: goto L_08985F40;
    case 531u: goto L_08985F48;
    case 532u: goto L_08985F54;
    case 533u: goto L_08985F5C;
    case 534u: goto L_08985F64;
    case 535u: goto L_08985F6C;
    case 536u: goto L_08985F74;
    case 537u: goto L_08985F98;
    case 538u: goto L_08985FA0;
    case 539u: goto L_08985FA8;
    case 540u: goto L_08985FC4;
    case 541u: goto L_08985FCC;
    case 542u: goto L_08985FD8;
    case 543u: goto L_08985FEC;
    case 544u: goto L_08985FF4;
    case 545u: goto L_0898600C;
    case 546u: goto L_08986018;
    case 547u: goto L_08986048;
    case 548u: goto L_08986064;
    case 549u: goto L_08986080;
    case 550u: goto L_0898608C;
    case 551u: goto L_08986098;
    case 552u: goto L_089860A0;
    case 553u: goto L_089860AC;
    case 554u: goto L_089860B4;
    case 555u: goto L_089860C0;
    case 556u: goto L_089860C8;
    case 557u: goto L_089860D4;
    case 558u: goto L_089860DC;
    case 559u: goto L_089860F4;
    case 560u: goto L_08986108;
    case 561u: goto L_0898612C;
    case 562u: goto L_08986144;
    case 563u: goto L_08986160;
    case 564u: goto L_08986168;
    case 565u: goto L_08986170;
    case 566u: goto L_08986194;
    case 567u: goto L_089861A0;
    case 568u: goto L_089861A8;
    case 569u: goto L_089861DC;
    case 570u: goto L_089861FC;
    case 571u: goto L_08986204;
    case 572u: goto L_0898620C;
    case 573u: goto L_08986220;
    case 574u: goto L_08986228;
    case 575u: goto L_08986240;
    case 576u: goto L_08986270;
    case 577u: goto L_08986288;
    case 578u: goto L_089862B8;
    case 579u: goto L_089862D0;
    case 580u: goto L_08986300;
    case 581u: goto L_08986318;
    case 582u: goto L_0898634C;
    case 583u: goto L_0898639C;
    case 584u: goto L_089863B4;
    case 585u: goto L_089863E4;
    case 586u: goto L_089863EC;
    case 587u: goto L_08986404;
    case 588u: goto L_0898641C;
    case 589u: goto L_0898644C;
    case 590u: goto L_08986450;
    case 591u: goto L_08986468;
    case 592u: goto L_08986480;
    case 593u: goto L_089864B4;
    case 594u: goto L_089864CC;
    case 595u: goto L_089864E4;
    case 596u: goto L_08986518;
    case 597u: goto L_08986520;
    case 598u: goto L_08986538;
    case 599u: goto L_08986568;
    case 600u: goto L_08986580;
    case 601u: goto L_089865AC;
    case 602u: goto L_089865C4;
    case 603u: goto L_089865F4;
    case 604u: goto L_08986614;
    case 605u: goto L_08986640;
    case 606u: goto L_08986648;
    case 607u: goto L_08986660;
    case 608u: goto L_08986678;
    case 609u: goto L_0898668C;
    case 610u: goto L_08986690;
    case 611u: goto L_08986698;
    case 612u: goto L_089866C4;
    case 613u: goto L_08986704;
    case 614u: goto L_0898670C;
    case 615u: goto L_08986734;
    case 616u: goto L_0898673C;
    case 617u: goto L_08986748;
    case 618u: goto L_08986750;
    case 619u: goto L_08986764;
    case 620u: goto L_08986770;
    case 621u: goto L_08986780;
    case 622u: goto L_08986788;
    case 623u: goto L_08986790;
    case 624u: goto L_08986798;
    case 625u: goto L_089867A0;
    case 626u: goto L_089867A8;
    case 627u: goto L_089867AC;
    case 628u: goto L_089867C0;
    case 629u: goto L_089867CC;
    case 630u: goto L_089867D4;
    case 631u: goto L_089867DC;
    case 632u: goto L_089867EC;
    case 633u: goto L_089867F8;
    case 634u: goto L_08986808;
    case 635u: goto L_08986810;
    case 636u: goto L_08986818;
    case 637u: goto L_08986824;
    case 638u: goto L_0898682C;
    case 639u: goto L_08986848;
    case 640u: goto L_08986850;
    case 641u: goto L_08986858;
    case 642u: goto L_08986860;
    case 643u: goto L_08986868;
    case 644u: goto L_08986870;
    case 645u: goto L_08986878;
    case 646u: goto L_08986880;
    case 647u: goto L_08986888;
    case 648u: goto L_08986890;
    case 649u: goto L_089868AC;
    case 650u: goto L_089868C4;
    case 651u: goto L_089868D0;
    case 652u: goto L_089868D8;
    case 653u: goto L_089868F8;
    case 654u: goto L_08986900;
    case 655u: goto L_0898690C;
    case 656u: goto L_0898692C;
    case 657u: goto L_08986934;
    case 658u: goto L_0898693C;
    case 659u: goto L_08986940;
    case 660u: goto L_0898694C;
    case 661u: goto L_08986968;
    case 662u: goto L_0898697C;
    case 663u: goto L_0898698C;
    case 664u: goto L_08986998;
    case 665u: goto L_089869A0;
    case 666u: goto L_089869B8;
    case 667u: goto L_089869C4;
    case 668u: goto L_089869D0;
    case 669u: goto L_089869D8;
    case 670u: goto L_089869E0;
    case 671u: goto L_089869E8;
    case 672u: goto L_089869EC;
    case 673u: goto L_08986A04;
    case 674u: goto L_08986A0C;
    case 675u: goto L_08986A18;
    case 676u: goto L_08986A20;
    case 677u: goto L_08986A28;
    case 678u: goto L_08986A30;
    case 679u: goto L_08986A38;
    case 680u: goto L_08986A40;
    case 681u: goto L_08986A4C;
    case 682u: goto L_08986A54;
    case 683u: goto L_08986A5C;
    case 684u: goto L_08986A64;
    case 685u: goto L_08986A6C;
    case 686u: goto L_08986A7C;
    case 687u: goto L_08986A84;
    case 688u: goto L_08986A8C;
    case 689u: goto L_08986A94;
    case 690u: goto L_08986A98;
    case 691u: goto L_08986AA4;
    case 692u: goto L_08986AF8;
    case 693u: goto L_08986B14;
    case 694u: goto L_08986B24;
    case 695u: goto L_08986B2C;
    case 696u: goto L_08986B50;
    case 697u: goto L_08986B8C;
    case 698u: goto L_08986BB0;
    case 699u: goto L_08986BBC;
    case 700u: goto L_08986BC8;
    case 701u: goto L_08986BD8;
    case 702u: goto L_08986C18;
    case 703u: goto L_08986C30;
    case 704u: goto L_08986C40;
    case 705u: goto L_08986C48;
    case 706u: goto L_08986C5C;
    case 707u: goto L_08986C70;
    case 708u: goto L_08986C78;
    case 709u: goto L_08986C8C;
    case 710u: goto L_08986C94;
    case 711u: goto L_08986C98;
    case 712u: goto L_08986CAC;
    case 713u: goto L_08986CBC;
    case 714u: goto L_08986CEC;
    case 715u: goto L_08986D00;
    case 716u: goto L_08986D10;
    case 717u: goto L_08986D1C;
    case 718u: goto L_08986D30;
    case 719u: goto L_08986D38;
    case 720u: goto L_08986D44;
    case 721u: goto L_08986D58;
    case 722u: goto L_08986D60;
    case 723u: goto L_08986D74;
    case 724u: goto L_08986D7C;
    case 725u: goto L_08986DB4;
    case 726u: goto L_08986DC4;
    case 727u: goto L_08986DFC;
    case 728u: goto L_08986E08;
    case 729u: goto L_08986E10;
    case 730u: goto L_08986E18;
    case 731u: goto L_08986E20;
    case 732u: goto L_08986E24;
    case 733u: goto L_08986E40;
    case 734u: goto L_08986E50;
    case 735u: goto L_08986E58;
    case 736u: goto L_08986E60;
    case 737u: goto L_08986E68;
    case 738u: goto L_08986E74;
    case 739u: goto L_08986EAC;
    case 740u: goto L_08986EBC;
    case 741u: goto L_08986F00;
    case 742u: goto L_08986F10;
    case 743u: goto L_08986F18;
    case 744u: goto L_08986F20;
    case 745u: goto L_08986F30;
    case 746u: goto L_08986F44;
    case 747u: goto L_08986F60;
    case 748u: goto L_08986F6C;
    case 749u: goto L_08986F74;
    case 750u: goto L_08986F78;
    case 751u: goto L_08986F80;
    case 752u: goto L_08986F9C;
    case 753u: goto L_08986FA4;
    case 754u: goto L_08986FAC;
    case 755u: goto L_08986FB0;
    case 756u: goto L_08986FB8;
    case 757u: goto L_08986FC0;
    case 758u: goto L_08986FC4;
    case 759u: goto L_08986FCC;
    case 760u: goto L_08986FE4;
    case 761u: goto L_08986FF0;
    case 762u: goto L_08987000;
    case 763u: goto L_08987008;
    case 764u: goto L_08987010;
    case 765u: goto L_08987018;
    case 766u: goto L_08987030;
    case 767u: goto L_08987038;
    case 768u: goto L_08987048;
    case 769u: goto L_08987068;
    case 770u: goto L_08987074;
    case 771u: goto L_08987090;
    case 772u: goto L_089870A8;
    case 773u: goto L_089870B0;
    case 774u: goto L_089870B8;
    case 775u: goto L_089870BC;
    case 776u: goto L_089870C8;
    case 777u: goto L_089870D4;
    case 778u: goto L_089870DC;
    case 779u: goto L_089870F0;
    case 780u: goto L_089870FC;
    case 781u: goto L_08987108;
    case 782u: goto L_08987118;
    case 783u: goto L_08987134;
    case 784u: goto L_0898713C;
    case 785u: goto L_08987144;
    case 786u: goto L_08987170;
    case 787u: goto L_08987184;
    case 788u: goto L_0898718C;
    case 789u: goto L_08987194;
    case 790u: goto L_0898719C;
    case 791u: goto L_089871A8;
    case 792u: goto L_089871DC;
    case 793u: goto L_08987204;
    case 794u: goto L_08987214;
    case 795u: goto L_08987228;
    case 796u: goto L_08987230;
    case 797u: goto L_08987238;
    case 798u: goto L_08987240;
    case 799u: goto L_08987264;
    case 800u: goto L_0898726C;
    case 801u: goto L_08987284;
    case 802u: goto L_08987290;
    case 803u: goto L_089872A4;
    case 804u: goto L_089872AC;
    case 805u: goto L_089872B4;
    case 806u: goto L_089872BC;
    case 807u: goto L_089872CC;
    case 808u: goto L_089872E8;
    case 809u: goto L_089872F0;
    case 810u: goto L_08987300;
    case 811u: goto L_08987308;
    case 812u: goto L_08987310;
    case 813u: goto L_08987318;
    case 814u: goto L_08987320;
    case 815u: goto L_08987374;
    case 816u: goto L_0898737C;
    case 817u: goto L_0898738C;
    case 818u: goto L_089873B0;
    case 819u: goto L_089873BC;
    case 820u: goto L_089873CC;
    case 821u: goto L_089873E0;
    case 822u: goto L_089873E8;
    case 823u: goto L_089873F0;
    case 824u: goto L_089873F8;
    case 825u: goto L_08987408;
    case 826u: goto L_08987420;
    case 827u: goto L_08987430;
    case 828u: goto L_0898744C;
    case 829u: goto L_0898745C;
    case 830u: goto L_08987478;
    case 831u: goto L_08987488;
    case 832u: goto L_089874A4;
    case 833u: goto L_089874B4;
    case 834u: goto L_089874D0;
    case 835u: goto L_089874D8;
    case 836u: goto L_089874E8;
    case 837u: goto L_089874F8;
    case 838u: goto L_08987500;
    case 839u: goto L_0898750C;
    case 840u: goto L_08987530;
    case 841u: goto L_08987544;
    case 842u: goto L_0898754C;
    case 843u: goto L_08987558;
    case 844u: goto L_0898755C;
    case 845u: goto L_0898757C;
    case 846u: goto L_08987598;
    case 847u: goto L_089877BC;
    case 848u: goto L_089877C4;
    case 849u: goto L_089877CC;
    case 850u: goto L_089877D4;
    case 851u: goto L_089877DC;
    case 852u: goto L_089877E4;
    case 853u: goto L_089877EC;
    case 854u: goto L_089877F4;
    case 855u: goto L_089877FC;
    case 856u: goto L_08987834;
    case 857u: goto L_0898784C;
    case 858u: goto L_08987850;
    case 859u: goto L_08987878;
    case 860u: goto L_08987884;
    case 861u: goto L_089878A0;
    case 862u: goto L_089878A8;
    case 863u: goto L_089878C4;
    case 864u: goto L_089878F0;
    case 865u: goto L_08987904;
    case 866u: goto L_0898790C;
    case 867u: goto L_0898791C;
    case 868u: goto L_0898792C;
    case 869u: goto L_08987940;
    case 870u: goto L_08987944;
    case 871u: goto L_08987948;
    case 872u: goto L_08987958;
    case 873u: goto L_08987968;
    case 874u: goto L_08987974;
    case 875u: goto L_08987980;
    case 876u: goto L_08987994;
    case 877u: goto L_089879A0;
    case 878u: goto L_089879A4;
    case 879u: goto L_089879B8;
    case 880u: goto L_089879C8;
    case 881u: goto L_089879D0;
    case 882u: goto L_089879D8;
    case 883u: goto L_089879E4;
    case 884u: goto L_08987A00;
    case 885u: goto L_08987A14;
    case 886u: goto L_08987A1C;
    case 887u: goto L_08987A28;
    case 888u: goto L_08987A34;
    case 889u: goto L_08987A40;
    case 890u: goto L_08987A48;
    case 891u: goto L_08987A50;
    case 892u: goto L_08987A58;
    case 893u: goto L_08987A64;
    case 894u: goto L_08987A6C;
    case 895u: goto L_08987A74;
    case 896u: goto L_08987A7C;
    case 897u: goto L_08987A88;
    case 898u: goto L_08987A90;
    case 899u: goto L_08987A98;
    case 900u: goto L_08987AA0;
    case 901u: goto L_08987AA8;
    case 902u: goto L_08987AB4;
    case 903u: goto L_08987ABC;
    case 904u: goto L_08987AC4;
    case 905u: goto L_08987AD0;
    case 906u: goto L_08987ADC;
    case 907u: goto L_08987AF0;
    case 908u: goto L_08987AFC;
    case 909u: goto L_08987B00;
    case 910u: goto L_08987B14;
    case 911u: goto L_08987B24;
    case 912u: goto L_08987B2C;
    case 913u: goto L_08987B34;
    case 914u: goto L_08987B40;
    case 915u: goto L_08987B5C;
    case 916u: goto L_08987B64;
    case 917u: goto L_08987B70;
    case 918u: goto L_08987B7C;
    case 919u: goto L_08987B84;
    case 920u: goto L_08987B8C;
    case 921u: goto L_08987B94;
    case 922u: goto L_08987B9C;
    case 923u: goto L_08987BA8;
    case 924u: goto L_08987BB0;
    case 925u: goto L_08987BB8;
    case 926u: goto L_08987BC4;
    case 927u: goto L_08987BCC;
    case 928u: goto L_08987BD4;
    case 929u: goto L_08987BE0;
    case 930u: goto L_08987BE8;
    case 931u: goto L_08987BF0;
    case 932u: goto L_08987BF8;
    case 933u: goto L_08987BFC;
    case 934u: goto L_08987C04;
    case 935u: goto L_08987C1C;
    case 936u: goto L_08987C88;
    case 937u: goto L_08987CC4;
    case 938u: goto L_08987CC8;
    case 939u: goto L_08987D00;
    case 940u: goto L_08987D2C;
    case 941u: goto L_08987D30;
    case 942u: goto L_08987D38;
    case 943u: goto L_08987D4C;
    case 944u: goto L_08987D58;
    case 945u: goto L_08987D6C;
    case 946u: goto L_08987DD0;
    case 947u: goto L_08987DF4;
    case 948u: goto L_08987DFC;
    case 949u: goto L_08987E28;
    case 950u: goto L_08987E3C;
    case 951u: goto L_08987E58;
    case 952u: goto L_08987E60;
    case 953u: goto L_08987EB4;
    case 954u: goto L_08987EC0;
    case 955u: goto L_08987ED8;
    case 956u: goto L_08987EFC;
    case 957u: goto L_08987F34;
    case 958u: goto L_08987F40;
    case 959u: goto L_08987F5C;
    case 960u: goto L_08987F68;
    case 961u: goto L_08987F80;
    case 962u: goto L_08987FC0;
    case 963u: goto L_08987FCC;
    case 964u: goto L_08987FE0;
    case 965u: goto L_08987FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x08984004u;
        if (local_delta_v813 >= 16360u || (local_delta_v813 & 3u) != 0u) {
            ctx.pc = jump_target;
            AOT_REGCACHE_SYNC_OUT();
            // PSPRECOMP_V814_CONTINUATION_RETURN
            Runtime::AotTailContinuation aot_cont_v814{};
            if (rt.take_aot_tail_continuation(jump_target, aot_cont_v814)) {
#if defined(__clang__) && defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
                [[clang::musttail]] return aot_cont_v814.function(
                    rt, ctx, aot_cont_v814.entry_id, aot_mem);
#else
                aot_cont_v814.function(rt, ctx, aot_cont_v814.entry_id, aot_mem); return;
#endif
            }
            return;
        }
    }
    local_pc = jump_target;
    entry_id = 0u;
    goto LOCAL_DISPATCH;

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
L_08984004:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08984018;
      }
      goto L_08984010;
    }
L_08984010:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-2));
    goto L_08984018;
L_08984018:
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0898414C;
      }
      goto L_08984024;
    }
L_08984024:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
        goto L_08984034;
    }
    goto L_08984034;
L_08984034:
    aot_gpr_4 = (ctx.gpr[21] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08984058;
      }
      goto L_08984040;
    }
L_08984040:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (0u | 153u);
    aot_gpr_31 = (0x08984050u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984050u) goto L_08984050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08984050:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[21]);
    goto L_08984058;
L_08984058:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u | 35u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_0898414C;
      }
      goto L_0898406C;
    }
L_0898406C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (0u | 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
        goto L_08984080;
    }
    goto L_08984080;
L_08984080:
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089840A4;
      }
      goto L_0898408C;
    }
L_0898408C:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (0u | 153u);
    aot_gpr_31 = (0x0898409Cu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898409Cu) goto L_0898409C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898409C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[18]);
    goto L_089840A4;
L_089840A4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u | 120u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_0898414C;
      }
      goto L_089840B4;
    }
L_089840B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    goto L_089840BC;
L_089840BC:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089840CC;
      }
      goto L_089840C4;
    }
L_089840C4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    goto L_089840CC;
L_089840CC:
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_089842CC;
      }
      goto L_089840D8;
    }
L_089840D8:
    if (aot_gpr_4 == 0u) {
    aot_gpr_5 = (ctx.gpr[18] + ctx.gpr[16]);
        goto L_089840E8;
    }
    goto L_089840E0;
L_089840E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[16]);
      if (branch_taken) {
          goto L_089840E8;
      }
      goto L_089840E8;
    }
L_089840E8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089840F4u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 21u, 0x089840F4u, 0x089E8FA8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 188u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 188u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 188u, 0x089E8FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089840F4u) goto L_089840F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089840F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (0u | 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
        goto L_08984108;
    }
    goto L_08984108;
L_08984108:
    aot_gpr_5 = (ctx.gpr[16] < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
        goto L_0898412C;
    }
    goto L_08984114;
L_08984114:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (0u | 153u);
    aot_gpr_31 = (0x08984124u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984124u) goto L_08984124;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08984124:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    goto L_0898412C;
L_0898412C:
    aot_gpr_6 = (aot_gpr_5 + ctx.gpr[16]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[30];
      if (branch_taken) {
          goto L_08984144;
      }
      goto L_0898413C;
    }
L_0898413C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089842CC;
      }
      goto L_08984144;
    }
L_08984144:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089840BC;
      }
      goto L_0898414C;
    }
L_0898414C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (0u | 38u);
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_0898417C;
      }
      goto L_0898415C;
    }
L_0898415C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (2233u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4560)));
    aot_gpr_31 = (0x08984170u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 30u, 0x08984170u, 0x089E8FA8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 188u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 188u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 188u, 0x089E8FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984170u) goto L_08984170;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984170:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089842CC;
      }
      goto L_0898417C;
    }
L_0898417C:
    aot_gpr_4 = (0u | 60u);
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_089841A4;
      }
      goto L_08984188;
    }
L_08984188:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (0x08984198u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 33u, 0x08984198u, 0x089E8FA8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 188u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 188u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 188u, 0x089E8FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984198u) goto L_08984198;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984198:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089842CC;
      }
      goto L_089841A4;
    }
L_089841A4:
    aot_gpr_4 = (0u | 62u);
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_089841CC;
      }
      goto L_089841B0;
    }
L_089841B0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x089841C0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 36u, 0x089841C0u, 0x089E8FA8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 188u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 188u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 188u, 0x089E8FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089841C0u) goto L_089841C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089841C0:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089842CC;
      }
      goto L_089841CC;
    }
L_089841CC:
    aot_gpr_4 = (0u | 34u);
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_089841F4;
      }
      goto L_089841D8;
    }
L_089841D8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
    aot_gpr_31 = (0x089841E8u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 39u, 0x089841E8u, 0x089E8FA8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 188u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 188u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 188u, 0x089E8FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089841E8u) goto L_089841E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089841E8:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089842CC;
      }
      goto L_089841F4;
    }
L_089841F4:
    aot_gpr_4 = (0u | 39u);
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_0898421C;
      }
      goto L_08984200;
    }
L_08984200:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(48)));
    aot_gpr_31 = (0x08984210u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 42u, 0x08984210u, 0x089E8FA8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 188u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 188u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 188u, 0x089E8FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984210u) goto L_08984210;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984210:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089842CC;
      }
      goto L_0898421C;
    }
L_0898421C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898425C;
      }
      goto L_08984228;
    }
L_08984228:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_6 = (ctx.gpr[19] & 255u);
    aot_gpr_31 = (0x08984238u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984238u) goto L_08984238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08984238:
    aot_gpr_31 = (0x08984240u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984240u) goto L_08984240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08984240:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08984250u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 47u, 0x08984250u, 0x089E8FA8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 188u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 188u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 188u, 0x089E8FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984250u) goto L_08984250;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984250:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089842CC;
      }
      goto L_0898425C;
    }
L_0898425C:
    aot_gpr_4 = (ctx.gpr[19] << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    ctx.gpr[19] = (aot_gpr_4 << 24u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 24u));
      if (branch_taken) {
          goto L_089842B0;
      }
      goto L_08984274;
    }
L_08984274:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
      if (branch_taken) {
          goto L_089842B0;
      }
      goto L_0898428C;
    }
L_0898428C:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089842C8;
      }
      goto L_089842B0;
    }
L_089842B0:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x089842C4u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 52u, 0x089842C4u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089842C4u) goto L_089842C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089842C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    goto L_089842C8;
L_089842C8:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    goto L_089842CC;
L_089842CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 675u, 0x08983FA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_089842D4;
    }
L_089842D4:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08984304:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08984330;
      }
      goto L_08984328;
    }
L_08984328:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    goto L_08984330;
L_08984330:
    aot_gpr_31 = (0x08984338u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 59u, 0x08984338u, 0x08ABE29Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 468u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 468u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984338u) goto L_08984338;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984338:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08984360;
      }
      goto L_08984344;
    }
L_08984344:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (aot_gpr_5 == 0u) {
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
        goto L_08984358;
    }
    goto L_08984350;
L_08984350:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08984358;
      }
      goto L_08984358;
    }
L_08984358:
    aot_gpr_31 = (0x08984360u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 63u, 0x08984360u, 0x08B5831Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984360u) goto L_08984360;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984360:
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08984378:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_089843B0;
      }
      goto L_08984394;
    }
L_08984394:
    aot_gpr_31 = (0x0898439Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898439Cu) goto L_0898439C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898439C:
    aot_gpr_4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089843B0;
      }
      goto L_089843A8;
    }
L_089843A8:
    aot_gpr_31 = (0x089843B0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089843B0u) goto L_089843B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089843B0:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089843C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0898447C;
      }
      goto L_089843E4;
    }
L_089843E4:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24808));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(12), aot_gpr_4);
      if (branch_taken) {
          goto L_08984428;
      }
      goto L_089843F8;
    }
L_089843F8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08984420;
      }
      goto L_08984404;
    }
L_08984404:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08984420u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984420u) goto L_08984420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08984420:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_089843F8;
      }
      goto L_08984428;
    }
L_08984428:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08984454;
      }
      goto L_08984434;
    }
L_08984434:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(32)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(32), 0u);
        goto L_0898444C;
    }
    goto L_08984440;
L_08984440:
    aot_gpr_31 = (0x08984448u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984448u) goto L_08984448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08984448:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(32), 0u);
    goto L_0898444C;
L_0898444C:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(40), 0u);
    goto L_08984454;
L_08984454:
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_gpr_4 = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_0898446C;
      }
      goto L_0898445C;
    }
L_0898445C:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27396));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] & 1u);
    goto L_0898446C;
L_0898446C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898447C;
      }
      goto L_08984474;
    }
L_08984474:
    aot_gpr_31 = (0x0898447Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898447Cu) goto L_0898447C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898447C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08984494:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_17 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089844E0;
      }
      goto L_089844B0;
    }
L_089844B0:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089844D8;
      }
      goto L_089844BC;
    }
L_089844BC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x089844D8u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089844D8u) goto L_089844D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089844D8:
    { const bool branch_taken = aot_gpr_17 != 0u;
      if (branch_taken) {
          goto L_089844B0;
      }
      goto L_089844E0;
    }
L_089844E0:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089844FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08984570;
      }
      goto L_0898451C;
    }
L_0898451C:
    aot_gpr_17 = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0898452Cu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 91u, 0x0898452Cu, 0x089E8C7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 134u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 134u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 134u, 0x089E8C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898452Cu) goto L_0898452C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898452C:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08984538u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 92u, 0x08984538u, 0x089E8EACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 169u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 169u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 169u, 0x089E8EACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984538u) goto L_08984538;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_17 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0898454C;
      }
      goto L_08984544;
    }
L_08984544:
    aot_gpr_31 = (0x0898454Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898454Cu) goto L_0898454C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898454C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08984564;
      }
      goto L_0898455C;
    }
L_0898455C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08984574;
      }
      goto L_08984564;
    }
L_08984564:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_0898451C;
      }
      goto L_08984570;
    }
L_08984570:
    ctx.gpr[2] = (0u | 0u);
    goto L_08984574;
L_08984574:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898458C:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(44), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_089845B0;
      }
      goto L_089845A8;
    }
L_089845A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(48), aot_gpr_5);
      if (branch_taken) {
          goto L_089845B4;
      }
      goto L_089845B0;
    }
L_089845B0:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), aot_gpr_5);
    goto L_089845B4;
L_089845B4:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), aot_gpr_5);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089845C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08984634;
      }
      goto L_089845E0;
    }
L_089845E0:
    aot_gpr_17 = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x089845F0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 105u, 0x089845F0u, 0x089E8C7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 134u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 134u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 134u, 0x089E8C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089845F0u) goto L_089845F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089845F0:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089845FCu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 106u, 0x089845FCu, 0x089E8EACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 169u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 169u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 169u, 0x089E8EACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089845FCu) goto L_089845FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089845FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_17 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08984610;
      }
      goto L_08984608;
    }
L_08984608:
    aot_gpr_31 = (0x08984610u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984610u) goto L_08984610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08984610:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08984628;
      }
      goto L_08984620;
    }
L_08984620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08984638;
      }
      goto L_08984628;
    }
L_08984628:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_089845E0;
      }
      goto L_08984634;
    }
L_08984634:
    ctx.gpr[2] = (0u | 0u);
    goto L_08984638;
L_08984638:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08984650:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], aot_gpr_17, aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08984668u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    goto L_089845C0;
L_08984668:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_089846C8;
      }
      goto L_08984674;
    }
L_08984674:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898468C;
      }
      goto L_0898467C;
    }
L_0898467C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[16];
      if (branch_taken) {
          goto L_0898468C;
      }
      goto L_08984688;
    }
L_08984688:
    aot_gpr_5 = (0u < aot_gpr_4 ? 1u : 0u);
    goto L_0898468C;
L_0898468C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089846B4;
      }
      goto L_08984694;
    }
L_08984694:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089846AC;
      }
      goto L_0898469C;
    }
L_0898469C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[16];
      if (branch_taken) {
          goto L_089846AC;
      }
      goto L_089846A8;
    }
L_089846A8:
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    goto L_089846AC;
L_089846AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089846CC;
      }
      goto L_089846B4;
    }
L_089846B4:
    aot_gpr_31 = (0x089846BCu);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    goto L_089845C0;
L_089846BC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08984674;
      }
      goto L_089846C8;
    }
L_089846C8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089846CC;
L_089846CC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089846E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08984738;
      }
      goto L_089846EC;
    }
L_089846EC:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08984704;
      }
      goto L_089846F4;
    }
L_089846F4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_5;
      if (branch_taken) {
          goto L_08984704;
      }
      goto L_08984700;
    }
L_08984700:
    aot_gpr_6 = (0u < aot_gpr_4 ? 1u : 0u);
    goto L_08984704;
L_08984704:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_0898472C;
      }
      goto L_0898470C;
    }
L_0898470C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08984724;
      }
      goto L_08984714;
    }
L_08984714:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_08984724;
      }
      goto L_08984720;
    }
L_08984720:
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    goto L_08984724;
L_08984724:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898473C;
      }
      goto L_0898472C;
    }
L_0898472C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089846EC;
      }
      goto L_08984738;
    }
L_08984738:
    ctx.gpr[2] = (0u | 0u);
    goto L_0898473C;
L_0898473C:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08984744:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898474C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089847A0;
      }
      goto L_08984754;
    }
L_08984754:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898476C;
      }
      goto L_0898475C;
    }
L_0898475C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_0898476C;
      }
      goto L_08984768;
    }
L_08984768:
    aot_gpr_5 = (0u < aot_gpr_4 ? 1u : 0u);
    goto L_0898476C;
L_0898476C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08984794;
      }
      goto L_08984774;
    }
L_08984774:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0898478C;
      }
      goto L_0898477C;
    }
L_0898477C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898478C;
      }
      goto L_08984788;
    }
L_08984788:
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    goto L_0898478C;
L_0898478C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089847A4;
      }
      goto L_08984794;
    }
L_08984794:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08984754;
      }
      goto L_089847A0;
    }
L_089847A0:
    ctx.gpr[2] = (0u | 0u);
    goto L_089847A4;
L_089847A4:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089847AC:
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(24808));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), 0u);
    { const std::uint32_t aot_run_words[4]{0u, aot_gpr_5, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), 0u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089847F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0898481C;
      }
      goto L_08984814;
    }
L_08984814:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08984820;
      }
      goto L_0898481C;
    }
L_0898481C:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
    goto L_08984820;
L_08984820:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x0898482Cu);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 157u, 0x0898482Cu, 0x089E8D0Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 141u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 141u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898482Cu) goto L_0898482C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898482C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08984848:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08984864;
      }
      goto L_0898485C;
    }
L_0898485C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08984864;
L_08984864:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08984898;
      }
      goto L_08984870;
    }
L_08984870:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08984884;
      }
      goto L_0898487C;
    }
L_0898487C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08984884;
L_08984884:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08984898;
      }
      goto L_08984890;
    }
L_08984890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08984898;
      }
      goto L_08984898;
    }
L_08984898:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089848A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_17 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (0u | 34u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x089848D0u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 167u, 0x089848D0u, 0x089E8F3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 179u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 179u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 179u, 0x089E8F3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089848D0u) goto L_089848D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089848D0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_5;
    aot_gpr_17 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16520));
      if (branch_taken) {
          goto L_08984924;
      }
      goto L_089848E0;
    }
L_089848E0:
    aot_gpr_31 = (0x089848E8u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 169u, 0x089848E8u, 0x08983EC4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 666u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 666u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 666u, 0x08983EC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089848E8u) goto L_089848E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089848E8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089848F4u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 170u, 0x089848F4u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089848F4u) goto L_089848F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089848F4:
    aot_gpr_17 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16516));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08984904u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 171u, 0x08984904u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984904u) goto L_08984904;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984904:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08984910u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 172u, 0x08984910u, 0x08983EC4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 666u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 666u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 666u, 0x08983EC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984910u) goto L_08984910;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984910:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0898491Cu);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 173u, 0x0898491Cu, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898491Cu) goto L_0898491C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898491C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08984960;
      }
      goto L_08984924;
    }
L_08984924:
    aot_gpr_31 = (0x0898492Cu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 175u, 0x0898492Cu, 0x08983EC4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 666u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 666u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 666u, 0x08983EC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898492Cu) goto L_0898492C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898492C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08984938u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 176u, 0x08984938u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984938u) goto L_08984938;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984938:
    aot_gpr_17 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16512));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08984948u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 177u, 0x08984948u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984948u) goto L_08984948;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984948:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08984954u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 178u, 0x08984954u, 0x08983EC4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 666u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 666u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 666u, 0x08983EC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984954u) goto L_08984954;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984954:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08984960u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 179u, 0x08984960u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984960u) goto L_08984960;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984960:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08984978:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(22752));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(44), aot_gpr_4);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089849C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08984AB0;
      }
      goto L_089849DC;
    }
L_089849DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_17;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_089849FC;
      }
      goto L_089849E8;
    }
L_089849E8:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (0u | 1251u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6760));
    aot_gpr_31 = (0x089849FCu);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6724));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089849FCu) goto L_089849FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089849FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_17;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08984A1C;
      }
      goto L_08984A08;
    }
L_08984A08:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (0u | 1252u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6760));
    aot_gpr_31 = (0x08984A1Cu);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6696));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984A1Cu) goto L_08984A1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08984A1C:
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_gpr_4 = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08984AA0;
      }
      goto L_08984A24;
    }
L_08984A24:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22752));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08984A60;
      }
      goto L_08984A3C;
    }
L_08984A3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(32)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(32), 0u);
        goto L_08984A54;
    }
    goto L_08984A48;
L_08984A48:
    aot_gpr_31 = (0x08984A50u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984A50u) goto L_08984A50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08984A50:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(32), 0u);
    goto L_08984A54;
L_08984A54:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(40), 0u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(20));
    goto L_08984A60;
L_08984A60:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08984A88;
      }
      goto L_08984A68;
    }
L_08984A68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(20)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(20), 0u);
        goto L_08984A80;
    }
    goto L_08984A74;
L_08984A74:
    aot_gpr_31 = (0x08984A7Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984A7Cu) goto L_08984A7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08984A7C:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(20), 0u);
    goto L_08984A80;
L_08984A80:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(28), 0u);
    goto L_08984A88;
L_08984A88:
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_gpr_4 = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08984AA0;
      }
      goto L_08984A90;
    }
L_08984A90:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27396));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] & 1u);
    goto L_08984AA0;
L_08984AA0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08984AB0;
      }
      goto L_08984AA8;
    }
L_08984AA8:
    aot_gpr_31 = (0x08984AB0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984AB0u) goto L_08984AB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08984AB0:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08984AC4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08984AEC;
      }
      goto L_08984AE4;
    }
L_08984AE4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08984AF0;
      }
      goto L_08984AEC;
    }
L_08984AEC:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
    goto L_08984AF0;
L_08984AF0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08984AFCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_08984BA8;
L_08984AFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08984B18;
      }
      goto L_08984B04;
    }
L_08984B04:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (0u | 1258u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6760));
    aot_gpr_31 = (0x08984B18u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6668));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984B18u) goto L_08984B18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08984B18:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), aot_gpr_17);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08984B40:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_4;
      if (branch_taken) {
          goto L_08984B68;
      }
      goto L_08984B54;
    }
L_08984B54:
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_5;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08984B84;
      }
      goto L_08984B5C;
    }
L_08984B5C:
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_4;
      if (branch_taken) {
          goto L_08984B54;
      }
      goto L_08984B68;
    }
L_08984B68:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16532));
    aot_gpr_5 = (0u | 1282u);
    aot_gpr_31 = (0x08984B7Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6760));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984B7Cu) goto L_08984B7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08984B7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08984B9C;
      }
      goto L_08984B84;
    }
L_08984B84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), 0u);
    goto L_08984B9C;
L_08984B9C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08984BA8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[19] == aot_gpr_4;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08984C24;
      }
      goto L_08984BD0;
    }
L_08984BD0:
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08984BE0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 218u, 0x08984BE0u, 0x089E8C7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 134u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 134u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 134u, 0x089E8C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984BE0u) goto L_08984BE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984BE0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08984BECu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 219u, 0x08984BECu, 0x089E8EACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 169u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 169u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 169u, 0x089E8EACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984BECu) goto L_08984BEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984BEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08984C00;
      }
      goto L_08984BF8;
    }
L_08984BF8:
    aot_gpr_31 = (0x08984C00u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984C00u) goto L_08984C00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08984C00:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08984C18;
      }
      goto L_08984C10;
    }
L_08984C10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08984C28;
      }
      goto L_08984C18;
    }
L_08984C18:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_17;
      if (branch_taken) {
          goto L_08984BD0;
      }
      goto L_08984C24;
    }
L_08984C24:
    ctx.gpr[2] = (0u | 0u);
    goto L_08984C28;
L_08984C28:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08984C44:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08984C64u);
    aot_gpr_5 = (0u | 1u);
    goto L_089847AC;
L_08984C64:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24856));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_31 = (0x08984C78u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(52));
    goto L_08984978;
L_08984C78:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(24), 0u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08984C8Cu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 229u, 0x08984C8Cu, 0x089E8D0Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 141u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 141u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984C8Cu) goto L_08984C8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984C8C:
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08984CA4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08984D00;
      }
      goto L_08984CC0;
    }
L_08984CC0:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24856));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_31 = (0x08984CD4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_08985018;
L_08984CD4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(52));
    aot_gpr_31 = (0x08984CE0u);
    aot_gpr_5 = (0u | 2u);
    goto L_089849C0;
L_08984CE0:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08984CECu);
    aot_gpr_5 = (0u | 0u);
    goto L_089843C4;
L_08984CEC:
    aot_gpr_4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08984D00;
      }
      goto L_08984CF8;
    }
L_08984CF8:
    aot_gpr_31 = (0x08984D00u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984D00u) goto L_08984D00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08984D00:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08984D14:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08984D24u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(52));
    goto L_08984BA8;
L_08984D24:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08984D4C;
      }
      goto L_08984D30;
    }
L_08984D30:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
      if (branch_taken) {
          goto L_08984D44;
      }
      goto L_08984D3C;
    }
L_08984D3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08984D44;
      }
      goto L_08984D44;
    }
L_08984D44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08984D50;
      }
      goto L_08984D4C;
    }
L_08984D4C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08984D50;
L_08984D50:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08984D5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_17, ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_17 = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_31 = (0x08984D94u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_08984BA8;
L_08984D94:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08984DC0;
      }
      goto L_08984DA0;
    }
L_08984DA0:
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_31 = (0x08984DACu);
    aot_gpr_4 = (0u | 52u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 247u, 0x08984DACu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984DACu) goto L_08984DAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984DAC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    aot_gpr_4 = (2235u << 16u);
      if (branch_taken) {
          goto L_08984DD4;
      }
      goto L_08984DB8;
    }
L_08984DB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08984E3C;
      }
      goto L_08984DC0;
    }
L_08984DC0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08984DCCu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 250u, 0x08984DCCu, 0x089E8D0Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 141u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 141u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984DCCu) goto L_08984DCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984DCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08984E84;
      }
      goto L_08984DD4;
    }
L_08984DD4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27396));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (2234u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22752));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(20));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08984E20u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 252u, 0x08984E20u, 0x089E8D0Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 141u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 141u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984E20u) goto L_08984E20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984E20:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08984E2Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 253u, 0x08984E2Cu, 0x089E8D0Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 141u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 141u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984E2Cu) goto L_08984E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984E2C:
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08984E3C;
L_08984E3C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08984E58;
      }
      goto L_08984E44;
    }
L_08984E44:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08984E50u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    goto L_08984AC4;
L_08984E50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08984E84;
      }
      goto L_08984E58;
    }
L_08984E58:
    aot_gpr_31 = (0x08984E60u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0898474C;
L_08984E60:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08984E84;
      }
      goto L_08984E6C;
    }
L_08984E6C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08984E84u);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0061.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 260u, 0x08984E84u, 0x088FA418u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0061_entry(rt, ctx, 548u, aot_mem);
#else
        recomp_unit_0061_entry(rt, ctx, 548u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0061_entry, 61u, 548u, 0x088FA418u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984E84u) goto L_08984E84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984E84:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08984EA8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_17 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08984ECCu);
    aot_gpr_4 = (0u | 104u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 262u, 0x08984ECCu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984ECCu) goto L_08984ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08984ECC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08984EFC;
      }
      goto L_08984ED8;
    }
L_08984ED8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_17 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
      if (branch_taken) {
          goto L_08984EEC;
      }
      goto L_08984EE4;
    }
L_08984EE4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08984EEC;
      }
      goto L_08984EEC;
    }
L_08984EEC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08984EF8u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    goto L_08984C44;
L_08984EF8:
    aot_gpr_17 = (ctx.gpr[18] | 0u);
    goto L_08984EFC;
L_08984EFC:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08984F10;
      }
      goto L_08984F08;
    }
L_08984F08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08984F20;
      }
      goto L_08984F10;
    }
L_08984F10:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08984F1Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08984F38;
L_08984F1C:
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    goto L_08984F20;
L_08984F20:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08984F38:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[4]{aot_gpr_17, ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x08984F5Cu);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    goto L_089847F4;
L_08984F5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(52));
    if (aot_gpr_4 != aot_gpr_5) {
    ctx.gpr[18] = (aot_gpr_4 | 0u);
        goto L_08984F70;
    }
    goto L_08984F70;
L_08984F70:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
      if (branch_taken) {
          goto L_08984FC0;
      }
      goto L_08984F78;
    }
L_08984F78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08984F8C;
      }
      goto L_08984F84;
    }
L_08984F84:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08984F8C;
      }
      goto L_08984F8C;
    }
L_08984F8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08984FA0;
      }
      goto L_08984F98;
    }
L_08984F98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08984FA0;
      }
      goto L_08984FA0;
    }
L_08984FA0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08984FACu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08984D5C;
L_08984FAC:
    aot_gpr_31 = (0x08984FB4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08984848;
L_08984FB4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08984F78;
      }
      goto L_08984FC0;
    }
L_08984FC0:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08984FFC;
      }
      goto L_08984FCC;
    }
L_08984FCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(40));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08984FE4u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08984FE4u) goto L_08984FE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08984FE4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08984FF0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    goto L_0898458C;
L_08984FF0:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_17 != 0u;
      if (branch_taken) {
          goto L_08984FCC;
      }
      goto L_08984FFC;
    }
L_08984FFC:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985018:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08985038u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    goto L_08984494;
L_08985038:
    aot_gpr_17 = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_08985040;
L_08985040:
    aot_gpr_5 = (0u | 0u);
    if (aot_gpr_4 != aot_gpr_17) {
    aot_gpr_5 = (0u < aot_gpr_4 ? 1u : 0u);
        goto L_0898504C;
    }
    goto L_0898504C;
L_0898504C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898509C;
      }
      goto L_08985054;
    }
L_08985054:
    ctx.gpr[18] = (0u | 0u);
    if (aot_gpr_4 != aot_gpr_17) {
    ctx.gpr[18] = (aot_gpr_4 | 0u);
        goto L_08985060;
    }
    goto L_08985060;
L_08985060:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08985070u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08984B40;
L_08985070:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08985094;
      }
      goto L_08985078;
    }
L_08985078:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08985094u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985094u) goto L_08985094;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08985094:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08985040;
      }
      goto L_0898509C;
    }
L_0898509C:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089850B8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16492));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x089850E4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 298u, 0x089850E4u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089850E4u) goto L_089850E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089850E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
      if (branch_taken) {
          goto L_089850F8;
      }
      goto L_089850F0;
    }
L_089850F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089850F8;
      }
      goto L_089850F8;
    }
L_089850F8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08985104u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 301u, 0x08985104u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985104u) goto L_08985104;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985104:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    if (aot_gpr_4 != aot_gpr_5) {
    ctx.gpr[18] = (aot_gpr_4 | 0u);
        goto L_08985118;
    }
    goto L_08985118;
L_08985118:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16488));
      if (branch_taken) {
          goto L_0898515C;
      }
      goto L_08985120;
    }
L_08985120:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0898512Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 304u, 0x0898512Cu, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898512Cu) goto L_0898512C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898512C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08985148u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985148u) goto L_08985148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08985148:
    aot_gpr_31 = (0x08985150u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08984848;
L_08985150:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08985120;
      }
      goto L_0898515C;
    }
L_0898515C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089851EC;
      }
      goto L_08985168;
    }
L_08985168:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16484));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08985178u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 309u, 0x08985178u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985178u) goto L_08985178;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985178:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_089851AC;
      }
      goto L_08985184;
    }
L_08985184:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x089851A0u);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089851A0u) goto L_089851A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089851A0:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08985184;
      }
      goto L_089851AC;
    }
L_089851AC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16480));
    aot_gpr_31 = (0x089851B8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 313u, 0x089851B8u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089851B8u) goto L_089851B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089851B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    if (aot_gpr_4 == 0u) {
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
        goto L_089851CC;
    }
    goto L_089851C4;
L_089851C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089851CC;
      }
      goto L_089851CC;
    }
L_089851CC:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089851D8u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 316u, 0x089851D8u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089851D8u) goto L_089851D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089851D8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089851E4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 317u, 0x089851E4u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089851E4u) goto L_089851E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089851E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089851F8;
      }
      goto L_089851EC;
    }
L_089851EC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16476));
    aot_gpr_31 = (0x089851F8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 319u, 0x089851F8u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089851F8u) goto L_089851F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089851F8:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985214:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0898525C;
      }
      goto L_08985230;
    }
L_08985230:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24904));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08985248u);
    aot_gpr_5 = (0u | 0u);
    goto L_089843C4;
L_08985248:
    aot_gpr_4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898525C;
      }
      goto L_08985254;
    }
L_08985254:
    aot_gpr_31 = (0x0898525Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898525Cu) goto L_0898525C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898525C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985270:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_17 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08985294u);
    aot_gpr_4 = (0u | 52u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 326u, 0x08985294u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985294u) goto L_08985294;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985294:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089852B8;
      }
      goto L_089852A0;
    }
L_089852A0:
    aot_gpr_31 = (0x089852A8u);
    aot_gpr_5 = (0u | 2u);
    goto L_089847AC;
L_089852A8:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24904));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_17 = (ctx.gpr[18] | 0u);
    goto L_089852B8;
L_089852B8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089852CC;
      }
      goto L_089852C4;
    }
L_089852C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089852DC;
      }
      goto L_089852CC;
    }
L_089852CC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x089852D8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089852F4;
L_089852D8:
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    goto L_089852DC;
L_089852DC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089852F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08985304u);
    goto L_089847F4;
L_08985304:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985310:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16472));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08985334u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 337u, 0x08985334u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985334u) goto L_08985334;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985334:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(36)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_17 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
        goto L_08985348;
    }
    goto L_08985340;
L_08985340:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08985348;
      }
      goto L_08985348;
    }
L_08985348:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08985354u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 340u, 0x08985354u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985354u) goto L_08985354;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985354:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16464));
    aot_gpr_31 = (0x08985360u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 341u, 0x08985360u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985360u) goto L_08985360;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985360:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985374:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_17 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08985398u);
    aot_gpr_4 = (0u | 52u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 343u, 0x08985398u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985398u) goto L_08985398;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985398:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089853C8;
      }
      goto L_089853A4;
    }
L_089853A4:
    aot_gpr_31 = (0x089853ACu);
    aot_gpr_5 = (0u | 4u);
    goto L_089847AC;
L_089853AC:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22784));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x089853C4u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 346u, 0x089853C4u, 0x089E8D0Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 141u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 141u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089853C4u) goto L_089853C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089853C4:
    aot_gpr_17 = (ctx.gpr[18] | 0u);
    goto L_089853C8;
L_089853C8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089853DC;
      }
      goto L_089853D4;
    }
L_089853D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089853EC;
      }
      goto L_089853DC;
    }
L_089853DC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x089853E8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08985404;
L_089853E8:
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    goto L_089853EC;
L_089853EC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985404:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08985414u);
    goto L_089847F4;
L_08985414:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985420:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08985430u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 355u, 0x08985430u, 0x08983EC4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 666u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 666u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 666u, 0x08983EC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985430u) goto L_08985430;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985430:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898543C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08985508;
      }
      goto L_08985458;
    }
L_08985458:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24952));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(76));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08985494;
      }
      goto L_08985470;
    }
L_08985470:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(76), 0u);
        goto L_08985488;
    }
    goto L_0898547C;
L_0898547C:
    aot_gpr_31 = (0x08985484u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985484u) goto L_08985484;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08985484:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(76), 0u);
    goto L_08985488;
L_08985488:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(84), 0u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(64));
    goto L_08985494;
L_08985494:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_089854C0;
      }
      goto L_0898549C;
    }
L_0898549C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(64)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(64), 0u);
        goto L_089854B4;
    }
    goto L_089854A8;
L_089854A8:
    aot_gpr_31 = (0x089854B0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089854B0u) goto L_089854B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089854B0:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(64), 0u);
    goto L_089854B4;
L_089854B4:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(72), 0u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(52));
    goto L_089854C0;
L_089854C0:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_17 | 0u);
      if (branch_taken) {
          goto L_089854EC;
      }
      goto L_089854C8;
    }
L_089854C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(52)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(52), 0u);
        goto L_089854E0;
    }
    goto L_089854D4;
L_089854D4:
    aot_gpr_31 = (0x089854DCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089854DCu) goto L_089854DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089854DC:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(52), 0u);
    goto L_089854E0;
L_089854E0:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(60), 0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_089854EC;
L_089854EC:
    aot_gpr_31 = (0x089854F4u);
    aot_gpr_5 = (0u | 0u);
    goto L_089843C4;
L_089854F4:
    aot_gpr_4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08985508;
      }
      goto L_08985500;
    }
L_08985500:
    aot_gpr_31 = (0x08985508u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985508u) goto L_08985508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08985508:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898551C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_17 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08985540u);
    aot_gpr_4 = (0u | 88u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 377u, 0x08985540u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985540u) goto L_08985540;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985540:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08985588;
      }
      goto L_0898554C;
    }
L_0898554C:
    aot_gpr_31 = (0x08985554u);
    aot_gpr_5 = (0u | 5u);
    goto L_089847AC;
L_08985554:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24952));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), 0u);
    aot_gpr_17 = (ctx.gpr[18] | 0u);
    goto L_08985588;
L_08985588:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898559C;
      }
      goto L_08985594;
    }
L_08985594:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089855AC;
      }
      goto L_0898559C;
    }
L_0898559C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x089855A8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089855C4;
L_089855A8:
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    goto L_089855AC;
L_089855AC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089855C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x089855E0u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    goto L_089847F4;
L_089855E0:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    aot_gpr_31 = (0x089855ECu);
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(52));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 387u, 0x089855ECu, 0x089E8DC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 152u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 152u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 152u, 0x089E8DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089855ECu) goto L_089855EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089855EC:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x089855F8u);
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 388u, 0x089855F8u, 0x089E8DC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 152u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 152u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 152u, 0x089E8DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089855F8u) goto L_089855F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089855F8:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    aot_gpr_31 = (0x08985604u);
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(76));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 389u, 0x08985604u, 0x089E8DC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 152u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 152u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 152u, 0x089E8DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985604u) goto L_08985604;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985604:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985618:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16460));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0898563Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 391u, 0x0898563Cu, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898563Cu) goto L_0898563C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898563C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08985658;
      }
      goto L_08985648;
    }
L_08985648:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08985658;
L_08985658:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08985684;
      }
      goto L_08985660;
    }
L_08985660:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16452));
    aot_gpr_31 = (0x0898566Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 395u, 0x0898566Cu, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898566Cu) goto L_0898566C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898566C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(52));
    aot_gpr_31 = (0x08985678u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 396u, 0x08985678u, 0x08983EC4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 666u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 666u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 666u, 0x08983EC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985678u) goto L_08985678;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985678:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16440));
    aot_gpr_31 = (0x08985684u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 397u, 0x08985684u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985684u) goto L_08985684;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985684:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_089856A0;
      }
      goto L_08985690;
    }
L_08985690:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089856A0;
L_089856A0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089856CC;
      }
      goto L_089856A8;
    }
L_089856A8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16436));
    aot_gpr_31 = (0x089856B4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 401u, 0x089856B4u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089856B4u) goto L_089856B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089856B4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x089856C0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 402u, 0x089856C0u, 0x08983EC4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 666u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 666u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 666u, 0x08983EC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089856C0u) goto L_089856C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089856C0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16440));
    aot_gpr_31 = (0x089856CCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 403u, 0x089856CCu, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089856CCu) goto L_089856CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089856CC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_089856E8;
      }
      goto L_089856D8;
    }
L_089856D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089856E8;
L_089856E8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08985714;
      }
      goto L_089856F0;
    }
L_089856F0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16424));
    aot_gpr_31 = (0x089856FCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 407u, 0x089856FCu, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089856FCu) goto L_089856FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089856FC:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(76));
    aot_gpr_31 = (0x08985708u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 408u, 0x08985708u, 0x08983EC4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 666u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 666u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 666u, 0x08983EC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985708u) goto L_08985708;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985708:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16440));
    aot_gpr_31 = (0x08985714u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 409u, 0x08985714u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985714u) goto L_08985714;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985714:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16408));
    aot_gpr_31 = (0x08985720u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 410u, 0x08985720u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985720u) goto L_08985720;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985720:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985734:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0898577C;
      }
      goto L_08985750;
    }
L_08985750:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25000));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08985768u);
    aot_gpr_5 = (0u | 0u);
    goto L_089843C4;
L_08985768:
    aot_gpr_4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898577C;
      }
      goto L_08985774;
    }
L_08985774:
    aot_gpr_31 = (0x0898577Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898577Cu) goto L_0898577C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898577C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985790:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_17 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x089857B4u);
    aot_gpr_4 = (0u | 52u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 417u, 0x089857B4u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089857B4u) goto L_089857B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089857B4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089857D8;
      }
      goto L_089857C0;
    }
L_089857C0:
    aot_gpr_31 = (0x089857C8u);
    aot_gpr_5 = (0u | 3u);
    goto L_089847AC;
L_089857C8:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25000));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_17 = (ctx.gpr[18] | 0u);
    goto L_089857D8;
L_089857D8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089857EC;
      }
      goto L_089857E4;
    }
L_089857E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089857FC;
      }
      goto L_089857EC;
    }
L_089857EC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x089857F8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08985814;
L_089857F8:
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    goto L_089857FC;
L_089857FC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985814:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08985824u);
    goto L_089847F4;
L_08985824:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985830:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16492));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08985854u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 428u, 0x08985854u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985854u) goto L_08985854;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985854:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(36)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_17 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
        goto L_08985868;
    }
    goto L_08985860;
L_08985860:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08985868;
      }
      goto L_08985868;
    }
L_08985868:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08985874u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 431u, 0x08985874u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985874u) goto L_08985874;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985874:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16484));
    aot_gpr_31 = (0x08985880u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 432u, 0x08985880u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985880u) goto L_08985880;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985880:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985894:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x089858ACu);
    aot_gpr_5 = (0u | 0u);
    goto L_089847AC;
L_089858AC:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22832));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_5 = (0u | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr_31 = (0x089858ECu);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 435u, 0x089858ECu, 0x089E8D0Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 141u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 141u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089858ECu) goto L_089858EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089858EC:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985908:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x0898592Cu);
    aot_gpr_5 = (0u | 0u);
    goto L_089847AC;
L_0898592C:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22832));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(68), 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(80), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(76), aot_gpr_4);
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(72), aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_17 + static_cast<std::uint32_t>(60));
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08985968u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 438u, 0x08985968u, 0x089E8D0Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 141u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 141u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985968u) goto L_08985968;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985968:
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(56), 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
    aot_gpr_31 = (0x0898597Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 439u, 0x0898597Cu, 0x089E8D0Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 141u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 141u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898597Cu) goto L_0898597C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898597C:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(76), 0u);
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089859A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_17);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x089859C4u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08984304;
L_089859C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089859F8;
      }
      goto L_089859D0;
    }
L_089859D0:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089859DCu);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    goto L_08985A1C;
L_089859DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089859F8;
      }
      goto L_089859E4;
    }
L_089859E4:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x089859F0u);
    aot_gpr_5 = (0u | 2u);
    goto L_08984378;
L_089859F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08985A08;
      }
      goto L_089859F8;
    }
L_089859F8:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08985A04u);
    aot_gpr_5 = (0u | 2u);
    goto L_08984378;
L_08985A04:
    ctx.gpr[2] = (0u | 0u);
    goto L_08985A08;
L_08985A08:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985A1C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_17);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_31 = (0x08985A48u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    goto L_08984494;
L_08985A48:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08985A60u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 451u, 0x08985A60u, 0x089E8D0Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 141u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 141u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985A60u) goto L_08985A60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985A60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
      if (branch_taken) {
          goto L_08985A74;
      }
      goto L_08985A6C;
    }
L_08985A6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08985A74;
      }
      goto L_08985A74;
    }
L_08985A74:
    aot_gpr_31 = (0x08985A7Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 454u, 0x08985A7Cu, 0x08938F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 250u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 250u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985A7Cu) goto L_08985A7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985A7C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08985BCC;
      }
      goto L_08985A88;
    }
L_08985A88:
    aot_gpr_31 = (0x08985A90u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 456u, 0x08985A90u, 0x08938FD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 262u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 262u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985A90u) goto L_08985A90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985A90:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08985AB8;
      }
      goto L_08985A9C;
    }
L_08985A9C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u != 0u;
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08985AC8;
      }
      goto L_08985AB0;
    }
L_08985AB0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08985AD4;
      }
      goto L_08985AB8;
    }
L_08985AB8:
    aot_gpr_31 = (0x08985AC0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 460u, 0x08985AC0u, 0x08938F40u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 254u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 254u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985AC0u) goto L_08985AC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985AC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08985BEC;
      }
      goto L_08985AC8;
    }
L_08985AC8:
    aot_gpr_31 = (0x08985AD0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985AD0u) goto L_08985AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08985AD0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_08985AD4;
L_08985AD4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08985AF8;
      }
      goto L_08985AE0;
    }
L_08985AE0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    aot_gpr_31 = (0x08985AECu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 465u, 0x08985AECu, 0x08ABE29Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 468u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 468u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985AECu) goto L_08985AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985AEC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    goto L_08985AF8;
L_08985AF8:
    aot_gpr_31 = (0x08985B00u);
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 467u, 0x08985B00u, 0x08ABE29Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 468u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 468u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985B00u) goto L_08985B00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985B00:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08985B14u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 468u, 0x08985B14u, 0x08939050u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 270u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 270u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985B14u) goto L_08985B14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985B14:
    aot_gpr_4 = (ctx.gpr[20] + ctx.gpr[19]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08985B28u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 469u, 0x08985B28u, 0x089E9130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985B28u) goto L_08985B28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985B28:
    aot_gpr_31 = (0x08985B30u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985B30u) goto L_08985B30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08985B30:
    aot_gpr_31 = (0x08985B38u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 471u, 0x08985B38u, 0x08938F40u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 254u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 254u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985B38u) goto L_08985B38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985B38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (aot_gpr_17 + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08985B58;
      }
      goto L_08985B50;
    }
L_08985B50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08985B5C;
      }
      goto L_08985B58;
    }
L_08985B58:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
    goto L_08985B5C;
L_08985B5C:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x08985B70u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985B70u) goto L_08985B70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08985B70:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08985BA4;
      }
      goto L_08985B7C;
    }
L_08985B7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_08985B94;
    }
    goto L_08985B88;
L_08985B88:
    aot_gpr_31 = (0x08985B90u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985B90u) goto L_08985B90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08985B90:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_08985B94;
L_08985B94:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08985BEC;
      }
      goto L_08985BA4;
    }
L_08985BA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_08985BBC;
    }
    goto L_08985BB0;
L_08985BB0:
    aot_gpr_31 = (0x08985BB8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985BB8u) goto L_08985BB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08985BB8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_08985BBC;
L_08985BBC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08985BEC;
      }
      goto L_08985BCC;
    }
L_08985BCC:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08985BCCu, 0x0000000Du, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08985BE8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08985BEC;
L_08985BEC:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985C0C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08985C80;
      }
      goto L_08985C2C;
    }
L_08985C2C:
    aot_gpr_17 = (0u | 1u);
    goto L_08985C30;
L_08985C30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08985C4Cu);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985C4Cu) goto L_08985C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08985C4C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08985C64;
      }
      goto L_08985C54;
    }
L_08985C54:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_17;
      if (branch_taken) {
          goto L_08985C64;
      }
      goto L_08985C60;
    }
L_08985C60:
    aot_gpr_4 = (0u < ctx.gpr[18] ? 1u : 0u);
    goto L_08985C64;
L_08985C64:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08985C74;
      }
      goto L_08985C6C;
    }
L_08985C6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08985C80;
      }
      goto L_08985C74;
    }
L_08985C74:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08985C30;
      }
      goto L_08985C80;
    }
L_08985C80:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985C98:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_17 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08985CBCu);
    aot_gpr_4 = (0u | 84u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 498u, 0x08985CBCu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985CBCu) goto L_08985CBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985CBC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08985CD4;
      }
      goto L_08985CC8;
    }
L_08985CC8:
    aot_gpr_31 = (0x08985CD0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08985894;
L_08985CD0:
    aot_gpr_17 = (ctx.gpr[18] | 0u);
    goto L_08985CD4;
L_08985CD4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08985CE8;
      }
      goto L_08985CE0;
    }
L_08985CE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08985CF8;
      }
      goto L_08985CE8;
    }
L_08985CE8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08985CF4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08985D10;
L_08985CF4:
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    goto L_08985CF8;
L_08985CF8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985D10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08985D2Cu);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    goto L_089847F4;
L_08985D2C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08985D48;
      }
      goto L_08985D40;
    }
L_08985D40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08985D4C;
      }
      goto L_08985D48;
    }
L_08985D48:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
    goto L_08985D4C;
L_08985D4C:
    aot_gpr_31 = (0x08985D54u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0121.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 511u, 0x08985D54u, 0x089E8D0Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0121_entry(rt, ctx, 141u, aot_mem);
#else
        recomp_unit_0121_entry(rt, ctx, 141u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985D54u) goto L_08985D54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985D54:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08985D90;
      }
      goto L_08985D60;
    }
L_08985D60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(40));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08985D78u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985D78u) goto L_08985D78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08985D78:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08985D84u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    goto L_0898458C;
L_08985D84:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_17 != 0u;
      if (branch_taken) {
          goto L_08985D60;
      }
      goto L_08985D90;
    }
L_08985D90:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985DA4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16388)));
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16392)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24912));
    goto L_08985DB8;
L_08985DB8:
    ctx.gpr[8] = (aot_gpr_5 << 4u);
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08985DB8;
      }
      goto L_08985DDC;
    }
L_08985DDC:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985DE4:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(23774), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (0u | 0u);
    goto L_08985DF4;
L_08985DF4:
    aot_gpr_5 = (aot_gpr_6 << 4u);
    ctx.gpr[7] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(23776), 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08985DF4;
      }
      goto L_08985E1C;
    }
L_08985E1C:
    aot_gpr_5 = (2247u << 16u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16400), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(25488));
    goto L_08985E2C;
L_08985E2C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(26344)));
    ctx.gpr[8] = (aot_gpr_6 << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08985E2C;
      }
      goto L_08985E50;
    }
L_08985E50:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985E58:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(23528)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (0u | 272u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08985E9Cu);
    aot_gpr_5 = (0u | 272u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985E9Cu) goto L_08985E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08985E9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    aot_gpr_5 = (0u | 25u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 63u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (ctx.hi);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(20));
    aot_gpr_31 = (0x08985EE0u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_6));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0108.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 526u, 0x08985EE0u, 0x089B7B80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0108_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0108_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985EE0u) goto L_08985EE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08985EE0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985EF0:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16399)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08985EF8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_17, ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[19] = (0u | 10u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08986048;
      }
      goto L_08985F28;
    }
L_08985F28:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1008));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1400)));
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08985F5C;
      }
      goto L_08985F40;
    }
L_08985F40:
    aot_gpr_31 = (0x08985F48u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08985F48u) goto L_08985F48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08985F48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_08985F64;
      }
      goto L_08985F54;
    }
L_08985F54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08986048;
      }
      goto L_08985F5C;
    }
L_08985F5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08986048;
      }
      goto L_08985F64;
    }
L_08985F64:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_17) > 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 20 ? 1u : 0u);
      if (branch_taken) {
          goto L_08985F74;
      }
      goto L_08985F6C;
    }
L_08985F6C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08986048;
      }
      goto L_08985F74;
    }
L_08985F74:
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_6 = (aot_gpr_17 << 2u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25488));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26344)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08985FA0;
      }
      goto L_08985F98;
    }
L_08985F98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08985FA8;
      }
      goto L_08985FA0;
    }
L_08985FA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08986048;
      }
      goto L_08985FA8;
    }
L_08985FA8:
    aot_gpr_4 = (aot_gpr_5 << 4u);
    ctx.gpr[7] = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(23776)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08985FCC;
      }
      goto L_08985FC4;
    }
L_08985FC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08985FD8;
      }
      goto L_08985FCC;
    }
L_08985FCC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(23776)));
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_17;
      if (branch_taken) {
          goto L_08985FF4;
      }
      goto L_08985FD8;
    }
L_08985FD8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08985FA8;
      }
      goto L_08985FEC;
    }
L_08985FEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898600C;
      }
      goto L_08985FF4;
    }
L_08985FF4:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(23792));
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
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(23808), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08986048;
      }
      goto L_0898600C;
    }
L_0898600C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08986048;
      }
      goto L_08986018;
    }
L_08986018:
    aot_gpr_4 = (ctx.gpr[19] << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(23776), aot_gpr_17);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(23792));
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
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(23808), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26344)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(500));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08986048;
L_08986048:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08986064:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], aot_gpr_17, aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089860F4;
      }
      goto L_08986080;
    }
L_08986080:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_17 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
      if (branch_taken) {
          goto L_089860B4;
      }
      goto L_0898608C;
    }
L_0898608C:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08986098u);
    aot_gpr_5 = (0u | 18u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 551u, 0x08986098u, 0x0880A5E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 542u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 542u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 542u, 0x0880A5E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986098u) goto L_08986098;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986098:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089860D4;
      }
      goto L_089860A0;
    }
L_089860A0:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089860ACu);
    aot_gpr_5 = (0u | 18u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 553u, 0x089860ACu, 0x0880A680u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 550u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 550u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089860ACu) goto L_089860AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089860AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089860D4;
      }
      goto L_089860B4;
    }
L_089860B4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089860C0u);
    aot_gpr_5 = (0u | 21u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 555u, 0x089860C0u, 0x0880A5E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 542u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 542u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 542u, 0x0880A5E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089860C0u) goto L_089860C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089860C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089860D4;
      }
      goto L_089860C8;
    }
L_089860C8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089860D4u);
    aot_gpr_5 = (0u | 21u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 557u, 0x089860D4u, 0x0880A680u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 550u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 550u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089860D4u) goto L_089860D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089860D4:
    aot_gpr_31 = (0x089860DCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08985DE4;
L_089860DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16398), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6028));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9276), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9280), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16397), static_cast<std::uint8_t>(0u));
    goto L_089860F4;
L_089860F4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08986108:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_17);
    aot_gpr_17 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08986648;
      }
      goto L_0898612C;
    }
L_0898612C:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1008));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1400)));
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08986168;
      }
      goto L_08986144;
    }
L_08986144:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[18] = (0u | 60u);
    aot_gpr_4 = (ctx.gpr[18] - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08986170;
      }
      goto L_08986160;
    }
L_08986160:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08986648;
      }
      goto L_08986168;
    }
L_08986168:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08986648;
      }
      goto L_08986170;
    }
L_08986170:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_31 = (0x08986194u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0162.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 566u, 0x08986194u, 0x08A8EAACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0162_entry(rt, ctx, 518u, aot_mem);
#else
        recomp_unit_0162_entry(rt, ctx, 518u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 518u, 0x08A8EAACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986194u) goto L_08986194;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986194:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 36 ? 1u : 0u);
      if (branch_taken) {
          goto L_08986648;
      }
      goto L_089861A0;
    }
L_089861A0:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08986648;
      }
      goto L_089861A8;
    }
L_089861A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(36))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[7] = (2247u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(24912));
    goto L_089861DC;
L_089861DC:
    ctx.gpr[8] = (aot_gpr_5 << 4u);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[2];
      if (branch_taken) {
          goto L_0898620C;
      }
      goto L_089861FC;
    }
L_089861FC:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[3];
      if (branch_taken) {
          goto L_0898620C;
      }
      goto L_08986204;
    }
L_08986204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08986220;
      }
      goto L_0898620C;
    }
L_0898620C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 36 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_089861DC;
      }
      goto L_08986220;
    }
L_08986220:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08986648;
      }
      goto L_08986228;
    }
L_08986228:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_5 = (aot_gpr_5 ^ 60u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08986270;
      }
      goto L_08986240;
    }
L_08986240:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (0u | 277u);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(23532), aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (ctx.hi);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08986270;
L_08986270:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_5 = (aot_gpr_5 ^ 60u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089862B8;
      }
      goto L_08986288;
    }
L_08986288:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (0u | 279u);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(23532), aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (ctx.hi);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_089862B8;
L_089862B8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_5 = (aot_gpr_5 ^ 60u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08986300;
      }
      goto L_089862D0;
    }
L_089862D0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (0u | 275u);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(23532), aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (ctx.hi);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08986300;
L_08986300:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_5 = (aot_gpr_5 ^ 60u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
        goto L_0898634C;
    }
    goto L_08986318;
L_08986318:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (0u | 221u);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(23532), aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (ctx.hi);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(aot_gpr_5));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    goto L_0898634C;
L_0898634C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_15 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_gpr_4 = (16000u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_12;
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[17];
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[0] = aot_fpr_13 + aot_fpr_15;
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[19] <= ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
      if (branch_taken) {
          goto L_089863EC;
      }
      goto L_0898639C;
    }
L_0898639C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_4 = (aot_gpr_4 ^ 60u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089863E4;
      }
      goto L_089863B4;
    }
L_089863B4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (0u | 258u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(23532), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.hi);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_089863E4;
L_089863E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 1u);
      if (branch_taken) {
          goto L_08986450;
      }
      goto L_089863EC;
    }
L_089863EC:
    aot_fpr_13 = aot_fpr_13 - aot_fpr_15;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08986450;
      }
      goto L_08986404;
    }
L_08986404:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_4 = (aot_gpr_4 ^ 60u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898644C;
      }
      goto L_0898641C;
    }
L_0898641C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (0u | 316u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(23532), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.hi);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0898644C;
L_0898644C:
    aot_gpr_17 = (0u | 1u);
    goto L_08986450;
L_08986450:
    aot_fpr_13 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089864B4;
      }
      goto L_08986468;
    }
L_08986468:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_4 = (aot_gpr_4 ^ 60u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08986568;
      }
      goto L_08986480;
    }
L_08986480:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (0u | 168u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(23532), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08986568;
      }
      goto L_089864B4;
    }
L_089864B4:
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08986518;
      }
      goto L_089864CC;
    }
L_089864CC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_4 = (aot_gpr_4 ^ 60u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08986568;
      }
      goto L_089864E4;
    }
L_089864E4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (0u | 346u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(23532), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08986568;
      }
      goto L_08986518;
    }
L_08986518:
    { const bool branch_taken = aot_gpr_17 != 0u;
      if (branch_taken) {
          goto L_08986568;
      }
      goto L_08986520;
    }
L_08986520:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_4 = (aot_gpr_4 ^ 60u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08986568;
      }
      goto L_08986538;
    }
L_08986538:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (0u | 107u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(23532), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.hi);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08986568;
L_08986568:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_4 = (aot_gpr_4 ^ 60u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089865AC;
      }
      goto L_08986580;
    }
L_08986580:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(23532), ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.hi);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_089865AC;
L_089865AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_4 = (aot_gpr_4 ^ 60u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089865F4;
      }
      goto L_089865C4;
    }
L_089865C4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (0u | 277u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(23532), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.hi);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_089865F4;
L_089865F4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_gpr_6 = (aot_gpr_4 ^ 60u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(6028));
    aot_gpr_5 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08986640;
      }
      goto L_08986614;
    }
L_08986614:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(23532), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.hi);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08986640;
L_08986640:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16400), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08986648;
L_08986648:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08986660:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6028));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9272), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9276), aot_gpr_4);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9280), aot_gpr_4);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08986678:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16324)));
    aot_gpr_5 = (0u | 7u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16324), aot_gpr_4);
      if (branch_taken) {
          goto L_08986690;
      }
      goto L_0898668C;
    }
L_0898668C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16324), 0u);
    goto L_08986690;
L_08986690:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08986698:
    ctx.gpr[8] = (2237u << 16u);
    aot_gpr_6 = (2246u << 16u);
    aot_gpr_5 = (2246u << 16u);
    aot_gpr_4 = (2246u << 16u);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(23168));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(30640));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(30664));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(30688));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089866C4;
L_089866C4:
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[28]);
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(8656), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(8624), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(8640), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(8648), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089866C4;
      }
      goto L_08986704;
    }
L_08986704:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898670C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5664));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], aot_gpr_17, aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_gpr_31 = (0x08986734u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-5640));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986734u) goto L_08986734;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08986734:
    aot_gpr_31 = (0x0898673Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 616u, 0x0898673Cu, 0x08938F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 250u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 250u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898673Cu) goto L_0898673C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898673C:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08986798;
      }
      goto L_08986748;
    }
L_08986748:
    aot_gpr_31 = (0x08986750u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 618u, 0x08986750u, 0x08938FD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 262u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 262u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986750u) goto L_08986750;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986750:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[16] >> 2u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352), aot_gpr_4);
    aot_gpr_31 = (0x08986764u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 619u, 0x08986764u, 0x08ABE29Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 468u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 468u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986764u) goto L_08986764;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986764:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16356), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08986790;
      }
      goto L_08986770;
    }
L_08986770:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08986780u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 621u, 0x08986780u, 0x08939050u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 270u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 270u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986780u) goto L_08986780;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986780:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089867A0;
      }
      goto L_08986788;
    }
L_08986788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089867AC;
      }
      goto L_08986790;
    }
L_08986790:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089867AC;
      }
      goto L_08986798;
    }
L_08986798:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089867AC;
      }
      goto L_089867A0;
    }
L_089867A0:
    aot_gpr_31 = (0x089867A8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 626u, 0x089867A8u, 0x08938F40u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 254u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 254u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089867A8u) goto L_089867A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089867A8:
    ctx.gpr[2] = (0u | 1u);
    goto L_089867AC;
L_089867AC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089867C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089867D4;
      }
      goto L_089867CC;
    }
L_089867CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089867D4;
      }
      goto L_089867D4;
    }
L_089867D4:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089867DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089867ECu);
    aot_gpr_4 = (0u | 1u);
    goto L_0898757C;
L_089867EC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089867F8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 68 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08986888;
      }
      goto L_08986808;
    }
L_08986808:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08986888;
      }
      goto L_08986810;
    }
L_08986810:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    aot_gpr_6 = (0u | 255u);
      if (branch_taken) {
          goto L_08986824;
      }
      goto L_08986818;
    }
L_08986818:
    ctx.gpr[2] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
      if (branch_taken) {
          goto L_08986860;
      }
      goto L_08986824;
    }
L_08986824:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08986858;
      }
      goto L_0898682C;
    }
L_0898682C:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17408));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[2];
      if (branch_taken) {
          goto L_08986850;
      }
      goto L_08986848;
    }
L_08986848:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08986888;
      }
      goto L_08986850;
    }
L_08986850:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08986888;
      }
      goto L_08986858;
    }
L_08986858:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08986888;
      }
      goto L_08986860;
    }
L_08986860:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08986880;
      }
      goto L_08986868;
    }
L_08986868:
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_4;
      if (branch_taken) {
          goto L_08986878;
      }
      goto L_08986870;
    }
L_08986870:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08986888;
      }
      goto L_08986878;
    }
L_08986878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08986888;
      }
      goto L_08986880;
    }
L_08986880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08986888;
      }
      goto L_08986888;
    }
L_08986888:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08986890:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16344)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_0898693C;
      }
      goto L_089868AC;
    }
L_089868AC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16320)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[8];
      if (branch_taken) {
          goto L_08986934;
      }
      goto L_089868C4;
    }
L_089868C4:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 350 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 5876 ? 1u : 0u);
      if (branch_taken) {
          goto L_08986900;
      }
      goto L_089868D0;
    }
L_089868D0:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08986900;
      }
      goto L_089868D8;
    }
L_089868D8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16320), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316), aot_gpr_5);
    aot_gpr_5 = (0u | 2u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312), aot_gpr_4);
    aot_gpr_31 = (0x089868F8u);
    aot_gpr_4 = (0u | 1u);
    goto L_089871DC;
L_089868F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898692C;
      }
      goto L_08986900;
    }
L_08986900:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 6027 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_0898692C;
      }
      goto L_0898690C;
    }
L_0898690C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16320), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316), aot_gpr_5);
    aot_gpr_5 = (0u | 67u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312), aot_gpr_4);
    aot_gpr_31 = (0x0898692Cu);
    aot_gpr_4 = (0u | 1u);
    goto L_089871DC;
L_0898692C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08986940;
      }
      goto L_08986934;
    }
L_08986934:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08986940;
      }
      goto L_0898693C;
    }
L_0898693C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08986940;
L_08986940:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898694C:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17408));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_gpr_4 << 24u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 24u));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08986968:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16344)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08986A94;
      }
      goto L_0898697C;
    }
L_0898697C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[2];
      if (branch_taken) {
          goto L_08986A8C;
      }
      goto L_0898698C;
    }
L_0898698C:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 68 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08986A84;
      }
      goto L_08986998;
    }
L_08986998:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08986A84;
      }
      goto L_089869A0;
    }
L_089869A0:
    aot_gpr_6 = (2279u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(17408));
    ctx.gpr[7] = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08986A7C;
      }
      goto L_089869B8;
    }
L_089869B8:
    ctx.gpr[7] = (0u | 255u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[7];
      if (branch_taken) {
          goto L_089869D8;
      }
      goto L_089869C4;
    }
L_089869C4:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 40 ? 1u : 0u);
      if (branch_taken) {
          goto L_089869E0;
      }
      goto L_089869D0;
    }
L_089869D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08986A0C;
      }
      goto L_089869D8;
    }
L_089869D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08986A98;
      }
      goto L_089869E0;
    }
L_089869E0:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08986A0C;
      }
      goto L_089869E8;
    }
L_089869E8:
    aot_gpr_5 = (0u | 4u);
    goto L_089869EC;
L_089869EC:
    ctx.gpr[7] = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_089869EC;
      }
      goto L_08986A04;
    }
L_08986A04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08986A6C;
      }
      goto L_08986A0C;
    }
L_08986A0C:
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 61 ? 1u : 0u);
      if (branch_taken) {
          goto L_08986A20;
      }
      goto L_08986A18;
    }
L_08986A18:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08986A30;
      }
      goto L_08986A20;
    }
L_08986A20:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 67 ? 1u : 0u);
      if (branch_taken) {
          goto L_08986A38;
      }
      goto L_08986A28;
    }
L_08986A28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08986A6C;
      }
      goto L_08986A30;
    }
L_08986A30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08986A98;
      }
      goto L_08986A38;
    }
L_08986A38:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08986A6C;
      }
      goto L_08986A40;
    }
L_08986A40:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16296)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08986A5C;
      }
      goto L_08986A4C;
    }
L_08986A4C:
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[2];
      if (branch_taken) {
          goto L_08986A64;
      }
      goto L_08986A54;
    }
L_08986A54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08986A6C;
      }
      goto L_08986A5C;
    }
L_08986A5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08986A98;
      }
      goto L_08986A64;
    }
L_08986A64:
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08986A6C;
L_08986A6C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336), aot_gpr_4);
    aot_gpr_31 = (0x08986A7Cu);
    aot_gpr_4 = (0u | 1u);
    goto L_089871DC;
L_08986A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08986A98;
      }
      goto L_08986A84;
    }
L_08986A84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08986A98;
      }
      goto L_08986A8C;
    }
L_08986A8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08986A98;
      }
      goto L_08986A94;
    }
L_08986A94:
    ctx.gpr[2] = (0u | 0u);
    goto L_08986A98;
L_08986A98:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08986AA4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[8] = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4968));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[8]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    goto L_08986AF8;
L_08986AF8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_gpr_29 + aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08986AF8;
      }
      goto L_08986B14;
    }
L_08986B14:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_gpr_6 + static_cast<std::uint32_t>(64));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08986B24:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08986B2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[6]{aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08986B50:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-224));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16268));
    { const std::uint32_t aot_run_words[9]{aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_run_words); }
    aot_gpr_31 = (0x08986B8Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986B8Cu) goto L_08986B8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08986B8C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7712));
    ctx.gpr[19] = (2234u << 16u);
    ctx.gpr[20] = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4968));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08986BBC;
      }
      goto L_08986BB0;
    }
L_08986BB0:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08986BBCu);
    aot_gpr_5 = (0u | 99u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0033.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 699u, 0x08986BBCu, 0x0888A1F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0033_entry(rt, ctx, 598u, aot_mem);
#else
        recomp_unit_0033_entry(rt, ctx, 598u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0033_entry, 33u, 598u, 0x0888A1F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986BBCu) goto L_08986BBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986BBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_08986CBC;
      }
      goto L_08986BC8;
    }
L_08986BC8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16280)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08986CEC;
      }
      goto L_08986BD8;
    }
L_08986BD8:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16280), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16264));
    ctx.gpr[18] = (ctx.gpr[28] | 0u);
    ctx.gpr[30] = (2232u << 16u);
    ctx.gpr[23] = (2232u << 16u);
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_17 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_gpr_4);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16248));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16272));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-6616));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-5616));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-5640));
    goto L_08986C18;
L_08986C18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    aot_gpr_5 = (aot_gpr_4 << 4u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[30]);
      if (branch_taken) {
          goto L_08986C48;
      }
      goto L_08986C30;
    }
L_08986C30:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
    aot_gpr_31 = (0x08986C40u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986C40u) goto L_08986C40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08986C40:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08986C5C;
      }
      goto L_08986C48;
    }
L_08986C48:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08986C5Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986C5Cu) goto L_08986C5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08986C5C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), 0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08986C70u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 707u, 0x08986C70u, 0x08871440u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 369u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 369u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 369u, 0x08871440u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986C70u) goto L_08986C70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986C70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08986C98;
      }
      goto L_08986C78;
    }
L_08986C78:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08986C8Cu);
    ctx.gpr[7] = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986C8Cu) goto L_08986C8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08986C8C:
    aot_gpr_31 = (0x08986C94u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 710u, 0x08986C94u, 0x08938F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 250u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 250u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986C94u) goto L_08986C94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986C94:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-16276), ctx.gpr[2]);
    goto L_08986C98;
L_08986C98:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08986C18;
      }
      goto L_08986CAC;
    }
L_08986CAC:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08986CEC;
      }
      goto L_08986CBC;
    }
L_08986CBC:
    aot_gpr_5 = (aot_gpr_4 << 4u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6616));
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5596));
    aot_gpr_31 = (0x08986CECu);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-5640));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986CECu) goto L_08986CEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08986CEC:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(172)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16240));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08986D00u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_08986B2C;
L_08986D00:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08986D58;
      }
      goto L_08986D10;
    }
L_08986D10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_08986D30;
      }
      goto L_08986D1C;
    }
L_08986D1C:
    aot_gpr_5 = (aot_gpr_4 << 2u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16276)));
    aot_gpr_17 = (aot_gpr_5 + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08986D74;
      }
      goto L_08986D30;
    }
L_08986D30:
    aot_gpr_31 = (0x08986D38u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 719u, 0x08986D38u, 0x08938F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 250u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 250u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986D38u) goto L_08986D38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986D38:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08986D44u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0033.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 720u, 0x08986D44u, 0x0888A1B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0033_entry(rt, ctx, 593u, aot_mem);
#else
        recomp_unit_0033_entry(rt, ctx, 593u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0033_entry, 33u, 593u, 0x0888A1B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986D44u) goto L_08986D44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986D44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_17 = (aot_gpr_5 + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08986D74;
      }
      goto L_08986D58;
    }
L_08986D58:
    aot_gpr_31 = (0x08986D60u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 722u, 0x08986D60u, 0x08938F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 250u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 250u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986D60u) goto L_08986D60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986D60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_17 = (aot_gpr_5 + ctx.gpr[19]);
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    goto L_08986D74;
L_08986D74:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_08986E68;
      }
      goto L_08986D7C;
    }
L_08986D7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08986DB4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5576));
    goto L_08986B2C;
L_08986DB4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08986DC4u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 726u, 0x08986DC4u, 0x08938F7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 258u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 258u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986DC4u) goto L_08986DC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986DC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[8] = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[8] + aot_gpr_4);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_17 = (ctx.gpr[7] + ctx.gpr[19]);
    aot_gpr_5 = (0u | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08986E20;
      }
      goto L_08986DFC;
    }
L_08986DFC:
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
      if (branch_taken) {
          goto L_08986E20;
      }
      goto L_08986E08;
    }
L_08986E08:
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[20];
    ctx.gpr[7] = (0u | 3u);
      if (branch_taken) {
          goto L_08986E20;
      }
      goto L_08986E10;
    }
L_08986E10:
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    ctx.gpr[7] = (0u | 4u);
      if (branch_taken) {
          goto L_08986E20;
      }
      goto L_08986E18;
    }
L_08986E18:
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08986E24;
      }
      goto L_08986E20;
    }
L_08986E20:
    aot_gpr_5 = (0u | 50u);
    goto L_08986E24;
L_08986E24:
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08986E40u);
    ctx.gpr[9] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 733u, 0x08986E40u, 0x089390ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 274u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 274u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 274u, 0x089390ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986E40u) goto L_08986E40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986E40:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16224));
    aot_gpr_31 = (0x08986E50u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 734u, 0x08986E50u, 0x08939328u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 314u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 314u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 314u, 0x08939328u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986E50u) goto L_08986E50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986E50:
    aot_gpr_31 = (0x08986E58u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 735u, 0x08986E58u, 0x089391C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 286u, 0x089391C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986E58u) goto L_08986E58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986E58:
    aot_gpr_31 = (0x08986E60u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0033.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 736u, 0x08986E60u, 0x0888A1B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0033_entry(rt, ctx, 593u, aot_mem);
#else
        recomp_unit_0033_entry(rt, ctx, 593u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0033_entry, 33u, 593u, 0x0888A1B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986E60u) goto L_08986E60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986E60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
      if (branch_taken) {
          goto L_08986FB0;
      }
      goto L_08986E68;
    }
L_08986E68:
    aot_gpr_5 = (0u | 67u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08986F20;
      }
      goto L_08986E74;
    }
L_08986E74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08986EACu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5576));
    goto L_08986B2C;
L_08986EAC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08986EBCu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 740u, 0x08986EBCu, 0x08938F7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 258u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 258u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986EBCu) goto L_08986EBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986EBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 50u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08986F00u);
    ctx.gpr[9] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 741u, 0x08986F00u, 0x089390ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 274u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 274u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 274u, 0x089390ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986F00u) goto L_08986F00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986F00:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16224));
    aot_gpr_31 = (0x08986F10u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 742u, 0x08986F10u, 0x08939328u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 314u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 314u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 314u, 0x08939328u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986F10u) goto L_08986F10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986F10:
    aot_gpr_31 = (0x08986F18u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 743u, 0x08986F18u, 0x089391C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 286u, 0x089391C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986F18u) goto L_08986F18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986F18:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
      if (branch_taken) {
          goto L_08986FB0;
      }
      goto L_08986F20;
    }
L_08986F20:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08986F30u);
    ctx.gpr[18] = (aot_gpr_5 + static_cast<std::uint32_t>(-5532));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 745u, 0x08986F30u, 0x08938FD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 262u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 262u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986F30u) goto L_08986F30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986F30:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08986F44u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_08986B2C;
L_08986F44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    aot_gpr_5 = (0u | 23u);
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_17 = (aot_gpr_6 + ctx.gpr[19]);
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08986F74;
      }
      goto L_08986F60;
    }
L_08986F60:
    aot_gpr_5 = (0u | 22u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 25u);
      if (branch_taken) {
          goto L_08986F74;
      }
      goto L_08986F6C;
    }
L_08986F6C:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08986F78;
      }
      goto L_08986F74;
    }
L_08986F74:
    ctx.gpr[18] = (0u | 1u);
    goto L_08986F78;
L_08986F78:
    aot_gpr_31 = (0x08986F80u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 751u, 0x08986F80u, 0x08938FD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 262u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 262u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986F80u) goto L_08986F80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986F80:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08986F9Cu);
    ctx.gpr[9] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 752u, 0x08986F9Cu, 0x089390ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 274u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 274u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 274u, 0x089390ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986F9Cu) goto L_08986F9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986F9C:
    aot_gpr_31 = (0x08986FA4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 753u, 0x08986FA4u, 0x089391C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 286u, 0x089391C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986FA4u) goto L_08986FA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986FA4:
    aot_gpr_31 = (0x08986FACu);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0033.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 754u, 0x08986FACu, 0x0888A1B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0033_entry(rt, ctx, 593u, aot_mem);
#else
        recomp_unit_0033_entry(rt, ctx, 593u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0033_entry, 33u, 593u, 0x0888A1B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986FACu) goto L_08986FAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986FAC:
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    goto L_08986FB0;
L_08986FB0:
    { const bool branch_taken = aot_gpr_17 == ctx.gpr[20];
      if (branch_taken) {
          goto L_08986FC4;
      }
      goto L_08986FB8;
    }
L_08986FB8:
    aot_gpr_31 = (0x08986FC0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 757u, 0x08986FC0u, 0x08938F40u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 254u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 254u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08986FC0u) goto L_08986FC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08986FC0:
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    goto L_08986FC4;
L_08986FC4:
    { const bool branch_taken = aot_gpr_17 != ctx.gpr[20];
      if (branch_taken) {
          goto L_08986FF0;
      }
      goto L_08986FCC;
    }
L_08986FCC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316)));
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-439));
    aot_gpr_31 = (0x08986FE4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5496));
    goto L_08986B2C;
L_08986FE4:
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 40 ? 1u : 0u);
      if (branch_taken) {
          goto L_08987008;
      }
      goto L_08986FF0;
    }
L_08986FF0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16216));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08987000u);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    goto L_08986B2C;
L_08987000:
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 40 ? 1u : 0u);
    goto L_08987008;
L_08987008:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 61 ? 1u : 0u);
      if (branch_taken) {
          goto L_08987030;
      }
      goto L_08987010;
    }
L_08987010:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08987030;
      }
      goto L_08987018;
    }
L_08987018:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16332)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16332), ctx.gpr[22]);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[28] + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(6620), aot_gpr_17);
      if (branch_taken) {
          goto L_0898713C;
      }
      goto L_08987030;
    }
L_08987030:
    { const bool branch_taken = aot_gpr_17 != ctx.gpr[20];
      if (branch_taken) {
          goto L_089870C8;
      }
      goto L_08987038;
    }
L_08987038:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312)));
    aot_gpr_4 = (0u | 255u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08987068;
      }
      goto L_08987048;
    }
L_08987048:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (2237u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(23216));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_089870BC;
      }
      goto L_08987068;
    }
L_08987068:
    aot_gpr_4 = (aot_gpr_5 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089870BC;
      }
      goto L_08987074;
    }
L_08987074:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_5);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-5088)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    jump_target = ctx.gpr[1];
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16320)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08987090:
    aot_gpr_6 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(23192));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_089870BC;
      }
      goto L_089870A8;
    }
L_089870A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16308), aot_gpr_4);
      if (branch_taken) {
          goto L_089870BC;
      }
      goto L_089870B0;
    }
L_089870B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16304), aot_gpr_4);
      if (branch_taken) {
          goto L_089870BC;
      }
      goto L_089870B8;
    }
L_089870B8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16300), aot_gpr_4);
    goto L_089870BC;
L_089870BC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16320), ctx.gpr[22]);
      if (branch_taken) {
          goto L_0898713C;
      }
      goto L_089870C8;
    }
L_089870C8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 61 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 67 ? 1u : 0u);
      if (branch_taken) {
          goto L_089870FC;
      }
      goto L_089870D4;
    }
L_089870D4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089870FC;
      }
      goto L_089870DC;
    }
L_089870DC:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089870F0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5472));
    goto L_08986B2C;
L_089870F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16296), aot_gpr_4);
      if (branch_taken) {
          goto L_0898713C;
      }
      goto L_089870FC;
    }
L_089870FC:
    aot_gpr_4 = (0u | 67u);
    { const bool branch_taken = aot_gpr_17 != aot_gpr_4;
      if (branch_taken) {
          goto L_0898713C;
      }
      goto L_08987108;
    }
L_08987108:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08987134;
      }
      goto L_08987118;
    }
L_08987118:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16320)));
    aot_gpr_6 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(23192));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08987134;
      }
      goto L_08987134;
    }
L_08987134:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316), ctx.gpr[22]);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16320), ctx.gpr[22]);
    goto L_0898713C;
L_0898713C:
    aot_gpr_31 = (0x08987144u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0033.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 785u, 0x08987144u, 0x0888A1B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0033_entry(rt, ctx, 593u, aot_mem);
#else
        recomp_unit_0033_entry(rt, ctx, 593u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0033_entry, 33u, 593u, 0x0888A1B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08987144u) goto L_08987144;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08987144:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17408));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340), ctx.gpr[22]);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336), ctx.gpr[22]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08987194;
      }
      goto L_08987170;
    }
L_08987170:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), ctx.gpr[23]);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16284), ctx.gpr[22]);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08987184u);
    aot_gpr_5 = (0u | 99u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0033.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 787u, 0x08987184u, 0x0888A200u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0033_entry(rt, ctx, 599u, aot_mem);
#else
        recomp_unit_0033_entry(rt, ctx, 599u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0033_entry, 33u, 599u, 0x0888A200u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08987184u) goto L_08987184;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08987184:
    aot_gpr_31 = (0x0898718Cu);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B734F4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898718C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    goto L_08987194;
L_08987194:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089871A8;
      }
      goto L_0898719C;
    }
L_0898719C:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x089871A8u);
    aot_gpr_5 = (0u | 99u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0033.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 791u, 0x089871A8u, 0x0888A200u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0033_entry(rt, ctx, 599u, aot_mem);
#else
        recomp_unit_0033_entry(rt, ctx, 599u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0033_entry, 33u, 599u, 0x0888A200u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089871A8u) goto L_089871A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089871A8:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089871DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_17);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08987214;
      }
      goto L_08987204;
    }
L_08987204:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16284)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08987230;
      }
      goto L_08987214;
    }
L_08987214:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    aot_gpr_17 = (0u | 2u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 68 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7712));
      if (branch_taken) {
          goto L_08987240;
      }
      goto L_08987228;
    }
L_08987228:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08987238;
      }
      goto L_08987230;
    }
L_08987230:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0898755C;
      }
      goto L_08987238;
    }
L_08987238:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_08987264;
      }
      goto L_08987240;
    }
L_08987240:
    ctx.gpr[7] = (2279u << 16u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17408));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340), aot_gpr_5);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08987264;
L_08987264:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_17;
      if (branch_taken) {
          goto L_08987290;
      }
      goto L_0898726C;
    }
L_0898726C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316)));
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-439));
    aot_gpr_31 = (0x08987284u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5444));
    goto L_08986B2C;
L_08987284:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 40 ? 1u : 0u);
      if (branch_taken) {
          goto L_089872AC;
      }
      goto L_08987290;
    }
L_08987290:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089872A4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5408));
    goto L_08986B2C;
L_089872A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 40 ? 1u : 0u);
    goto L_089872AC;
L_089872AC:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 61 ? 1u : 0u);
      if (branch_taken) {
          goto L_089872E8;
      }
      goto L_089872B4;
    }
L_089872B4:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089872E8;
      }
      goto L_089872BC;
    }
L_089872BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16332)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_089872CC;
    }
L_089872CC:
    ctx.gpr[7] = (2234u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16360)));
    aot_gpr_6 = (aot_gpr_4 << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4968));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_089872E8;
    }
L_089872E8:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_17;
      if (branch_taken) {
          goto L_089873B0;
      }
      goto L_089872F0;
    }
L_089872F0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312)));
    aot_gpr_6 = (0u | 255u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_6 = (0u | 7u);
      if (branch_taken) {
          goto L_08987320;
      }
      goto L_08987300;
    }
L_08987300:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_6 = (0u | 6u);
      if (branch_taken) {
          goto L_0898737C;
      }
      goto L_08987308;
    }
L_08987308:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_6 = (0u | 5u);
      if (branch_taken) {
          goto L_08987374;
      }
      goto L_08987310;
    }
L_08987310:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_08987318;
    }
L_08987318:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_08987320;
    }
L_08987320:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16324)));
    aot_gpr_5 = (2248u << 16u);
    aot_gpr_6 = (ctx.gpr[19] << 11u);
    ctx.gpr[7] = (0u - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 << 1u);
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21504));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (2234u << 16u);
    ctx.gpr[7] = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4968));
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_6 = (2237u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(560));
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_08987374;
    }
L_08987374:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_0898737C;
    }
L_0898737C:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0898738Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5388));
    goto L_08986B2C;
L_0898738C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4968));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(640));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_089873B0;
    }
L_089873B0:
    aot_gpr_5 = (0u | 67u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_089873BC;
    }
L_089873BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312)));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[20] = (2234u << 16u);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_089873CC;
    }
L_089873CC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4968));
    ctx.gpr[19] = (2237u << 16u);
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08987420;
      }
      goto L_089873E0;
    }
L_089873E0:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898744C;
      }
      goto L_089873E8;
    }
L_089873E8:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08987478;
      }
      goto L_089873F0;
    }
L_089873F0:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[1];
      if (branch_taken) {
          goto L_089874A4;
      }
      goto L_089873F8;
    }
L_089873F8:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08987408u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5360));
    goto L_08986B2C;
L_08987408:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(23168)));
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_08987420;
    }
L_08987420:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08987430u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5324));
    goto L_08986B2C;
L_08987430:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(23168));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_0898744C;
    }
L_0898744C:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0898745Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5288));
    goto L_08986B2C;
L_0898745C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(23168));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_08987478;
    }
L_08987478:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08987488u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5252));
    goto L_08986B2C;
L_08987488:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(23168));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_089874A4;
    }
L_089874A4:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089874B4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5216));
    goto L_08986B2C;
L_089874B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(23168));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_089874D0;
    }
L_089874D0:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_17;
      if (branch_taken) {
          goto L_08987500;
      }
      goto L_089874D8;
    }
L_089874D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312)));
    aot_gpr_5 = (0u | 255u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08987500;
      }
      goto L_089874E8;
    }
L_089874E8:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089874F8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5180));
    goto L_08986B2C;
L_089874F8:
    aot_gpr_31 = (0x08987500u);
    goto L_08986678;
L_08987500:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_0898754C;
      }
      goto L_0898750C;
    }
L_0898750C:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_5 = (2200u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4148)));
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-5156));
    aot_gpr_31 = (0x08987530u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(27472));
    ctx.pc = 0x08B734B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08987530:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16284), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 8u);
    aot_gpr_31 = (0x08987544u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.pc = 0x08B73464u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08987544:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08987558;
      }
      goto L_0898754C;
    }
L_0898754C:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x08987558u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08986B50;
L_08987558:
    ctx.gpr[2] = (0u | 0u);
    goto L_0898755C;
L_0898755C:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898757C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16344)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08987944;
      }
      goto L_08987598;
    }
L_08987598:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-1280), 0u);
    aot_gpr_5 = (0u | 349u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1280));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (0u | 350u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (0u | 5876u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (0u | 5884u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_5 = (0u | 5887u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_gpr_5 = (0u | 5890u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_5 = (0u | 5893u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_gpr_5 = (0u | 5896u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_gpr_5 = (0u | 5899u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_gpr_5 = (0u | 5902u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), aot_gpr_5);
    aot_gpr_5 = (0u | 5905u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(44), aot_gpr_5);
    aot_gpr_5 = (0u | 5908u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_gpr_5 = (0u | 5911u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_gpr_5 = (0u | 5914u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (0u | 5917u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(60), aot_gpr_5);
    aot_gpr_5 = (0u | 5920u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(64), aot_gpr_5);
    aot_gpr_5 = (0u | 5923u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_gpr_5 = (0u | 5926u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_5 = (0u | 5928u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_5 = (0u | 5929u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(80), aot_gpr_5);
    aot_gpr_5 = (0u | 5933u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(84), aot_gpr_5);
    aot_gpr_5 = (0u | 5937u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(88), aot_gpr_5);
    aot_gpr_5 = (0u | 5941u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(92), aot_gpr_5);
    aot_gpr_5 = (0u | 5945u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(96), aot_gpr_5);
    aot_gpr_5 = (0u | 5948u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(100), aot_gpr_5);
    aot_gpr_5 = (0u | 5952u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(104), aot_gpr_5);
    aot_gpr_5 = (0u | 5953u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(108), aot_gpr_5);
    aot_gpr_5 = (0u | 5954u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(112), aot_gpr_5);
    aot_gpr_5 = (0u | 5955u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(116), aot_gpr_5);
    aot_gpr_5 = (0u | 5956u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(120), aot_gpr_5);
    aot_gpr_5 = (0u | 5960u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(124), aot_gpr_5);
    aot_gpr_5 = (0u | 5961u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(128), aot_gpr_5);
    aot_gpr_5 = (0u | 5962u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(132), aot_gpr_5);
    aot_gpr_5 = (0u | 5963u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(136), aot_gpr_5);
    aot_gpr_5 = (0u | 5964u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(140), aot_gpr_5);
    aot_gpr_5 = (0u | 5969u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(144), aot_gpr_5);
    aot_gpr_5 = (0u | 5970u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(148), aot_gpr_5);
    aot_gpr_5 = (0u | 5971u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(152), aot_gpr_5);
    aot_gpr_5 = (0u | 5972u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(156), aot_gpr_5);
    aot_gpr_5 = (0u | 5973u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(160), aot_gpr_5);
    aot_gpr_5 = (0u | 5974u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(164), aot_gpr_5);
    aot_gpr_5 = (0u | 5975u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(168), aot_gpr_5);
    aot_gpr_5 = (0u | 5976u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(172), aot_gpr_5);
    aot_gpr_5 = (0u | 5977u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(176), aot_gpr_5);
    aot_gpr_5 = (0u | 5978u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(180), aot_gpr_5);
    aot_gpr_5 = (0u | 5979u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(184), aot_gpr_5);
    aot_gpr_5 = (0u | 5980u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(188), aot_gpr_5);
    aot_gpr_5 = (0u | 5981u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(192), aot_gpr_5);
    aot_gpr_5 = (0u | 5982u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(196), aot_gpr_5);
    aot_gpr_5 = (0u | 5983u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(200), aot_gpr_5);
    aot_gpr_5 = (0u | 5984u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(204), aot_gpr_5);
    aot_gpr_5 = (0u | 5985u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(208), aot_gpr_5);
    aot_gpr_5 = (0u | 5986u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(212), aot_gpr_5);
    aot_gpr_5 = (0u | 5987u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(216), aot_gpr_5);
    aot_gpr_5 = (0u | 5990u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(220), aot_gpr_5);
    aot_gpr_5 = (0u | 5991u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(224), aot_gpr_5);
    aot_gpr_5 = (0u | 5995u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(228), aot_gpr_5);
    aot_gpr_5 = (0u | 5996u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(232), aot_gpr_5);
    aot_gpr_5 = (0u | 5997u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(236), aot_gpr_5);
    aot_gpr_5 = (0u | 5998u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(240), aot_gpr_5);
    aot_gpr_5 = (0u | 5999u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(244), aot_gpr_5);
    aot_gpr_5 = (0u | 6004u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(248), aot_gpr_5);
    aot_gpr_5 = (0u | 6009u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(252), aot_gpr_5);
    aot_gpr_5 = (0u | 6014u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(256), aot_gpr_5);
    aot_gpr_5 = (0u | 6019u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(260), aot_gpr_5);
    aot_gpr_5 = (0u | 6023u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(264), aot_gpr_5);
    aot_gpr_5 = (0u | 6027u);
    aot_gpr_31 = (0x089877BCu);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(268), aot_gpr_5);
    goto L_0898670C;
L_089877BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089877F4;
      }
      goto L_089877C4;
    }
L_089877C4:
    aot_gpr_31 = (0x089877CCu);
    goto L_08986698;
L_089877CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089877EC;
      }
      goto L_089877D4;
    }
L_089877D4:
    aot_gpr_31 = (0x089877DCu);
    goto L_089867C0;
L_089877DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089877FC;
      }
      goto L_089877E4;
    }
L_089877E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987948;
      }
      goto L_089877EC;
    }
L_089877EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987948;
      }
      goto L_089877F4;
    }
L_089877F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987948;
      }
      goto L_089877FC;
    }
L_089877FC:
    aot_gpr_4 = (0u | 127u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16292), aot_gpr_4);
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16288), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-18896));
    ctx.gpr[8] = (2236u << 16u);
    ctx.gpr[9] = (2237u << 16u);
    ctx.gpr[10] = (2237u << 16u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-19168));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(23216));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(560));
    goto L_08987834;
L_08987834:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08987834;
      }
      goto L_0898784C;
    }
L_0898784C:
    aot_gpr_4 = (0u | 0u);
    goto L_08987850;
L_08987850:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(128), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(352), 0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(464), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(576), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(688), ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 28 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08987850;
      }
      goto L_08987878;
    }
L_08987878:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17408));
    goto L_08987884;
L_08987884:
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 68 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08987884;
      }
      goto L_089878A0;
    }
L_089878A0:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    goto L_089878A8;
L_089878A8:
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089878A8;
      }
      goto L_089878C4;
    }
L_089878C4:
    { const std::uint32_t aot_run_words[3]{0u, ctx.gpr[7], ctx.gpr[7]};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(-16324), aot_run_words); }
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(23192), ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(23192));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16332), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_4 = (0u | 69u);
    aot_gpr_5 = (ctx.gpr[28] | 0u);
    goto L_089878F0;
L_089878F0:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6620), aot_gpr_4);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089878F0;
      }
      goto L_08987904;
    }
L_08987904:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08987944;
      }
      goto L_0898790C;
    }
L_0898790C:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7712));
    aot_gpr_31 = (0x0898791Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-5132));
    goto L_08986B2C;
L_0898791C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336), 0u);
    aot_gpr_31 = (0x0898792Cu);
    aot_gpr_4 = (0u | 0u);
    goto L_089871DC;
L_0898792C:
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336), ctx.gpr[16]);
    aot_gpr_31 = (0x08987940u);
    aot_gpr_4 = (0u | 0u);
    goto L_089871DC;
L_08987940:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16344), ctx.gpr[16]);
    goto L_08987944;
L_08987944:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16344)));
    goto L_08987948;
L_08987948:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08987958:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16320)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08987AA0;
      }
      goto L_08987968;
    }
L_08987968:
    aot_gpr_6 = (0u | 255u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_089879D8;
      }
      goto L_08987974;
    }
L_08987974:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 5875 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089879C8;
      }
      goto L_08987980;
    }
L_08987980:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16324)));
    aot_gpr_5 = (2237u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23216));
    goto L_08987994;
L_08987994:
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
      if (branch_taken) {
          goto L_089879A4;
      }
      goto L_089879A0;
    }
L_089879A0:
    aot_gpr_6 = (ctx.gpr[7] + static_cast<std::uint32_t>(7));
    goto L_089879A4;
L_089879A4:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
      if (branch_taken) {
          goto L_089879D0;
      }
      goto L_089879B8;
    }
L_089879B8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08987994;
      }
      goto L_089879C8;
    }
L_089879C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_089879D0;
    }
L_089879D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_089879D8;
    }
L_089879D8:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08987A1C;
      }
      goto L_089879E4;
    }
L_089879E4:
    aot_gpr_6 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(23192));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_4 = (2279u << 16u);
      if (branch_taken) {
          goto L_08987BF8;
      }
      goto L_08987A00;
    }
L_08987A00:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17408));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(67)));
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[2];
      if (branch_taken) {
          goto L_08987BF8;
      }
      goto L_08987A14;
    }
L_08987A14:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987A1C;
    }
L_08987A1C:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 7 ? 1u : 0u);
      if (branch_taken) {
          goto L_08987A48;
      }
      goto L_08987A28;
    }
L_08987A28:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08987A6C;
      }
      goto L_08987A34;
    }
L_08987A34:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16308)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08987A74;
      }
      goto L_08987A40;
    }
L_08987A40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987A48;
    }
L_08987A48:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08987A7C;
      }
      goto L_08987A50;
    }
L_08987A50:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08987A6C;
      }
      goto L_08987A58;
    }
L_08987A58:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16300)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08987A98;
      }
      goto L_08987A64;
    }
L_08987A64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987A6C;
    }
L_08987A6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987A74;
    }
L_08987A74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987A7C;
    }
L_08987A7C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16304)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08987A90;
      }
      goto L_08987A88;
    }
L_08987A88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987A90;
    }
L_08987A90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987A98;
    }
L_08987A98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987AA0;
    }
L_08987AA0:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
      if (branch_taken) {
          goto L_08987AC4;
      }
      goto L_08987AA8;
    }
L_08987AA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08987ABC;
      }
      goto L_08987AB4;
    }
L_08987AB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987ABC;
    }
L_08987ABC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987AC4;
    }
L_08987AC4:
    aot_gpr_6 = (0u | 255u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08987B34;
      }
      goto L_08987AD0;
    }
L_08987AD0:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 5875 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08987B24;
      }
      goto L_08987ADC;
    }
L_08987ADC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16324)));
    aot_gpr_5 = (2237u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23216));
    goto L_08987AF0;
L_08987AF0:
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
      if (branch_taken) {
          goto L_08987B00;
      }
      goto L_08987AFC;
    }
L_08987AFC:
    aot_gpr_6 = (ctx.gpr[7] + static_cast<std::uint32_t>(7));
    goto L_08987B00;
L_08987B00:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
      if (branch_taken) {
          goto L_08987B2C;
      }
      goto L_08987B14;
    }
L_08987B14:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08987AF0;
      }
      goto L_08987B24;
    }
L_08987B24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987B2C;
    }
L_08987B2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987B34;
    }
L_08987B34:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08987B64;
      }
      goto L_08987B40;
    }
L_08987B40:
    aot_gpr_6 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(23192));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08987BF0;
      }
      goto L_08987B5C;
    }
L_08987B5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987B64;
    }
L_08987B64:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 7 ? 1u : 0u);
      if (branch_taken) {
          goto L_08987B84;
      }
      goto L_08987B70;
    }
L_08987B70:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08987BF0;
      }
      goto L_08987B7C;
    }
L_08987B7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08987B9C;
      }
      goto L_08987B84;
    }
L_08987B84:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08987BB8;
      }
      goto L_08987B8C;
    }
L_08987B8C:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08987BD4;
      }
      goto L_08987B94;
    }
L_08987B94:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08987BF0;
      }
      goto L_08987B9C;
    }
L_08987B9C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16308)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08987BB0;
      }
      goto L_08987BA8;
    }
L_08987BA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08987BF0;
      }
      goto L_08987BB0;
    }
L_08987BB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987BB8;
    }
L_08987BB8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16304)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08987BCC;
      }
      goto L_08987BC4;
    }
L_08987BC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08987BF0;
      }
      goto L_08987BCC;
    }
L_08987BCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987BD4;
    }
L_08987BD4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16300)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08987BE8;
      }
      goto L_08987BE0;
    }
L_08987BE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987BE8;
    }
L_08987BE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987BF0;
    }
L_08987BF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987BF8;
    }
L_08987BF8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08987BFC;
L_08987BFC:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08987C04:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7712));
    aot_gpr_5 = (0u | 16384u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08987C1Cu);
    aot_gpr_6 = (0u | 32u);
    goto L_08986B24;
L_08987C1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16360)));
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4968));
    { const std::uint32_t aot_run_words[21]{aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(160), aot_run_words); }
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08987C88:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
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
    ctx.execute_vfpu_vdot_ct<4u, 0u, 1u, 4u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<4u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08987CC8;
      }
      goto L_08987CC4;
    }
L_08987CC4:
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08987CC8;
L_08987CC8:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<0u, 0u, 1u, 5u>();
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 23u>();
    ctx.execute_vfpu_vec3_ct<0u, 64u, 32u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<64u, 32u, 0u, 1u, 1u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_14) || std::isnan(aot_fpr_12)) && aot_fpr_14 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08987D2C;
      }
      goto L_08987D00;
    }
L_08987D00:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 / aot_fpr_14;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08987D30;
      }
      goto L_08987D2C;
    }
L_08987D2C:
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08987D30;
L_08987D30:
    aot_gpr_31 = (0x08987D38u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08987D38u) goto L_08987D38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08987D38:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16164)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16168)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08987D4Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08987D4Cu) goto L_08987D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08987D4C:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08987D58u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08987D58u) goto L_08987D58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08987D58:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08987D6C:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h_ct<64u, 0u, 2u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08987DD0:
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_6);
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_gpr_5);
    ctx.execute_vfpu_vh2f_ct<1u, 0u, 2u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08987DF4:
    { const bool branch_taken = ctx.gpr[24] != 0u;
      if (branch_taken) {
          goto L_08987E28;
      }
      goto L_08987DFC;
    }
L_08987DFC:
    ctx.execute_vfpu_unary_ct<35u, 35u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<99u, 99u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<28u, 3u, 4u, 0u>();
    ctx.execute_vfpu_unary_ct<3u, 60u, 1u, 0u>();
    ctx.execute_vfpu_unary_ct<3u, 3u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<35u, 28u, 1u, 0u>();
    ctx.execute_vfpu_unary_ct<67u, 124u, 1u, 0u>();
    ctx.execute_vfpu_unary_ct<99u, 92u, 1u, 0u>();
    ctx.execute_vfpu_unary_ct<99u, 99u, 1u, 2u>();
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08987E28:
    ctx.execute_vfpu_unary_ct<67u, 67u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<99u, 99u, 1u, 2u>();
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[24] != ctx.gpr[1];
      if (branch_taken) {
          goto L_08987E58;
      }
      goto L_08987E3C;
    }
L_08987E3C:
    ctx.execute_vfpu_unary_ct<28u, 3u, 4u, 0u>();
    ctx.execute_vfpu_unary_ct<3u, 124u, 1u, 0u>();
    ctx.execute_vfpu_unary_ct<3u, 3u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<35u, 92u, 1u, 0u>();
    ctx.execute_vfpu_unary_ct<67u, 60u, 1u, 0u>();
    ctx.execute_vfpu_unary_ct<67u, 67u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<99u, 28u, 1u, 0u>();
    goto L_08987E58;
L_08987E58:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08987E60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08987EB4u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08987F80;
L_08987EB4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (0x08987EC0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 954u, 0x08987EC0u, 0x08988000u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 1u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 1u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 1u, 0x08988000u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08987EC0u) goto L_08987EC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08987EC0:
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08987ED8:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), 0u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08987EFC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_17 = (ctx.gpr[18] + static_cast<std::uint32_t>(31984));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(31984)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08987F40;
      }
      goto L_08987F34;
    }
L_08987F34:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr_31 = (0x08987F40u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 958u, 0x08987F40u, 0x0887F6B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08987F40u) goto L_08987F40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08987F40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(31984)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08987F68;
      }
      goto L_08987F5C;
    }
L_08987F5C:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr_31 = (0x08987F68u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 960u, 0x08987F68u, 0x0887F6B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08987F68u) goto L_08987F68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08987F68:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08987F80:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(31984));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(31984)));
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_gpr_6 = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(20));
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08987FCC;
      }
      goto L_08987FC0;
    }
L_08987FC0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08987FCCu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 963u, 0x08987FCCu, 0x0887F6B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08987FCCu) goto L_08987FCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08987FCC:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08987FE0u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 964u, 0x08987FE0u, 0x0887F5E4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 728u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 728u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08987FE0u) goto L_08987FE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08987FE0:
    aot_gpr_31 = (0x08987FE8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0096->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0096_entry, 965u, 0x08987FE8u, 0x0887F7E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 744u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 744u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 744u, 0x0887F7E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08987FE8u) goto L_08987FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08987FE8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0096(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0096_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_96(Runtime &runtime) {
    runtime.register_generated_unit(96u, 0x08984000u, 16384u, &recomp_unit_0096, &recomp_unit_0096_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08984004u, &recomp_unit_0096, "recomp_unit_0096",
                                          kEntryMasks_recomp_unit_0096, 64u);
}
} // namespace psprecomp
