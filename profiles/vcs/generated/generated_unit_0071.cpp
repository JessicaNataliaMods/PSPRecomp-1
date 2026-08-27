#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0071[64] = {
    0x0040001020211223ull, 0x8004002001020414ull, 0x4008004002001000ull, 0x0000902410120901ull,
    0x0004154800004500ull, 0x0000000000004954ull, 0x00AA440000065410ull, 0xC4444402802A8124ull,
    0xA824003152044440ull, 0x5441040A82A28A60ull, 0x4024002010544800ull, 0x5020300800011481ull,
    0x00001B4206904141ull, 0x400B508000000000ull, 0x04810A40500001A8ull, 0x9281024944280102ull,
    0x5048449060A44250ull, 0xA2A4115294140A52ull, 0x294A5294A5295552ull, 0x0014AA28552052A9ull,
    0x522800948A808A8Aull, 0x28A20AD55522A002ull, 0x0C8224A92A4AAA41ull, 0xAA9048A2054A54A5ull,
    0x1540AA55492A4A92ull, 0x4A880890212554A8ull, 0x904A055110552954ull, 0x04AA54941252A482ull,
    0x2282A0562440CA55ull, 0x2825051045548489ull, 0x4A4801110089040Aull, 0x20A8001005014448ull,
    0x0884A1252AA45000ull, 0x109100480228AA08ull, 0xA942402450804009ull, 0x20122A1220122022ull,
    0x0400A20452900A12ull, 0x5414414AA2424488ull, 0x4951450451450510ull, 0x1448A2890AA22A20ull,
    0x9048948489115545ull, 0x00444898090A0088ull, 0x0A00012010040485ull, 0xA2AAAAA508405005ull,
    0x9091429485208508ull, 0x429485208508A2AAull, 0x548A458914A91624ull, 0x0890020242802224ull,
    0x080495400112AA00ull, 0x5252160805402805ull, 0x48814802408940C9ull, 0x4954042108A14A50ull,
    0x29052095509112A5ull, 0x2282550A24A22016ull, 0x5055491212055088ull, 0x8C45322A086A5050ull,
    0x2A1154824040A492ull, 0xAAAA0AAA8AAAAA15ull, 0x12CA9542A8A1542Aull, 0x1451545145544C49ull,
    0xA21042AA84A0A28Aull, 0x94A5555555214510ull, 0x5095295555555504ull, 0x02282A0129155554ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0071[64] = {
    1u, 11u, 19u, 24u, 34u, 43u, 49u, 61u, 77u, 92u, 110u, 120u, 131u, 145u, 152u, 164u,
    179u, 196u, 217u, 243u, 263u, 281u, 302u, 324u, 347u, 371u, 390u, 411u, 432u, 453u, 472u, 486u,
    498u, 515u, 529u, 544u, 558u, 572u, 591u, 610u, 629u, 650u, 663u, 673u, 694u, 712u, 732u, 755u,
    767u, 781u, 798u, 814u, 832u, 853u, 872u, 891u, 912u, 930u, 958u, 982u, 1005u, 1025u, 1050u, 1076u,
};
void recomp_unit_0071_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,31,5,16,2,6 fprs=12,13,22,20 gpr_occ=4200 fpr_occ=826 gpr_total=4869 fpr_total=1065
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_22 = ctx.fpr[22];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[31] = aot_gpr_31; ctx.gpr[5] = aot_gpr_5; ctx.gpr[16] = aot_gpr_16; ctx.gpr[2] = aot_gpr_2; ctx.gpr[6] = aot_gpr_6; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[22] = aot_fpr_22; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_2 = ctx.gpr[2]; aot_gpr_6 = ctx.gpr[6]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_22 = ctx.fpr[22]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08920000u;
        entry_id = 0u;
        if (entry_delta < 16360u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0071[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0071[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08920000;
    case 2u: goto L_08920004;
    case 3u: goto L_08920014;
    case 4u: goto L_08920024;
    case 5u: goto L_08920030;
    case 6u: goto L_08920040;
    case 7u: goto L_08920054;
    case 8u: goto L_08920074;
    case 9u: goto L_08920090;
    case 10u: goto L_089200D8;
    case 11u: goto L_08920108;
    case 12u: goto L_08920110;
    case 13u: goto L_08920128;
    case 14u: goto L_08920144;
    case 15u: goto L_08920160;
    case 16u: goto L_08920194;
    case 17u: goto L_089201C8;
    case 18u: goto L_089201FC;
    case 19u: goto L_08920230;
    case 20u: goto L_08920264;
    case 21u: goto L_08920298;
    case 22u: goto L_089202CC;
    case 23u: goto L_089202F8;
    case 24u: goto L_08920300;
    case 25u: goto L_08920320;
    case 26u: goto L_0892032C;
    case 27u: goto L_08920344;
    case 28u: goto L_08920350;
    case 29u: goto L_08920370;
    case 30u: goto L_08920388;
    case 31u: goto L_08920394;
    case 32u: goto L_089203B0;
    case 33u: goto L_089203BC;
    case 34u: goto L_08920420;
    case 35u: goto L_08920428;
    case 36u: goto L_08920438;
    case 37u: goto L_0892048C;
    case 38u: goto L_08920498;
    case 39u: goto L_089204A0;
    case 40u: goto L_089204A8;
    case 41u: goto L_089204B0;
    case 42u: goto L_089204C8;
    case 43u: goto L_08920508;
    case 44u: goto L_08920510;
    case 45u: goto L_08920518;
    case 46u: goto L_08920520;
    case 47u: goto L_0892052C;
    case 48u: goto L_08920538;
    case 49u: goto L_08920610;
    case 50u: goto L_08920628;
    case 51u: goto L_08920630;
    case 52u: goto L_08920638;
    case 53u: goto L_08920644;
    case 54u: goto L_08920648;
    case 55u: goto L_089206A8;
    case 56u: goto L_089206B8;
    case 57u: goto L_089206C4;
    case 58u: goto L_089206CC;
    case 59u: goto L_089206D4;
    case 60u: goto L_089206DC;
    case 61u: goto L_08920708;
    case 62u: goto L_08920714;
    case 63u: goto L_08920720;
    case 64u: goto L_0892073C;
    case 65u: goto L_08920744;
    case 66u: goto L_0892074C;
    case 67u: goto L_08920754;
    case 68u: goto L_0892077C;
    case 69u: goto L_08920784;
    case 70u: goto L_089207A8;
    case 71u: goto L_089207B8;
    case 72u: goto L_089207C8;
    case 73u: goto L_089207D8;
    case 74u: goto L_089207E8;
    case 75u: goto L_089207F8;
    case 76u: goto L_089207FC;
    case 77u: goto L_08920818;
    case 78u: goto L_08920828;
    case 79u: goto L_08920838;
    case 80u: goto L_08920848;
    case 81u: goto L_08920864;
    case 82u: goto L_08920870;
    case 83u: goto L_08920878;
    case 84u: goto L_08920880;
    case 85u: goto L_08920890;
    case 86u: goto L_08920894;
    case 87u: goto L_089208C8;
    case 88u: goto L_089208D4;
    case 89u: goto L_089208EC;
    case 90u: goto L_089208F4;
    case 91u: goto L_089208FC;
    case 92u: goto L_08920914;
    case 93u: goto L_08920918;
    case 94u: goto L_08920924;
    case 95u: goto L_0892092C;
    case 96u: goto L_0892093C;
    case 97u: goto L_08920944;
    case 98u: goto L_08920954;
    case 99u: goto L_0892095C;
    case 100u: goto L_08920964;
    case 101u: goto L_0892097C;
    case 102u: goto L_08920984;
    case 103u: goto L_0892098C;
    case 104u: goto L_089209A8;
    case 105u: goto L_089209C0;
    case 106u: goto L_089209D8;
    case 107u: goto L_089209E8;
    case 108u: goto L_089209F0;
    case 109u: goto L_089209F8;
    case 110u: goto L_08920A2C;
    case 111u: goto L_08920A38;
    case 112u: goto L_08920A48;
    case 113u: goto L_08920A50;
    case 114u: goto L_08920A58;
    case 115u: goto L_08920A70;
    case 116u: goto L_08920A94;
    case 117u: goto L_08920AC8;
    case 118u: goto L_08920AD4;
    case 119u: goto L_08920AF8;
    case 120u: goto L_08920B00;
    case 121u: goto L_08920B1C;
    case 122u: goto L_08920B28;
    case 123u: goto L_08920B30;
    case 124u: goto L_08920B40;
    case 125u: goto L_08920B8C;
    case 126u: goto L_08920BB0;
    case 127u: goto L_08920BB4;
    case 128u: goto L_08920BD4;
    case 129u: goto L_08920BF0;
    case 130u: goto L_08920BF8;
    case 131u: goto L_08920C00;
    case 132u: goto L_08920C18;
    case 133u: goto L_08920C20;
    case 134u: goto L_08920C38;
    case 135u: goto L_08920C50;
    case 136u: goto L_08920C5C;
    case 137u: goto L_08920C64;
    case 138u: goto L_08920C68;
    case 139u: goto L_08920C84;
    case 140u: goto L_08920C98;
    case 141u: goto L_08920CA0;
    case 142u: goto L_08920CA4;
    case 143u: goto L_08920CAC;
    case 144u: goto L_08920CB0;
    case 145u: goto L_08920D9C;
    case 146u: goto L_08920DB0;
    case 147u: goto L_08920DB8;
    case 148u: goto L_08920DC0;
    case 149u: goto L_08920DC4;
    case 150u: goto L_08920DCC;
    case 151u: goto L_08920DF8;
    case 152u: goto L_08920E0C;
    case 153u: goto L_08920E14;
    case 154u: goto L_08920E1C;
    case 155u: goto L_08920E20;
    case 156u: goto L_08920E70;
    case 157u: goto L_08920E78;
    case 158u: goto L_08920E98;
    case 159u: goto L_08920EA4;
    case 160u: goto L_08920EAC;
    case 161u: goto L_08920EC0;
    case 162u: goto L_08920EDC;
    case 163u: goto L_08920EE8;
    case 164u: goto L_08920F04;
    case 165u: goto L_08920F20;
    case 166u: goto L_08920F4C;
    case 167u: goto L_08920F54;
    case 168u: goto L_08920F68;
    case 169u: goto L_08920F78;
    case 170u: goto L_08920F80;
    case 171u: goto L_08920F8C;
    case 172u: goto L_08920F98;
    case 173u: goto L_08920FA4;
    case 174u: goto L_08920FC0;
    case 175u: goto L_08920FDC;
    case 176u: goto L_08920FE4;
    case 177u: goto L_08920FF0;
    case 178u: goto L_08920FFC;
    case 179u: goto L_08921010;
    case 180u: goto L_08921018;
    case 181u: goto L_08921024;
    case 182u: goto L_08921038;
    case 183u: goto L_08921048;
    case 184u: goto L_08921054;
    case 185u: goto L_0892105C;
    case 186u: goto L_08921074;
    case 187u: goto L_08921078;
    case 188u: goto L_08921090;
    case 189u: goto L_0892109C;
    case 190u: goto L_089210A8;
    case 191u: goto L_089210B8;
    case 192u: goto L_089210CC;
    case 193u: goto L_089210D8;
    case 194u: goto L_089210F0;
    case 195u: goto L_089210F8;
    case 196u: goto L_08921104;
    case 197u: goto L_08921110;
    case 198u: goto L_08921118;
    case 199u: goto L_08921124;
    case 200u: goto L_0892112C;
    case 201u: goto L_08921148;
    case 202u: goto L_08921150;
    case 203u: goto L_08921168;
    case 204u: goto L_08921170;
    case 205u: goto L_0892117C;
    case 206u: goto L_08921184;
    case 207u: goto L_08921190;
    case 208u: goto L_08921198;
    case 209u: goto L_089211A0;
    case 210u: goto L_089211B0;
    case 211u: goto L_089211C8;
    case 212u: goto L_089211D4;
    case 213u: goto L_089211DC;
    case 214u: goto L_089211E4;
    case 215u: goto L_089211F4;
    case 216u: goto L_089211FC;
    case 217u: goto L_08921204;
    case 218u: goto L_08921210;
    case 219u: goto L_08921218;
    case 220u: goto L_08921220;
    case 221u: goto L_08921228;
    case 222u: goto L_08921230;
    case 223u: goto L_08921238;
    case 224u: goto L_08921240;
    case 225u: goto L_0892124C;
    case 226u: goto L_08921254;
    case 227u: goto L_08921260;
    case 228u: goto L_08921268;
    case 229u: goto L_08921274;
    case 230u: goto L_0892127C;
    case 231u: goto L_08921288;
    case 232u: goto L_08921290;
    case 233u: goto L_0892129C;
    case 234u: goto L_089212A4;
    case 235u: goto L_089212B0;
    case 236u: goto L_089212B8;
    case 237u: goto L_089212C4;
    case 238u: goto L_089212CC;
    case 239u: goto L_089212D8;
    case 240u: goto L_089212E0;
    case 241u: goto L_089212EC;
    case 242u: goto L_089212F4;
    case 243u: goto L_08921300;
    case 244u: goto L_0892130C;
    case 245u: goto L_08921314;
    case 246u: goto L_0892131C;
    case 247u: goto L_08921324;
    case 248u: goto L_08921330;
    case 249u: goto L_08921338;
    case 250u: goto L_08921354;
    case 251u: goto L_08921360;
    case 252u: goto L_08921368;
    case 253u: goto L_08921370;
    case 254u: goto L_08921378;
    case 255u: goto L_0892138C;
    case 256u: goto L_08921394;
    case 257u: goto L_089213A4;
    case 258u: goto L_089213AC;
    case 259u: goto L_089213B4;
    case 260u: goto L_089213BC;
    case 261u: goto L_089213C8;
    case 262u: goto L_089213D0;
    case 263u: goto L_08921404;
    case 264u: goto L_0892140C;
    case 265u: goto L_0892141C;
    case 266u: goto L_08921424;
    case 267u: goto L_0892142C;
    case 268u: goto L_0892143C;
    case 269u: goto L_0892145C;
    case 270u: goto L_08921464;
    case 271u: goto L_0892146C;
    case 272u: goto L_0892147C;
    case 273u: goto L_08921488;
    case 274u: goto L_08921490;
    case 275u: goto L_0892149C;
    case 276u: goto L_089214CC;
    case 277u: goto L_089214D4;
    case 278u: goto L_089214E4;
    case 279u: goto L_089214F0;
    case 280u: goto L_089214F8;
    case 281u: goto L_08921504;
    case 282u: goto L_08921534;
    case 283u: goto L_0892153C;
    case 284u: goto L_08921544;
    case 285u: goto L_08921554;
    case 286u: goto L_08921560;
    case 287u: goto L_08921568;
    case 288u: goto L_08921570;
    case 289u: goto L_08921578;
    case 290u: goto L_08921580;
    case 291u: goto L_08921588;
    case 292u: goto L_08921590;
    case 293u: goto L_08921598;
    case 294u: goto L_0892159C;
    case 295u: goto L_089215A4;
    case 296u: goto L_089215AC;
    case 297u: goto L_089215C4;
    case 298u: goto L_089215D4;
    case 299u: goto L_089215DC;
    case 300u: goto L_089215EC;
    case 301u: goto L_089215F4;
    case 302u: goto L_08921600;
    case 303u: goto L_08921618;
    case 304u: goto L_08921624;
    case 305u: goto L_0892162C;
    case 306u: goto L_08921634;
    case 307u: goto L_0892163C;
    case 308u: goto L_08921644;
    case 309u: goto L_0892164C;
    case 310u: goto L_08921658;
    case 311u: goto L_08921664;
    case 312u: goto L_0892166C;
    case 313u: goto L_08921674;
    case 314u: goto L_08921680;
    case 315u: goto L_0892168C;
    case 316u: goto L_08921694;
    case 317u: goto L_0892169C;
    case 318u: goto L_089216A8;
    case 319u: goto L_089216B4;
    case 320u: goto L_089216C4;
    case 321u: goto L_089216DC;
    case 322u: goto L_089216E8;
    case 323u: goto L_089216EC;
    case 324u: goto L_08921700;
    case 325u: goto L_08921708;
    case 326u: goto L_08921714;
    case 327u: goto L_0892171C;
    case 328u: goto L_08921728;
    case 329u: goto L_08921730;
    case 330u: goto L_08921738;
    case 331u: goto L_08921744;
    case 332u: goto L_0892174C;
    case 333u: goto L_08921758;
    case 334u: goto L_08921760;
    case 335u: goto L_08921768;
    case 336u: goto L_08921784;
    case 337u: goto L_08921794;
    case 338u: goto L_0892179C;
    case 339u: goto L_089217AC;
    case 340u: goto L_089217B8;
    case 341u: goto L_089217D0;
    case 342u: goto L_089217DC;
    case 343u: goto L_089217E4;
    case 344u: goto L_089217EC;
    case 345u: goto L_089217F4;
    case 346u: goto L_089217FC;
    case 347u: goto L_08921804;
    case 348u: goto L_08921810;
    case 349u: goto L_0892181C;
    case 350u: goto L_08921824;
    case 351u: goto L_0892182C;
    case 352u: goto L_08921838;
    case 353u: goto L_08921844;
    case 354u: goto L_0892184C;
    case 355u: goto L_08921854;
    case 356u: goto L_08921860;
    case 357u: goto L_0892186C;
    case 358u: goto L_08921878;
    case 359u: goto L_08921880;
    case 360u: goto L_08921888;
    case 361u: goto L_08921890;
    case 362u: goto L_08921898;
    case 363u: goto L_089218A4;
    case 364u: goto L_089218AC;
    case 365u: goto L_089218B4;
    case 366u: goto L_089218BC;
    case 367u: goto L_089218D8;
    case 368u: goto L_089218E0;
    case 369u: goto L_089218E8;
    case 370u: goto L_089218F0;
    case 371u: goto L_0892190C;
    case 372u: goto L_08921914;
    case 373u: goto L_0892191C;
    case 374u: goto L_08921928;
    case 375u: goto L_08921930;
    case 376u: goto L_08921938;
    case 377u: goto L_08921940;
    case 378u: goto L_08921948;
    case 379u: goto L_08921954;
    case 380u: goto L_08921960;
    case 381u: goto L_08921974;
    case 382u: goto L_08921990;
    case 383u: goto L_0892199C;
    case 384u: goto L_089219AC;
    case 385u: goto L_089219CC;
    case 386u: goto L_089219DC;
    case 387u: goto L_089219E4;
    case 388u: goto L_089219EC;
    case 389u: goto L_089219F8;
    case 390u: goto L_08921A08;
    case 391u: goto L_08921A10;
    case 392u: goto L_08921A18;
    case 393u: goto L_08921A20;
    case 394u: goto L_08921A2C;
    case 395u: goto L_08921A34;
    case 396u: goto L_08921A40;
    case 397u: goto L_08921A48;
    case 398u: goto L_08921A50;
    case 399u: goto L_08921A58;
    case 400u: goto L_08921A70;
    case 401u: goto L_08921A80;
    case 402u: goto L_08921A90;
    case 403u: goto L_08921A98;
    case 404u: goto L_08921AA0;
    case 405u: goto L_08921AA8;
    case 406u: goto L_08921AC4;
    case 407u: goto L_08921ACC;
    case 408u: goto L_08921AD8;
    case 409u: goto L_08921AF0;
    case 410u: goto L_08921AFC;
    case 411u: goto L_08921B04;
    case 412u: goto L_08921B1C;
    case 413u: goto L_08921B28;
    case 414u: goto L_08921B34;
    case 415u: goto L_08921B3C;
    case 416u: goto L_08921B44;
    case 417u: goto L_08921B50;
    case 418u: goto L_08921B58;
    case 419u: goto L_08921B64;
    case 420u: goto L_08921B70;
    case 421u: goto L_08921B88;
    case 422u: goto L_08921B90;
    case 423u: goto L_08921B9C;
    case 424u: goto L_08921BA8;
    case 425u: goto L_08921BB0;
    case 426u: goto L_08921BB8;
    case 427u: goto L_08921BC4;
    case 428u: goto L_08921BCC;
    case 429u: goto L_08921BD4;
    case 430u: goto L_08921BDC;
    case 431u: goto L_08921BE8;
    case 432u: goto L_08921C00;
    case 433u: goto L_08921C08;
    case 434u: goto L_08921C10;
    case 435u: goto L_08921C18;
    case 436u: goto L_08921C24;
    case 437u: goto L_08921C2C;
    case 438u: goto L_08921C38;
    case 439u: goto L_08921C3C;
    case 440u: goto L_08921C58;
    case 441u: goto L_08921C68;
    case 442u: goto L_08921C74;
    case 443u: goto L_08921C84;
    case 444u: goto L_08921C88;
    case 445u: goto L_08921C90;
    case 446u: goto L_08921C98;
    case 447u: goto L_08921CB4;
    case 448u: goto L_08921CBC;
    case 449u: goto L_08921CC4;
    case 450u: goto L_08921CDC;
    case 451u: goto L_08921CE4;
    case 452u: goto L_08921CF4;
    case 453u: goto L_08921D00;
    case 454u: goto L_08921D0C;
    case 455u: goto L_08921D1C;
    case 456u: goto L_08921D28;
    case 457u: goto L_08921D3C;
    case 458u: goto L_08921D48;
    case 459u: goto L_08921D50;
    case 460u: goto L_08921D58;
    case 461u: goto L_08921D60;
    case 462u: goto L_08921D68;
    case 463u: goto L_08921D78;
    case 464u: goto L_08921D90;
    case 465u: goto L_08921DA0;
    case 466u: goto L_08921DA8;
    case 467u: goto L_08921DC0;
    case 468u: goto L_08921DC8;
    case 469u: goto L_08921DD4;
    case 470u: goto L_08921DEC;
    case 471u: goto L_08921DF4;
    case 472u: goto L_08921E04;
    case 473u: goto L_08921E0C;
    case 474u: goto L_08921E28;
    case 475u: goto L_08921E40;
    case 476u: goto L_08921E4C;
    case 477u: goto L_08921E5C;
    case 478u: goto L_08921E80;
    case 479u: goto L_08921E90;
    case 480u: goto L_08921EA0;
    case 481u: goto L_08921ECC;
    case 482u: goto L_08921ED8;
    case 483u: goto L_08921EE4;
    case 484u: goto L_08921EEC;
    case 485u: goto L_08921EF8;
    case 486u: goto L_08921F0C;
    case 487u: goto L_08921F18;
    case 488u: goto L_08921F28;
    case 489u: goto L_08921F38;
    case 490u: goto L_08921F40;
    case 491u: goto L_08921F60;
    case 492u: goto L_08921F68;
    case 493u: goto L_08921F90;
    case 494u: goto L_08921FCC;
    case 495u: goto L_08921FD4;
    case 496u: goto L_08921FDC;
    case 497u: goto L_08921FF4;
    case 498u: goto L_08922030;
    case 499u: goto L_08922038;
    case 500u: goto L_08922048;
    case 501u: goto L_08922054;
    case 502u: goto L_0892205C;
    case 503u: goto L_08922064;
    case 504u: goto L_0892206C;
    case 505u: goto L_08922074;
    case 506u: goto L_08922080;
    case 507u: goto L_08922088;
    case 508u: goto L_08922094;
    case 509u: goto L_089220A0;
    case 510u: goto L_089220B4;
    case 511u: goto L_089220BC;
    case 512u: goto L_089220C8;
    case 513u: goto L_089220DC;
    case 514u: goto L_089220EC;
    case 515u: goto L_0892210C;
    case 516u: goto L_08922124;
    case 517u: goto L_0892212C;
    case 518u: goto L_08922134;
    case 519u: goto L_0892213C;
    case 520u: goto L_0892214C;
    case 521u: goto L_08922154;
    case 522u: goto L_08922164;
    case 523u: goto L_0892218C;
    case 524u: goto L_08922198;
    case 525u: goto L_089221C0;
    case 526u: goto L_089221D0;
    case 527u: goto L_089221DC;
    case 528u: goto L_089221F0;
    case 529u: goto L_08922200;
    case 530u: goto L_0892220C;
    case 531u: goto L_08922238;
    case 532u: goto L_0892225C;
    case 533u: goto L_08922270;
    case 534u: goto L_08922278;
    case 535u: goto L_08922288;
    case 536u: goto L_08922294;
    case 537u: goto L_089222B8;
    case 538u: goto L_089222C4;
    case 539u: goto L_089222D8;
    case 540u: goto L_089222E0;
    case 541u: goto L_089222EC;
    case 542u: goto L_089222F4;
    case 543u: goto L_089222FC;
    case 544u: goto L_08922304;
    case 545u: goto L_08922314;
    case 546u: goto L_08922334;
    case 547u: goto L_08922344;
    case 548u: goto L_08922350;
    case 549u: goto L_08922374;
    case 550u: goto L_08922384;
    case 551u: goto L_08922390;
    case 552u: goto L_089223A4;
    case 553u: goto L_089223AC;
    case 554u: goto L_089223B4;
    case 555u: goto L_089223C4;
    case 556u: goto L_089223D0;
    case 557u: goto L_089223F4;
    case 558u: goto L_08922404;
    case 559u: goto L_08922410;
    case 560u: goto L_08922424;
    case 561u: goto L_0892242C;
    case 562u: goto L_08922450;
    case 563u: goto L_0892245C;
    case 564u: goto L_08922464;
    case 565u: goto L_08922470;
    case 566u: goto L_08922478;
    case 567u: goto L_08922488;
    case 568u: goto L_089224A4;
    case 569u: goto L_089224B4;
    case 570u: goto L_089224BC;
    case 571u: goto L_089224E8;
    case 572u: goto L_0892250C;
    case 573u: goto L_0892251C;
    case 574u: goto L_08922528;
    case 575u: goto L_08922538;
    case 576u: goto L_08922544;
    case 577u: goto L_08922558;
    case 578u: goto L_08922564;
    case 579u: goto L_08922574;
    case 580u: goto L_0892257C;
    case 581u: goto L_08922584;
    case 582u: goto L_0892258C;
    case 583u: goto L_08922598;
    case 584u: goto L_089225A0;
    case 585u: goto L_089225B8;
    case 586u: goto L_089225C8;
    case 587u: goto L_089225D0;
    case 588u: goto L_089225E8;
    case 589u: goto L_089225F0;
    case 590u: goto L_089225F8;
    case 591u: goto L_08922610;
    case 592u: goto L_08922620;
    case 593u: goto L_08922628;
    case 594u: goto L_08922640;
    case 595u: goto L_08922648;
    case 596u: goto L_08922658;
    case 597u: goto L_08922660;
    case 598u: goto L_08922670;
    case 599u: goto L_08922678;
    case 600u: goto L_08922688;
    case 601u: goto L_089226A0;
    case 602u: goto L_089226A8;
    case 603u: goto L_089226B8;
    case 604u: goto L_089226C0;
    case 605u: goto L_089226D0;
    case 606u: goto L_089226D8;
    case 607u: goto L_089226E0;
    case 608u: goto L_089226EC;
    case 609u: goto L_089226F8;
    case 610u: goto L_08922714;
    case 611u: goto L_08922724;
    case 612u: goto L_0892272C;
    case 613u: goto L_08922734;
    case 614u: goto L_08922744;
    case 615u: goto L_08922754;
    case 616u: goto L_0892275C;
    case 617u: goto L_08922764;
    case 618u: goto L_0892276C;
    case 619u: goto L_08922780;
    case 620u: goto L_0892278C;
    case 621u: goto L_0892279C;
    case 622u: goto L_089227A4;
    case 623u: goto L_089227B4;
    case 624u: goto L_089227BC;
    case 625u: goto L_089227CC;
    case 626u: goto L_089227D8;
    case 627u: goto L_089227E8;
    case 628u: goto L_089227F0;
    case 629u: goto L_08922800;
    case 630u: goto L_08922808;
    case 631u: goto L_08922818;
    case 632u: goto L_08922820;
    case 633u: goto L_08922828;
    case 634u: goto L_08922830;
    case 635u: goto L_08922838;
    case 636u: goto L_08922840;
    case 637u: goto L_08922850;
    case 638u: goto L_08922860;
    case 639u: goto L_0892286C;
    case 640u: goto L_0892287C;
    case 641u: goto L_08922888;
    case 642u: goto L_0892289C;
    case 643u: goto L_089228A8;
    case 644u: goto L_089228B0;
    case 645u: goto L_089228BC;
    case 646u: goto L_089228CC;
    case 647u: goto L_089228D8;
    case 648u: goto L_089228F0;
    case 649u: goto L_089228FC;
    case 650u: goto L_0892290C;
    case 651u: goto L_0892291C;
    case 652u: goto L_08922944;
    case 653u: goto L_0892294C;
    case 654u: goto L_08922960;
    case 655u: goto L_0892296C;
    case 656u: goto L_0892298C;
    case 657u: goto L_08922990;
    case 658u: goto L_0892299C;
    case 659u: goto L_089229AC;
    case 660u: goto L_089229B8;
    case 661u: goto L_089229C8;
    case 662u: goto L_089229D8;
    case 663u: goto L_08922A00;
    case 664u: goto L_08922A08;
    case 665u: goto L_08922A1C;
    case 666u: goto L_08922A28;
    case 667u: goto L_08922A48;
    case 668u: goto L_08922A70;
    case 669u: goto L_08922A94;
    case 670u: goto L_08922AA0;
    case 671u: goto L_08922AE4;
    case 672u: goto L_08922AEC;
    case 673u: goto L_08922B00;
    case 674u: goto L_08922B08;
    case 675u: goto L_08922B30;
    case 676u: goto L_08922B38;
    case 677u: goto L_08922B58;
    case 678u: goto L_08922B6C;
    case 679u: goto L_08922B80;
    case 680u: goto L_08922B88;
    case 681u: goto L_08922B94;
    case 682u: goto L_08922B9C;
    case 683u: goto L_08922BA4;
    case 684u: goto L_08922BAC;
    case 685u: goto L_08922BB4;
    case 686u: goto L_08922BBC;
    case 687u: goto L_08922BC4;
    case 688u: goto L_08922BCC;
    case 689u: goto L_08922BD4;
    case 690u: goto L_08922BDC;
    case 691u: goto L_08922BE4;
    case 692u: goto L_08922BF4;
    case 693u: goto L_08922BFC;
    case 694u: goto L_08922C0C;
    case 695u: goto L_08922C20;
    case 696u: goto L_08922C28;
    case 697u: goto L_08922C3C;
    case 698u: goto L_08922C54;
    case 699u: goto L_08922C60;
    case 700u: goto L_08922C68;
    case 701u: goto L_08922C7C;
    case 702u: goto L_08922C88;
    case 703u: goto L_08922C90;
    case 704u: goto L_08922C9C;
    case 705u: goto L_08922CA4;
    case 706u: goto L_08922CB8;
    case 707u: goto L_08922CC0;
    case 708u: goto L_08922CD0;
    case 709u: goto L_08922CDC;
    case 710u: goto L_08922CF0;
    case 711u: goto L_08922CFC;
    case 712u: goto L_08922D04;
    case 713u: goto L_08922D0C;
    case 714u: goto L_08922D14;
    case 715u: goto L_08922D1C;
    case 716u: goto L_08922D24;
    case 717u: goto L_08922D34;
    case 718u: goto L_08922D3C;
    case 719u: goto L_08922D4C;
    case 720u: goto L_08922D60;
    case 721u: goto L_08922D68;
    case 722u: goto L_08922D7C;
    case 723u: goto L_08922D94;
    case 724u: goto L_08922DA0;
    case 725u: goto L_08922DA8;
    case 726u: goto L_08922DBC;
    case 727u: goto L_08922DC8;
    case 728u: goto L_08922DD0;
    case 729u: goto L_08922DDC;
    case 730u: goto L_08922DE4;
    case 731u: goto L_08922DF8;
    case 732u: goto L_08922E08;
    case 733u: goto L_08922E14;
    case 734u: goto L_08922E24;
    case 735u: goto L_08922E28;
    case 736u: goto L_08922E30;
    case 737u: goto L_08922E40;
    case 738u: goto L_08922E4C;
    case 739u: goto L_08922E54;
    case 740u: goto L_08922E5C;
    case 741u: goto L_08922E68;
    case 742u: goto L_08922E70;
    case 743u: goto L_08922E80;
    case 744u: goto L_08922E8C;
    case 745u: goto L_08922E9C;
    case 746u: goto L_08922EA0;
    case 747u: goto L_08922EA8;
    case 748u: goto L_08922EB8;
    case 749u: goto L_08922EC4;
    case 750u: goto L_08922ECC;
    case 751u: goto L_08922EDC;
    case 752u: goto L_08922EE8;
    case 753u: goto L_08922EF0;
    case 754u: goto L_08922EF8;
    case 755u: goto L_08922F08;
    case 756u: goto L_08922F14;
    case 757u: goto L_08922F24;
    case 758u: goto L_08922F34;
    case 759u: goto L_08922F5C;
    case 760u: goto L_08922F64;
    case 761u: goto L_08922F78;
    case 762u: goto L_08922F84;
    case 763u: goto L_08922FA4;
    case 764u: goto L_08922FD0;
    case 765u: goto L_08922FDC;
    case 766u: goto L_08922FEC;
    case 767u: goto L_08923024;
    case 768u: goto L_0892302C;
    case 769u: goto L_08923034;
    case 770u: goto L_0892303C;
    case 771u: goto L_08923044;
    case 772u: goto L_08923050;
    case 773u: goto L_08923060;
    case 774u: goto L_08923098;
    case 775u: goto L_089230A0;
    case 776u: goto L_089230A8;
    case 777u: goto L_089230B0;
    case 778u: goto L_089230BC;
    case 779u: goto L_089230C8;
    case 780u: goto L_089230EC;
    case 781u: goto L_08923100;
    case 782u: goto L_08923108;
    case 783u: goto L_0892312C;
    case 784u: goto L_08923134;
    case 785u: goto L_08923158;
    case 786u: goto L_08923160;
    case 787u: goto L_08923168;
    case 788u: goto L_0892318C;
    case 789u: goto L_089231A4;
    case 790u: goto L_089231A8;
    case 791u: goto L_089231B0;
    case 792u: goto L_089231C4;
    case 793u: goto L_089231D0;
    case 794u: goto L_089231D8;
    case 795u: goto L_089231E4;
    case 796u: goto L_089231F0;
    case 797u: goto L_089231F8;
    case 798u: goto L_08923200;
    case 799u: goto L_0892320C;
    case 800u: goto L_08923218;
    case 801u: goto L_0892321C;
    case 802u: goto L_08923238;
    case 803u: goto L_08923240;
    case 804u: goto L_0892324C;
    case 805u: goto L_0892325C;
    case 806u: goto L_08923278;
    case 807u: goto L_08923284;
    case 808u: goto L_089232AC;
    case 809u: goto L_089232B8;
    case 810u: goto L_089232C0;
    case 811u: goto L_089232DC;
    case 812u: goto L_089232EC;
    case 813u: goto L_089232F8;
    case 814u: goto L_08923310;
    case 815u: goto L_08923318;
    case 816u: goto L_08923324;
    case 817u: goto L_0892332C;
    case 818u: goto L_08923338;
    case 819u: goto L_08923340;
    case 820u: goto L_08923354;
    case 821u: goto L_0892335C;
    case 822u: goto L_0892336C;
    case 823u: goto L_08923380;
    case 824u: goto L_08923394;
    case 825u: goto L_089233A8;
    case 826u: goto L_089233C8;
    case 827u: goto L_089233D0;
    case 828u: goto L_089233D8;
    case 829u: goto L_089233E0;
    case 830u: goto L_089233EC;
    case 831u: goto L_089233F8;
    case 832u: goto L_08923400;
    case 833u: goto L_08923408;
    case 834u: goto L_08923414;
    case 835u: goto L_0892341C;
    case 836u: goto L_08923424;
    case 837u: goto L_08923430;
    case 838u: goto L_08923440;
    case 839u: goto L_08923450;
    case 840u: goto L_0892345C;
    case 841u: goto L_08923470;
    case 842u: goto L_08923478;
    case 843u: goto L_08923480;
    case 844u: goto L_08923488;
    case 845u: goto L_08923490;
    case 846u: goto L_0892349C;
    case 847u: goto L_089234B4;
    case 848u: goto L_089234C0;
    case 849u: goto L_089234C8;
    case 850u: goto L_089234E0;
    case 851u: goto L_089234EC;
    case 852u: goto L_089234F4;
    case 853u: goto L_08923504;
    case 854u: goto L_08923508;
    case 855u: goto L_08923510;
    case 856u: goto L_08923534;
    case 857u: goto L_08923544;
    case 858u: goto L_08923554;
    case 859u: goto L_0892355C;
    case 860u: goto L_08923568;
    case 861u: goto L_08923574;
    case 862u: goto L_08923584;
    case 863u: goto L_0892358C;
    case 864u: goto L_089235A0;
    case 865u: goto L_089235A8;
    case 866u: goto L_089235B0;
    case 867u: goto L_089235B8;
    case 868u: goto L_089235C4;
    case 869u: goto L_089235DC;
    case 870u: goto L_089235E4;
    case 871u: goto L_089235F4;
    case 872u: goto L_0892360C;
    case 873u: goto L_0892361C;
    case 874u: goto L_08923630;
    case 875u: goto L_08923638;
    case 876u: goto L_08923640;
    case 877u: goto L_08923648;
    case 878u: goto L_08923664;
    case 879u: goto L_08923670;
    case 880u: goto L_08923684;
    case 881u: goto L_08923690;
    case 882u: goto L_089236A0;
    case 883u: goto L_089236AC;
    case 884u: goto L_089236B8;
    case 885u: goto L_089236C0;
    case 886u: goto L_089236C8;
    case 887u: goto L_089236D0;
    case 888u: goto L_089236D8;
    case 889u: goto L_089236F0;
    case 890u: goto L_089236F8;
    case 891u: goto L_08923710;
    case 892u: goto L_08923718;
    case 893u: goto L_08923730;
    case 894u: goto L_08923738;
    case 895u: goto L_08923744;
    case 896u: goto L_0892374C;
    case 897u: goto L_08923754;
    case 898u: goto L_08923758;
    case 899u: goto L_0892376C;
    case 900u: goto L_08923784;
    case 901u: goto L_0892378C;
    case 902u: goto L_08923794;
    case 903u: goto L_089237A4;
    case 904u: goto L_089237B0;
    case 905u: goto L_089237B4;
    case 906u: goto L_089237C0;
    case 907u: goto L_089237C8;
    case 908u: goto L_089237D8;
    case 909u: goto L_089237E8;
    case 910u: goto L_089237EC;
    case 911u: goto L_089237FC;
    case 912u: goto L_08923804;
    case 913u: goto L_08923810;
    case 914u: goto L_0892381C;
    case 915u: goto L_08923828;
    case 916u: goto L_08923834;
    case 917u: goto L_0892383C;
    case 918u: goto L_08923858;
    case 919u: goto L_08923878;
    case 920u: goto L_08923884;
    case 921u: goto L_0892389C;
    case 922u: goto L_089238A8;
    case 923u: goto L_089238B0;
    case 924u: goto L_089238B8;
    case 925u: goto L_089238C0;
    case 926u: goto L_089238D0;
    case 927u: goto L_089238E4;
    case 928u: goto L_089238EC;
    case 929u: goto L_089238F4;
    case 930u: goto L_08923900;
    case 931u: goto L_08923908;
    case 932u: goto L_08923910;
    case 933u: goto L_08923924;
    case 934u: goto L_0892392C;
    case 935u: goto L_08923934;
    case 936u: goto L_0892393C;
    case 937u: goto L_08923944;
    case 938u: goto L_0892394C;
    case 939u: goto L_08923954;
    case 940u: goto L_0892395C;
    case 941u: goto L_08923964;
    case 942u: goto L_0892396C;
    case 943u: goto L_0892397C;
    case 944u: goto L_08923984;
    case 945u: goto L_0892398C;
    case 946u: goto L_08923994;
    case 947u: goto L_0892399C;
    case 948u: goto L_089239A4;
    case 949u: goto L_089239AC;
    case 950u: goto L_089239C4;
    case 951u: goto L_089239CC;
    case 952u: goto L_089239D4;
    case 953u: goto L_089239DC;
    case 954u: goto L_089239E4;
    case 955u: goto L_089239EC;
    case 956u: goto L_089239F4;
    case 957u: goto L_089239FC;
    case 958u: goto L_08923A04;
    case 959u: goto L_08923A0C;
    case 960u: goto L_08923A14;
    case 961u: goto L_08923A28;
    case 962u: goto L_08923A30;
    case 963u: goto L_08923A38;
    case 964u: goto L_08923A40;
    case 965u: goto L_08923A54;
    case 966u: goto L_08923A5C;
    case 967u: goto L_08923A6C;
    case 968u: goto L_08923A74;
    case 969u: goto L_08923A7C;
    case 970u: goto L_08923A84;
    case 971u: goto L_08923A98;
    case 972u: goto L_08923AA0;
    case 973u: goto L_08923AA8;
    case 974u: goto L_08923AB0;
    case 975u: goto L_08923ABC;
    case 976u: goto L_08923AC4;
    case 977u: goto L_08923ACC;
    case 978u: goto L_08923AD8;
    case 979u: goto L_08923ADC;
    case 980u: goto L_08923AE4;
    case 981u: goto L_08923AF0;
    case 982u: goto L_08923B00;
    case 983u: goto L_08923B0C;
    case 984u: goto L_08923B18;
    case 985u: goto L_08923B28;
    case 986u: goto L_08923B2C;
    case 987u: goto L_08923B38;
    case 988u: goto L_08923B48;
    case 989u: goto L_08923B50;
    case 990u: goto L_08923B58;
    case 991u: goto L_08923B60;
    case 992u: goto L_08923B68;
    case 993u: goto L_08923B78;
    case 994u: goto L_08923B80;
    case 995u: goto L_08923B90;
    case 996u: goto L_08923B98;
    case 997u: goto L_08923BA8;
    case 998u: goto L_08923BB0;
    case 999u: goto L_08923BB8;
    case 1000u: goto L_08923BC0;
    case 1001u: goto L_08923BD0;
    case 1002u: goto L_08923BD8;
    case 1003u: goto L_08923BE8;
    case 1004u: goto L_08923BF0;
    case 1005u: goto L_08923C04;
    case 1006u: goto L_08923C0C;
    case 1007u: goto L_08923C1C;
    case 1008u: goto L_08923C24;
    case 1009u: goto L_08923C34;
    case 1010u: goto L_08923C3C;
    case 1011u: goto L_08923C54;
    case 1012u: goto L_08923C5C;
    case 1013u: goto L_08923C68;
    case 1014u: goto L_08923C7C;
    case 1015u: goto L_08923C84;
    case 1016u: goto L_08923C8C;
    case 1017u: goto L_08923C94;
    case 1018u: goto L_08923C9C;
    case 1019u: goto L_08923CA4;
    case 1020u: goto L_08923CB8;
    case 1021u: goto L_08923CD0;
    case 1022u: goto L_08923CE4;
    case 1023u: goto L_08923CF4;
    case 1024u: goto L_08923CFC;
    case 1025u: goto L_08923D10;
    case 1026u: goto L_08923D20;
    case 1027u: goto L_08923D28;
    case 1028u: goto L_08923D38;
    case 1029u: goto L_08923D40;
    case 1030u: goto L_08923D54;
    case 1031u: goto L_08923D60;
    case 1032u: goto L_08923D68;
    case 1033u: goto L_08923D70;
    case 1034u: goto L_08923D78;
    case 1035u: goto L_08923D80;
    case 1036u: goto L_08923D88;
    case 1037u: goto L_08923D90;
    case 1038u: goto L_08923D98;
    case 1039u: goto L_08923DA0;
    case 1040u: goto L_08923DA8;
    case 1041u: goto L_08923DB0;
    case 1042u: goto L_08923DB8;
    case 1043u: goto L_08923DC0;
    case 1044u: goto L_08923DC8;
    case 1045u: goto L_08923DD4;
    case 1046u: goto L_08923DDC;
    case 1047u: goto L_08923DE8;
    case 1048u: goto L_08923DF0;
    case 1049u: goto L_08923DFC;
    case 1050u: goto L_08923E08;
    case 1051u: goto L_08923E20;
    case 1052u: goto L_08923E28;
    case 1053u: goto L_08923E30;
    case 1054u: goto L_08923E38;
    case 1055u: goto L_08923E40;
    case 1056u: goto L_08923E48;
    case 1057u: goto L_08923E50;
    case 1058u: goto L_08923E58;
    case 1059u: goto L_08923E60;
    case 1060u: goto L_08923E68;
    case 1061u: goto L_08923E70;
    case 1062u: goto L_08923E78;
    case 1063u: goto L_08923E80;
    case 1064u: goto L_08923E88;
    case 1065u: goto L_08923E90;
    case 1066u: goto L_08923E98;
    case 1067u: goto L_08923EA0;
    case 1068u: goto L_08923EAC;
    case 1069u: goto L_08923EB4;
    case 1070u: goto L_08923EC0;
    case 1071u: goto L_08923EC8;
    case 1072u: goto L_08923ED0;
    case 1073u: goto L_08923EDC;
    case 1074u: goto L_08923EF0;
    case 1075u: goto L_08923EF8;
    case 1076u: goto L_08923F08;
    case 1077u: goto L_08923F10;
    case 1078u: goto L_08923F18;
    case 1079u: goto L_08923F20;
    case 1080u: goto L_08923F28;
    case 1081u: goto L_08923F30;
    case 1082u: goto L_08923F38;
    case 1083u: goto L_08923F40;
    case 1084u: goto L_08923F48;
    case 1085u: goto L_08923F50;
    case 1086u: goto L_08923F60;
    case 1087u: goto L_08923F6C;
    case 1088u: goto L_08923F74;
    case 1089u: goto L_08923F80;
    case 1090u: goto L_08923FA4;
    case 1091u: goto L_08923FAC;
    case 1092u: goto L_08923FB4;
    case 1093u: goto L_08923FCC;
    case 1094u: goto L_08923FD4;
    case 1095u: goto L_08923FE4;
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
L_08920000:
    goto L_08920004;
L_08920004:
    aot_gpr_4 = (16192u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08920040;
      }
      goto L_08920014;
    }
L_08920014:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(-2000));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_20)));
      if (branch_taken) {
          goto L_08920030;
      }
      goto L_08920024;
    }
L_08920024:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    goto L_08920030;
L_08920030:
    aot_gpr_4 = (14621u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 18770u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08920040;
L_08920040:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1914)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08920344;
      }
      goto L_08920054;
    }
L_08920054:
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1784)));
    aot_gpr_5 = (0u | 57u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920074;
    }
L_08920074:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1784)));
    aot_gpr_5 = (0u | 58u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920090;
    }
L_08920090:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1784)));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_089200D8;
    }
L_089200D8:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1784)));
    aot_gpr_5 = (0u | 200u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(1768), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1784)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-12289));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(472)));
    aot_gpr_6 = (ctx.gpr[7] & aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 | 4096u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(472), aot_gpr_6);
    aot_gpr_31 = (0x08920108u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1784)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920108u) goto L_08920108;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920108:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920110;
    }
L_08920110:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1784)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920128;
    }
L_08920128:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1784)));
    aot_gpr_5 = (0u | 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920144;
    }
L_08920144:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1784)));
    aot_gpr_5 = (0u | 17u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920160;
    }
L_08920160:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_5 = (0u | 7u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920194;
    }
L_08920194:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_5 = (0u | 46u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_089201C8;
    }
L_089201C8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_5 = (0u | 47u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_089201FC;
    }
L_089201FC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920230;
    }
L_08920230:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_5 = (0u | 34u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920264;
    }
L_08920264:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920298;
    }
L_08920298:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_5 = (0u | 45u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_089202CC;
    }
L_089202CC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(112));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_31 = (0x089202F8u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0101_entry, 101u, 119u, 0x089990E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089202F8u) goto L_089202F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089202F8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920300;
    }
L_08920300:
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    ctx.gpr[19] = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1784)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08920320u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920320u) goto L_08920320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920320:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1784)));
    aot_gpr_31 = (0x0892032Cu);
    aot_gpr_5 = (0u | 500u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892032Cu) goto L_0892032C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892032C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1914)));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08920054;
      }
      goto L_08920344;
    }
L_08920344:
    aot_gpr_4 = (ctx.gpr[17] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08920498;
      }
      goto L_08920350;
    }
L_08920350:
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2000));
    aot_gpr_4 = (ctx.gpr[17] < static_cast<std::uint32_t>(5000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08920428;
      }
      goto L_08920370;
    }
L_08920370:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(17));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5028)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08920394;
      }
      goto L_08920388;
    }
L_08920388:
    ctx.gpr[7] = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08920394;
L_08920394:
    ctx.gpr[7] = (14621u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[7] | 18770u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_089203BC;
      }
      goto L_089203B0;
    }
L_089203B0:
    ctx.gpr[7] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[14];
    goto L_089203BC;
L_089203BC:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (47389u << 16u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 | 18770u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (16256u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[9] = (16928u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08920420u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 490u, 0x08A97518u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920420u) goto L_08920420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920420:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08920498;
      }
      goto L_08920428;
    }
L_08920428:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1780))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08920498;
      }
      goto L_08920438;
    }
L_08920438:
    ctx.gpr[10] = (16192u << 16u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.gpr[10] = (ctx.gpr[10] | 1u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[10]);
    aot_gpr_2 = (16512u << 16u);
    ctx.gpr[10] = (48960u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_2);
    ctx.gpr[10] = (ctx.gpr[10] | 1u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    aot_gpr_2 = (16256u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5028)));
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_2);
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[11] = (0u | 40000u);
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x0892048Cu);
    ctx.gpr[10] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892048Cu) goto L_0892048C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892048C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1780))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1780), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08920498;
L_08920498:
    aot_gpr_31 = (0x089204A0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 12u, 0x08860400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089204A0u) goto L_089204A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089204A0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089204B0;
      }
      goto L_089204A8;
    }
L_089204A8:
    aot_gpr_31 = (0x089204B0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 68u, 0x08860704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089204B0u) goto L_089204B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089204B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08920510;
      }
      goto L_089204C8;
    }
L_089204C8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 1u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_31 = (0x08920508u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 540u, 0x08A666DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920508u) goto L_08920508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920508:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089206CC;
      }
      goto L_08920510;
    }
L_08920510:
    aot_gpr_31 = (0x08920518u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 727u, 0x08A67B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920518u) goto L_08920518;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920518:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089206CC;
      }
      goto L_08920520;
    }
L_08920520:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089206CC;
      }
      goto L_0892052C;
    }
L_0892052C:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr_31 = (0x08920538u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920538u) goto L_08920538;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920538:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-16385));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 14u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_6 = (aot_gpr_4 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 << 12u);
    aot_gpr_4 = (aot_gpr_6 | aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (65535u << 16u);
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(32767));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 15u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (65534u << 16u);
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 17u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 << 1u);
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[7] & 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_6 << 9u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(328)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13)};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08920610u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920610u) goto L_08920610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920610:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(192));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08920628u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920628u) goto L_08920628;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920628:
    aot_gpr_31 = (0x08920630u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 727u, 0x08A67B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920630u) goto L_08920630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920630:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08920648;
      }
      goto L_08920638;
    }
L_08920638:
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr_31 = (0x08920644u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920644u) goto L_08920644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920644:
    aot_gpr_4 = (0u | 1u);
    goto L_08920648;
L_08920648:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (65535u << 16u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(32767));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 15u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-16385));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 14u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 9u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_31 = (0x089206A8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 540u, 0x08A666DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089206A8u) goto L_089206A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089206A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089206CC;
      }
      goto L_089206B8;
    }
L_089206B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089206CC;
      }
      goto L_089206C4;
    }
L_089206C4:
    aot_gpr_31 = (0x089206CCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089206CCu) goto L_089206CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089206CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 144u, 0x089246E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_089206D4;
    }
L_089206D4:
    aot_gpr_31 = (0x089206DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 756u, 0x089130B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089206DCu) goto L_089206DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089206DC:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 1u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0892073C;
      }
      goto L_08920708;
    }
L_08920708:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7893)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0892073C;
      }
      goto L_08920714;
    }
L_08920714:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0892073C;
      }
      goto L_08920720;
    }
L_08920720:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1300)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 32768u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08920754;
      }
      goto L_0892073C;
    }
L_0892073C:
    aot_gpr_31 = (0x08920744u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920744u) goto L_08920744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920744:
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2236)));
        goto L_0892077C;
    }
    goto L_0892074C;
L_0892074C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089207F8;
      }
      goto L_08920754;
    }
L_08920754:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (65534u << 16u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 17u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 144u, 0x089246E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0892077C;
    }
L_0892077C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (15395u << 16u);
      if (branch_taken) {
          goto L_089207F8;
      }
      goto L_08920784;
    }
L_08920784:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(264)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[14] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089207F8;
      }
      goto L_089207A8;
    }
L_089207A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2248)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089207D8;
      }
      goto L_089207B8;
    }
L_089207B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2248)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089207D8;
      }
      goto L_089207C8;
    }
L_089207C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2248)));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089207F8;
      }
      goto L_089207D8;
    }
L_089207D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1938)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 50 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089207FC;
      }
      goto L_089207E8;
    }
L_089207E8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1938)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1938), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089207FC;
      }
      goto L_089207F8;
    }
L_089207F8:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1938), static_cast<std::uint8_t>(0u));
    goto L_089207FC;
L_089207FC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
        goto L_08920894;
    }
    goto L_08920818;
L_08920818:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 41 ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
        goto L_08920894;
    }
    goto L_08920828;
L_08920828:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
        goto L_08920894;
    }
    goto L_08920838;
L_08920838:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
        goto L_08920894;
    }
    goto L_08920848;
L_08920848:
    ctx.gpr[7] = (16512u << 16u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x08920864u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 653u, 0x0891F338u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920864u) goto L_08920864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920864:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
        goto L_08920894;
    }
    goto L_08920870;
L_08920870:
    aot_gpr_31 = (0x08920878u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920878u) goto L_08920878;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920878:
    if (aot_gpr_2 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
        goto L_08920894;
    }
    goto L_08920880;
L_08920880:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08920890u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 173u, 0x08ADC8D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920890u) goto L_08920890;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920890:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    goto L_08920894;
L_08920894:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[18] = (aot_gpr_4 & 32u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(468), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 512u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_5);
      if (branch_taken) {
          goto L_08923510;
      }
      goto L_089208C8;
    }
L_089208C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089208EC;
      }
      goto L_089208D4;
    }
L_089208D4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(268)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
        goto L_08920918;
    }
    goto L_089208EC;
L_089208EC:
    aot_gpr_31 = (0x089208F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089208F4u) goto L_089208F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089208F4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08923510;
      }
      goto L_089208FC;
    }
L_089208FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 16384u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08923510;
      }
      goto L_08920914;
    }
L_08920914:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    goto L_08920918;
L_08920918:
    aot_gpr_5 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08923510;
      }
      goto L_08920924;
    }
L_08920924:
    aot_gpr_31 = (0x0892092Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892092Cu) goto L_0892092C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892092C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1340)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0892093Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 858u, 0x08A0343Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892093Cu) goto L_0892093C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892093C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08923510;
      }
      goto L_08920944;
    }
L_08920944:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1938)));
    aot_gpr_5 = (0u | 50u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_08920984;
      }
      goto L_08920954;
    }
L_08920954:
    aot_gpr_31 = (0x0892095Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892095Cu) goto L_0892095C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892095C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08920984;
      }
      goto L_08920964;
    }
L_08920964:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 12u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0892097Cu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892097Cu) goto L_0892097C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892097C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_08920984;
    }
L_08920984:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_0892098C;
    }
L_0892098C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_089209A8;
    }
L_089209A8:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12480)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089209C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(352)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x089209D8u);
    ctx.gpr[21] = (aot_gpr_4 + aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089209D8u) goto L_089209D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089209D8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x089209E8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089209E8u) goto L_089209E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089209E8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089209F8;
      }
      goto L_089209F0;
    }
L_089209F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_089209F8;
    }
L_089209F8:
    ctx.gpr[20] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(320));
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
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[22] != aot_gpr_4;
      if (branch_taken) {
          goto L_08920A38;
      }
      goto L_08920A2C;
    }
L_08920A2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 | 32u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    goto L_08920A38;
L_08920A38:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 280u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08920B00;
      }
      goto L_08920A48;
    }
L_08920A48:
    aot_gpr_31 = (0x08920A50u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920A50u) goto L_08920A50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920A50:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (14545u << 16u);
      if (branch_taken) {
          goto L_08920B00;
      }
      goto L_08920A58;
    }
L_08920A58:
    aot_gpr_4 = (aot_gpr_4 | 46871u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08920B00;
      }
      goto L_08920A70;
    }
L_08920A70:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(320)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(324)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x08920A94u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920A94u) goto L_08920A94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920A94:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1000u);
    aot_gpr_31 = (0x08920AC8u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920AC8u) goto L_08920AC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920AC8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08920AD4u);
    aot_gpr_5 = (0u | 103u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920AD4u) goto L_08920AD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920AD4:
    ctx.gpr[10] = (17046u << 16u);
    ctx.gpr[8] = (ctx.gpr[18] & 255u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[10]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (0u | 42u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08920AF8u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920AF8u) goto L_08920AF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920AF8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
      if (branch_taken) {
          goto L_089216EC;
      }
      goto L_08920B00;
    }
L_08920B00:
    aot_gpr_4 = (15139u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55051u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08921218;
      }
      goto L_08920B1C;
    }
L_08920B1C:
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(268)));
    aot_gpr_31 = (0x08920B28u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920B28u) goto L_08920B28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920B28:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (15692u << 16u);
      if (branch_taken) {
          goto L_08920BB4;
      }
      goto L_08920B30;
    }
L_08920B30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (15692u << 16u);
      if (branch_taken) {
          goto L_08920BB4;
      }
      goto L_08920B40;
    }
L_08920B40:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(796)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(288));
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
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08920BB0;
      }
      goto L_08920B8C;
    }
L_08920B8C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(208)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_22 = aot_fpr_22 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_22)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08920BB0;
    }
    goto L_08920BB0;
L_08920BB0:
    aot_gpr_4 = (15692u << 16u);
    goto L_08920BB4;
L_08920BB4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08920BF0;
      }
      goto L_08920BD4;
    }
L_08920BD4:
    ctx.gpr[7] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08920BF0u);
    aot_gpr_6 = (0u | 167u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920BF0u) goto L_08920BF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920BF0:
    aot_gpr_31 = (0x08920BF8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920BF8u) goto L_08920BF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920BF8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089211DC;
      }
      goto L_08920C00;
    }
L_08920C00:
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08920C20;
      }
      goto L_08920C18;
    }
L_08920C18:
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    goto L_08920C20;
L_08920C20:
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08920C68;
      }
      goto L_08920C38;
    }
L_08920C38:
    aot_gpr_4 = (16720u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08920C64;
      }
      goto L_08920C50;
    }
L_08920C50:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08920C5Cu);
    aot_gpr_5 = (0u | 103u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920C5Cu) goto L_08920C5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920C5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08920C68;
      }
      goto L_08920C64;
    }
L_08920C64:
    ctx.gpr[20] = (0u | 1u);
    goto L_08920C68;
L_08920C68:
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_22) || std::isnan(aot_fpr_13)) && aot_fpr_22 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08920CA0;
      }
      goto L_08920C84;
    }
L_08920C84:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08920CA4;
    }
    goto L_08920C98;
L_08920C98:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_22 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08920CB0;
      }
      goto L_08920CA0;
    }
L_08920CA0:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08920CA4;
L_08920CA4:
    aot_gpr_31 = (0x08920CACu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920CACu) goto L_08920CAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920CAC:
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08920CB0;
L_08920CB0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 16u>();
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
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
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(48);
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
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[14])) && aot_fpr_12 == ctx.fpr[14])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
      if (branch_taken) {
          goto L_08920DB8;
      }
      goto L_08920D9C;
    }
L_08920D9C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(ctx.fpr[14])) && aot_fpr_13 == ctx.fpr[14])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08920DB8;
      }
      goto L_08920DB0;
    }
L_08920DB0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08920DC4;
      }
      goto L_08920DB8;
    }
L_08920DB8:
    aot_gpr_31 = (0x08920DC0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920DC0u) goto L_08920DC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920DC0:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08920DC4;
L_08920DC4:
    aot_gpr_31 = (0x08920DCCu);
    aot_fpr_12 = aot_fpr_22 - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920DCCu) goto L_08920DCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920DCC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[14])) && aot_fpr_12 == ctx.fpr[14])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = ctx.fpr[15] - aot_fpr_13;
      if (branch_taken) {
          goto L_08920E14;
      }
      goto L_08920DF8;
    }
L_08920DF8:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(ctx.fpr[14])) && aot_fpr_13 == ctx.fpr[14])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08920E14;
      }
      goto L_08920E0C;
    }
L_08920E0C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08920E20;
      }
      goto L_08920E14;
    }
L_08920E14:
    aot_gpr_31 = (0x08920E1Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920E1Cu) goto L_08920E1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920E1C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08920E20;
L_08920E20:
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
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
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
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22) & 0x7FFFFFFFu);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08920E98;
      }
      goto L_08920E70;
    }
L_08920E70:
    aot_gpr_31 = (0x08920E78u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 350u, 0x08905990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920E78u) goto L_08920E78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920E78:
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[24];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08920EAC;
      }
      goto L_08920E98;
    }
L_08920E98:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    aot_gpr_31 = (0x08920EA4u);
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 179u, 0x08904B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920EA4u) goto L_08920EA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920EA4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08921048;
      }
      goto L_08920EAC;
    }
L_08920EAC:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08920F80;
      }
      goto L_08920EC0;
    }
L_08920EC0:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_6 = (49024u << 16u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x08920EDCu);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 182u, 0x08904BD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920EDCu) goto L_08920EDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920EDC:
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(320));
    aot_gpr_31 = (0x08920EE8u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 179u, 0x08904B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920EE8u) goto L_08920EE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920EE8:
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55051u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08920F78;
      }
      goto L_08920F04;
    }
L_08920F04:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08920F78;
      }
      goto L_08920F20;
    }
L_08920F20:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
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
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_08920F78;
      }
      goto L_08920F4C;
    }
L_08920F4C:
    aot_gpr_31 = (0x08920F54u);
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 179u, 0x08904B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920F54u) goto L_08920F54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920F54:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08920F78;
      }
      goto L_08920F68;
    }
L_08920F68:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08920F78u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 480u, 0x0891E8B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920F78u) goto L_08920F78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920F78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08921048;
      }
      goto L_08920F80;
    }
L_08920F80:
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08920F8Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 356u, 0x08905A28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920F8Cu) goto L_08920F8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920F8C:
    ctx.gpr[23] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08920F98u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920F98u) goto L_08920F98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920F98:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08920FA4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 179u, 0x08904B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920FA4u) goto L_08920FA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920FA4:
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55051u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08921048;
      }
      goto L_08920FC0;
    }
L_08920FC0:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08921048;
      }
      goto L_08920FDC;
    }
L_08920FDC:
    aot_gpr_31 = (0x08920FE4u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 356u, 0x08905A28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920FE4u) goto L_08920FE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920FE4:
    ctx.gpr[23] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08920FF0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904CF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920FF0u) goto L_08920FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920FF0:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08920FFCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 179u, 0x08904B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08920FFCu) goto L_08920FFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08920FFC:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08921048;
      }
      goto L_08921010;
    }
L_08921010:
    aot_gpr_31 = (0x08921018u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921018u) goto L_08921018;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921018:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    aot_gpr_31 = (0x08921024u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 179u, 0x08904B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921024u) goto L_08921024;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921024:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08921048;
      }
      goto L_08921038;
    }
L_08921038:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08921048u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 480u, 0x0891E8B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921048u) goto L_08921048;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921048:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (15820u << 16u);
      if (branch_taken) {
          goto L_08921078;
      }
      goto L_08921054;
    }
L_08921054:
    aot_gpr_31 = (0x0892105Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 403u, 0x08905EDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892105Cu) goto L_0892105C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892105C:
    aot_gpr_4 = (16752u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08921090;
      }
      goto L_08921074;
    }
L_08921074:
    aot_gpr_4 = (15820u << 16u);
    goto L_08921078;
L_08921078:
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08921198;
      }
      goto L_08921090;
    }
L_08921090:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892109Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 336u, 0x08905804u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892109Cu) goto L_0892109C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892109C:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    aot_gpr_31 = (0x089210A8u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089210A8u) goto L_089210A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089210A8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x089210B8u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089210B8u) goto L_089210B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089210B8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x089210CCu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 185u, 0x08904C30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089210CCu) goto L_089210CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089210CC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089210D8u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089210D8u) goto L_089210D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089210D8:
    ctx.gpr[23] = (aot_gpr_2 | 0u);
    aot_gpr_6 = (ctx.gpr[23] + static_cast<std::uint32_t>(28));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1000u);
    aot_gpr_31 = (0x089210F0u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089210F0u) goto L_089210F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089210F0:
    aot_gpr_31 = (0x089210F8u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 388u, 0x08905CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089210F8u) goto L_089210F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089210F8:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-939));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08921110;
      }
      goto L_08921104;
    }
L_08921104:
    aot_gpr_4 = (16968u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0892112C;
      }
      goto L_08921110;
    }
L_08921110:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08921124;
      }
      goto L_08921118;
    }
L_08921118:
    aot_gpr_4 = (16672u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0892112C;
      }
      goto L_08921124;
    }
L_08921124:
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    goto L_0892112C;
L_0892112C:
    ctx.gpr[8] = (ctx.gpr[23] & 255u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (0u | 42u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08921148u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921148u) goto L_08921148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921148:
    aot_gpr_31 = (0x08921150u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921150u) goto L_08921150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921150:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08921184;
      }
      goto L_08921168;
    }
L_08921168:
    aot_gpr_31 = (0x08921170u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 388u, 0x08905CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921170u) goto L_08921170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921170:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-939));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08921184;
      }
      goto L_0892117C;
    }
L_0892117C:
    aot_gpr_31 = (0x08921184u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 706u, 0x0890F00Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921184u) goto L_08921184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921184:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08921190u);
    aot_gpr_5 = (0u | 103u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921190u) goto L_08921190;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921190:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089211D4;
      }
      goto L_08921198;
    }
L_08921198:
    aot_gpr_31 = (0x089211A0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089211A0u) goto L_089211A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089211A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089211D4;
      }
      goto L_089211B0;
    }
L_089211B0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x089211C8u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089211C8u) goto L_089211C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089211C8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089211D4u);
    aot_gpr_5 = (0u | 700u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089211D4u) goto L_089211D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089211D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089211F4;
      }
      goto L_089211DC;
    }
L_089211DC:
    aot_gpr_31 = (0x089211E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 403u, 0x08905EDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089211E4u) goto L_089211E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089211E4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x089211F4u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 665u, 0x088EE9E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089211F4u) goto L_089211F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089211F4:
    aot_gpr_31 = (0x089211FCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 320u, 0x08911218u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089211FCu) goto L_089211FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089211FC:
    { const bool branch_taken = aot_gpr_2 == ctx.gpr[22];
      if (branch_taken) {
          goto L_08921210;
      }
      goto L_08921204;
    }
L_08921204:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 | 32u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(468), aot_gpr_4);
    goto L_08921210;
L_08921210:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
      if (branch_taken) {
          goto L_089216EC;
      }
      goto L_08921218;
    }
L_08921218:
    aot_gpr_31 = (0x08921220u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921220u) goto L_08921220;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921220:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08921534;
      }
      goto L_08921228;
    }
L_08921228:
    aot_gpr_31 = (0x08921230u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921230u) goto L_08921230;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921230:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_08921238;
    }
L_08921238:
    aot_gpr_31 = (0x08921240u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921240u) goto L_08921240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921240:
    aot_gpr_4 = (0u | 24u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_0892124C;
    }
L_0892124C:
    aot_gpr_31 = (0x08921254u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921254u) goto L_08921254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921254:
    aot_gpr_4 = (0u | 39u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_08921260;
    }
L_08921260:
    aot_gpr_31 = (0x08921268u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921268u) goto L_08921268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921268:
    aot_gpr_4 = (0u | 40u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_08921274;
    }
L_08921274:
    aot_gpr_31 = (0x0892127Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892127Cu) goto L_0892127C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892127C:
    aot_gpr_4 = (0u | 43u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_08921288;
    }
L_08921288:
    aot_gpr_31 = (0x08921290u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921290u) goto L_08921290;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921290:
    aot_gpr_4 = (0u | 44u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_0892129C;
    }
L_0892129C:
    aot_gpr_31 = (0x089212A4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089212A4u) goto L_089212A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089212A4:
    aot_gpr_4 = (0u | 45u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_089212B0;
    }
L_089212B0:
    aot_gpr_31 = (0x089212B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089212B8u) goto L_089212B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089212B8:
    aot_gpr_4 = (0u | 53u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_089212C4;
    }
L_089212C4:
    aot_gpr_31 = (0x089212CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089212CCu) goto L_089212CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089212CC:
    aot_gpr_4 = (0u | 18u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_089212D8;
    }
L_089212D8:
    aot_gpr_31 = (0x089212E0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089212E0u) goto L_089212E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089212E0:
    aot_gpr_4 = (0u | 49u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_089212EC;
    }
L_089212EC:
    aot_gpr_31 = (0x089212F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089212F4u) goto L_089212F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089212F4:
    aot_gpr_4 = (0u | 25u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08921534;
      }
      goto L_08921300;
    }
L_08921300:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[22] != aot_gpr_4;
      if (branch_taken) {
          goto L_08921378;
      }
      goto L_0892130C;
    }
L_0892130C:
    aot_gpr_31 = (0x08921314u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921314u) goto L_08921314;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921314:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08921378;
      }
      goto L_0892131C;
    }
L_0892131C:
    aot_gpr_31 = (0x08921324u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921324u) goto L_08921324;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921324:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x08921330u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921330u) goto L_08921330;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921330:
    aot_gpr_31 = (0x08921338u);
    aot_fpr_12 = aot_fpr_20 - ctx.fpr[0];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 350u, 0x08905990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921338u) goto L_08921338;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921338:
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_089216E8;
      }
      goto L_08921354;
    }
L_08921354:
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08921360u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 479u, 0x0890DF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921360u) goto L_08921360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921360:
    if (aot_gpr_2 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
        goto L_089216EC;
    }
    goto L_08921368;
L_08921368:
    aot_gpr_31 = (0x08921370u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 513u, 0x0890E2FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921370u) goto L_08921370;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921370:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
      if (branch_taken) {
          goto L_089216EC;
      }
      goto L_08921378;
    }
L_08921378:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    if (aot_gpr_4 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
        goto L_089216EC;
    }
    goto L_0892138C;
L_0892138C:
    aot_gpr_31 = (0x08921394u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921394u) goto L_08921394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921394:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 17u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
        goto L_089216EC;
    }
    goto L_089213A4;
L_089213A4:
    aot_gpr_31 = (0x089213ACu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 382u, 0x08905C2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089213ACu) goto L_089213AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089213AC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089214CC;
      }
      goto L_089213B4;
    }
L_089213B4:
    aot_gpr_31 = (0x089213BCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 415u, 0x08905FE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089213BCu) goto L_089213BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089213BC:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_089214CC;
      }
      goto L_089213C8;
    }
L_089213C8:
    aot_gpr_31 = (0x089213D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089213D0u) goto L_089213D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089213D0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(180)));
    aot_gpr_4 = (aot_gpr_2 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08921464;
      }
      goto L_08921404;
    }
L_08921404:
    aot_gpr_31 = (0x0892140Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892140Cu) goto L_0892140C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892140C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08921464;
      }
      goto L_0892141C;
    }
L_0892141C:
    aot_gpr_31 = (0x08921424u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921424u) goto L_08921424;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921424:
    if (aot_gpr_2 == ctx.gpr[22]) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
        goto L_089216EC;
    }
    goto L_0892142C;
L_0892142C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0892143Cu);
    aot_gpr_6 = (0u | 4000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892143Cu) goto L_0892143C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892143C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (49152u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892145Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892145Cu) goto L_0892145C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892145C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
      if (branch_taken) {
          goto L_089216EC;
      }
      goto L_08921464;
    }
L_08921464:
    aot_gpr_31 = (0x0892146Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892146Cu) goto L_0892146C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892146C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 24u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08921490;
      }
      goto L_0892147C;
    }
L_0892147C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08921488u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 888u, 0x0890FF6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921488u) goto L_08921488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921488:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
      if (branch_taken) {
          goto L_089216EC;
      }
      goto L_08921490;
    }
L_08921490:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892149Cu);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 213u, 0x0892D2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892149Cu) goto L_0892149C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892149C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (2238u << 16u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(180), aot_gpr_5);
      if (branch_taken) {
          goto L_089216E8;
      }
      goto L_089214CC;
    }
L_089214CC:
    aot_gpr_31 = (0x089214D4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089214D4u) goto L_089214D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089214D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 24u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089214F8;
      }
      goto L_089214E4;
    }
L_089214E4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089214F0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 888u, 0x0890FF6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089214F0u) goto L_089214F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089214F0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
      if (branch_taken) {
          goto L_089216EC;
      }
      goto L_089214F8;
    }
L_089214F8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08921504u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 213u, 0x0892D2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921504u) goto L_08921504;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921504:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (2238u << 16u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(180), aot_gpr_5);
      if (branch_taken) {
          goto L_089216E8;
      }
      goto L_08921534;
    }
L_08921534:
    aot_gpr_31 = (0x0892153Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892153Cu) goto L_0892153C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892153C:
    if (aot_gpr_2 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
        goto L_089216EC;
    }
    goto L_08921544;
L_08921544:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    if (aot_gpr_4 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
        goto L_089216EC;
    }
    goto L_08921554;
L_08921554:
    ctx.gpr[18] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08921560u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 380u, 0x08905C04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921560u) goto L_08921560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921560:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08921590;
      }
      goto L_08921568;
    }
L_08921568:
    aot_gpr_31 = (0x08921570u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 845u, 0x08907B54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921570u) goto L_08921570;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921570:
    aot_gpr_31 = (0x08921578u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 818u, 0x0891351Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921578u) goto L_08921578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921578:
    aot_gpr_31 = (0x08921580u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 814u, 0x089134D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921580u) goto L_08921580;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921580:
    aot_gpr_31 = (0x08921588u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 813u, 0x089134C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921588u) goto L_08921588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921588:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_0892159C;
      }
      goto L_08921590;
    }
L_08921590:
    aot_gpr_31 = (0x08921598u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 409u, 0x08905F98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921598u) goto L_08921598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921598:
    ctx.gpr[22] = (0u < aot_gpr_2 ? 1u : 0u);
    goto L_0892159C;
L_0892159C:
    aot_gpr_31 = (0x089215A4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089215A4u) goto L_089215A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089215A4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089216C4;
      }
      goto L_089215AC;
    }
L_089215AC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3156)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089216C4;
      }
      goto L_089215C4;
    }
L_089215C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089216C4;
      }
      goto L_089215D4;
    }
L_089215D4:
    aot_gpr_31 = (0x089215DCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089215DCu) goto L_089215DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089215DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1736)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089216C4;
      }
      goto L_089215EC;
    }
L_089215EC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_089216C4;
      }
      goto L_089215F4;
    }
L_089215F4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08921600u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 668u, 0x0894751Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921600u) goto L_08921600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921600:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08921618u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921618u) goto L_08921618;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921618:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08921624u);
    aot_gpr_5 = (0u | 1300u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921624u) goto L_08921624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921624:
    aot_gpr_31 = (0x0892162Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892162Cu) goto L_0892162C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892162C:
    aot_gpr_31 = (0x08921634u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921634u) goto L_08921634;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921634:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089216B4;
      }
      goto L_0892163C;
    }
L_0892163C:
    aot_gpr_31 = (0x08921644u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921644u) goto L_08921644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921644:
    aot_gpr_31 = (0x0892164Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892164Cu) goto L_0892164C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892164C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08921658u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921658u) goto L_08921658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921658:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_089216B4;
      }
      goto L_08921664;
    }
L_08921664:
    aot_gpr_31 = (0x0892166Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892166Cu) goto L_0892166C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892166C:
    aot_gpr_31 = (0x08921674u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921674u) goto L_08921674;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921674:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08921680u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921680u) goto L_08921680;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921680:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_089216B4;
      }
      goto L_0892168C;
    }
L_0892168C:
    aot_gpr_31 = (0x08921694u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921694u) goto L_08921694;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921694:
    aot_gpr_31 = (0x0892169Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892169Cu) goto L_0892169C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892169C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089216A8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089216A8u) goto L_089216A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089216A8:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_089216E8;
      }
      goto L_089216B4;
    }
L_089216B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(464), aot_gpr_4);
      if (branch_taken) {
          goto L_089216E8;
      }
      goto L_089216C4;
    }
L_089216C4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x089216DCu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089216DCu) goto L_089216DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089216DC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089216E8u);
    aot_gpr_5 = (0u | 500u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089216E8u) goto L_089216E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089216E8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
    goto L_089216EC;
L_089216EC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08921714;
      }
      goto L_08921700;
    }
L_08921700:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08921714;
      }
      goto L_08921708;
    }
L_08921708:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08921714u);
    aot_gpr_5 = (0u | 104u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921714u) goto L_08921714;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921714:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_0892171C;
    }
L_0892171C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08921728u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 402u, 0x088ED6F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921728u) goto L_08921728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921728:
    aot_gpr_31 = (0x08921730u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921730u) goto L_08921730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921730:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08921878;
      }
      goto L_08921738;
    }
L_08921738:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08921744u);
    aot_gpr_5 = (0u | 155u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921744u) goto L_08921744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921744:
    aot_gpr_31 = (0x0892174Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 697u, 0x0890711Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892174Cu) goto L_0892174C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892174C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08921878;
      }
      goto L_08921758;
    }
L_08921758:
    aot_gpr_31 = (0x08921760u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921760u) goto L_08921760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921760:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08921878;
      }
      goto L_08921768;
    }
L_08921768:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3156)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08921878;
      }
      goto L_08921784;
    }
L_08921784:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08921878;
      }
      goto L_08921794;
    }
L_08921794:
    aot_gpr_31 = (0x0892179Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892179Cu) goto L_0892179C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892179C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1736)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08921878;
      }
      goto L_089217AC;
    }
L_089217AC:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089217B8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 668u, 0x0894751Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089217B8u) goto L_089217B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089217B8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x089217D0u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089217D0u) goto L_089217D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089217D0:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089217DCu);
    aot_gpr_5 = (0u | 1300u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089217DCu) goto L_089217DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089217DC:
    aot_gpr_31 = (0x089217E4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089217E4u) goto L_089217E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089217E4:
    aot_gpr_31 = (0x089217ECu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089217ECu) goto L_089217EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089217EC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0892186C;
      }
      goto L_089217F4;
    }
L_089217F4:
    aot_gpr_31 = (0x089217FCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089217FCu) goto L_089217FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089217FC:
    aot_gpr_31 = (0x08921804u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921804u) goto L_08921804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921804:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08921810u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921810u) goto L_08921810;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921810:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0892186C;
      }
      goto L_0892181C;
    }
L_0892181C:
    aot_gpr_31 = (0x08921824u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921824u) goto L_08921824;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921824:
    aot_gpr_31 = (0x0892182Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892182Cu) goto L_0892182C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892182C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08921838u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921838u) goto L_08921838;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921838:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0892186C;
      }
      goto L_08921844;
    }
L_08921844:
    aot_gpr_31 = (0x0892184Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892184Cu) goto L_0892184C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892184C:
    aot_gpr_31 = (0x08921854u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921854u) goto L_08921854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921854:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08921860u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921860u) goto L_08921860;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921860:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08921878;
      }
      goto L_0892186C;
    }
L_0892186C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 | 256u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(464), aot_gpr_4);
    goto L_08921878;
L_08921878:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_08921880;
    }
L_08921880:
    aot_gpr_31 = (0x08921888u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 379u, 0x08905BF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921888u) goto L_08921888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921888:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089218A4;
      }
      goto L_08921890;
    }
L_08921890:
    aot_gpr_31 = (0x08921898u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 410u, 0x08905FA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921898u) goto L_08921898;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921898:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_0892190C;
      }
      goto L_089218A4;
    }
L_089218A4:
    aot_gpr_31 = (0x089218ACu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 388u, 0x08905CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089218ACu) goto L_089218AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089218AC:
    aot_gpr_31 = (0x089218B4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 367u, 0x08905B14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089218B4u) goto L_089218B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089218B4:
    aot_gpr_31 = (0x089218BCu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 368u, 0x08905B2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089218BCu) goto L_089218BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089218BC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08921930;
      }
      goto L_089218D8;
    }
L_089218D8:
    aot_gpr_31 = (0x089218E0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 388u, 0x08905CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089218E0u) goto L_089218E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089218E0:
    aot_gpr_31 = (0x089218E8u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 367u, 0x08905B14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089218E8u) goto L_089218E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089218E8:
    aot_gpr_31 = (0x089218F0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 368u, 0x08905B2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089218F0u) goto L_089218F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089218F0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08921930;
      }
      goto L_0892190C;
    }
L_0892190C:
    aot_gpr_31 = (0x08921914u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921914u) goto L_08921914;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921914:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08921930;
      }
      goto L_0892191C;
    }
L_0892191C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08921928u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 213u, 0x0892D2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921928u) goto L_08921928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921928:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_08921930;
    }
L_08921930:
    aot_gpr_31 = (0x08921938u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921938u) goto L_08921938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921938:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08922734;
      }
      goto L_08921940;
    }
L_08921940:
    aot_gpr_31 = (0x08921948u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921948u) goto L_08921948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921948:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08921954u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921954u) goto L_08921954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921954:
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08921960u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921960u) goto L_08921960;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921960:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(288)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08921974u);
    ctx.fpr[24] = aot_fpr_12 + aot_fpr_13;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921974u) goto L_08921974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921974:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(292)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08921990u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921990u) goto L_08921990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921990:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x0892199Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892199Cu) goto L_0892199C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892199C:
    aot_fpr_12 = ctx.fpr[0] - ctx.fpr[26];
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(360));
    aot_gpr_31 = (0x089219ACu);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 175u, 0x08904B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089219ACu) goto L_089219AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089219AC:
    aot_gpr_4 = (16457u << 16u);
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089219DC;
      }
      goto L_089219CC;
    }
L_089219CC:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_22 = aot_fpr_12 - aot_fpr_22;
    goto L_089219DC;
L_089219DC:
    aot_gpr_31 = (0x089219E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089219E4u) goto L_089219E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089219E4:
    aot_gpr_31 = (0x089219ECu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089219ECu) goto L_089219EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089219EC:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x089219F8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089219F8u) goto L_089219F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089219F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089226E0;
      }
      goto L_08921A08;
    }
L_08921A08:
    aot_gpr_31 = (0x08921A10u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 752u, 0x08907484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921A10u) goto L_08921A10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921A10:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08921BD4;
      }
      goto L_08921A18;
    }
L_08921A18:
    aot_gpr_31 = (0x08921A20u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921A20u) goto L_08921A20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921A20:
    aot_gpr_4 = (0u | 12u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08921A40;
      }
      goto L_08921A2C;
    }
L_08921A2C:
    aot_gpr_31 = (0x08921A34u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921A34u) goto L_08921A34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921A34:
    aot_gpr_4 = (0u | 8u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08921BD4;
      }
      goto L_08921A40;
    }
L_08921A40:
    aot_gpr_31 = (0x08921A48u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 752u, 0x08907484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921A48u) goto L_08921A48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921A48:
    aot_gpr_31 = (0x08921A50u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921A50u) goto L_08921A50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921A50:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (16050u << 16u);
      if (branch_taken) {
          goto L_08921B90;
      }
      goto L_08921A58;
    }
L_08921A58:
    aot_gpr_4 = (aot_gpr_4 | 47299u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08921A80;
      }
      goto L_08921A70;
    }
L_08921A70:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1938)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08921B90;
      }
      goto L_08921A80;
    }
L_08921A80:
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(288));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08921A90u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 479u, 0x0890DF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921A90u) goto L_08921A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921A90:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08921AA8;
      }
      goto L_08921A98;
    }
L_08921A98:
    aot_gpr_31 = (0x08921AA0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 513u, 0x0890E2FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921AA0u) goto L_08921AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921AA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08921AA8;
    }
L_08921AA8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(296)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08921AC4;
    }
L_08921AC4:
    aot_gpr_31 = (0x08921ACCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921ACCu) goto L_08921ACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921ACC:
    aot_gpr_4 = (0u | 8u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08921B3C;
      }
      goto L_08921AD8;
    }
L_08921AD8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 16u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08921AF0u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921AF0u) goto L_08921AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921AF0:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08921AFCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 361u, 0x0890D7B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921AFCu) goto L_08921AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921AFC:
    aot_gpr_31 = (0x08921B04u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 752u, 0x08907484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921B04u) goto L_08921B04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921B04:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08921B1Cu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921B1Cu) goto L_08921B1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921B1C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08921B28u);
    aot_gpr_5 = (0u | 3000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921B28u) goto L_08921B28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921B28:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08921B34u);
    aot_gpr_5 = (0u | 157u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921B34u) goto L_08921B34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921B34:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08921B3C;
    }
L_08921B3C:
    aot_gpr_31 = (0x08921B44u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 513u, 0x08906550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921B44u) goto L_08921B44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921B44:
    aot_gpr_4 = (0u | 6u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08921B70;
      }
      goto L_08921B50;
    }
L_08921B50:
    aot_gpr_31 = (0x08921B58u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 281u, 0x08909054u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921B58u) goto L_08921B58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921B58:
    aot_gpr_4 = (0u | 13u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08921B70;
      }
      goto L_08921B64;
    }
L_08921B64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2336)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2336), aot_gpr_4);
    goto L_08921B70;
L_08921B70:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 13u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08921B88u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921B88u) goto L_08921B88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921B88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08921B90;
    }
L_08921B90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08921BA8;
      }
      goto L_08921B9C;
    }
L_08921B9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    aot_gpr_31 = (0x08921BA8u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1716));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921BA8u) goto L_08921BA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921BA8:
    aot_gpr_31 = (0x08921BB0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 752u, 0x08907484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921BB0u) goto L_08921BB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921BB0:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1716), aot_gpr_2);
      if (branch_taken) {
          goto L_08921BC4;
      }
      goto L_08921BB8;
    }
L_08921BB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    aot_gpr_31 = (0x08921BC4u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1716));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921BC4u) goto L_08921BC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921BC4:
    aot_gpr_31 = (0x08921BCCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921BCCu) goto L_08921BCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921BCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08921BD4;
    }
L_08921BD4:
    aot_gpr_31 = (0x08921BDCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 513u, 0x08906550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921BDCu) goto L_08921BDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921BDC:
    aot_gpr_4 = (0u | 6u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    aot_gpr_4 = (16006u << 16u);
      if (branch_taken) {
          goto L_08921CDC;
      }
      goto L_08921BE8;
    }
L_08921BE8:
    aot_gpr_4 = (aot_gpr_4 | 2706u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08921CDC;
      }
      goto L_08921C00;
    }
L_08921C00:
    aot_gpr_31 = (0x08921C08u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 281u, 0x08909054u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921C08u) goto L_08921C08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921C08:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08921CDC;
      }
      goto L_08921C10;
    }
L_08921C10:
    aot_gpr_31 = (0x08921C18u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 303u, 0x08911130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921C18u) goto L_08921C18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921C18:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    aot_gpr_4 = (16025u << 16u);
      if (branch_taken) {
          goto L_08921C3C;
      }
      goto L_08921C24;
    }
L_08921C24:
    aot_gpr_31 = (0x08921C2Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 303u, 0x08911130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921C2Cu) goto L_08921C2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921C2C:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08921CDC;
      }
      goto L_08921C38;
    }
L_08921C38:
    aot_gpr_4 = (16025u << 16u);
    goto L_08921C3C;
L_08921C3C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(296)));
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08921CDC;
      }
      goto L_08921C58;
    }
L_08921C58:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08921C68u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921C68u) goto L_08921C68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921C68:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08921C88;
      }
      goto L_08921C74;
    }
L_08921C74:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08921C84u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921C84u) goto L_08921C84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921C84:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    goto L_08921C88;
L_08921C88:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08921CDC;
      }
      goto L_08921C90;
    }
L_08921C90:
    aot_gpr_31 = (0x08921C98u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 375u, 0x08905BB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921C98u) goto L_08921C98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921C98:
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08921CDC;
      }
      goto L_08921CB4;
    }
L_08921CB4:
    aot_gpr_31 = (0x08921CBCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 226u, 0x089050C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921CBCu) goto L_08921CBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921CBC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08921CDC;
      }
      goto L_08921CC4;
    }
L_08921CC4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 9u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08921CDCu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921CDCu) goto L_08921CDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921CDC:
    aot_gpr_31 = (0x08921CE4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921CE4u) goto L_08921CE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921CE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08921D60;
      }
      goto L_08921CF4;
    }
L_08921CF4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(372));
    aot_gpr_31 = (0x08921D00u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921D00u) goto L_08921D00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921D00:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08921D0Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921D0Cu) goto L_08921D0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921D0C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08921D1Cu);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(364));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 185u, 0x08904C30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921D1Cu) goto L_08921D1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921D1C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08921D28u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921D28u) goto L_08921D28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921D28:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1368)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08921D3Cu);
    aot_gpr_6 = (0u | 5000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921D3Cu) goto L_08921D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921D3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1368)));
    { const bool branch_taken = ctx.gpr[19] == aot_gpr_4;
      if (branch_taken) {
          goto L_08921D58;
      }
      goto L_08921D48;
    }
L_08921D48:
    aot_gpr_31 = (0x08921D50u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921D50u) goto L_08921D50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921D50:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(500));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2072), aot_gpr_4);
    goto L_08921D58;
L_08921D58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08921D60;
    }
L_08921D60:
    aot_gpr_31 = (0x08921D68u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921D68u) goto L_08921D68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921D68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (16095u << 16u);
      if (branch_taken) {
          goto L_08921E0C;
      }
      goto L_08921D78;
    }
L_08921D78:
    aot_gpr_4 = (aot_gpr_4 | 26355u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08921DA0;
      }
      goto L_08921D90;
    }
L_08921D90:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1938)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08921E0C;
      }
      goto L_08921DA0;
    }
L_08921DA0:
    aot_gpr_31 = (0x08921DA8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921DA8u) goto L_08921DA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921DA8:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(2500));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1380), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1376), ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1376));
    aot_gpr_31 = (0x08921DC0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921DC0u) goto L_08921DC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921DC0:
    aot_gpr_31 = (0x08921DC8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 281u, 0x08909054u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921DC8u) goto L_08921DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921DC8:
    aot_gpr_4 = (0u | 9u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08921DEC;
      }
      goto L_08921DD4;
    }
L_08921DD4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08921DECu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921DECu) goto L_08921DEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921DEC:
    aot_gpr_31 = (0x08921DF4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921DF4u) goto L_08921DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921DF4:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(5000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2072), aot_gpr_4);
    aot_gpr_31 = (0x08921E04u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0068_entry, 68u, 665u, 0x08917990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921E04u) goto L_08921E04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921E04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08921E0C;
    }
L_08921E0C:
    aot_gpr_4 = (16262u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 2706u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08921E28;
    }
L_08921E28:
    aot_fpr_22 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x08921E40u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 206u, 0x08904E70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921E40u) goto L_08921E40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921E40:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    aot_gpr_31 = (0x08921E4Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 363u, 0x08905AB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921E4Cu) goto L_08921E4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921E4C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    aot_gpr_31 = (0x08921E5Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921E5Cu) goto L_08921E5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921E5C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(288)));
    aot_gpr_5 = (16512u << 16u);
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(292)));
    aot_gpr_31 = (0x08921E80u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 206u, 0x08904E70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921E80u) goto L_08921E80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921E80:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x08921E90u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 182u, 0x08904BD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921E90u) goto L_08921E90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921E90:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08921EA0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 180u, 0x08904BA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921EA0u) goto L_08921EA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921EA0:
    aot_gpr_2 = (17096u << 16u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08921ECCu);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921ECCu) goto L_08921ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921ECC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08921ED8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921ED8u) goto L_08921ED8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921ED8:
    aot_gpr_4 = (0u | 8u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08921EF8;
      }
      goto L_08921EE4;
    }
L_08921EE4:
    aot_gpr_31 = (0x08921EECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921EECu) goto L_08921EEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921EEC:
    aot_gpr_4 = (0u | 9u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08922134;
      }
      goto L_08921EF8;
    }
L_08921EF8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(288)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(292)));
    aot_gpr_31 = (0x08921F0Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921F0Cu) goto L_08921F0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921F0C:
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x08921F18u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921F18u) goto L_08921F18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921F18:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08921F38;
      }
      goto L_08921F28;
    }
L_08921F28:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_22 = aot_fpr_22 + aot_fpr_12;
    goto L_08921F38;
L_08921F38:
    aot_gpr_31 = (0x08921F40u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921F40u) goto L_08921F40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921F40:
    aot_fpr_22 = aot_fpr_22 - ctx.fpr[0];
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08921FD4;
      }
      goto L_08921F60;
    }
L_08921F60:
    aot_gpr_31 = (0x08921F68u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921F68u) goto L_08921F68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921F68:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_22;
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_22 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_22 = fs * ft; }
    aot_gpr_31 = (0x08921F90u);
    aot_fpr_22 = ctx.fpr[0] - aot_fpr_22;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921F90u) goto L_08921F90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921F90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1364)));
    aot_gpr_5 = (16457u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_5 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17204u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08921FCCu);
    aot_fpr_12 = ctx.fpr[0] - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 700u, 0x08907134u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921FCCu) goto L_08921FCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921FCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08922030;
      }
      goto L_08921FD4;
    }
L_08921FD4:
    aot_gpr_31 = (0x08921FDCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921FDCu) goto L_08921FDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921FDC:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_22; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_22 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_22 = fs * ft; }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08921FF4u);
    aot_fpr_22 = ctx.fpr[0] + aot_fpr_22;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08921FF4u) goto L_08921FF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08921FF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1364)));
    aot_gpr_5 = (16457u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_5 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17204u << 16u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[14];
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08922030u);
    aot_fpr_12 = ctx.fpr[0] + aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 700u, 0x08907134u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922030u) goto L_08922030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922030:
    aot_gpr_31 = (0x08922038u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922038u) goto L_08922038;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922038:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(200));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2072), aot_gpr_4);
    aot_gpr_31 = (0x08922048u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 513u, 0x08906550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922048u) goto L_08922048;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922048:
    aot_gpr_4 = (0u | 6u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08922584;
      }
      goto L_08922054;
    }
L_08922054:
    aot_gpr_31 = (0x0892205Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 752u, 0x08907484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892205Cu) goto L_0892205C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892205C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08922584;
      }
      goto L_08922064;
    }
L_08922064:
    aot_gpr_31 = (0x0892206Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 752u, 0x08907484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892206Cu) goto L_0892206C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892206C:
    aot_gpr_31 = (0x08922074u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922074u) goto L_08922074;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922074:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08922080u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 752u, 0x08907484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922080u) goto L_08922080;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922080:
    aot_gpr_31 = (0x08922088u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922088u) goto L_08922088;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922088:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08922094u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922094u) goto L_08922094;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922094:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x089220A0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089220A0u) goto L_089220A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089220A0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x089220B4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089220B4u) goto L_089220B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089220B4:
    aot_gpr_31 = (0x089220BCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089220BCu) goto L_089220BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089220BC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x089220C8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089220C8u) goto L_089220C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089220C8:
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089220EC;
      }
      goto L_089220DC;
    }
L_089220DC:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[24] = ctx.fpr[24] + aot_fpr_12;
    goto L_089220EC;
L_089220EC:
    ctx.fpr[24] = ctx.fpr[24] - aot_fpr_22;
    aot_gpr_4 = (16423u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 36151u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16490u << 16u);
      if (branch_taken) {
          goto L_0892212C;
      }
      goto L_0892210C;
    }
L_0892210C:
    aot_gpr_4 = (aot_gpr_4 | 37504u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0892212C;
      }
      goto L_08922124;
    }
L_08922124:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2300), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0892212C;
L_0892212C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08922584;
      }
      goto L_08922134;
    }
L_08922134:
    aot_gpr_31 = (0x0892213Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892213Cu) goto L_0892213C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892213C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08922164;
      }
      goto L_0892214C;
    }
L_0892214C:
    aot_gpr_31 = (0x08922154u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922154u) goto L_08922154;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922154:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 24u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089222FC;
      }
      goto L_08922164;
    }
L_08922164:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (ctx.gpr[18] << 3u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    aot_gpr_31 = (0x0892218Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 398u, 0x08905E50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892218Cu) goto L_0892218C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892218C:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    aot_gpr_31 = (0x08922198u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 364u, 0x08905AC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922198u) goto L_08922198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922198:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(456));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089221C0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089221C0u) goto L_089221C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089221C0:
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    aot_gpr_31 = (0x089221D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089221D0u) goto L_089221D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089221D0:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x089221DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089221DCu) goto L_089221DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089221DC:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x089221F0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089221F0u) goto L_089221F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089221F0:
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    aot_gpr_31 = (0x08922200u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922200u) goto L_08922200;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922200:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    aot_gpr_31 = (0x0892220Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 364u, 0x08905AC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892220Cu) goto L_0892220C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892220C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(536));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08922238u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 186u, 0x08904C40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922238u) goto L_08922238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922238:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), aot_gpr_6);
    aot_gpr_31 = (0x0892225Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892225Cu) goto L_0892225C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892225C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(520));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922270u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922270u) goto L_08922270;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922270:
    aot_gpr_31 = (0x08922278u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922278u) goto L_08922278;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922278:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08922288u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 181u, 0x08904BC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922288u) goto L_08922288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922288:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(552));
    aot_gpr_31 = (0x08922294u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 364u, 0x08905AC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922294u) goto L_08922294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922294:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), aot_gpr_6);
    aot_gpr_31 = (0x089222B8u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089222B8u) goto L_089222B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089222B8:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x089222C4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 184u, 0x08904C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089222C4u) goto L_089222C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089222C4:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < ctx.fpr[14])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089222F4;
      }
      goto L_089222D8;
    }
L_089222D8:
    aot_gpr_31 = (0x089222E0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089222E0u) goto L_089222E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089222E0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089222ECu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 700u, 0x08907134u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089222ECu) goto L_089222EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089222EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_089222F4;
    }
L_089222F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08922584;
      }
      goto L_089222FC;
    }
L_089222FC:
    aot_gpr_31 = (0x08922304u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922304u) goto L_08922304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922304:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089223AC;
      }
      goto L_08922314;
    }
L_08922314:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (ctx.gpr[18] << 3u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x08922334u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 849u, 0x0890FD1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922334u) goto L_08922334;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922334:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922344u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 94u, 0x089105E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922344u) goto L_08922344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922344:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    aot_gpr_31 = (0x08922350u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 364u, 0x08905AC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922350u) goto L_08922350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922350:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), aot_gpr_6);
    aot_gpr_31 = (0x08922374u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922374u) goto L_08922374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922374:
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    aot_gpr_31 = (0x08922384u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922384u) goto L_08922384;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922384:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08922390u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922390u) goto L_08922390;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922390:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x089223A4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089223A4u) goto L_089223A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089223A4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08922584;
      }
      goto L_089223AC;
    }
L_089223AC:
    aot_gpr_31 = (0x089223B4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089223B4u) goto L_089223B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089223B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0892242C;
      }
      goto L_089223C4;
    }
L_089223C4:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    aot_gpr_31 = (0x089223D0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 88u, 0x08910538u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089223D0u) goto L_089223D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089223D0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(600));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), aot_gpr_6);
    aot_gpr_31 = (0x089223F4u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089223F4u) goto L_089223F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089223F4:
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    aot_gpr_31 = (0x08922404u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922404u) goto L_08922404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922404:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08922410u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922410u) goto L_08922410;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922410:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08922424u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922424u) goto L_08922424;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922424:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08922584;
      }
      goto L_0892242C;
    }
L_0892242C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (ctx.gpr[18] << 3u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(616));
    aot_gpr_31 = (0x08922450u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 399u, 0x08905E94u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922450u) goto L_08922450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922450:
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    aot_gpr_31 = (0x0892245Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 187u, 0x08904C6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892245Cu) goto L_0892245C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892245C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08922478;
      }
      goto L_08922464;
    }
L_08922464:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    aot_gpr_31 = (0x08922470u);
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(616));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922470u) goto L_08922470;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922470:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08922528;
      }
      goto L_08922478;
    }
L_08922478:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    aot_gpr_31 = (0x08922488u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922488u) goto L_08922488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922488:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    aot_gpr_6 = (16448u << 16u);
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(288));
    aot_gpr_31 = (0x089224A4u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 182u, 0x08904BD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089224A4u) goto L_089224A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089224A4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x089224B4u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 180u, 0x08904BA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089224B4u) goto L_089224B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089224B4:
    aot_gpr_31 = (0x089224BCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 195u, 0x08904CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089224BCu) goto L_089224BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089224BC:
    aot_gpr_4 = (aot_gpr_2 & 511u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (15235u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x089224E8u);
    ctx.fpr[26] = aot_fpr_12 - ctx.fpr[24];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 195u, 0x08904CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089224E8u) goto L_089224E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089224E8:
    aot_gpr_4 = (aot_gpr_2 & 511u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_31 = (0x0892250Cu);
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[24];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 206u, 0x08904E70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892250Cu) goto L_0892250C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892250C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0892251Cu);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 180u, 0x08904BA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892251Cu) goto L_0892251C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892251C:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    aot_gpr_31 = (0x08922528u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 366u, 0x08905AFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922528u) goto L_08922528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922528:
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    aot_gpr_31 = (0x08922538u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922538u) goto L_08922538;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922538:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08922544u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922544u) goto L_08922544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922544:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08922558u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922558u) goto L_08922558;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922558:
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x08922564u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922564u) goto L_08922564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922564:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08922584;
      }
      goto L_08922574;
    }
L_08922574:
    aot_gpr_31 = (0x0892257Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892257Cu) goto L_0892257C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892257C:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(500));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2072), aot_gpr_4);
    goto L_08922584;
L_08922584:
    aot_gpr_31 = (0x0892258Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892258Cu) goto L_0892258C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892258C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922598u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922598u) goto L_08922598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922598:
    aot_gpr_31 = (0x089225A0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089225A0u) goto L_089225A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089225A0:
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_22 = ctx.fpr[0] + aot_fpr_12;
    aot_gpr_31 = (0x089225B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089225B8u) goto L_089225B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089225B8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089225F0;
      }
      goto L_089225C8;
    }
L_089225C8:
    aot_gpr_31 = (0x089225D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089225D0u) goto L_089225D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089225D0:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089225E8u);
    aot_fpr_12 = ctx.fpr[0] - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089225E8u) goto L_089225E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089225E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08922640;
      }
      goto L_089225F0;
    }
L_089225F0:
    aot_gpr_31 = (0x089225F8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089225F8u) goto L_089225F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089225F8:
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_22 = ctx.fpr[0] - aot_fpr_12;
    aot_gpr_31 = (0x08922610u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922610u) goto L_08922610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922610:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08922640;
      }
      goto L_08922620;
    }
L_08922620:
    aot_gpr_31 = (0x08922628u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922628u) goto L_08922628;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922628:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922640u);
    aot_fpr_12 = ctx.fpr[0] + aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922640u) goto L_08922640;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922640:
    aot_gpr_31 = (0x08922648u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922648u) goto L_08922648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922648:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_20) || std::isnan(ctx.fpr[0])) && aot_fpr_20 == ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08922658;
    }
L_08922658:
    aot_gpr_31 = (0x08922660u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922660u) goto L_08922660;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922660:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08922670;
    }
L_08922670:
    aot_gpr_31 = (0x08922678u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922678u) goto L_08922678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922678:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(200));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2072), aot_gpr_4);
    aot_gpr_31 = (0x08922688u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922688u) goto L_08922688;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922688:
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089226A0u);
    aot_fpr_12 = ctx.fpr[0] + aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089226A0u) goto L_089226A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089226A0:
    aot_gpr_31 = (0x089226A8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089226A8u) goto L_089226A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089226A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08922734;
      }
      goto L_089226B8;
    }
L_089226B8:
    aot_gpr_31 = (0x089226C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089226C0u) goto L_089226C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089226C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08922734;
      }
      goto L_089226D0;
    }
L_089226D0:
    aot_gpr_31 = (0x089226D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089226D8u) goto L_089226D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089226D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08922734;
      }
      goto L_089226E0;
    }
L_089226E0:
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(288));
    aot_gpr_31 = (0x089226ECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904CF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089226ECu) goto L_089226EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089226EC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089226F8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 179u, 0x08904B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089226F8u) goto L_089226F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089226F8:
    aot_gpr_4 = (48989u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 45613u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08922734;
      }
      goto L_08922714;
    }
L_08922714:
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(288));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922724u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 479u, 0x0890DF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922724u) goto L_08922724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922724:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08922734;
      }
      goto L_0892272C;
    }
L_0892272C:
    aot_gpr_31 = (0x08922734u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 513u, 0x0890E2FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922734u) goto L_08922734;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922734:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_08922744;
    }
L_08922744:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089227D8;
      }
      goto L_08922754;
    }
L_08922754:
    aot_gpr_31 = (0x0892275Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 664u, 0x08906F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892275Cu) goto L_0892275C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892275C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089227D8;
      }
      goto L_08922764;
    }
L_08922764:
    aot_gpr_31 = (0x0892276Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 403u, 0x08905EDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892276Cu) goto L_0892276C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892276C:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089227D8;
      }
      goto L_08922780;
    }
L_08922780:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    aot_gpr_31 = (0x0892278Cu);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(288));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892278Cu) goto L_0892278C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892278C:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892279Cu);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 521u, 0x08909F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892279Cu) goto L_0892279C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892279C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089227BC;
      }
      goto L_089227A4;
    }
L_089227A4:
    aot_gpr_5 = (16512u << 16u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    aot_gpr_31 = (0x089227B4u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 355u, 0x08905A0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089227B4u) goto L_089227B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089227B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089227CC;
      }
      goto L_089227BC;
    }
L_089227BC:
    aot_gpr_5 = (16128u << 16u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    aot_gpr_31 = (0x089227CCu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 355u, 0x08905A0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089227CCu) goto L_089227CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089227CC:
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    aot_gpr_31 = (0x089227D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 405u, 0x08905EECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089227D8u) goto L_089227D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089227D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08922818;
      }
      goto L_089227E8;
    }
L_089227E8:
    aot_gpr_31 = (0x089227F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089227F0u) goto L_089227F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089227F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08922818;
      }
      goto L_08922800;
    }
L_08922800:
    aot_gpr_31 = (0x08922808u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922808u) goto L_08922808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922808:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08922850;
      }
      goto L_08922818;
    }
L_08922818:
    aot_gpr_31 = (0x08922820u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 521u, 0x08909F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922820u) goto L_08922820;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922820:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089234F4;
      }
      goto L_08922828;
    }
L_08922828:
    aot_gpr_31 = (0x08922830u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 992u, 0x0890BED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922830u) goto L_08922830;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922830:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089234F4;
      }
      goto L_08922838;
    }
L_08922838:
    aot_gpr_31 = (0x08922840u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922840u) goto L_08922840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922840:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 45u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089234F4;
      }
      goto L_08922850;
    }
L_08922850:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(784), 0u);
      if (branch_taken) {
          goto L_0892286C;
      }
      goto L_08922860;
    }
L_08922860:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089228B0;
      }
      goto L_0892286C;
    }
L_0892286C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2072), 0u);
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(1696));
    aot_gpr_31 = (0x0892287Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892287Cu) goto L_0892287C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892287C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08922888u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922888u) goto L_08922888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922888:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0892289Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 206u, 0x08904E70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892289Cu) goto L_0892289C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892289C:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    aot_gpr_31 = (0x089228A8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089228A8u) goto L_089228A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089228A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089228D8;
      }
      goto L_089228B0;
    }
L_089228B0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    aot_gpr_31 = (0x089228BCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089228BCu) goto L_089228BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089228BC:
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(1696));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089228CCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 181u, 0x08904BC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089228CCu) goto L_089228CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089228CC:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    aot_gpr_31 = (0x089228D8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089228D8u) goto L_089228D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089228D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2072), aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_20)));
      if (branch_taken) {
          goto L_089228FC;
      }
      goto L_089228F0;
    }
L_089228F0:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    goto L_089228FC;
L_089228FC:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0892290Cu);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 373u, 0x08905BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892290Cu) goto L_0892290C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892290C:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(692));
    aot_gpr_31 = (0x0892291Cu);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 192u, 0x08904CACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892291Cu) goto L_0892291C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892291C:
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16968u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(310)));
        goto L_08922990;
    }
    goto L_08922944;
L_08922944:
    aot_gpr_31 = (0x0892294Cu);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 353u, 0x089059E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892294Cu) goto L_0892294C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892294C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_0892296C;
      }
      goto L_08922960;
    }
L_08922960:
    aot_gpr_4 = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[14];
    goto L_0892296C;
L_0892296C:
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08922A48;
      }
      goto L_0892298C;
    }
L_0892298C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(310)));
    goto L_08922990;
L_08922990:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08922ECC;
      }
      goto L_0892299C;
    }
L_0892299C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_20)));
      if (branch_taken) {
          goto L_089229B8;
      }
      goto L_089229AC;
    }
L_089229AC:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    goto L_089229B8;
L_089229B8:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x089229C8u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 373u, 0x08905BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089229C8u) goto L_089229C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089229C8:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(700));
    aot_gpr_31 = (0x089229D8u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(696));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 192u, 0x08904CACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089229D8u) goto L_089229D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089229D8:
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16968u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08922ECC;
      }
      goto L_08922A00;
    }
L_08922A00:
    aot_gpr_31 = (0x08922A08u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 350u, 0x08905990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922A08u) goto L_08922A08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922A08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_08922A28;
      }
      goto L_08922A1C;
    }
L_08922A1C:
    aot_gpr_4 = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[14];
    goto L_08922A28;
L_08922A28:
    aot_gpr_4 = (15235u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08922ECC;
      }
      goto L_08922A48;
    }
L_08922A48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(3));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08922B9C;
      }
      goto L_08922A70;
    }
L_08922A70:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_16 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[14] = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_5 = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    aot_gpr_31 = (0x08922A94u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 206u, 0x08904E70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922A94u) goto L_08922A94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922A94:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08922AA0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922AA0u) goto L_08922AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922AA0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (16261u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 7864u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08922AE4u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922AE4u) goto L_08922AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922AE4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08922B94;
      }
      goto L_08922AEC;
    }
L_08922AEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (8192u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08922B30;
      }
      goto L_08922B00;
    }
L_08922B00:
    aot_gpr_31 = (0x08922B08u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 390u, 0x08905D48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922B08u) goto L_08922B08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922B08:
    aot_gpr_4 = (16261u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 7864u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[14])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08922B80;
      }
      goto L_08922B30;
    }
L_08922B30:
    aot_gpr_31 = (0x08922B38u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 390u, 0x08905D48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922B38u) goto L_08922B38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922B38:
    aot_gpr_4 = (16261u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 7864u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922B58u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922B58u) goto L_08922B58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922B58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (8192u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08922B80;
      }
      goto L_08922B6C;
    }
L_08922B6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (57344u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    goto L_08922B80;
L_08922B80:
    aot_gpr_31 = (0x08922B88u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 551u, 0x0890A1A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922B88u) goto L_08922B88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922B88:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922B94u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 336u, 0x08905804u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922B94u) goto L_08922B94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922B94:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089234EC;
      }
      goto L_08922B9C;
    }
L_08922B9C:
    aot_gpr_31 = (0x08922BA4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922BA4u) goto L_08922BA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922BA4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08922D04;
      }
      goto L_08922BAC;
    }
L_08922BAC:
    aot_gpr_31 = (0x08922BB4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 664u, 0x08906F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922BB4u) goto L_08922BB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922BB4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08922D04;
      }
      goto L_08922BBC;
    }
L_08922BBC:
    aot_gpr_31 = (0x08922BC4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922BC4u) goto L_08922BC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922BC4:
    aot_gpr_31 = (0x08922BCCu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 508u, 0x0898D640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922BCCu) goto L_08922BCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922BCC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08922D04;
      }
      goto L_08922BD4;
    }
L_08922BD4:
    aot_gpr_31 = (0x08922BDCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922BDCu) goto L_08922BDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922BDC:
    aot_gpr_31 = (0x08922BE4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 114u, 0x0898C4ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922BE4u) goto L_08922BE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922BE4:
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_2);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08922BF4u);
    aot_fpr_22 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_22)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922BF4u) goto L_08922BF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922BF4:
    aot_gpr_31 = (0x08922BFCu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 124u, 0x0898C578u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922BFCu) goto L_08922BFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922BFC:
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_2);
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_20)));
    aot_gpr_31 = (0x08922C0Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 350u, 0x08905990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922C0Cu) goto L_08922C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922C0C:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08922C3C;
      }
      goto L_08922C20;
    }
L_08922C20:
    aot_gpr_31 = (0x08922C28u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 350u, 0x08905990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922C28u) goto L_08922C28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922C28:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08922CB8;
      }
      goto L_08922C3C;
    }
L_08922C3C:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22) ^ 0x80000000u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08922C54u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922C54u) goto L_08922C54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922C54:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922C60u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922C60u) goto L_08922C60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922C60:
    aot_gpr_31 = (0x08922C68u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922C68u) goto L_08922C68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922C68:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1968)));
    aot_gpr_31 = (0x08922C7Cu);
    aot_fpr_12 = ctx.fpr[0] - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922C7Cu) goto L_08922C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922C7C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922C88u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922C88u) goto L_08922C88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922C88:
    aot_gpr_31 = (0x08922C90u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922C90u) goto L_08922C90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922C90:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922C9Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 700u, 0x08907134u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922C9Cu) goto L_08922C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922C9C:
    aot_gpr_31 = (0x08922CA4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922CA4u) goto L_08922CA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922CA4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08922CB8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 360u, 0x08905A68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922CB8u) goto L_08922CB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922CB8:
    aot_gpr_31 = (0x08922CC0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 513u, 0x0890E2FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922CC0u) goto L_08922CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922CC0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2072), 0u);
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(1696));
    aot_gpr_31 = (0x08922CD0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922CD0u) goto L_08922CD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922CD0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08922CDCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922CDCu) goto L_08922CDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922CDC:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08922CF0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 206u, 0x08904E70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922CF0u) goto L_08922CF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922CF0:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    aot_gpr_31 = (0x08922CFCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922CFCu) goto L_08922CFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922CFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089234EC;
      }
      goto L_08922D04;
    }
L_08922D04:
    aot_gpr_31 = (0x08922D0Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922D0Cu) goto L_08922D0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922D0C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08922E70;
      }
      goto L_08922D14;
    }
L_08922D14:
    aot_gpr_31 = (0x08922D1Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922D1Cu) goto L_08922D1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922D1C:
    aot_gpr_31 = (0x08922D24u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 114u, 0x0898C4ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922D24u) goto L_08922D24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922D24:
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_2);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08922D34u);
    aot_fpr_22 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_22)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922D34u) goto L_08922D34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922D34:
    aot_gpr_31 = (0x08922D3Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 124u, 0x0898C578u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922D3Cu) goto L_08922D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922D3C:
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_2);
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_20)));
    aot_gpr_31 = (0x08922D4Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 350u, 0x08905990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922D4Cu) goto L_08922D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922D4C:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08922D7C;
      }
      goto L_08922D60;
    }
L_08922D60:
    aot_gpr_31 = (0x08922D68u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 350u, 0x08905990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922D68u) goto L_08922D68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922D68:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08922DF8;
      }
      goto L_08922D7C;
    }
L_08922D7C:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22) ^ 0x80000000u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08922D94u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922D94u) goto L_08922D94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922D94:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922DA0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922DA0u) goto L_08922DA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922DA0:
    aot_gpr_31 = (0x08922DA8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922DA8u) goto L_08922DA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922DA8:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1968)));
    aot_gpr_31 = (0x08922DBCu);
    aot_fpr_12 = ctx.fpr[0] - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922DBCu) goto L_08922DBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922DBC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922DC8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922DC8u) goto L_08922DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922DC8:
    aot_gpr_31 = (0x08922DD0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922DD0u) goto L_08922DD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922DD0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922DDCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 700u, 0x08907134u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922DDCu) goto L_08922DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922DDC:
    aot_gpr_31 = (0x08922DE4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922DE4u) goto L_08922DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922DE4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08922DF8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 360u, 0x08905A68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922DF8u) goto L_08922DF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922DF8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922E08u);
    aot_gpr_6 = (0u | 137u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922E08u) goto L_08922E08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922E08:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08922E28;
      }
      goto L_08922E14;
    }
L_08922E14:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922E24u);
    aot_gpr_6 = (0u | 140u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922E24u) goto L_08922E24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922E24:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    goto L_08922E28;
L_08922E28:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08922E4C;
      }
      goto L_08922E30;
    }
L_08922E30:
    aot_gpr_5 = (49216u << 16u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08922E40u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 376u, 0x08905BC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922E40u) goto L_08922E40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922E40:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08922E4Cu);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 374u, 0x08905BA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922E4Cu) goto L_08922E4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922E4C:
    aot_gpr_31 = (0x08922E54u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 664u, 0x08906F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922E54u) goto L_08922E54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922E54:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08922E68;
      }
      goto L_08922E5C;
    }
L_08922E5C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922E68u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922E68u) goto L_08922E68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922E68:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089234EC;
      }
      goto L_08922E70;
    }
L_08922E70:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922E80u);
    aot_gpr_6 = (0u | 137u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922E80u) goto L_08922E80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922E80:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08922EA0;
      }
      goto L_08922E8C;
    }
L_08922E8C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08922E9Cu);
    aot_gpr_6 = (0u | 140u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922E9Cu) goto L_08922E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922E9C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    goto L_08922EA0;
L_08922EA0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08922EC4;
      }
      goto L_08922EA8;
    }
L_08922EA8:
    aot_gpr_5 = (49216u << 16u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08922EB8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 376u, 0x08905BC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922EB8u) goto L_08922EB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922EB8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08922EC4u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 374u, 0x08905BA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922EC4u) goto L_08922EC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922EC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089234EC;
      }
      goto L_08922ECC;
    }
L_08922ECC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(310)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089233A8;
      }
      goto L_08922EDC;
    }
L_08922EDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089233A8;
      }
      goto L_08922EE8;
    }
L_08922EE8:
    aot_gpr_31 = (0x08922EF0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(240)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 377u, 0x08905BC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922EF0u) goto L_08922EF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922EF0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089233A8;
      }
      goto L_08922EF8;
    }
L_08922EF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_20)));
      if (branch_taken) {
          goto L_08922F14;
      }
      goto L_08922F08;
    }
L_08922F08:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    goto L_08922F14;
L_08922F14:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08922F24u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 373u, 0x08905BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922F24u) goto L_08922F24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922F24:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(868));
    aot_gpr_31 = (0x08922F34u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 192u, 0x08904CACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922F34u) goto L_08922F34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922F34:
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16968u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089233A8;
      }
      goto L_08922F5C;
    }
L_08922F5C:
    aot_gpr_31 = (0x08922F64u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 350u, 0x08905990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922F64u) goto L_08922F64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922F64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_08922F84;
      }
      goto L_08922F78;
    }
L_08922F78:
    aot_gpr_4 = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[14];
    goto L_08922F84;
L_08922F84:
    aot_gpr_4 = (15235u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089233A8;
      }
      goto L_08922FA4;
    }
L_08922FA4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_4 = (16256u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08922FD0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 352u, 0x089059BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922FD0u) goto L_08922FD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922FD0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    aot_gpr_31 = (0x08922FDCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922FDCu) goto L_08922FDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922FDC:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08922FECu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 180u, 0x08904BA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08922FECu) goto L_08922FEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08922FEC:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_2 = (49568u << 16u);
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08923024u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923024u) goto L_08923024;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923024:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0892303C;
      }
      goto L_0892302C;
    }
L_0892302C:
    aot_gpr_31 = (0x08923034u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 390u, 0x08905D48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923034u) goto L_08923034;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923034:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08923044;
      }
      goto L_0892303C;
    }
L_0892303C:
    aot_gpr_4 = (17402u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    goto L_08923044;
L_08923044:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    aot_gpr_31 = (0x08923050u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923050u) goto L_08923050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923050:
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08923060u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 181u, 0x08904BC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923060u) goto L_08923060;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923060:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_2 = (49568u << 16u);
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08923098u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923098u) goto L_08923098;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923098:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089230B0;
      }
      goto L_089230A0;
    }
L_089230A0:
    aot_gpr_31 = (0x089230A8u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 390u, 0x08905D48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089230A8u) goto L_089230A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089230A8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089230BC;
      }
      goto L_089230B0;
    }
L_089230B0:
    aot_gpr_4 = (17402u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    goto L_089230BC;
L_089230BC:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x089230C8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089230C8u) goto L_089230C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089230C8:
    aot_gpr_4 = (16261u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 7864u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (17402u << 16u);
      if (branch_taken) {
          goto L_08923100;
      }
      goto L_089230EC;
    }
L_089230EC:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08923158;
      }
      goto L_08923100;
    }
L_08923100:
    aot_gpr_31 = (0x08923108u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923108u) goto L_08923108;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923108:
    aot_gpr_4 = (16261u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 7864u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08923160;
      }
      goto L_0892312C;
    }
L_0892312C:
    aot_gpr_31 = (0x08923134u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923134u) goto L_08923134;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923134:
    aot_gpr_4 = (16261u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 7864u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08923160;
      }
      goto L_08923158;
    }
L_08923158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089231A8;
      }
      goto L_08923160;
    }
L_08923160:
    aot_gpr_31 = (0x08923168u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923168u) goto L_08923168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923168:
    aot_gpr_4 = (16261u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 7864u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (17401u << 16u);
      if (branch_taken) {
          goto L_089231A8;
      }
      goto L_0892318C;
    }
L_0892318C:
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089231A8;
      }
      goto L_089231A4;
    }
L_089231A4:
    ctx.gpr[18] = (0u | 2u);
    goto L_089231A8;
L_089231A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
      if (branch_taken) {
          goto L_0892324C;
      }
      goto L_089231B0;
    }
L_089231B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (8192u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0892324C;
      }
      goto L_089231C4;
    }
L_089231C4:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_089231F8;
      }
      goto L_089231D0;
    }
L_089231D0:
    aot_gpr_31 = (0x089231D8u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 390u, 0x08905D48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089231D8u) goto L_089231D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089231D8:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    aot_gpr_31 = (0x089231E4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 351u, 0x0890599Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089231E4u) goto L_089231E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089231E4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089231F0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 357u, 0x08905A30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089231F0u) goto L_089231F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089231F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (16261u << 16u);
      if (branch_taken) {
          goto L_0892321C;
      }
      goto L_089231F8;
    }
L_089231F8:
    aot_gpr_31 = (0x08923200u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 390u, 0x08905D48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923200u) goto L_08923200;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923200:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    aot_gpr_31 = (0x0892320Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 351u, 0x0890599Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892320Cu) goto L_0892320C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892320C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08923218u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 357u, 0x08905A30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923218u) goto L_08923218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923218:
    aot_gpr_4 = (16261u << 16u);
    goto L_0892321C;
L_0892321C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_4 | 7864u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08923238u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923238u) goto L_08923238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923238:
    aot_gpr_31 = (0x08923240u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 551u, 0x0890A1A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923240u) goto L_08923240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923240:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892324Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 336u, 0x08905804u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892324Cu) goto L_0892324C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892324C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_22)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08923284;
      }
      goto L_0892325C;
    }
L_0892325C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    aot_gpr_6 = (49024u << 16u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x08923278u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 182u, 0x08904BD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923278u) goto L_08923278;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923278:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08923284u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923284u) goto L_08923284;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923284:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    aot_gpr_6 = (16512u << 16u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x089232ACu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 182u, 0x08904BD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089232ACu) goto L_089232AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089232AC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089232B8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 405u, 0x08905EECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089232B8u) goto L_089232B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089232B8:
    aot_gpr_31 = (0x089232C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089232C0u) goto L_089232C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089232C0:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    aot_gpr_6 = (16000u << 16u);
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089232DCu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 182u, 0x08904BD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089232DCu) goto L_089232DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089232DC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x089232ECu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 180u, 0x08904BA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089232ECu) goto L_089232EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089232EC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089232F8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 358u, 0x08905A44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089232F8u) goto L_089232F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089232F8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08923310u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923310u) goto L_08923310;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923310:
    aot_gpr_31 = (0x08923318u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923318u) goto L_08923318;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923318:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08923324u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 700u, 0x08907134u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923324u) goto L_08923324;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923324:
    aot_gpr_31 = (0x0892332Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892332Cu) goto L_0892332C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892332C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08923338u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923338u) goto L_08923338;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923338:
    aot_gpr_31 = (0x08923340u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923340u) goto L_08923340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923340:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08923354u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 360u, 0x08905A68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923354u) goto L_08923354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923354:
    aot_gpr_31 = (0x0892335Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892335Cu) goto L_0892335C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892335C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 45u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08923394;
      }
      goto L_0892336C;
    }
L_0892336C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (8192u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08923394;
      }
      goto L_08923380;
    }
L_08923380:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1000u);
    aot_gpr_6 = (0u | 30u);
    aot_gpr_31 = (0x08923394u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923394u) goto L_08923394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923394:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
      if (branch_taken) {
          goto L_089234EC;
      }
      goto L_089233A8;
    }
L_089233A8:
    aot_gpr_4 = (16076u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(296)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089234EC;
      }
      goto L_089233C8;
    }
L_089233C8:
    aot_gpr_31 = (0x089233D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 664u, 0x08906F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089233D0u) goto L_089233D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089233D0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08923430;
      }
      goto L_089233D8;
    }
L_089233D8:
    aot_gpr_31 = (0x089233E0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 277u, 0x08905388u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089233E0u) goto L_089233E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089233E0:
    aot_gpr_4 = (aot_gpr_2 < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08923400;
      }
      goto L_089233EC;
    }
L_089233EC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089233F8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 276u, 0x08905380u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089233F8u) goto L_089233F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089233F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08923430;
      }
      goto L_08923400;
    }
L_08923400:
    aot_gpr_31 = (0x08923408u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 277u, 0x08905388u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923408u) goto L_08923408;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923408:
    aot_gpr_4 = (aot_gpr_2 < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08923430;
      }
      goto L_08923414;
    }
L_08923414:
    aot_gpr_31 = (0x0892341Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 277u, 0x08905388u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892341Cu) goto L_0892341C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892341C:
    aot_gpr_31 = (0x08923424u);
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 369u, 0x08905B34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923424u) goto L_08923424;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923424:
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_2);
    aot_gpr_31 = (0x08923430u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 276u, 0x08905380u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923430u) goto L_08923430;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923430:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(288));
    aot_gpr_31 = (0x08923440u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923440u) goto L_08923440;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923440:
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08923450u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 175u, 0x08904B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923450u) goto L_08923450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923450:
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x0892345Cu);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 175u, 0x08904B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892345Cu) goto L_0892345C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892345C:
    aot_fpr_12 = aot_fpr_22 + ctx.fpr[0];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089234EC;
      }
      goto L_08923470;
    }
L_08923470:
    aot_gpr_31 = (0x08923478u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 352u, 0x089059BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923478u) goto L_08923478;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923478:
    aot_gpr_31 = (0x08923480u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 664u, 0x08906F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923480u) goto L_08923480;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923480:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089234C8;
      }
      goto L_08923488;
    }
L_08923488:
    aot_gpr_31 = (0x08923490u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 277u, 0x08905388u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923490u) goto L_08923490;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923490:
    aot_gpr_4 = (aot_gpr_2 < static_cast<std::uint32_t>(300) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089234C8;
      }
      goto L_0892349C;
    }
L_0892349C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    aot_gpr_6 = (49280u << 16u);
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x089234B4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 182u, 0x08904BD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089234B4u) goto L_089234B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089234B4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089234C0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 405u, 0x08905EECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089234C0u) goto L_089234C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089234C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089234EC;
      }
      goto L_089234C8;
    }
L_089234C8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    aot_gpr_6 = (16384u << 16u);
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x089234E0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 182u, 0x08904BD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089234E0u) goto L_089234E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089234E0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089234ECu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 405u, 0x08905EECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089234ECu) goto L_089234EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089234EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08923508;
      }
      goto L_089234F4;
    }
L_089234F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08923508;
      }
      goto L_08923504;
    }
L_08923504:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2072), 0u);
    goto L_08923508;
L_08923508:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08923574;
      }
      goto L_08923510;
    }
L_08923510:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (65535u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32767));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08923574;
      }
      goto L_08923534;
    }
L_08923534:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(501) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08923554;
      }
      goto L_08923544;
    }
L_08923544:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0892355C;
      }
      goto L_08923554;
    }
L_08923554:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2072), 0u);
      if (branch_taken) {
          goto L_08923574;
      }
      goto L_0892355C;
    }
L_0892355C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08923574;
      }
      goto L_08923568;
    }
L_08923568:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2072), aot_gpr_4);
    goto L_08923574;
L_08923574:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0892358C;
      }
      goto L_08923584;
    }
L_08923584:
    aot_gpr_31 = (0x0892358Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 675u, 0x089AB3ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892358Cu) goto L_0892358C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892358C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (2048u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08923630;
      }
      goto L_089235A0;
    }
L_089235A0:
    aot_gpr_31 = (0x089235A8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089235A8u) goto L_089235A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089235A8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089235DC;
      }
      goto L_089235B0;
    }
L_089235B0:
    aot_gpr_31 = (0x089235B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 899u, 0x0890B900u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089235B8u) goto L_089235B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089235B8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1930))))));
    aot_gpr_31 = (0x089235C4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089235C4u) goto L_089235C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089235C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (63488u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(460), aot_gpr_4);
      if (branch_taken) {
          goto L_08923630;
      }
      goto L_089235DC;
    }
L_089235DC:
    aot_gpr_31 = (0x089235E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089235E4u) goto L_089235E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089235E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 55u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08923630;
      }
      goto L_089235F4;
    }
L_089235F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_31 = (0x0892360Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892360Cu) goto L_0892360C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892360C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x0892361Cu);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892361Cu) goto L_0892361C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892361C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (63488u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(460), aot_gpr_4);
    goto L_08923630;
L_08923630:
    aot_gpr_31 = (0x08923638u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 521u, 0x08909F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923638u) goto L_08923638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923638:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089236AC;
      }
      goto L_08923640;
    }
L_08923640:
    aot_gpr_31 = (0x08923648u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923648u) goto L_08923648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923648:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089236AC;
      }
      goto L_08923664;
    }
L_08923664:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    aot_gpr_31 = (0x08923670u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923670u) goto L_08923670;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923670:
    aot_gpr_4 = (16243u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08923684u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 373u, 0x08905BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923684u) goto L_08923684;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923684:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08923690u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 349u, 0x08905964u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923690u) goto L_08923690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923690:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x089236A0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 183u, 0x08904BF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089236A0u) goto L_089236A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089236A0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089236ACu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089236ACu) goto L_089236AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089236AC:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x089236B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089236B8u) goto L_089236B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089236B8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_089236C0;
    }
L_089236C0:
    aot_gpr_31 = (0x089236C8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 521u, 0x08909F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089236C8u) goto L_089236C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089236C8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_089236D0;
    }
L_089236D0:
    aot_gpr_31 = (0x089236D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089236D8u) goto L_089236D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089236D8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_089236F0;
    }
L_089236F0:
    aot_gpr_31 = (0x089236F8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089236F8u) goto L_089236F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089236F8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_08923710;
    }
L_08923710:
    aot_gpr_31 = (0x08923718u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923718u) goto L_08923718;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923718:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_08923730;
    }
L_08923730:
    aot_gpr_31 = (0x08923738u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 697u, 0x0890711Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923738u) goto L_08923738;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923738:
    aot_gpr_4 = (0u | 1u);
    if (aot_gpr_2 == aot_gpr_4) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(792)));
        goto L_08923758;
    }
    goto L_08923744;
L_08923744:
    aot_gpr_31 = (0x0892374Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 697u, 0x0890711Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892374Cu) goto L_0892374C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892374C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_08923754;
    }
L_08923754:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(792)));
    goto L_08923758;
L_08923758:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_0892376C;
    }
L_0892376C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(796)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_08923784;
    }
L_08923784:
    aot_gpr_31 = (0x0892378Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 664u, 0x08906F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892378Cu) goto L_0892378C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892378C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_08923794;
    }
L_08923794:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_089237A4;
    }
L_089237A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_089237B0;
    }
L_089237B0:
    ctx.gpr[18] = (0u | 1u);
    goto L_089237B4;
L_089237B4:
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    aot_gpr_31 = (0x089237C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 381u, 0x08905C18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089237C0u) goto L_089237C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089237C0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089237D8;
      }
      goto L_089237C8;
    }
L_089237C8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(304))))));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089237FC;
      }
      goto L_089237D8;
    }
L_089237D8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(304))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089237EC;
      }
      goto L_089237E8;
    }
L_089237E8:
    ctx.gpr[18] = (0u | 0u);
    goto L_089237EC;
L_089237EC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(304))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_089237FC;
L_089237FC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_089238B0;
      }
      goto L_08923804;
    }
L_08923804:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08923810u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 384u, 0x08905C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923810u) goto L_08923810;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923810:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0892381Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 385u, 0x08905C70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892381Cu) goto L_0892381C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892381C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08923828u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 386u, 0x08905C98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923828u) goto L_08923828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923828:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08923834u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 387u, 0x08905CC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923834u) goto L_08923834;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923834:
    aot_gpr_31 = (0x0892383Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 401u, 0x08905EC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892383Cu) goto L_0892383C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892383C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (65520u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_31 = (0x08923858u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 402u, 0x08905EC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923858u) goto L_08923858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923858:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.gpr[19] = (aot_gpr_16 + static_cast<std::uint32_t>(144));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08923878u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 206u, 0x08904E70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923878u) goto L_08923878;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923878:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08923884u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923884u) goto L_08923884;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923884:
    ctx.gpr[19] = (aot_gpr_16 + static_cast<std::uint32_t>(128));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0892389Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 206u, 0x08904E70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892389Cu) goto L_0892389C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892389C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089238A8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089238A8u) goto L_089238A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089238A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089238B8;
      }
      goto L_089238B0;
    }
L_089238B0:
    aot_gpr_31 = (0x089238B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 540u, 0x08A666DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089238B8u) goto L_089238B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089238B8:
    aot_gpr_31 = (0x089238C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089238C0u) goto L_089238C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089238C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08923954;
      }
      goto L_089238D0;
    }
L_089238D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (8192u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08923954;
      }
      goto L_089238E4;
    }
L_089238E4:
    aot_gpr_31 = (0x089238ECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 521u, 0x08909F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089238ECu) goto L_089238EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089238EC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08923924;
      }
      goto L_089238F4;
    }
L_089238F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08923944;
      }
      goto L_08923900;
    }
L_08923900:
    aot_gpr_31 = (0x08923908u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923908u) goto L_08923908;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923908:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08923944;
      }
      goto L_08923910;
    }
L_08923910:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1300)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08923944;
      }
      goto L_08923924;
    }
L_08923924:
    aot_gpr_31 = (0x0892392Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 730u, 0x08907350u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892392Cu) goto L_0892392C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892392C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08923944;
      }
      goto L_08923934;
    }
L_08923934:
    aot_gpr_31 = (0x0892393Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 383u, 0x08905C3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892393Cu) goto L_0892393C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892393C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0892394C;
      }
      goto L_08923944;
    }
L_08923944:
    aot_gpr_31 = (0x0892394Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 854u, 0x0890B608u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892394Cu) goto L_0892394C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892394C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1300), 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 144u, 0x089246E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08923954;
    }
L_08923954:
    aot_gpr_31 = (0x0892395Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 33u, 0x089081BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892395Cu) goto L_0892395C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892395C:
    aot_gpr_31 = (0x08923964u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0068_entry, 68u, 124u, 0x08914E30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923964u) goto L_08923964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923964:
    aot_gpr_31 = (0x0892396Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892396Cu) goto L_0892396C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892396C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0892398C;
      }
      goto L_0892397C;
    }
L_0892397C:
    aot_gpr_31 = (0x08923984u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 258u, 0x08919480u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923984u) goto L_08923984;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923984:
    aot_gpr_31 = (0x0892398Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 839u, 0x08907AECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892398Cu) goto L_0892398C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892398C:
    aot_gpr_31 = (0x08923994u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 349u, 0x08919CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923994u) goto L_08923994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923994:
    aot_gpr_31 = (0x0892399Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0892399Cu) goto L_0892399C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0892399C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089239AC;
      }
      goto L_089239A4;
    }
L_089239A4:
    aot_gpr_31 = (0x089239ACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 395u, 0x088B9DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089239ACu) goto L_089239AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089239AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x089239C4u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089239C4u) goto L_089239C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089239C4:
    aot_gpr_31 = (0x089239CCu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 414u, 0x08905FD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089239CCu) goto L_089239CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089239CC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08923A54;
      }
      goto L_089239D4;
    }
L_089239D4:
    aot_gpr_31 = (0x089239DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089239DCu) goto L_089239DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089239DC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08923A54;
      }
      goto L_089239E4;
    }
L_089239E4:
    aot_gpr_31 = (0x089239ECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 521u, 0x08909F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089239ECu) goto L_089239EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089239EC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08923A54;
      }
      goto L_089239F4;
    }
L_089239F4:
    aot_gpr_31 = (0x089239FCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 404u, 0x08905EE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089239FCu) goto L_089239FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089239FC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08923A54;
      }
      goto L_08923A04;
    }
L_08923A04:
    aot_gpr_31 = (0x08923A0Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 467u, 0x08909C20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923A0Cu) goto L_08923A0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923A0C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08923A28;
      }
      goto L_08923A14;
    }
L_08923A14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
      if (branch_taken) {
          goto L_08923A54;
      }
      goto L_08923A28;
    }
L_08923A28:
    aot_gpr_31 = (0x08923A30u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 491u, 0x08909D3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923A30u) goto L_08923A30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923A30:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08923A54;
      }
      goto L_08923A38;
    }
L_08923A38:
    aot_gpr_31 = (0x08923A40u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 509u, 0x08909EBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923A40u) goto L_08923A40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923A40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (57344u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    goto L_08923A54;
L_08923A54:
    aot_gpr_31 = (0x08923A5Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0177_entry, 177u, 29u, 0x08AC811Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923A5Cu) goto L_08923A5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923A5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08923BD8;
      }
      goto L_08923A6C;
    }
L_08923A6C:
    aot_gpr_31 = (0x08923A74u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923A74u) goto L_08923A74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923A74:
    aot_gpr_31 = (0x08923A7Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923A7Cu) goto L_08923A7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923A7C:
    aot_gpr_31 = (0x08923A84u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923A84u) goto L_08923A84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923A84:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_31 = (0x08923A98u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923A98u) goto L_08923A98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923A98:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08923ADC;
      }
      goto L_08923AA0;
    }
L_08923AA0:
    aot_gpr_31 = (0x08923AA8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923AA8u) goto L_08923AA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923AA8:
    aot_gpr_31 = (0x08923AB0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923AB0u) goto L_08923AB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923AB0:
    aot_gpr_4 = (0u | 24u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08923AD8;
      }
      goto L_08923ABC;
    }
L_08923ABC:
    aot_gpr_31 = (0x08923AC4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923AC4u) goto L_08923AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923AC4:
    aot_gpr_31 = (0x08923ACCu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923ACCu) goto L_08923ACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923ACC:
    aot_gpr_4 = (0u | 26u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08923ADC;
      }
      goto L_08923AD8;
    }
L_08923AD8:
    ctx.gpr[20] = (0u | 1u);
    goto L_08923ADC;
L_08923ADC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08923B2C;
      }
      goto L_08923AE4;
    }
L_08923AE4:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08923AF0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 393u, 0x08905D74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923AF0u) goto L_08923AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923AF0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08923B00u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923B00u) goto L_08923B00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923B00:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08923B2C;
      }
      goto L_08923B0C;
    }
L_08923B0C:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08923B18u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 391u, 0x08905D50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923B18u) goto L_08923B18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923B18:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08923B28u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923B28u) goto L_08923B28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923B28:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    goto L_08923B2C;
L_08923B2C:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(816));
    aot_gpr_31 = (0x08923B38u);
    aot_gpr_5 = (0u | 248u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 413u, 0x08905FC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923B38u) goto L_08923B38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923B38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08923B68;
      }
      goto L_08923B48;
    }
L_08923B48:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08923B68;
      }
      goto L_08923B50;
    }
L_08923B50:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_08923B68;
      }
      goto L_08923B58;
    }
L_08923B58:
    aot_gpr_31 = (0x08923B60u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 352u, 0x089094C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923B60u) goto L_08923B60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923B60:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08923B80;
      }
      goto L_08923B68;
    }
L_08923B68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08923B80;
      }
      goto L_08923B78;
    }
L_08923B78:
    aot_gpr_31 = (0x08923B80u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 387u, 0x089096B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923B80u) goto L_08923B80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923B80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08923BC0;
      }
      goto L_08923B90;
    }
L_08923B90:
    aot_gpr_31 = (0x08923B98u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923B98u) goto L_08923B98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923B98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08923BC0;
      }
      goto L_08923BA8;
    }
L_08923BA8:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_08923BC0;
      }
      goto L_08923BB0;
    }
L_08923BB0:
    aot_gpr_31 = (0x08923BB8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 678u, 0x0891BD30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923BB8u) goto L_08923BB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923BB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08923BD8;
      }
      goto L_08923BC0;
    }
L_08923BC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08923BD8;
      }
      goto L_08923BD0;
    }
L_08923BD0:
    aot_gpr_31 = (0x08923BD8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 426u, 0x08909950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923BD8u) goto L_08923BD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923BD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08923BF0;
      }
      goto L_08923BE8;
    }
L_08923BE8:
    aot_gpr_31 = (0x08923BF0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 522u, 0x08909F84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923BF0u) goto L_08923BF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923BF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (32u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08923C7C;
      }
      goto L_08923C04;
    }
L_08923C04:
    aot_gpr_31 = (0x08923C0Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923C0Cu) goto L_08923C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923C0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 46u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08923C7C;
      }
      goto L_08923C1C;
    }
L_08923C1C:
    aot_gpr_31 = (0x08923C24u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923C24u) goto L_08923C24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923C24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 45u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08923C7C;
      }
      goto L_08923C34;
    }
L_08923C34:
    aot_gpr_31 = (0x08923C3Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923C3Cu) goto L_08923C3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923C3C:
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08923C54u);
    aot_fpr_12 = ctx.fpr[0] - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 700u, 0x08907134u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923C54u) goto L_08923C54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923C54:
    aot_gpr_31 = (0x08923C5Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923C5Cu) goto L_08923C5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923C5C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08923C68u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923C68u) goto L_08923C68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923C68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (65504u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_08923C7C;
L_08923C7C:
    aot_gpr_31 = (0x08923C84u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 281u, 0x08909054u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923C84u) goto L_08923C84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923C84:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08923C94;
      }
      goto L_08923C8C;
    }
L_08923C8C:
    aot_gpr_31 = (0x08923C94u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0073_entry, 73u, 450u, 0x08929EE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923C94u) goto L_08923C94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923C94:
    aot_gpr_31 = (0x08923C9Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 317u, 0x088E957Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923C9Cu) goto L_08923C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923C9C:
    aot_gpr_31 = (0x08923CA4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923CA4u) goto L_08923CA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923CA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(68) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08923CB8;
    }
L_08923CB8:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12448)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08923CD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1364)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08923D28;
      }
      goto L_08923CE4;
    }
L_08923CE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08923CF4u);
    aot_gpr_6 = (0u | 157u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923CF4u) goto L_08923CF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923CF4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08923D60;
      }
      goto L_08923CFC;
    }
L_08923CFC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08923D10u);
    ctx.gpr[7] = (0u | 157u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923D10u) goto L_08923D10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923D10:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 118u);
    aot_gpr_31 = (0x08923D20u);
    aot_gpr_6 = (0u | 1500u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 294u, 0x0891108Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923D20u) goto L_08923D20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923D20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08923D60;
      }
      goto L_08923D28;
    }
L_08923D28:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08923D38u);
    aot_gpr_6 = (0u | 156u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923D38u) goto L_08923D38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923D38:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08923D60;
      }
      goto L_08923D40;
    }
L_08923D40:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08923D54u);
    ctx.gpr[7] = (0u | 156u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923D54u) goto L_08923D54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923D54:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08923D60u);
    aot_gpr_5 = (0u | 118u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923D60u) goto L_08923D60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923D60:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08923D68;
    }
L_08923D68:
    aot_gpr_31 = (0x08923D70u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 70u, 0x0891C44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923D70u) goto L_08923D70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923D70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08923D78;
    }
L_08923D78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08923D80;
    }
L_08923D80:
    aot_gpr_31 = (0x08923D88u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 736u, 0x0890ADC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923D88u) goto L_08923D88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923D88:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08923D98;
      }
      goto L_08923D90;
    }
L_08923D90:
    aot_gpr_31 = (0x08923D98u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 748u, 0x0890AE94u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923D98u) goto L_08923D98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923D98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08923DA0;
    }
L_08923DA0:
    aot_gpr_31 = (0x08923DA8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 296u, 0x089A9900u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923DA8u) goto L_08923DA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923DA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08923DB0;
    }
L_08923DB0:
    aot_gpr_31 = (0x08923DB8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923DB8u) goto L_08923DB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923DB8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08923E28;
      }
      goto L_08923DC0;
    }
L_08923DC0:
    aot_gpr_31 = (0x08923DC8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923DC8u) goto L_08923DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923DC8:
    aot_gpr_4 = (0u | 17u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08923DE8;
      }
      goto L_08923DD4;
    }
L_08923DD4:
    aot_gpr_31 = (0x08923DDCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923DDCu) goto L_08923DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923DDC:
    aot_gpr_4 = (0u | 18u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08923DF0;
      }
      goto L_08923DE8;
    }
L_08923DE8:
    aot_gpr_31 = (0x08923DF0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923DF0u) goto L_08923DF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923DF0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08923DFCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923DFCu) goto L_08923DFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923DFC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08923E08u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923E08u) goto L_08923E08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923E08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(160));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08923E20u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923E20u) goto L_08923E20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923E20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 144u, 0x089246E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08923E28;
    }
L_08923E28:
    aot_gpr_31 = (0x08923E30u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923E30u) goto L_08923E30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923E30:
    aot_gpr_31 = (0x08923E38u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 409u, 0x08905F98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923E38u) goto L_08923E38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923E38:
    { const bool branch_taken = aot_gpr_2 != aot_gpr_16;
      if (branch_taken) {
          goto L_08923E78;
      }
      goto L_08923E40;
    }
L_08923E40:
    aot_gpr_31 = (0x08923E48u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 532u, 0x088E3B94u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923E48u) goto L_08923E48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923E48:
    aot_gpr_31 = (0x08923E50u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923E50u) goto L_08923E50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923E50:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08923E70;
      }
      goto L_08923E58;
    }
L_08923E58:
    aot_gpr_31 = (0x08923E60u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923E60u) goto L_08923E60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923E60:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08923E90;
      }
      goto L_08923E68;
    }
L_08923E68:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08923F08;
      }
      goto L_08923E70;
    }
L_08923E70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 144u, 0x089246E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08923E78;
    }
L_08923E78:
    aot_gpr_31 = (0x08923E80u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 324u, 0x0890D498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923E80u) goto L_08923E80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923E80:
    aot_gpr_31 = (0x08923E88u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 344u, 0x0890D654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923E88u) goto L_08923E88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923E88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08923E58;
      }
      goto L_08923E90;
    }
L_08923E90:
    aot_gpr_31 = (0x08923E98u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923E98u) goto L_08923E98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923E98:
    aot_gpr_31 = (0x08923EA0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 408u, 0x08905F90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923EA0u) goto L_08923EA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923EA0:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08923F08;
      }
      goto L_08923EAC;
    }
L_08923EAC:
    aot_gpr_31 = (0x08923EB4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923EB4u) goto L_08923EB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923EB4:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(1300)));
    aot_gpr_31 = (0x08923EC0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923EC0u) goto L_08923EC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923EC0:
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_2;
      if (branch_taken) {
          goto L_08923F08;
      }
      goto L_08923EC8;
    }
L_08923EC8:
    aot_gpr_31 = (0x08923ED0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 415u, 0x08905FE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923ED0u) goto L_08923ED0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923ED0:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08923EF0;
      }
      goto L_08923EDC;
    }
L_08923EDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (4096u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08923F08;
      }
      goto L_08923EF0;
    }
L_08923EF0:
    aot_gpr_31 = (0x08923EF8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923EF8u) goto L_08923EF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923EF8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 50u);
    aot_gpr_31 = (0x08923F08u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923F08u) goto L_08923F08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923F08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08923F10;
    }
L_08923F10:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08923F18;
    }
L_08923F18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08923F20;
    }
L_08923F20:
    aot_gpr_31 = (0x08923F28u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 145u, 0x08924728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923F28u) goto L_08923F28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923F28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08923F30;
    }
L_08923F30:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08923F38;
    }
L_08923F38:
    aot_gpr_31 = (0x08923F40u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923F40u) goto L_08923F40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923F40:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08923FB4;
      }
      goto L_08923F48;
    }
L_08923F48:
    aot_gpr_31 = (0x08923F50u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923F50u) goto L_08923F50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923F50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08923FCC;
      }
      goto L_08923F60;
    }
L_08923F60:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(8864));
    aot_gpr_31 = (0x08923F6Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923F6Cu) goto L_08923F6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923F6C:
    aot_gpr_31 = (0x08923F74u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923F74u) goto L_08923F74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923F74:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    aot_gpr_31 = (0x08923F80u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 364u, 0x08905AC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923F80u) goto L_08923F80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923F80:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(1032));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), aot_gpr_6);
    aot_gpr_31 = (0x08923FA4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923FA4u) goto L_08923FA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923FA4:
    aot_gpr_31 = (0x08923FACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0068_entry, 68u, 665u, 0x08917990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923FACu) goto L_08923FAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923FAC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08923FCC;
      }
      goto L_08923FB4;
    }
L_08923FB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(468), aot_gpr_4);
    aot_gpr_31 = (0x08923FCCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923FCCu) goto L_08923FCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923FCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08923FD4;
    }
L_08923FD4:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(8864));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(1048));
    aot_gpr_31 = (0x08923FE4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 15u, 0x089100C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08923FE4u) goto L_08923FE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08923FE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1024), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), aot_gpr_6);
    ctx.pc = 0x08924000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0071(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0071_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_71(Runtime &runtime) {
    runtime.register_generated_unit(71u, 0x08920000u, 16384u, &recomp_unit_0071, &recomp_unit_0071_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08920000u, &recomp_unit_0071, "recomp_unit_0071",
                                          kEntryMasks_recomp_unit_0071, 64u);
}
} // namespace psprecomp
