#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0028[64] = {
    0x50412A541289500Dull, 0x20160204954AA805ull, 0x081020A8A020AA4Bull, 0x082004081020A004ull,
    0x0828010204082A28ull, 0x204A900208010204ull, 0x14A4114905285289ull, 0x14A955650452A941ull,
    0x681411008314D804ull, 0x02A8154A8A815549ull, 0xAD02B40AD02B40ADull, 0x9044840106D02B40ull,
    0xA55514A952A55496ull, 0xA488A84A1140200Dull, 0x4294400832510952ull, 0xAA4A900AD24B4B4Bull,
    0x251004A484408B84ull, 0x8B914AA4AAD5C255ull, 0x92488A2E12A92A54ull, 0x2A9A255248B91548ull,
    0x251122E455224922ull, 0xD10B84A12552D22Dull, 0x1400428A00B554A2ull, 0xD24A2A88B84AA004ull,
    0x40810528AD24908Aull, 0xB4A2B492AA010020ull, 0x4569245548A2B492ull, 0x422B492445692552ull,
    0x040822B492A2B492ull, 0x2B492A2B49280102ull, 0x0940016922840202ull, 0xB8226A8815554A90ull,
    0x4AA5697044C11134ull, 0x8982226952204925ull, 0xA690010A451A12E0ull, 0x440924A954800010ull,
    0x6053555541114684ull, 0x4404D245448A9022ull, 0xC62448A1121518C4ull, 0x2B8226088B82234Cull,
    0x48A2914914524495ull, 0x2944082A90822455ull, 0x988A290148A2948Aull, 0x145202A228A40454ull,
    0xAA4544514808A931ull, 0x848254922095248Aull, 0xA491228A32914210ull, 0x5492544A4554244Aull,
    0x442295150A451254ull, 0x28A5080885522840ull, 0x4548A248A4512452ull, 0x1108A4514A4514AAull,
    0x4912545082008A10ull, 0x2245548A248A48A2ull, 0x929144944082A908ull, 0x022A4C4512405228ull,
    0x5262289202A22892ull, 0x922AA91511449011ull, 0x1102120952488254ull, 0x44AA49122891948Aull,
    0x4951524951291558ull, 0xA1100888B0542914ull, 0x552291449148A248ull, 0x25522A4512508804ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0028[64] = {
    1u, 21u, 39u, 56u, 65u, 77u, 88u, 108u, 132u, 149u, 171u, 196u, 213u, 241u, 259u, 277u,
    304u, 321u, 350u, 374u, 399u, 421u, 447u, 465u, 487u, 506u, 526u, 551u, 575u, 596u, 617u, 631u,
    655u, 679u, 700u, 720u, 735u, 758u, 777u, 798u, 820u, 842u, 861u, 882u, 900u, 922u, 942u, 962u,
    985u, 1006u, 1023u, 1044u, 1065u, 1081u, 1102u, 1121u, 1139u, 1159u, 1180u, 1197u, 1219u, 1243u, 1261u, 1282u,
};
void recomp_unit_0028_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,31,2,5,6,17 fprs=12,13,14,15 gpr_occ=4815 fpr_occ=60 gpr_total=6093 fpr_total=62
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_17 = ctx.gpr[17];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[31] = aot_gpr_31; ctx.gpr[2] = aot_gpr_2; ctx.gpr[5] = aot_gpr_5; ctx.gpr[6] = aot_gpr_6; ctx.gpr[17] = aot_gpr_17; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_2 = ctx.gpr[2]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_17 = ctx.gpr[17]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08874000u;
        entry_id = 0u;
        if (entry_delta < 16376u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0028[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0028[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08874000;
    case 2u: goto L_08874008;
    case 3u: goto L_0887400C;
    case 4u: goto L_08874030;
    case 5u: goto L_08874038;
    case 6u: goto L_08874040;
    case 7u: goto L_0887404C;
    case 8u: goto L_0887405C;
    case 9u: goto L_08874064;
    case 10u: goto L_08874070;
    case 11u: goto L_08874088;
    case 12u: goto L_08874090;
    case 13u: goto L_08874098;
    case 14u: goto L_088740A4;
    case 15u: goto L_088740AC;
    case 16u: goto L_088740B4;
    case 17u: goto L_088740C0;
    case 18u: goto L_088740D8;
    case 19u: goto L_088740F0;
    case 20u: goto L_088740F8;
    case 21u: goto L_08874100;
    case 22u: goto L_08874108;
    case 23u: goto L_0887412C;
    case 24u: goto L_08874134;
    case 25u: goto L_0887413C;
    case 26u: goto L_08874144;
    case 27u: goto L_0887414C;
    case 28u: goto L_08874158;
    case 29u: goto L_08874160;
    case 30u: goto L_08874168;
    case 31u: goto L_08874170;
    case 32u: goto L_0887417C;
    case 33u: goto L_08874188;
    case 34u: goto L_088741A4;
    case 35u: goto L_088741C4;
    case 36u: goto L_088741C8;
    case 37u: goto L_088741D0;
    case 38u: goto L_088741F4;
    case 39u: goto L_08874200;
    case 40u: goto L_08874204;
    case 41u: goto L_0887420C;
    case 42u: goto L_08874218;
    case 43u: goto L_08874224;
    case 44u: goto L_0887422C;
    case 45u: goto L_08874234;
    case 46u: goto L_0887423C;
    case 47u: goto L_08874254;
    case 48u: goto L_08874274;
    case 49u: goto L_0887427C;
    case 50u: goto L_0887428C;
    case 51u: goto L_08874294;
    case 52u: goto L_0887429C;
    case 53u: goto L_088742B4;
    case 54u: goto L_088742D0;
    case 55u: goto L_088742EC;
    case 56u: goto L_08874308;
    case 57u: goto L_08874334;
    case 58u: goto L_0887433C;
    case 59u: goto L_08874354;
    case 60u: goto L_08874370;
    case 61u: goto L_0887438C;
    case 62u: goto L_088743A8;
    case 63u: goto L_088743D4;
    case 64u: goto L_088743EC;
    case 65u: goto L_0887440C;
    case 66u: goto L_08874414;
    case 67u: goto L_08874424;
    case 68u: goto L_0887442C;
    case 69u: goto L_08874434;
    case 70u: goto L_0887444C;
    case 71u: goto L_08874468;
    case 72u: goto L_08874484;
    case 73u: goto L_088744A0;
    case 74u: goto L_088744CC;
    case 75u: goto L_088744D4;
    case 76u: goto L_088744EC;
    case 77u: goto L_08874508;
    case 78u: goto L_08874524;
    case 79u: goto L_08874540;
    case 80u: goto L_0887456C;
    case 81u: goto L_08874584;
    case 82u: goto L_088745B0;
    case 83u: goto L_088745BC;
    case 84u: goto L_088745C4;
    case 85u: goto L_088745CC;
    case 86u: goto L_088745D8;
    case 87u: goto L_088745F4;
    case 88u: goto L_08874600;
    case 89u: goto L_0887460C;
    case 90u: goto L_0887461C;
    case 91u: goto L_08874624;
    case 92u: goto L_08874630;
    case 93u: goto L_08874638;
    case 94u: goto L_0887464C;
    case 95u: goto L_08874654;
    case 96u: goto L_08874660;
    case 97u: goto L_08874668;
    case 98u: goto L_08874680;
    case 99u: goto L_0887468C;
    case 100u: goto L_08874698;
    case 101u: goto L_088746A0;
    case 102u: goto L_088746B0;
    case 103u: goto L_088746C8;
    case 104u: goto L_088746D4;
    case 105u: goto L_088746DC;
    case 106u: goto L_088746E8;
    case 107u: goto L_088746F0;
    case 108u: goto L_08874700;
    case 109u: goto L_08874718;
    case 110u: goto L_08874720;
    case 111u: goto L_0887472C;
    case 112u: goto L_08874734;
    case 113u: goto L_0887473C;
    case 114u: goto L_08874744;
    case 115u: goto L_08874750;
    case 116u: goto L_08874758;
    case 117u: goto L_08874768;
    case 118u: goto L_08874780;
    case 119u: goto L_08874788;
    case 120u: goto L_08874794;
    case 121u: goto L_08874798;
    case 122u: goto L_088747A0;
    case 123u: goto L_088747A8;
    case 124u: goto L_088747B0;
    case 125u: goto L_088747B8;
    case 126u: goto L_088747C0;
    case 127u: goto L_088747CC;
    case 128u: goto L_088747D4;
    case 129u: goto L_088747DC;
    case 130u: goto L_088747E8;
    case 131u: goto L_088747F0;
    case 132u: goto L_08874808;
    case 133u: goto L_0887482C;
    case 134u: goto L_08874830;
    case 135u: goto L_08874838;
    case 136u: goto L_0887483C;
    case 137u: goto L_08874848;
    case 138u: goto L_08874850;
    case 139u: goto L_08874860;
    case 140u: goto L_08874864;
    case 141u: goto L_0887487C;
    case 142u: goto L_088748A0;
    case 143u: goto L_088748B0;
    case 144u: goto L_088748C8;
    case 145u: goto L_088748D0;
    case 146u: goto L_088748EC;
    case 147u: goto L_088748F4;
    case 148u: goto L_088748F8;
    case 149u: goto L_08874900;
    case 150u: goto L_0887490C;
    case 151u: goto L_08874918;
    case 152u: goto L_08874920;
    case 153u: goto L_08874928;
    case 154u: goto L_08874930;
    case 155u: goto L_08874938;
    case 156u: goto L_08874940;
    case 157u: goto L_0887495C;
    case 158u: goto L_08874964;
    case 159u: goto L_0887496C;
    case 160u: goto L_0887497C;
    case 161u: goto L_08874984;
    case 162u: goto L_0887498C;
    case 163u: goto L_08874998;
    case 164u: goto L_088749A0;
    case 165u: goto L_088749A8;
    case 166u: goto L_088749B0;
    case 167u: goto L_088749CC;
    case 168u: goto L_088749D4;
    case 169u: goto L_088749DC;
    case 170u: goto L_088749E4;
    case 171u: goto L_08874A00;
    case 172u: goto L_08874A08;
    case 173u: goto L_08874A0C;
    case 174u: goto L_08874A14;
    case 175u: goto L_08874A1C;
    case 176u: goto L_08874A38;
    case 177u: goto L_08874A40;
    case 178u: goto L_08874A44;
    case 179u: goto L_08874A4C;
    case 180u: goto L_08874A54;
    case 181u: goto L_08874A70;
    case 182u: goto L_08874A78;
    case 183u: goto L_08874A7C;
    case 184u: goto L_08874A84;
    case 185u: goto L_08874A8C;
    case 186u: goto L_08874AA8;
    case 187u: goto L_08874AB0;
    case 188u: goto L_08874AB4;
    case 189u: goto L_08874ABC;
    case 190u: goto L_08874AC4;
    case 191u: goto L_08874AE0;
    case 192u: goto L_08874AE8;
    case 193u: goto L_08874AEC;
    case 194u: goto L_08874AF4;
    case 195u: goto L_08874AFC;
    case 196u: goto L_08874B18;
    case 197u: goto L_08874B20;
    case 198u: goto L_08874B24;
    case 199u: goto L_08874B2C;
    case 200u: goto L_08874B34;
    case 201u: goto L_08874B50;
    case 202u: goto L_08874B58;
    case 203u: goto L_08874B5C;
    case 204u: goto L_08874B64;
    case 205u: goto L_08874B68;
    case 206u: goto L_08874B80;
    case 207u: goto L_08874BA8;
    case 208u: goto L_08874BBC;
    case 209u: goto L_08874BC8;
    case 210u: goto L_08874BD8;
    case 211u: goto L_08874BF0;
    case 212u: goto L_08874BFC;
    case 213u: goto L_08874C04;
    case 214u: goto L_08874C08;
    case 215u: goto L_08874C10;
    case 216u: goto L_08874C1C;
    case 217u: goto L_08874C28;
    case 218u: goto L_08874C30;
    case 219u: goto L_08874C38;
    case 220u: goto L_08874C40;
    case 221u: goto L_08874C48;
    case 222u: goto L_08874C54;
    case 223u: goto L_08874C5C;
    case 224u: goto L_08874C64;
    case 225u: goto L_08874C70;
    case 226u: goto L_08874C78;
    case 227u: goto L_08874C80;
    case 228u: goto L_08874C8C;
    case 229u: goto L_08874C94;
    case 230u: goto L_08874C9C;
    case 231u: goto L_08874CA8;
    case 232u: goto L_08874CB0;
    case 233u: goto L_08874CC0;
    case 234u: goto L_08874CC8;
    case 235u: goto L_08874CD0;
    case 236u: goto L_08874CD8;
    case 237u: goto L_08874CE0;
    case 238u: goto L_08874CE8;
    case 239u: goto L_08874CF4;
    case 240u: goto L_08874CFC;
    case 241u: goto L_08874D00;
    case 242u: goto L_08874D08;
    case 243u: goto L_08874D0C;
    case 244u: goto L_08874D34;
    case 245u: goto L_08874D58;
    case 246u: goto L_08874D60;
    case 247u: goto L_08874D70;
    case 248u: goto L_08874D84;
    case 249u: goto L_08874D8C;
    case 250u: goto L_08874D98;
    case 251u: goto L_08874DAC;
    case 252u: goto L_08874DB4;
    case 253u: goto L_08874DBC;
    case 254u: goto L_08874DCC;
    case 255u: goto L_08874DDC;
    case 256u: goto L_08874DE8;
    case 257u: goto L_08874DF4;
    case 258u: goto L_08874DFC;
    case 259u: goto L_08874E04;
    case 260u: goto L_08874E10;
    case 261u: goto L_08874E18;
    case 262u: goto L_08874E20;
    case 263u: goto L_08874E2C;
    case 264u: goto L_08874E40;
    case 265u: goto L_08874E50;
    case 266u: goto L_08874E58;
    case 267u: goto L_08874E64;
    case 268u: goto L_08874E70;
    case 269u: goto L_08874E74;
    case 270u: goto L_08874E8C;
    case 271u: goto L_08874EB8;
    case 272u: goto L_08874EC8;
    case 273u: goto L_08874ED0;
    case 274u: goto L_08874EDC;
    case 275u: goto L_08874EE4;
    case 276u: goto L_08874EF8;
    case 277u: goto L_08874F00;
    case 278u: goto L_08874F04;
    case 279u: goto L_08874F0C;
    case 280u: goto L_08874F18;
    case 281u: goto L_08874F20;
    case 282u: goto L_08874F24;
    case 283u: goto L_08874F2C;
    case 284u: goto L_08874F38;
    case 285u: goto L_08874F40;
    case 286u: goto L_08874F44;
    case 287u: goto L_08874F4C;
    case 288u: goto L_08874F58;
    case 289u: goto L_08874F64;
    case 290u: goto L_08874F70;
    case 291u: goto L_08874F78;
    case 292u: goto L_08874F7C;
    case 293u: goto L_08874F84;
    case 294u: goto L_08874F8C;
    case 295u: goto L_08874FB0;
    case 296u: goto L_08874FBC;
    case 297u: goto L_08874FC4;
    case 298u: goto L_08874FCC;
    case 299u: goto L_08874FD8;
    case 300u: goto L_08874FE4;
    case 301u: goto L_08874FEC;
    case 302u: goto L_08874FF4;
    case 303u: goto L_08874FFC;
    case 304u: goto L_08875008;
    case 305u: goto L_0887501C;
    case 306u: goto L_08875020;
    case 307u: goto L_08875024;
    case 308u: goto L_0887502C;
    case 309u: goto L_0887503C;
    case 310u: goto L_08875058;
    case 311u: goto L_08875068;
    case 312u: goto L_0887507C;
    case 313u: goto L_08875088;
    case 314u: goto L_08875094;
    case 315u: goto L_0887509C;
    case 316u: goto L_088750A8;
    case 317u: goto L_088750D0;
    case 318u: goto L_088750E0;
    case 319u: goto L_088750E8;
    case 320u: goto L_088750F4;
    case 321u: goto L_08875100;
    case 322u: goto L_08875108;
    case 323u: goto L_08875110;
    case 324u: goto L_08875118;
    case 325u: goto L_08875124;
    case 326u: goto L_08875138;
    case 327u: goto L_0887513C;
    case 328u: goto L_08875140;
    case 329u: goto L_08875148;
    case 330u: goto L_08875150;
    case 331u: goto L_08875158;
    case 332u: goto L_0887515C;
    case 333u: goto L_08875164;
    case 334u: goto L_0887516C;
    case 335u: goto L_08875174;
    case 336u: goto L_0887517C;
    case 337u: goto L_08875188;
    case 338u: goto L_08875194;
    case 339u: goto L_0887519C;
    case 340u: goto L_088751A4;
    case 341u: goto L_088751AC;
    case 342u: goto L_088751B8;
    case 343u: goto L_088751C0;
    case 344u: goto L_088751D0;
    case 345u: goto L_088751DC;
    case 346u: goto L_088751E0;
    case 347u: goto L_088751E4;
    case 348u: goto L_088751EC;
    case 349u: goto L_088751FC;
    case 350u: goto L_08875208;
    case 351u: goto L_08875210;
    case 352u: goto L_08875218;
    case 353u: goto L_08875224;
    case 354u: goto L_0887522C;
    case 355u: goto L_08875234;
    case 356u: goto L_08875240;
    case 357u: goto L_0887524C;
    case 358u: goto L_08875254;
    case 359u: goto L_0887525C;
    case 360u: goto L_08875264;
    case 361u: goto L_08875270;
    case 362u: goto L_08875284;
    case 363u: goto L_08875288;
    case 364u: goto L_0887528C;
    case 365u: goto L_08875294;
    case 366u: goto L_088752A4;
    case 367u: goto L_088752AC;
    case 368u: goto L_088752BC;
    case 369u: goto L_088752CC;
    case 370u: goto L_088752D8;
    case 371u: goto L_088752E4;
    case 372u: goto L_088752F0;
    case 373u: goto L_088752FC;
    case 374u: goto L_0887530C;
    case 375u: goto L_08875318;
    case 376u: goto L_08875320;
    case 377u: goto L_08875328;
    case 378u: goto L_08875330;
    case 379u: goto L_08875340;
    case 380u: goto L_0887534C;
    case 381u: goto L_08875350;
    case 382u: goto L_08875354;
    case 383u: goto L_0887535C;
    case 384u: goto L_0887536C;
    case 385u: goto L_08875378;
    case 386u: goto L_08875384;
    case 387u: goto L_08875390;
    case 388u: goto L_08875398;
    case 389u: goto L_088753A0;
    case 390u: goto L_088753A8;
    case 391u: goto L_088753B4;
    case 392u: goto L_088753C4;
    case 393u: goto L_088753CC;
    case 394u: goto L_088753D0;
    case 395u: goto L_088753DC;
    case 396u: goto L_088753E4;
    case 397u: goto L_088753EC;
    case 398u: goto L_088753F4;
    case 399u: goto L_08875404;
    case 400u: goto L_08875414;
    case 401u: goto L_08875420;
    case 402u: goto L_0887542C;
    case 403u: goto L_08875438;
    case 404u: goto L_08875444;
    case 405u: goto L_08875454;
    case 406u: goto L_08875460;
    case 407u: goto L_08875468;
    case 408u: goto L_08875470;
    case 409u: goto L_08875478;
    case 410u: goto L_08875488;
    case 411u: goto L_08875494;
    case 412u: goto L_08875498;
    case 413u: goto L_0887549C;
    case 414u: goto L_088754A4;
    case 415u: goto L_088754B4;
    case 416u: goto L_088754C0;
    case 417u: goto L_088754D0;
    case 418u: goto L_088754E0;
    case 419u: goto L_088754E8;
    case 420u: goto L_088754F4;
    case 421u: goto L_08875500;
    case 422u: goto L_08875508;
    case 423u: goto L_0887550C;
    case 424u: goto L_08875514;
    case 425u: goto L_08875524;
    case 426u: goto L_08875530;
    case 427u: goto L_08875538;
    case 428u: goto L_0887553C;
    case 429u: goto L_08875544;
    case 430u: goto L_08875550;
    case 431u: goto L_08875558;
    case 432u: goto L_08875560;
    case 433u: goto L_08875568;
    case 434u: goto L_08875574;
    case 435u: goto L_08875580;
    case 436u: goto L_08875594;
    case 437u: goto L_0887559C;
    case 438u: goto L_088755A8;
    case 439u: goto L_088755BC;
    case 440u: goto L_088755C0;
    case 441u: goto L_088755C4;
    case 442u: goto L_088755CC;
    case 443u: goto L_088755E0;
    case 444u: goto L_088755F0;
    case 445u: goto L_088755F8;
    case 446u: goto L_088755FC;
    case 447u: goto L_08875604;
    case 448u: goto L_08875614;
    case 449u: goto L_0887561C;
    case 450u: goto L_08875628;
    case 451u: goto L_08875630;
    case 452u: goto L_08875638;
    case 453u: goto L_08875640;
    case 454u: goto L_08875648;
    case 455u: goto L_08875650;
    case 456u: goto L_08875654;
    case 457u: goto L_0887565C;
    case 458u: goto L_08875684;
    case 459u: goto L_0887568C;
    case 460u: goto L_0887569C;
    case 461u: goto L_088756A4;
    case 462u: goto L_088756B8;
    case 463u: goto L_088756E8;
    case 464u: goto L_088756F0;
    case 465u: goto L_08875708;
    case 466u: goto L_08875734;
    case 467u: goto L_0887573C;
    case 468u: goto L_08875744;
    case 469u: goto L_0887574C;
    case 470u: goto L_08875758;
    case 471u: goto L_0887576C;
    case 472u: goto L_08875770;
    case 473u: goto L_08875774;
    case 474u: goto L_0887577C;
    case 475u: goto L_0887578C;
    case 476u: goto L_0887579C;
    case 477u: goto L_088757A4;
    case 478u: goto L_088757AC;
    case 479u: goto L_088757B4;
    case 480u: goto L_088757C4;
    case 481u: goto L_088757CC;
    case 482u: goto L_088757D8;
    case 483u: goto L_088757E4;
    case 484u: goto L_088757F0;
    case 485u: goto L_088757F8;
    case 486u: goto L_088757FC;
    case 487u: goto L_08875804;
    case 488u: goto L_0887580C;
    case 489u: goto L_0887581C;
    case 490u: goto L_08875830;
    case 491u: goto L_0887583C;
    case 492u: goto L_08875848;
    case 493u: goto L_08875854;
    case 494u: goto L_08875860;
    case 495u: goto L_08875868;
    case 496u: goto L_0887586C;
    case 497u: goto L_08875874;
    case 498u: goto L_0887587C;
    case 499u: goto L_0887588C;
    case 500u: goto L_08875894;
    case 501u: goto L_088758A0;
    case 502u: goto L_088758A8;
    case 503u: goto L_088758C0;
    case 504u: goto L_088758DC;
    case 505u: goto L_088758F8;
    case 506u: goto L_08875914;
    case 507u: goto L_08875940;
    case 508u: goto L_08875964;
    case 509u: goto L_0887596C;
    case 510u: goto L_08875974;
    case 511u: goto L_0887597C;
    case 512u: goto L_08875984;
    case 513u: goto L_08875990;
    case 514u: goto L_0887599C;
    case 515u: goto L_088759A8;
    case 516u: goto L_088759B0;
    case 517u: goto L_088759B4;
    case 518u: goto L_088759BC;
    case 519u: goto L_088759C4;
    case 520u: goto L_088759D4;
    case 521u: goto L_088759DC;
    case 522u: goto L_088759E8;
    case 523u: goto L_088759F0;
    case 524u: goto L_088759F4;
    case 525u: goto L_088759FC;
    case 526u: goto L_08875A04;
    case 527u: goto L_08875A10;
    case 528u: goto L_08875A1C;
    case 529u: goto L_08875A28;
    case 530u: goto L_08875A30;
    case 531u: goto L_08875A34;
    case 532u: goto L_08875A3C;
    case 533u: goto L_08875A44;
    case 534u: goto L_08875A54;
    case 535u: goto L_08875A5C;
    case 536u: goto L_08875A6C;
    case 537u: goto L_08875A78;
    case 538u: goto L_08875A80;
    case 539u: goto L_08875A88;
    case 540u: goto L_08875A90;
    case 541u: goto L_08875A98;
    case 542u: goto L_08875AA8;
    case 543u: goto L_08875AB4;
    case 544u: goto L_08875AC0;
    case 545u: goto L_08875ACC;
    case 546u: goto L_08875AD4;
    case 547u: goto L_08875AD8;
    case 548u: goto L_08875AE0;
    case 549u: goto L_08875AE8;
    case 550u: goto L_08875AF8;
    case 551u: goto L_08875B04;
    case 552u: goto L_08875B10;
    case 553u: goto L_08875B18;
    case 554u: goto L_08875B20;
    case 555u: goto L_08875B28;
    case 556u: goto L_08875B34;
    case 557u: goto L_08875B40;
    case 558u: goto L_08875B4C;
    case 559u: goto L_08875B54;
    case 560u: goto L_08875B58;
    case 561u: goto L_08875B60;
    case 562u: goto L_08875B68;
    case 563u: goto L_08875B78;
    case 564u: goto L_08875B88;
    case 565u: goto L_08875B94;
    case 566u: goto L_08875BA0;
    case 567u: goto L_08875BAC;
    case 568u: goto L_08875BB8;
    case 569u: goto L_08875BC0;
    case 570u: goto L_08875BC4;
    case 571u: goto L_08875BCC;
    case 572u: goto L_08875BD4;
    case 573u: goto L_08875BE4;
    case 574u: goto L_08875BF8;
    case 575u: goto L_08875C04;
    case 576u: goto L_08875C10;
    case 577u: goto L_08875C1C;
    case 578u: goto L_08875C28;
    case 579u: goto L_08875C30;
    case 580u: goto L_08875C34;
    case 581u: goto L_08875C3C;
    case 582u: goto L_08875C44;
    case 583u: goto L_08875C54;
    case 584u: goto L_08875C5C;
    case 585u: goto L_08875C64;
    case 586u: goto L_08875C70;
    case 587u: goto L_08875C7C;
    case 588u: goto L_08875C88;
    case 589u: goto L_08875C90;
    case 590u: goto L_08875C94;
    case 591u: goto L_08875C9C;
    case 592u: goto L_08875CA4;
    case 593u: goto L_08875CB4;
    case 594u: goto L_08875CCC;
    case 595u: goto L_08875CE8;
    case 596u: goto L_08875D04;
    case 597u: goto L_08875D20;
    case 598u: goto L_08875D4C;
    case 599u: goto L_08875D54;
    case 600u: goto L_08875D60;
    case 601u: goto L_08875D6C;
    case 602u: goto L_08875D78;
    case 603u: goto L_08875D80;
    case 604u: goto L_08875D84;
    case 605u: goto L_08875D8C;
    case 606u: goto L_08875D94;
    case 607u: goto L_08875DA4;
    case 608u: goto L_08875DAC;
    case 609u: goto L_08875DB4;
    case 610u: goto L_08875DC0;
    case 611u: goto L_08875DCC;
    case 612u: goto L_08875DD8;
    case 613u: goto L_08875DE0;
    case 614u: goto L_08875DE4;
    case 615u: goto L_08875DEC;
    case 616u: goto L_08875DF4;
    case 617u: goto L_08875E04;
    case 618u: goto L_08875E24;
    case 619u: goto L_08875E48;
    case 620u: goto L_08875E5C;
    case 621u: goto L_08875E64;
    case 622u: goto L_08875E74;
    case 623u: goto L_08875E80;
    case 624u: goto L_08875E8C;
    case 625u: goto L_08875E94;
    case 626u: goto L_08875E98;
    case 627u: goto L_08875EA0;
    case 628u: goto L_08875ED8;
    case 629u: goto L_08875EE0;
    case 630u: goto L_08875EEC;
    case 631u: goto L_08875F10;
    case 632u: goto L_08875F1C;
    case 633u: goto L_08875F24;
    case 634u: goto L_08875F2C;
    case 635u: goto L_08875F38;
    case 636u: goto L_08875F40;
    case 637u: goto L_08875F48;
    case 638u: goto L_08875F50;
    case 639u: goto L_08875F58;
    case 640u: goto L_08875F60;
    case 641u: goto L_08875F68;
    case 642u: goto L_08875F70;
    case 643u: goto L_08875F8C;
    case 644u: goto L_08875F9C;
    case 645u: goto L_08875FA4;
    case 646u: goto L_08875FAC;
    case 647u: goto L_08875FB4;
    case 648u: goto L_08875FB8;
    case 649u: goto L_08875FC4;
    case 650u: goto L_08875FD4;
    case 651u: goto L_08875FEC;
    case 652u: goto L_08875FF0;
    case 653u: goto L_08875FF4;
    case 654u: goto L_08875FFC;
    case 655u: goto L_08876008;
    case 656u: goto L_08876010;
    case 657u: goto L_08876014;
    case 658u: goto L_08876020;
    case 659u: goto L_08876030;
    case 660u: goto L_08876040;
    case 661u: goto L_08876058;
    case 662u: goto L_0887605C;
    case 663u: goto L_08876068;
    case 664u: goto L_08876078;
    case 665u: goto L_08876090;
    case 666u: goto L_08876094;
    case 667u: goto L_08876098;
    case 668u: goto L_088760A0;
    case 669u: goto L_088760AC;
    case 670u: goto L_088760B4;
    case 671u: goto L_088760B8;
    case 672u: goto L_088760C0;
    case 673u: goto L_088760C8;
    case 674u: goto L_088760D4;
    case 675u: goto L_088760DC;
    case 676u: goto L_088760E4;
    case 677u: goto L_088760EC;
    case 678u: goto L_088760F8;
    case 679u: goto L_08876100;
    case 680u: goto L_08876108;
    case 681u: goto L_08876114;
    case 682u: goto L_08876120;
    case 683u: goto L_0887612C;
    case 684u: goto L_08876138;
    case 685u: goto L_08876154;
    case 686u: goto L_08876164;
    case 687u: goto L_08876170;
    case 688u: goto L_08876178;
    case 689u: goto L_08876180;
    case 690u: goto L_0887618C;
    case 691u: goto L_08876194;
    case 692u: goto L_08876198;
    case 693u: goto L_088761A4;
    case 694u: goto L_088761B4;
    case 695u: goto L_088761C4;
    case 696u: goto L_088761DC;
    case 697u: goto L_088761E0;
    case 698u: goto L_088761EC;
    case 699u: goto L_088761FC;
    case 700u: goto L_08876214;
    case 701u: goto L_08876218;
    case 702u: goto L_0887621C;
    case 703u: goto L_08876224;
    case 704u: goto L_08876230;
    case 705u: goto L_08876244;
    case 706u: goto L_0887624C;
    case 707u: goto L_08876250;
    case 708u: goto L_08876260;
    case 709u: goto L_08876268;
    case 710u: goto L_08876278;
    case 711u: goto L_08876284;
    case 712u: goto L_0887628C;
    case 713u: goto L_088762A0;
    case 714u: goto L_088762D0;
    case 715u: goto L_088762DC;
    case 716u: goto L_088762E4;
    case 717u: goto L_088762E8;
    case 718u: goto L_088762F4;
    case 719u: goto L_088762FC;
    case 720u: goto L_08876310;
    case 721u: goto L_0887635C;
    case 722u: goto L_08876368;
    case 723u: goto L_08876370;
    case 724u: goto L_08876378;
    case 725u: goto L_08876380;
    case 726u: goto L_0887638C;
    case 727u: goto L_08876394;
    case 728u: goto L_0887639C;
    case 729u: goto L_088763A8;
    case 730u: goto L_088763B4;
    case 731u: goto L_088763C0;
    case 732u: goto L_088763CC;
    case 733u: goto L_088763E8;
    case 734u: goto L_088763F8;
    case 735u: goto L_08876408;
    case 736u: goto L_0887641C;
    case 737u: goto L_08876424;
    case 738u: goto L_08876428;
    case 739u: goto L_08876438;
    case 740u: goto L_08876440;
    case 741u: goto L_08876450;
    case 742u: goto L_08876460;
    case 743u: goto L_08876478;
    case 744u: goto L_08876480;
    case 745u: goto L_08876488;
    case 746u: goto L_08876490;
    case 747u: goto L_08876498;
    case 748u: goto L_088764A0;
    case 749u: goto L_088764A8;
    case 750u: goto L_088764B0;
    case 751u: goto L_088764B8;
    case 752u: goto L_088764C0;
    case 753u: goto L_088764C4;
    case 754u: goto L_088764D0;
    case 755u: goto L_088764D8;
    case 756u: goto L_088764F4;
    case 757u: goto L_088764F8;
    case 758u: goto L_08876504;
    case 759u: goto L_08876514;
    case 760u: goto L_08876530;
    case 761u: goto L_0887653C;
    case 762u: goto L_08876544;
    case 763u: goto L_0887654C;
    case 764u: goto L_0887655C;
    case 765u: goto L_08876568;
    case 766u: goto L_08876578;
    case 767u: goto L_08876580;
    case 768u: goto L_08876588;
    case 769u: goto L_08876598;
    case 770u: goto L_088765A4;
    case 771u: goto L_088765B0;
    case 772u: goto L_088765B8;
    case 773u: goto L_088765BC;
    case 774u: goto L_088765C8;
    case 775u: goto L_088765E8;
    case 776u: goto L_088765F8;
    case 777u: goto L_08876608;
    case 778u: goto L_08876618;
    case 779u: goto L_0887661C;
    case 780u: goto L_0887662C;
    case 781u: goto L_08876630;
    case 782u: goto L_08876640;
    case 783u: goto L_08876648;
    case 784u: goto L_08876650;
    case 785u: goto L_08876664;
    case 786u: goto L_08876670;
    case 787u: goto L_08876680;
    case 788u: goto L_08876694;
    case 789u: goto L_0887669C;
    case 790u: goto L_088766AC;
    case 791u: goto L_088766B8;
    case 792u: goto L_088766C8;
    case 793u: goto L_088766D4;
    case 794u: goto L_088766E4;
    case 795u: goto L_088766E8;
    case 796u: goto L_088766F8;
    case 797u: goto L_088766FC;
    case 798u: goto L_08876708;
    case 799u: goto L_0887670C;
    case 800u: goto L_08876718;
    case 801u: goto L_08876720;
    case 802u: goto L_08876724;
    case 803u: goto L_08876734;
    case 804u: goto L_08876744;
    case 805u: goto L_0887675C;
    case 806u: goto L_08876760;
    case 807u: goto L_08876764;
    case 808u: goto L_0887676C;
    case 809u: goto L_0887677C;
    case 810u: goto L_0887678C;
    case 811u: goto L_088767A4;
    case 812u: goto L_088767A8;
    case 813u: goto L_088767B4;
    case 814u: goto L_088767C4;
    case 815u: goto L_088767DC;
    case 816u: goto L_088767E0;
    case 817u: goto L_088767E4;
    case 818u: goto L_088767EC;
    case 819u: goto L_088767F4;
    case 820u: goto L_08876800;
    case 821u: goto L_08876808;
    case 822u: goto L_08876810;
    case 823u: goto L_0887681C;
    case 824u: goto L_08876828;
    case 825u: goto L_08876838;
    case 826u: goto L_08876844;
    case 827u: goto L_08876850;
    case 828u: goto L_08876858;
    case 829u: goto L_08876868;
    case 830u: goto L_08876870;
    case 831u: goto L_08876880;
    case 832u: goto L_0887688C;
    case 833u: goto L_08876898;
    case 834u: goto L_088768A0;
    case 835u: goto L_088768B0;
    case 836u: goto L_088768BC;
    case 837u: goto L_088768C4;
    case 838u: goto L_088768D4;
    case 839u: goto L_088768DC;
    case 840u: goto L_088768EC;
    case 841u: goto L_088768F8;
    case 842u: goto L_08876900;
    case 843u: goto L_08876908;
    case 844u: goto L_08876910;
    case 845u: goto L_08876918;
    case 846u: goto L_08876928;
    case 847u: goto L_08876934;
    case 848u: goto L_08876944;
    case 849u: goto L_0887695C;
    case 850u: goto L_08876970;
    case 851u: goto L_0887697C;
    case 852u: goto L_08876984;
    case 853u: goto L_0887698C;
    case 854u: goto L_08876994;
    case 855u: goto L_088769AC;
    case 856u: goto L_088769C8;
    case 857u: goto L_088769D8;
    case 858u: goto L_088769E0;
    case 859u: goto L_088769EC;
    case 860u: goto L_088769F4;
    case 861u: goto L_08876A04;
    case 862u: goto L_08876A0C;
    case 863u: goto L_08876A1C;
    case 864u: goto L_08876A28;
    case 865u: goto L_08876A30;
    case 866u: goto L_08876A3C;
    case 867u: goto L_08876A44;
    case 868u: goto L_08876A54;
    case 869u: goto L_08876A5C;
    case 870u: goto L_08876A6C;
    case 871u: goto L_08876A78;
    case 872u: goto L_08876A80;
    case 873u: goto L_08876AA0;
    case 874u: goto L_08876AAC;
    case 875u: goto L_08876AB4;
    case 876u: goto L_08876AC4;
    case 877u: goto L_08876ACC;
    case 878u: goto L_08876ADC;
    case 879u: goto L_08876AEC;
    case 880u: goto L_08876AF0;
    case 881u: goto L_08876AFC;
    case 882u: goto L_08876B08;
    case 883u: goto L_08876B10;
    case 884u: goto L_08876B18;
    case 885u: goto L_08876B28;
    case 886u: goto L_08876B48;
    case 887u: goto L_08876B54;
    case 888u: goto L_08876B5C;
    case 889u: goto L_08876B6C;
    case 890u: goto L_08876B74;
    case 891u: goto L_08876B84;
    case 892u: goto L_08876B94;
    case 893u: goto L_08876B9C;
    case 894u: goto L_08876BA4;
    case 895u: goto L_08876BC4;
    case 896u: goto L_08876BD0;
    case 897u: goto L_08876BD8;
    case 898u: goto L_08876BE8;
    case 899u: goto L_08876BF0;
    case 900u: goto L_08876C00;
    case 901u: goto L_08876C10;
    case 902u: goto L_08876C14;
    case 903u: goto L_08876C20;
    case 904u: goto L_08876C2C;
    case 905u: goto L_08876C34;
    case 906u: goto L_08876C3C;
    case 907u: goto L_08876C4C;
    case 908u: goto L_08876C6C;
    case 909u: goto L_08876C78;
    case 910u: goto L_08876C80;
    case 911u: goto L_08876C90;
    case 912u: goto L_08876C98;
    case 913u: goto L_08876CA8;
    case 914u: goto L_08876CB8;
    case 915u: goto L_08876CC0;
    case 916u: goto L_08876CC8;
    case 917u: goto L_08876CD8;
    case 918u: goto L_08876CE4;
    case 919u: goto L_08876CEC;
    case 920u: goto L_08876CF4;
    case 921u: goto L_08876CFC;
    case 922u: goto L_08876D04;
    case 923u: goto L_08876D0C;
    case 924u: goto L_08876D1C;
    case 925u: goto L_08876D28;
    case 926u: goto L_08876D34;
    case 927u: goto L_08876D40;
    case 928u: goto L_08876D48;
    case 929u: goto L_08876D50;
    case 930u: goto L_08876D5C;
    case 931u: goto L_08876D74;
    case 932u: goto L_08876D84;
    case 933u: goto L_08876D90;
    case 934u: goto L_08876D9C;
    case 935u: goto L_08876DA8;
    case 936u: goto L_08876DB0;
    case 937u: goto L_08876DB8;
    case 938u: goto L_08876DC4;
    case 939u: goto L_08876DDC;
    case 940u: goto L_08876DE8;
    case 941u: goto L_08876DFC;
    case 942u: goto L_08876E10;
    case 943u: goto L_08876E24;
    case 944u: goto L_08876E38;
    case 945u: goto L_08876E40;
    case 946u: goto L_08876E50;
    case 947u: goto L_08876E5C;
    case 948u: goto L_08876E64;
    case 949u: goto L_08876E70;
    case 950u: goto L_08876E74;
    case 951u: goto L_08876E84;
    case 952u: goto L_08876E8C;
    case 953u: goto L_08876E9C;
    case 954u: goto L_08876EA4;
    case 955u: goto L_08876EB4;
    case 956u: goto L_08876EC0;
    case 957u: goto L_08876ED0;
    case 958u: goto L_08876EDC;
    case 959u: goto L_08876EE8;
    case 960u: goto L_08876EF4;
    case 961u: goto L_08876EFC;
    case 962u: goto L_08876F04;
    case 963u: goto L_08876F0C;
    case 964u: goto L_08876F18;
    case 965u: goto L_08876F28;
    case 966u: goto L_08876F34;
    case 967u: goto L_08876F48;
    case 968u: goto L_08876F50;
    case 969u: goto L_08876F58;
    case 970u: goto L_08876F60;
    case 971u: goto L_08876F68;
    case 972u: goto L_08876F78;
    case 973u: goto L_08876F84;
    case 974u: goto L_08876F8C;
    case 975u: goto L_08876F98;
    case 976u: goto L_08876FA8;
    case 977u: goto L_08876FB0;
    case 978u: goto L_08876FB8;
    case 979u: goto L_08876FC4;
    case 980u: goto L_08876FD0;
    case 981u: goto L_08876FDC;
    case 982u: goto L_08876FE8;
    case 983u: goto L_08876FF0;
    case 984u: goto L_08876FF8;
    case 985u: goto L_08877008;
    case 986u: goto L_08877010;
    case 987u: goto L_08877018;
    case 988u: goto L_08877024;
    case 989u: goto L_08877030;
    case 990u: goto L_08877040;
    case 991u: goto L_08877048;
    case 992u: goto L_08877058;
    case 993u: goto L_08877064;
    case 994u: goto L_0887706C;
    case 995u: goto L_08877080;
    case 996u: goto L_08877088;
    case 997u: goto L_08877090;
    case 998u: goto L_088770A0;
    case 999u: goto L_088770A8;
    case 1000u: goto L_088770B0;
    case 1001u: goto L_088770BC;
    case 1002u: goto L_088770C4;
    case 1003u: goto L_088770D4;
    case 1004u: goto L_088770E8;
    case 1005u: goto L_088770F8;
    case 1006u: goto L_08877118;
    case 1007u: goto L_0887712C;
    case 1008u: goto L_08877134;
    case 1009u: goto L_08877144;
    case 1010u: goto L_08877150;
    case 1011u: goto L_08877158;
    case 1012u: goto L_08877160;
    case 1013u: goto L_08877168;
    case 1014u: goto L_0887717C;
    case 1015u: goto L_0887718C;
    case 1016u: goto L_088771AC;
    case 1017u: goto L_088771C0;
    case 1018u: goto L_088771C8;
    case 1019u: goto L_088771D4;
    case 1020u: goto L_088771DC;
    case 1021u: goto L_088771EC;
    case 1022u: goto L_088771F4;
    case 1023u: goto L_08877204;
    case 1024u: goto L_08877210;
    case 1025u: goto L_08877218;
    case 1026u: goto L_08877228;
    case 1027u: goto L_08877234;
    case 1028u: goto L_08877240;
    case 1029u: goto L_08877250;
    case 1030u: goto L_08877258;
    case 1031u: goto L_08877268;
    case 1032u: goto L_08877274;
    case 1033u: goto L_0887727C;
    case 1034u: goto L_0887728C;
    case 1035u: goto L_08877298;
    case 1036u: goto L_088772A4;
    case 1037u: goto L_088772B4;
    case 1038u: goto L_088772BC;
    case 1039u: goto L_088772CC;
    case 1040u: goto L_088772D8;
    case 1041u: goto L_088772E0;
    case 1042u: goto L_088772E8;
    case 1043u: goto L_088772F8;
    case 1044u: goto L_08877304;
    case 1045u: goto L_0887730C;
    case 1046u: goto L_08877314;
    case 1047u: goto L_0887731C;
    case 1048u: goto L_08877328;
    case 1049u: goto L_08877330;
    case 1050u: goto L_08877340;
    case 1051u: goto L_08877348;
    case 1052u: goto L_08877358;
    case 1053u: goto L_08877364;
    case 1054u: goto L_0887736C;
    case 1055u: goto L_08877378;
    case 1056u: goto L_08877380;
    case 1057u: goto L_08877390;
    case 1058u: goto L_08877398;
    case 1059u: goto L_088773A8;
    case 1060u: goto L_088773B4;
    case 1061u: goto L_088773BC;
    case 1062u: goto L_088773CC;
    case 1063u: goto L_088773E0;
    case 1064u: goto L_088773F0;
    case 1065u: goto L_08877410;
    case 1066u: goto L_08877424;
    case 1067u: goto L_0887742C;
    case 1068u: goto L_0887743C;
    case 1069u: goto L_08877464;
    case 1070u: goto L_0887747C;
    case 1071u: goto L_08877490;
    case 1072u: goto L_08877498;
    case 1073u: goto L_088774A8;
    case 1074u: goto L_088774B0;
    case 1075u: goto L_088774B8;
    case 1076u: goto L_088774C4;
    case 1077u: goto L_088774D0;
    case 1078u: goto L_088774E0;
    case 1079u: goto L_088774EC;
    case 1080u: goto L_088774F8;
    case 1081u: goto L_08877504;
    case 1082u: goto L_08877514;
    case 1083u: goto L_0887751C;
    case 1084u: goto L_0887752C;
    case 1085u: goto L_08877538;
    case 1086u: goto L_08877544;
    case 1087u: goto L_0887754C;
    case 1088u: goto L_0887755C;
    case 1089u: goto L_08877568;
    case 1090u: goto L_08877574;
    case 1091u: goto L_08877584;
    case 1092u: goto L_0887758C;
    case 1093u: goto L_0887759C;
    case 1094u: goto L_088775A8;
    case 1095u: goto L_088775B0;
    case 1096u: goto L_088775B8;
    case 1097u: goto L_088775C0;
    case 1098u: goto L_088775C8;
    case 1099u: goto L_088775D8;
    case 1100u: goto L_088775E4;
    case 1101u: goto L_088775F4;
    case 1102u: goto L_0887760C;
    case 1103u: goto L_08877620;
    case 1104u: goto L_0887762C;
    case 1105u: goto L_08877634;
    case 1106u: goto L_0887763C;
    case 1107u: goto L_08877644;
    case 1108u: goto L_0887765C;
    case 1109u: goto L_08877678;
    case 1110u: goto L_08877688;
    case 1111u: goto L_08877690;
    case 1112u: goto L_0887769C;
    case 1113u: goto L_088776A8;
    case 1114u: goto L_088776B8;
    case 1115u: goto L_088776C0;
    case 1116u: goto L_088776D0;
    case 1117u: goto L_088776DC;
    case 1118u: goto L_088776E4;
    case 1119u: goto L_088776F0;
    case 1120u: goto L_088776FC;
    case 1121u: goto L_0887770C;
    case 1122u: goto L_08877714;
    case 1123u: goto L_08877724;
    case 1124u: goto L_08877730;
    case 1125u: goto L_08877738;
    case 1126u: goto L_08877758;
    case 1127u: goto L_08877764;
    case 1128u: goto L_08877770;
    case 1129u: goto L_08877780;
    case 1130u: goto L_08877788;
    case 1131u: goto L_08877798;
    case 1132u: goto L_088777A8;
    case 1133u: goto L_088777AC;
    case 1134u: goto L_088777B8;
    case 1135u: goto L_088777C4;
    case 1136u: goto L_088777CC;
    case 1137u: goto L_088777D4;
    case 1138u: goto L_088777E4;
    case 1139u: goto L_08877804;
    case 1140u: goto L_08877810;
    case 1141u: goto L_0887781C;
    case 1142u: goto L_0887782C;
    case 1143u: goto L_08877834;
    case 1144u: goto L_08877844;
    case 1145u: goto L_08877854;
    case 1146u: goto L_0887785C;
    case 1147u: goto L_08877864;
    case 1148u: goto L_08877884;
    case 1149u: goto L_08877890;
    case 1150u: goto L_0887789C;
    case 1151u: goto L_088778AC;
    case 1152u: goto L_088778B4;
    case 1153u: goto L_088778C4;
    case 1154u: goto L_088778D4;
    case 1155u: goto L_088778D8;
    case 1156u: goto L_088778E4;
    case 1157u: goto L_088778F0;
    case 1158u: goto L_088778F8;
    case 1159u: goto L_08877900;
    case 1160u: goto L_08877910;
    case 1161u: goto L_08877930;
    case 1162u: goto L_0887793C;
    case 1163u: goto L_08877948;
    case 1164u: goto L_08877958;
    case 1165u: goto L_08877960;
    case 1166u: goto L_08877970;
    case 1167u: goto L_08877980;
    case 1168u: goto L_08877988;
    case 1169u: goto L_08877990;
    case 1170u: goto L_088779A0;
    case 1171u: goto L_088779AC;
    case 1172u: goto L_088779B4;
    case 1173u: goto L_088779BC;
    case 1174u: goto L_088779C4;
    case 1175u: goto L_088779CC;
    case 1176u: goto L_088779D4;
    case 1177u: goto L_088779E4;
    case 1178u: goto L_088779F0;
    case 1179u: goto L_088779FC;
    case 1180u: goto L_08877A08;
    case 1181u: goto L_08877A10;
    case 1182u: goto L_08877A18;
    case 1183u: goto L_08877A24;
    case 1184u: goto L_08877A3C;
    case 1185u: goto L_08877A4C;
    case 1186u: goto L_08877A58;
    case 1187u: goto L_08877A64;
    case 1188u: goto L_08877A70;
    case 1189u: goto L_08877A78;
    case 1190u: goto L_08877A80;
    case 1191u: goto L_08877A8C;
    case 1192u: goto L_08877AA4;
    case 1193u: goto L_08877AB0;
    case 1194u: goto L_08877AC4;
    case 1195u: goto L_08877AE0;
    case 1196u: goto L_08877AF0;
    case 1197u: goto L_08877B04;
    case 1198u: goto L_08877B0C;
    case 1199u: goto L_08877B1C;
    case 1200u: goto L_08877B28;
    case 1201u: goto L_08877B30;
    case 1202u: goto L_08877B3C;
    case 1203u: goto L_08877B40;
    case 1204u: goto L_08877B50;
    case 1205u: goto L_08877B5C;
    case 1206u: goto L_08877B6C;
    case 1207u: goto L_08877B74;
    case 1208u: goto L_08877B84;
    case 1209u: goto L_08877B90;
    case 1210u: goto L_08877BA0;
    case 1211u: goto L_08877BAC;
    case 1212u: goto L_08877BB8;
    case 1213u: goto L_08877BC4;
    case 1214u: goto L_08877BCC;
    case 1215u: goto L_08877BD4;
    case 1216u: goto L_08877BDC;
    case 1217u: goto L_08877BE8;
    case 1218u: goto L_08877BF8;
    case 1219u: goto L_08877C0C;
    case 1220u: goto L_08877C10;
    case 1221u: goto L_08877C18;
    case 1222u: goto L_08877C20;
    case 1223u: goto L_08877C28;
    case 1224u: goto L_08877C30;
    case 1225u: goto L_08877C40;
    case 1226u: goto L_08877C4C;
    case 1227u: goto L_08877C54;
    case 1228u: goto L_08877C60;
    case 1229u: goto L_08877C70;
    case 1230u: goto L_08877C78;
    case 1231u: goto L_08877C80;
    case 1232u: goto L_08877C8C;
    case 1233u: goto L_08877C98;
    case 1234u: goto L_08877CA4;
    case 1235u: goto L_08877CB0;
    case 1236u: goto L_08877CB8;
    case 1237u: goto L_08877CC0;
    case 1238u: goto L_08877CD0;
    case 1239u: goto L_08877CD8;
    case 1240u: goto L_08877CE0;
    case 1241u: goto L_08877CEC;
    case 1242u: goto L_08877CF8;
    case 1243u: goto L_08877D08;
    case 1244u: goto L_08877D10;
    case 1245u: goto L_08877D20;
    case 1246u: goto L_08877D2C;
    case 1247u: goto L_08877D34;
    case 1248u: goto L_08877D48;
    case 1249u: goto L_08877D50;
    case 1250u: goto L_08877D58;
    case 1251u: goto L_08877D70;
    case 1252u: goto L_08877D74;
    case 1253u: goto L_08877D7C;
    case 1254u: goto L_08877D8C;
    case 1255u: goto L_08877D9C;
    case 1256u: goto L_08877DAC;
    case 1257u: goto L_08877DD0;
    case 1258u: goto L_08877DE0;
    case 1259u: goto L_08877DF4;
    case 1260u: goto L_08877DFC;
    case 1261u: goto L_08877E0C;
    case 1262u: goto L_08877E18;
    case 1263u: goto L_08877E24;
    case 1264u: goto L_08877E34;
    case 1265u: goto L_08877E3C;
    case 1266u: goto L_08877E4C;
    case 1267u: goto L_08877E58;
    case 1268u: goto L_08877E60;
    case 1269u: goto L_08877E70;
    case 1270u: goto L_08877E7C;
    case 1271u: goto L_08877E88;
    case 1272u: goto L_08877E98;
    case 1273u: goto L_08877EA0;
    case 1274u: goto L_08877EB0;
    case 1275u: goto L_08877EBC;
    case 1276u: goto L_08877EC4;
    case 1277u: goto L_08877ED4;
    case 1278u: goto L_08877EE0;
    case 1279u: goto L_08877EE8;
    case 1280u: goto L_08877EF0;
    case 1281u: goto L_08877EF8;
    case 1282u: goto L_08877F08;
    case 1283u: goto L_08877F2C;
    case 1284u: goto L_08877F3C;
    case 1285u: goto L_08877F50;
    case 1286u: goto L_08877F58;
    case 1287u: goto L_08877F64;
    case 1288u: goto L_08877F70;
    case 1289u: goto L_08877F80;
    case 1290u: goto L_08877F88;
    case 1291u: goto L_08877F98;
    case 1292u: goto L_08877FA4;
    case 1293u: goto L_08877FAC;
    case 1294u: goto L_08877FB4;
    case 1295u: goto L_08877FC4;
    case 1296u: goto L_08877FD0;
    case 1297u: goto L_08877FD8;
    case 1298u: goto L_08877FE0;
    case 1299u: goto L_08877FE8;
    case 1300u: goto L_08877FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x08874000u;
        if (local_delta_v813 >= 16376u || (local_delta_v813 & 3u) != 0u) {
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
L_08874000:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
      if (branch_taken) {
          goto L_0887400C;
      }
      goto L_08874008;
    }
L_08874008:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27112), aot_gpr_6);
    goto L_0887400C;
L_0887400C:
    aot_gpr_6 = (2240u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-25408));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076), aot_gpr_6);
    aot_gpr_31 = (0x08874030u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0026.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 4u, 0x08874030u, 0x0886FB34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0026_entry(rt, ctx, 607u, aot_mem);
#else
        recomp_unit_0026_entry(rt, ctx, 607u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 607u, 0x0886FB34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874030u) goto L_08874030;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874030:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874064;
      }
      goto L_08874038;
    }
L_08874038:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08874064;
      }
      goto L_08874040;
    }
L_08874040:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27112)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08874064;
      }
      goto L_0887404C;
    }
L_0887404C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076)));
    aot_gpr_31 = (0x0887405Cu);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0026.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 8u, 0x0887405Cu, 0x0886FB34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0026_entry(rt, ctx, 607u, aot_mem);
#else
        recomp_unit_0026_entry(rt, ctx, 607u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 607u, 0x0886FB34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887405Cu) goto L_0887405C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887405C:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27112), aot_gpr_4);
    goto L_08874064;
L_08874064:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_17;
      if (branch_taken) {
          goto L_088740AC;
      }
      goto L_08874070;
    }
L_08874070:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088740AC;
      }
      goto L_08874088;
    }
L_08874088:
    aot_gpr_31 = (0x08874090u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874090u) goto L_08874090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874090:
    aot_gpr_31 = (0x08874098u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 13u, 0x08874098u, 0x0898C420u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 100u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 100u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874098u) goto L_08874098;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874098:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < -125 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088740B4;
      }
      goto L_088740A4;
    }
L_088740A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874160;
      }
      goto L_088740AC;
    }
L_088740AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887423C;
      }
      goto L_088740B4;
    }
L_088740B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27108)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_08874218;
      }
      goto L_088740C0;
    }
L_088740C0:
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27108), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 197u);
    aot_gpr_31 = (0x088740D8u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 18u, 0x088740D8u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088740D8u) goto L_088740D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088740D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076)));
    aot_gpr_17 = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-20960));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (0u | 81u);
      if (branch_taken) {
          goto L_088740F8;
      }
      goto L_088740F0;
    }
L_088740F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08874100;
      }
      goto L_088740F8;
    }
L_088740F8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076), aot_gpr_4);
    goto L_08874100;
L_08874100:
    aot_gpr_31 = (0x08874108u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0127.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 22u, 0x08874108u, 0x08A01484u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0127_entry(rt, ctx, 359u, aot_mem);
#else
        recomp_unit_0127_entry(rt, ctx, 359u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 359u, 0x08A01484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874108u) goto L_08874108;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874108:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076)));
    aot_gpr_5 = (aot_gpr_4 << 4u);
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_2) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0887414C;
      }
      goto L_0887412C;
    }
L_0887412C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887413C;
      }
      goto L_08874134;
    }
L_08874134:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08874144;
      }
      goto L_0887413C;
    }
L_0887413C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076), aot_gpr_4);
    goto L_08874144;
L_08874144:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874100;
      }
      goto L_0887414C;
    }
L_0887414C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08874158u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0026.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 28u, 0x08874158u, 0x0886FB34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0026_entry(rt, ctx, 607u, aot_mem);
#else
        recomp_unit_0026_entry(rt, ctx, 607u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 607u, 0x0886FB34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874158u) goto L_08874158;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874158:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874218;
      }
      goto L_08874160;
    }
L_08874160:
    aot_gpr_31 = (0x08874168u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874168u) goto L_08874168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874168:
    aot_gpr_31 = (0x08874170u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 31u, 0x08874170u, 0x0898C420u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 100u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 100u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874170u) goto L_08874170;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874170:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 126 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08874218;
      }
      goto L_0887417C;
    }
L_0887417C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27104)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_08874218;
      }
      goto L_08874188;
    }
L_08874188:
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27104), aot_gpr_4);
    aot_gpr_17 = (ctx.gpr[16] | 0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 197u);
    aot_gpr_31 = (0x088741A4u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 34u, 0x088741A4u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088741A4u) goto L_088741A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088741A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076)));
    ctx.gpr[16] = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (0u | 82u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076), aot_gpr_4);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-20960));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(164));
      if (branch_taken) {
          goto L_088741C8;
      }
      goto L_088741C4;
    }
L_088741C4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076), 0u);
    goto L_088741C8;
L_088741C8:
    aot_gpr_31 = (0x088741D0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0127.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 37u, 0x088741D0u, 0x08A01484u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0127_entry(rt, ctx, 359u, aot_mem);
#else
        recomp_unit_0127_entry(rt, ctx, 359u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 359u, 0x08A01484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088741D0u) goto L_088741D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088741D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076)));
    aot_gpr_5 = (aot_gpr_4 << 4u);
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[16]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_2) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0887420C;
      }
      goto L_088741F4;
    }
L_088741F4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076), aot_gpr_4);
      if (branch_taken) {
          goto L_08874204;
      }
      goto L_08874200;
    }
L_08874200:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076), 0u);
    goto L_08874204;
L_08874204:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088741C8;
      }
      goto L_0887420C;
    }
L_0887420C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08874218u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0026.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 42u, 0x08874218u, 0x0886FB34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0026_entry(rt, ctx, 607u, aot_mem);
#else
        recomp_unit_0026_entry(rt, ctx, 607u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 607u, 0x0886FB34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874218u) goto L_08874218;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874218:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27104)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27108)));
      if (branch_taken) {
          goto L_0887422C;
      }
      goto L_08874224;
    }
L_08874224:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27104), aot_gpr_5);
    goto L_0887422C;
L_0887422C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0887423C;
      }
      goto L_08874234;
    }
L_08874234:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27108), aot_gpr_4);
    goto L_0887423C;
L_0887423C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08874254:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 & 255u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_17, ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(44), aot_run_words); }
    aot_gpr_31 = (0x08874274u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874274u) goto L_08874274;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874274:
    aot_gpr_31 = (0x0887427Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887427Cu) goto L_0887427C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887427C:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_gpr_31 = (0x0887428Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 50u, 0x0887428Cu, 0x08B0C520u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 68u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 68u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887428Cu) goto L_0887428C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887428C:
    aot_gpr_31 = (0x08874294u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 51u, 0x08874294u, 0x08B0C510u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 66u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 66u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 66u, 0x08B0C510u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874294u) goto L_08874294;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874294:
    { const bool branch_taken = ctx.gpr[16] != 0u;
      if (branch_taken) {
          goto L_0887433C;
      }
      goto L_0887429C;
    }
L_0887429C:
    aot_gpr_4 = (ctx.gpr[29] | 0u);
    aot_gpr_5 = (0u | 30u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x088742B4u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088742B4u) goto L_088742B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088742B4:
    ctx.gpr[16] = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (0u | 30u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x088742D0u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088742D0u) goto L_088742D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088742D0:
    aot_gpr_17 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (0u | 30u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x088742ECu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088742ECu) goto L_088742EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088742EC:
    ctx.gpr[18] = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (0u | 30u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x08874308u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874308u) goto L_08874308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874308:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (ctx.gpr[16] & 255u);
    aot_gpr_6 = (aot_gpr_17 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (ctx.gpr[18] & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08874334u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874334u) goto L_08874334;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874334:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088743D4;
      }
      goto L_0887433C;
    }
L_0887433C:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 236u);
    ctx.gpr[7] = (0u | 147u);
    aot_gpr_31 = (0x08874354u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874354u) goto L_08874354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874354:
    ctx.gpr[16] = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 236u);
    ctx.gpr[7] = (0u | 147u);
    aot_gpr_31 = (0x08874370u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874370u) goto L_08874370;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874370:
    aot_gpr_17 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 236u);
    ctx.gpr[7] = (0u | 147u);
    aot_gpr_31 = (0x0887438Cu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887438Cu) goto L_0887438C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887438C:
    ctx.gpr[18] = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 236u);
    ctx.gpr[7] = (0u | 147u);
    aot_gpr_31 = (0x088743A8u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088743A8u) goto L_088743A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088743A8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (ctx.gpr[16] & 255u);
    aot_gpr_6 = (aot_gpr_17 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (ctx.gpr[18] & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x088743D4u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088743D4u) goto L_088743D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088743D4:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(40), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088743EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 & 255u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_17, ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(44), aot_run_words); }
    aot_gpr_31 = (0x0887440Cu);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887440Cu) goto L_0887440C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887440C:
    aot_gpr_31 = (0x08874414u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874414u) goto L_08874414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874414:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_gpr_31 = (0x08874424u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 67u, 0x08874424u, 0x08B0C520u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 68u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 68u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874424u) goto L_08874424;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874424:
    aot_gpr_31 = (0x0887442Cu);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 68u, 0x0887442Cu, 0x08B0C510u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 66u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 66u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 66u, 0x08B0C510u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887442Cu) goto L_0887442C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887442C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
      if (branch_taken) {
          goto L_088744D4;
      }
      goto L_08874434;
    }
L_08874434:
    aot_gpr_4 = (ctx.gpr[29] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 105u);
    ctx.gpr[7] = (0u | 105u);
    aot_gpr_31 = (0x0887444Cu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887444Cu) goto L_0887444C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887444C:
    ctx.gpr[16] = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 105u);
    ctx.gpr[7] = (0u | 105u);
    aot_gpr_31 = (0x08874468u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874468u) goto L_08874468;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874468:
    aot_gpr_17 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 105u);
    ctx.gpr[7] = (0u | 105u);
    aot_gpr_31 = (0x08874484u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874484u) goto L_08874484;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874484:
    ctx.gpr[18] = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 105u);
    ctx.gpr[7] = (0u | 105u);
    aot_gpr_31 = (0x088744A0u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088744A0u) goto L_088744A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088744A0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (ctx.gpr[16] & 255u);
    aot_gpr_6 = (aot_gpr_17 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (ctx.gpr[18] & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x088744CCu);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088744CCu) goto L_088744CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088744CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887456C;
      }
      goto L_088744D4;
    }
L_088744D4:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (0u | 105u);
    aot_gpr_6 = (0u | 86u);
    ctx.gpr[7] = (0u | 7u);
    aot_gpr_31 = (0x088744ECu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088744ECu) goto L_088744EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088744EC:
    ctx.gpr[16] = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (0u | 105u);
    aot_gpr_6 = (0u | 86u);
    ctx.gpr[7] = (0u | 7u);
    aot_gpr_31 = (0x08874508u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874508u) goto L_08874508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874508:
    aot_gpr_17 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr_5 = (0u | 105u);
    aot_gpr_6 = (0u | 86u);
    ctx.gpr[7] = (0u | 7u);
    aot_gpr_31 = (0x08874524u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874524u) goto L_08874524;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874524:
    ctx.gpr[18] = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (0u | 105u);
    aot_gpr_6 = (0u | 86u);
    ctx.gpr[7] = (0u | 7u);
    aot_gpr_31 = (0x08874540u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874540u) goto L_08874540;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874540:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (ctx.gpr[16] & 255u);
    aot_gpr_6 = (aot_gpr_17 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (ctx.gpr[18] & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x0887456Cu);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887456Cu) goto L_0887456C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887456C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(40), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08874584:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (2237u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(204), 0u);
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088745BC;
      }
      goto L_088745B0;
    }
L_088745B0:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x088745BCu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 83u, 0x088745BCu, 0x08ADC73Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 138u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 138u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 138u, 0x08ADC73Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088745BCu) goto L_088745BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088745BC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_088745CC;
      }
      goto L_088745C4;
    }
L_088745C4:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088745CC;
L_088745CC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088745D8u);
    aot_gpr_5 = (0u | 0u);
    goto L_08874808;
L_088745D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x088745F4u);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 87u, 0x088745F4u, 0x08ADC77Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 146u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 146u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 146u, 0x08ADC77Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088745F4u) goto L_088745F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088745F4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08874600u);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 88u, 0x08874600u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874600u) goto L_08874600;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874600:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0887460Cu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 89u, 0x0887460Cu, 0x08ADC76Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 144u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 144u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 144u, 0x08ADC76Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887460Cu) goto L_0887460C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887460C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08874638;
      }
      goto L_0887461C;
    }
L_0887461C:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08874630;
      }
      goto L_08874624;
    }
L_08874624:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(48), aot_gpr_4);
      if (branch_taken) {
          goto L_08874638;
      }
      goto L_08874630;
    }
L_08874630:
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(48), aot_gpr_4);
    goto L_08874638;
L_08874638:
    aot_gpr_5 = (aot_gpr_4 & 4u);
    aot_gpr_6 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08874668;
      }
      goto L_0887464C;
    }
L_0887464C:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_08874660;
      }
      goto L_08874654;
    }
L_08874654:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(48), aot_gpr_4);
      if (branch_taken) {
          goto L_08874668;
      }
      goto L_08874660;
    }
L_08874660:
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(48), aot_gpr_4);
    goto L_08874668;
L_08874668:
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 175u);
    aot_mem.aot_direct_store16(aot_gpr_17 + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08874680u);
    aot_gpr_5 = (0u | 5000u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 98u, 0x08874680u, 0x08ADC78Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 148u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 148u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 148u, 0x08ADC78Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874680u) goto L_08874680;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874680:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0887468Cu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 99u, 0x0887468Cu, 0x08ADC79Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 150u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 150u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 150u, 0x08ADC79Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887468Cu) goto L_0887468C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887468C:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08874698u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 100u, 0x08874698u, 0x08ADC7ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 152u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 152u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 152u, 0x08ADC7ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874698u) goto L_08874698;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874698:
    aot_gpr_31 = (0x088746A0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088746A0u) goto L_088746A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088746A0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08874788;
      }
      goto L_088746B0;
    }
L_088746B0:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24184)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088746C8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x088746D4u);
    aot_gpr_5 = (0u | 10u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 104u, 0x088746D4u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088746D4u) goto L_088746D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088746D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874788;
      }
      goto L_088746DC;
    }
L_088746DC:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x088746E8u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 106u, 0x088746E8u, 0x08ADC77Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 146u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 146u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 146u, 0x08ADC77Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088746E8u) goto L_088746E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088746E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874788;
      }
      goto L_088746F0;
    }
L_088746F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(48), aot_gpr_4);
      if (branch_taken) {
          goto L_08874788;
      }
      goto L_08874700;
    }
L_08874700:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (aot_gpr_5 | 2u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_gpr_31 = (0x08874718u);
    aot_gpr_5 = (0u | 10u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 109u, 0x08874718u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874718u) goto L_08874718;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874718:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874788;
      }
      goto L_08874720;
    }
L_08874720:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0887472Cu);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 111u, 0x0887472Cu, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887472Cu) goto L_0887472C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887472C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874788;
      }
      goto L_08874734;
    }
L_08874734:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874788;
      }
      goto L_0887473C;
    }
L_0887473C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874788;
      }
      goto L_08874744;
    }
L_08874744:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08874750u);
    aot_gpr_5 = (0u | 5u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 115u, 0x08874750u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874750u) goto L_08874750;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874750:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874788;
      }
      goto L_08874758;
    }
L_08874758:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(48), aot_gpr_4);
      if (branch_taken) {
          goto L_08874788;
      }
      goto L_08874768;
    }
L_08874768:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (aot_gpr_5 | 2u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_gpr_31 = (0x08874780u);
    aot_gpr_5 = (0u | 5u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 118u, 0x08874780u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874780u) goto L_08874780;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874780:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874788;
      }
      goto L_08874788;
    }
L_08874788:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08874794u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 120u, 0x08874794u, 0x08ADC73Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 138u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 138u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 138u, 0x08ADC73Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874794u) goto L_08874794;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874794:
    ctx.gpr[18] = (0u | 12u);
    goto L_08874798;
L_08874798:
    aot_gpr_31 = (0x088747A0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0887487C;
L_088747A0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088747B8;
      }
      goto L_088747A8;
    }
L_088747A8:
    aot_gpr_31 = (0x088747B0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08874B80;
L_088747B0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088747F0;
      }
      goto L_088747B8;
    }
L_088747B8:
    aot_gpr_31 = (0x088747C0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088747C0u) goto L_088747C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088747C0:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x088747CCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 127u, 0x088747CCu, 0x08ADC73Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 138u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 138u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 138u, 0x08ADC73Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088747CCu) goto L_088747CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088747CC:
    aot_gpr_31 = (0x088747D4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088747D4u) goto L_088747D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088747D4:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[18];
      if (branch_taken) {
          goto L_088747E8;
      }
      goto L_088747DC;
    }
L_088747DC:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x088747E8u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 130u, 0x088747E8u, 0x08ADC73Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 138u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 138u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 138u, 0x08ADC73Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088747E8u) goto L_088747E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088747E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874798;
      }
      goto L_088747F0;
    }
L_088747F0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08874808:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2237u << 16u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 3 ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08874830;
      }
      goto L_0887482C;
    }
L_0887482C:
    aot_gpr_17 = (0u | 0u);
    goto L_08874830;
L_08874830:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_17) >= 0;
      if (branch_taken) {
          goto L_0887483C;
      }
      goto L_08874838;
    }
L_08874838:
    aot_gpr_17 = (0u | 2u);
    goto L_0887483C;
L_0887483C:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_17 != aot_gpr_4;
      if (branch_taken) {
          goto L_08874864;
      }
      goto L_08874848;
    }
L_08874848:
    aot_gpr_31 = (0x08874850u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874850u) goto L_08874850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874850:
    aot_gpr_4 = (ctx.gpr[28] + aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(-27280)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08874864;
      }
      goto L_08874860;
    }
L_08874860:
    aot_gpr_17 = (aot_gpr_17 | 128u);
    goto L_08874864;
L_08874864:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_17));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0887487C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
    { const std::uint32_t aot_run_words[3]{aot_gpr_17, ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x088748A0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088748A0u) goto L_088748A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088748A0:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08874B64;
      }
      goto L_088748B0;
    }
L_088748B0:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24144)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088748C8:
    aot_gpr_31 = (0x088748D0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088748D0u) goto L_088748D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088748D0:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-19112));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088748F4;
      }
      goto L_088748EC;
    }
L_088748EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_088748F8;
      }
      goto L_088748F4;
    }
L_088748F4:
    aot_gpr_2 = (0u | 1u);
    goto L_088748F8;
L_088748F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874B68;
      }
      goto L_08874900;
    }
L_08874900:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0887490Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887490Cu) goto L_0887490C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887490C:
    aot_gpr_17 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_17;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08874930;
      }
      goto L_08874918;
    }
L_08874918:
    aot_gpr_31 = (0x08874920u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874920u) goto L_08874920;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874920:
    { const bool branch_taken = aot_gpr_2 != aot_gpr_17;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08874930;
      }
      goto L_08874928;
    }
L_08874928:
    ctx.gpr[18] = (aot_gpr_17 | 0u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08874930;
L_08874930:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887496C;
      }
      goto L_08874938;
    }
L_08874938:
    aot_gpr_31 = (0x08874940u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874940u) goto L_08874940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874940:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-18872));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08874964;
      }
      goto L_0887495C;
    }
L_0887495C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08874A0C;
      }
      goto L_08874964;
    }
L_08874964:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08874A0C;
      }
      goto L_0887496C;
    }
L_0887496C:
    ctx.gpr[18] = (aot_gpr_17 | 0u);
    aot_gpr_17 = (0u | 0u);
    aot_gpr_31 = (0x0887497Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887497Cu) goto L_0887497C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887497C:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[18];
    aot_gpr_4 = (aot_gpr_17 & 255u);
      if (branch_taken) {
          goto L_088749A0;
      }
      goto L_08874984;
    }
L_08874984:
    aot_gpr_31 = (0x0887498Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887498Cu) goto L_0887498C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887498C:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_17 & 255u);
      if (branch_taken) {
          goto L_088749A0;
      }
      goto L_08874998;
    }
L_08874998:
    aot_gpr_17 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_17 & 255u);
    goto L_088749A0;
L_088749A0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088749DC;
      }
      goto L_088749A8;
    }
L_088749A8:
    aot_gpr_31 = (0x088749B0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088749B0u) goto L_088749B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088749B0:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-18824));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088749D4;
      }
      goto L_088749CC;
    }
L_088749CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08874A0C;
      }
      goto L_088749D4;
    }
L_088749D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08874A0C;
      }
      goto L_088749DC;
    }
L_088749DC:
    aot_gpr_31 = (0x088749E4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088749E4u) goto L_088749E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088749E4:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-19064));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08874A08;
      }
      goto L_08874A00;
    }
L_08874A00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08874A0C;
      }
      goto L_08874A08;
    }
L_08874A08:
    aot_gpr_2 = (0u | 1u);
    goto L_08874A0C;
L_08874A0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874B68;
      }
      goto L_08874A14;
    }
L_08874A14:
    aot_gpr_31 = (0x08874A1Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874A1Cu) goto L_08874A1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874A1C:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-19016));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08874A40;
      }
      goto L_08874A38;
    }
L_08874A38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08874A44;
      }
      goto L_08874A40;
    }
L_08874A40:
    aot_gpr_2 = (0u | 1u);
    goto L_08874A44;
L_08874A44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874B68;
      }
      goto L_08874A4C;
    }
L_08874A4C:
    aot_gpr_31 = (0x08874A54u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874A54u) goto L_08874A54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874A54:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-18968));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08874A78;
      }
      goto L_08874A70;
    }
L_08874A70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08874A7C;
      }
      goto L_08874A78;
    }
L_08874A78:
    aot_gpr_2 = (0u | 1u);
    goto L_08874A7C;
L_08874A7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874B68;
      }
      goto L_08874A84;
    }
L_08874A84:
    aot_gpr_31 = (0x08874A8Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874A8Cu) goto L_08874A8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874A8C:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-18920));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08874AB0;
      }
      goto L_08874AA8;
    }
L_08874AA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08874AB4;
      }
      goto L_08874AB0;
    }
L_08874AB0:
    aot_gpr_2 = (0u | 1u);
    goto L_08874AB4;
L_08874AB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874B68;
      }
      goto L_08874ABC;
    }
L_08874ABC:
    aot_gpr_31 = (0x08874AC4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874AC4u) goto L_08874AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874AC4:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-18776));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08874AE8;
      }
      goto L_08874AE0;
    }
L_08874AE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08874AEC;
      }
      goto L_08874AE8;
    }
L_08874AE8:
    aot_gpr_2 = (0u | 1u);
    goto L_08874AEC;
L_08874AEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874B68;
      }
      goto L_08874AF4;
    }
L_08874AF4:
    aot_gpr_31 = (0x08874AFCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874AFCu) goto L_08874AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874AFC:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-18728));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08874B20;
      }
      goto L_08874B18;
    }
L_08874B18:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08874B24;
      }
      goto L_08874B20;
    }
L_08874B20:
    aot_gpr_2 = (0u | 1u);
    goto L_08874B24;
L_08874B24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874B68;
      }
      goto L_08874B2C;
    }
L_08874B2C:
    aot_gpr_31 = (0x08874B34u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874B34u) goto L_08874B34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874B34:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-18680));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08874B58;
      }
      goto L_08874B50;
    }
L_08874B50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08874B5C;
      }
      goto L_08874B58;
    }
L_08874B58:
    aot_gpr_2 = (0u | 1u);
    goto L_08874B5C;
L_08874B5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874B68;
      }
      goto L_08874B64;
    }
L_08874B64:
    aot_gpr_2 = (0u | 1u);
    goto L_08874B68;
L_08874B68:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08874B80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[7]{ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08874BA8u);
    ctx.gpr[19] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0127.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 207u, 0x08874BA8u, 0x08A01484u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0127_entry(rt, ctx, 359u, aot_mem);
#else
        recomp_unit_0127_entry(rt, ctx, 359u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 359u, 0x08A01484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874BA8u) goto L_08874BA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874BA8:
    aot_gpr_17 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(-28736));
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08874BBCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874BBCu) goto L_08874BBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874BBC:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08874BC8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874BC8u) goto L_08874BC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874BC8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08874D08;
      }
      goto L_08874BD8;
    }
L_08874BD8:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24104)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08874BF0:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08874C08;
      }
      goto L_08874BFC;
    }
L_08874BFC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08874C08;
      }
      goto L_08874C04;
    }
L_08874C04:
    ctx.gpr[19] = (0u | 0u);
    goto L_08874C08;
L_08874C08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874D0C;
      }
      goto L_08874C10;
    }
L_08874C10:
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_31 = (0x08874C1Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874C1Cu) goto L_08874C1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874C1C:
    ctx.gpr[20] = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[20];
    aot_gpr_4 = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08874C40;
      }
      goto L_08874C28;
    }
L_08874C28:
    aot_gpr_31 = (0x08874C30u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874C30u) goto L_08874C30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874C30:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[20];
    aot_gpr_4 = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08874C40;
      }
      goto L_08874C38;
    }
L_08874C38:
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    aot_gpr_4 = (ctx.gpr[21] & 255u);
    goto L_08874C40;
L_08874C40:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08874C64;
      }
      goto L_08874C48;
    }
L_08874C48:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08874D00;
      }
      goto L_08874C54;
    }
L_08874C54:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08874D00;
      }
      goto L_08874C5C;
    }
L_08874C5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08874D00;
      }
      goto L_08874C64;
    }
L_08874C64:
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_31 = (0x08874C70u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874C70u) goto L_08874C70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874C70:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[20];
    aot_gpr_4 = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08874C94;
      }
      goto L_08874C78;
    }
L_08874C78:
    aot_gpr_31 = (0x08874C80u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874C80u) goto L_08874C80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874C80:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08874C94;
      }
      goto L_08874C8C;
    }
L_08874C8C:
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    aot_gpr_4 = (ctx.gpr[21] & 255u);
    goto L_08874C94;
L_08874C94:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08874CB0;
      }
      goto L_08874C9C;
    }
L_08874C9C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08874D00;
      }
      goto L_08874CA8;
    }
L_08874CA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08874D00;
      }
      goto L_08874CB0;
    }
L_08874CB0:
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_31 = (0x08874CC0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874CC0u) goto L_08874CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874CC0:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[21];
    aot_gpr_4 = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_08874CE0;
      }
      goto L_08874CC8;
    }
L_08874CC8:
    aot_gpr_31 = (0x08874CD0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874CD0u) goto L_08874CD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874CD0:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_08874CE0;
      }
      goto L_08874CD8;
    }
L_08874CD8:
    ctx.gpr[20] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[20] & 255u);
    goto L_08874CE0;
L_08874CE0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08874D00;
      }
      goto L_08874CE8;
    }
L_08874CE8:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08874D00;
      }
      goto L_08874CF4;
    }
L_08874CF4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08874D00;
      }
      goto L_08874CFC;
    }
L_08874CFC:
    ctx.gpr[19] = (0u | 0u);
    goto L_08874D00;
L_08874D00:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874D0C;
      }
      goto L_08874D08;
    }
L_08874D08:
    ctx.gpr[19] = (0u | 1u);
    goto L_08874D0C;
L_08874D0C:
    aot_gpr_2 = (ctx.gpr[19] | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08874D34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-672));
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], aot_gpr_17, ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(648), aot_run_words); }
    aot_gpr_31 = (0x08874D58u);
    aot_gpr_6 = (0u | 128u);
    ctx.pc = 0x08B730A4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874D58:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) < 0;
      if (branch_taken) {
          goto L_08874D8C;
      }
      goto L_08874D60;
    }
L_08874D60:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr_4 = (ctx.gpr[29] | 0u);
    aot_gpr_31 = (0x08874D70u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 247u, 0x08874D70u, 0x08887B04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 843u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 843u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874D70u) goto L_08874D70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874D70:
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(128)));
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_17 = (0u | 0u);
      if (branch_taken) {
          goto L_08874D98;
      }
      goto L_08874D84;
    }
L_08874D84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08874DAC;
      }
      goto L_08874D8C;
    }
L_08874D8C:
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08874E74;
      }
      goto L_08874D98;
    }
L_08874D98:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(128)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08874D98;
      }
      goto L_08874DAC;
    }
L_08874DAC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_08874DBC;
      }
      goto L_08874DB4;
    }
L_08874DB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08874E74;
      }
      goto L_08874DBC;
    }
L_08874DBC:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[9] = (0u | 32u);
    ctx.gpr[8] = (ctx.gpr[29] | 0u);
    goto L_08874DCC;
L_08874DCC:
    ctx.gpr[7] = (0u | 8u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[7] = (aot_gpr_4 | 0u);
        goto L_08874DDC;
    }
    goto L_08874DDC;
L_08874DDC:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08874E10;
      }
      goto L_08874DE8;
    }
L_08874DE8:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
      if (branch_taken) {
          goto L_08874E04;
      }
      goto L_08874DF4;
    }
L_08874DF4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08874E04;
      }
      goto L_08874DFC;
    }
L_08874DFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08874E10;
      }
      goto L_08874E04;
    }
L_08874E04:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08874DCC;
      }
      goto L_08874E10;
    }
L_08874E10:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08874E20;
      }
      goto L_08874E18;
    }
L_08874E18:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08874E74;
      }
      goto L_08874E20;
    }
L_08874E20:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08874E2Cu);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 263u, 0x08874E2Cu, 0x08ABE29Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 468u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 468u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874E2Cu) goto L_08874E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874E2C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_17 + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08874E40u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874E40u) goto L_08874E40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874E40:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08874E50u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 265u, 0x08874E50u, 0x089F5BD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 328u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 328u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 328u, 0x089F5BD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874E50u) goto L_08874E50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874E50:
    aot_gpr_31 = (0x08874E58u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 266u, 0x08874E58u, 0x08B0C748u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 96u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 96u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 96u, 0x08B0C748u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874E58u) goto L_08874E58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874E58:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08874E64u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0190.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 267u, 0x08874E64u, 0x08AFD998u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0190_entry(rt, ctx, 301u, aot_mem);
#else
        recomp_unit_0190_entry(rt, ctx, 301u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 301u, 0x08AFD998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874E64u) goto L_08874E64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874E64:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08874E70u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874E70u) goto L_08874E70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874E70:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    goto L_08874E74;
L_08874E74:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(648), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08874E8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    aot_gpr_17 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(-28416));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08874ED0;
      }
      goto L_08874EB8;
    }
L_08874EB8:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08874EC8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 272u, 0x08874EC8u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874EC8u) goto L_08874EC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874EC8:
    aot_gpr_31 = (0x08874ED0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874ED0u) goto L_08874ED0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874ED0:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08874EDCu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 274u, 0x08874EDCu, 0x0882E9ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 610u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 610u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 610u, 0x0882E9ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874EDCu) goto L_08874EDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874EDC:
    aot_gpr_31 = (0x08874EE4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 275u, 0x08874EE4u, 0x088633B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 595u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 595u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 595u, 0x088633B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874EE4u) goto L_08874EE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874EE4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(424), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_17 != 0u;
      if (branch_taken) {
          goto L_08874F04;
      }
      goto L_08874EF8;
    }
L_08874EF8:
    aot_gpr_31 = (0x08874F00u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874F00u) goto L_08874F00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874F00:
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08874F04;
L_08874F04:
    aot_gpr_31 = (0x08874F0Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0002.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 279u, 0x08874F0Cu, 0x0880DCB8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0002_entry(rt, ctx, 418u, aot_mem);
#else
        recomp_unit_0002_entry(rt, ctx, 418u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 418u, 0x0880DCB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874F0Cu) goto L_08874F0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874F0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08874F24;
    }
    goto L_08874F18;
L_08874F18:
    aot_gpr_31 = (0x08874F20u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874F20u) goto L_08874F20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874F20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08874F24;
L_08874F24:
    aot_gpr_31 = (0x08874F2Cu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 283u, 0x08874F2Cu, 0x089C6DF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 645u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 645u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 645u, 0x089C6DF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874F2Cu) goto L_08874F2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874F2C:
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_17 != 0u;
      if (branch_taken) {
          goto L_08874F44;
      }
      goto L_08874F38;
    }
L_08874F38:
    aot_gpr_31 = (0x08874F40u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874F40u) goto L_08874F40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874F40:
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08874F44;
L_08874F44:
    aot_gpr_31 = (0x08874F4Cu);
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(6850), static_cast<std::uint8_t>(0u));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0173.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 287u, 0x08874F4Cu, 0x08AB9680u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0173_entry(rt, ctx, 271u, aot_mem);
#else
        recomp_unit_0173_entry(rt, ctx, 271u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 271u, 0x08AB9680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874F4Cu) goto L_08874F4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874F4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08874F84;
    }
    goto L_08874F58;
L_08874F58:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08874F64u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 289u, 0x08874F64u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874F64u) goto L_08874F64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874F64:
    aot_gpr_17 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08874F7C;
      }
      goto L_08874F70;
    }
L_08874F70:
    aot_gpr_31 = (0x08874F78u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874F78u) goto L_08874F78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874F78:
    ctx.gpr[18] = (aot_gpr_17 | 0u);
    goto L_08874F7C;
L_08874F7C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08874F84;
L_08874F84:
    aot_gpr_31 = (0x08874F8Cu);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27060));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 294u, 0x08874F8Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874F8Cu) goto L_08874F8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874F8C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08874FB0u);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0173.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 295u, 0x08874FB0u, 0x08ABAB74u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0173_entry(rt, ctx, 493u, aot_mem);
#else
        recomp_unit_0173_entry(rt, ctx, 493u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 493u, 0x08ABAB74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874FB0u) goto L_08874FB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874FB0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08874FCC;
      }
      goto L_08874FBC;
    }
L_08874FBC:
    aot_gpr_31 = (0x08874FC4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874FC4u) goto L_08874FC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874FC4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08874FCC;
L_08874FCC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27100));
    aot_gpr_31 = (0x08874FD8u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27088));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0147.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 299u, 0x08874FD8u, 0x08A53BE8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0147_entry(rt, ctx, 723u, aot_mem);
#else
        recomp_unit_0147_entry(rt, ctx, 723u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 723u, 0x08A53BE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874FD8u) goto L_08874FD8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08874FD8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_5 != 0u) {
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
        goto L_08874FF4;
    }
    goto L_08874FE4;
L_08874FE4:
    aot_gpr_31 = (0x08874FECu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08874FECu) goto L_08874FEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08874FEC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    goto L_08874FF4;
L_08874FF4:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0887501C;
      }
      goto L_08874FFC;
    }
L_08874FFC:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_08875020;
    }
    goto L_08875008;
L_08875008:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(21956));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08875024;
      }
      goto L_0887501C;
    }
L_0887501C:
    aot_gpr_4 = (0u | 1u);
    goto L_08875020;
L_08875020:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08875024;
L_08875024:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887503C;
      }
      goto L_0887502C;
    }
L_0887502C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(5));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), 0u);
    goto L_0887503C;
L_0887503C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08875058:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887509C;
      }
      goto L_08875068;
    }
L_08875068:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-27676));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5880), 0u);
      if (branch_taken) {
          goto L_08875088;
      }
      goto L_0887507C;
    }
L_0887507C:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_08875088;
L_08875088:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0887509C;
      }
      goto L_08875094;
    }
L_08875094:
    aot_gpr_31 = (0x0887509Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887509Cu) goto L_0887509C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887509C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088750A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), aot_gpr_17);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    aot_gpr_17 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(-28416));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088750E8;
      }
      goto L_088750D0;
    }
L_088750D0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x088750E0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 318u, 0x088750E0u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088750E0u) goto L_088750E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088750E0:
    aot_gpr_31 = (0x088750E8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088750E8u) goto L_088750E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088750E8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x088750F4u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 320u, 0x088750F4u, 0x0882E704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 553u, 0x0882E704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088750F4u) goto L_088750F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088750F4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_5 != 0u) {
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
        goto L_08875110;
    }
    goto L_08875100;
L_08875100:
    aot_gpr_31 = (0x08875108u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875108u) goto L_08875108;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875108:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    goto L_08875110;
L_08875110:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08875138;
      }
      goto L_08875118;
    }
L_08875118:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_0887513C;
    }
    goto L_08875124;
L_08875124:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2213u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(21956));
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08875140;
      }
      goto L_08875138;
    }
L_08875138:
    aot_gpr_4 = (0u | 1u);
    goto L_0887513C;
L_0887513C:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08875140;
L_08875140:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088753F4;
      }
      goto L_08875148;
    }
L_08875148:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0887515C;
      }
      goto L_08875150;
    }
L_08875150:
    aot_gpr_31 = (0x08875158u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875158u) goto L_08875158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875158:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_0887515C;
L_0887515C:
    aot_gpr_31 = (0x08875164u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 333u, 0x08875164u, 0x08A54ED4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 237u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 237u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875164u) goto L_08875164;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875164:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088756E8;
      }
      goto L_0887516C;
    }
L_0887516C:
    aot_gpr_31 = (0x08875174u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0205.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 335u, 0x08875174u, 0x08B3AAF0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0205_entry(rt, ctx, 734u, aot_mem);
#else
        recomp_unit_0205_entry(rt, ctx, 734u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 734u, 0x08B3AAF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875174u) goto L_08875174;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875174:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088756E8;
      }
      goto L_0887517C;
    }
L_0887517C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_0887519C;
      }
      goto L_08875188;
    }
L_08875188:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08875194u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 338u, 0x08875194u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875194u) goto L_08875194;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875194:
    aot_gpr_31 = (0x0887519Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887519Cu) goto L_0887519C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887519C:
    aot_gpr_31 = (0x088751A4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 340u, 0x088751A4u, 0x0882E9A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 609u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 609u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 609u, 0x0882E9A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088751A4u) goto L_088751A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088751A4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088752AC;
      }
      goto L_088751AC;
    }
L_088751AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08875210;
      }
      goto L_088751B8;
    }
L_088751B8:
    aot_gpr_31 = (0x088751C0u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088751C0u) goto L_088751C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088751C0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_088751E0;
      }
      goto L_088751D0;
    }
L_088751D0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_088751E4;
      }
      goto L_088751DC;
    }
L_088751DC:
    aot_gpr_5 = (0u | 1u);
    goto L_088751E0;
L_088751E0:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_088751E4;
L_088751E4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088756E8;
      }
      goto L_088751EC;
    }
L_088751EC:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 196u);
    aot_gpr_31 = (0x088751FCu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 349u, 0x088751FCu, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088751FCu) goto L_088751FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088751FC:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08875208u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08874E8C;
L_08875208:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088756E8;
      }
      goto L_08875210;
    }
L_08875210:
    aot_gpr_31 = (0x08875218u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 352u, 0x08875218u, 0x088633B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 595u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 595u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 595u, 0x088633B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875218u) goto L_08875218;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875218:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08875234;
      }
      goto L_08875224;
    }
L_08875224:
    aot_gpr_31 = (0x0887522Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887522Cu) goto L_0887522C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887522C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08875234;
L_08875234:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27100));
    aot_gpr_31 = (0x08875240u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27088));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0147.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 356u, 0x08875240u, 0x08A53BE8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0147_entry(rt, ctx, 723u, aot_mem);
#else
        recomp_unit_0147_entry(rt, ctx, 723u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 723u, 0x08A53BE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875240u) goto L_08875240;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875240:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_5 != 0u) {
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
        goto L_0887525C;
    }
    goto L_0887524C;
L_0887524C:
    aot_gpr_31 = (0x08875254u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875254u) goto L_08875254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875254:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    goto L_0887525C;
L_0887525C:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08875284;
      }
      goto L_08875264;
    }
L_08875264:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_08875288;
    }
    goto L_08875270;
L_08875270:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(21956));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0887528C;
      }
      goto L_08875284;
    }
L_08875284:
    aot_gpr_4 = (0u | 1u);
    goto L_08875288;
L_08875288:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0887528C;
L_0887528C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088752A4;
      }
      goto L_08875294;
    }
L_08875294:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(5));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), 0u);
    goto L_088752A4;
L_088752A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
      if (branch_taken) {
          goto L_088756E8;
      }
      goto L_088752AC;
    }
L_088752AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088752F0;
      }
      goto L_088752BC;
    }
L_088752BC:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 197u);
    aot_gpr_31 = (0x088752CCu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 369u, 0x088752CCu, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088752CCu) goto L_088752CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088752CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_088752E4;
      }
      goto L_088752D8;
    }
L_088752D8:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_4);
      if (branch_taken) {
          goto L_08875328;
      }
      goto L_088752E4;
    }
L_088752E4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_4);
      if (branch_taken) {
          goto L_08875328;
      }
      goto L_088752F0;
    }
L_088752F0:
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08875328;
      }
      goto L_088752FC;
    }
L_088752FC:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 197u);
    aot_gpr_31 = (0x0887530Cu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 374u, 0x0887530Cu, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887530Cu) goto L_0887530C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887530C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08875320;
      }
      goto L_08875318;
    }
L_08875318:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
      if (branch_taken) {
          goto L_08875328;
      }
      goto L_08875320;
    }
L_08875320:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_4);
    goto L_08875328;
L_08875328:
    aot_gpr_31 = (0x08875330u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875330u) goto L_08875330;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875330:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08875350;
      }
      goto L_08875340;
    }
L_08875340:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08875354;
      }
      goto L_0887534C;
    }
L_0887534C:
    aot_gpr_5 = (0u | 1u);
    goto L_08875350;
L_08875350:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_08875354;
L_08875354:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088756E8;
      }
      goto L_0887535C;
    }
L_0887535C:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 196u);
    aot_gpr_31 = (0x0887536Cu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 384u, 0x0887536Cu, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887536Cu) goto L_0887536C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887536C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088756E8;
      }
      goto L_08875378;
    }
L_08875378:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08875398;
      }
      goto L_08875384;
    }
L_08875384:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08875390u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 387u, 0x08875390u, 0x088739ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 839u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 839u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 839u, 0x088739ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875390u) goto L_08875390;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875390:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088756E8;
      }
      goto L_08875398;
    }
L_08875398:
    aot_gpr_31 = (0x088753A0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08874D34;
L_088753A0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088753E4;
      }
      goto L_088753A8;
    }
L_088753A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088753D0;
      }
      goto L_088753B4;
    }
L_088753B4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x088753C4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 392u, 0x088753C4u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088753C4u) goto L_088753C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088753C4:
    aot_gpr_31 = (0x088753CCu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088753CCu) goto L_088753CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088753CC:
    ctx.gpr[18] = (0u | 1u);
    goto L_088753D0;
L_088753D0:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x088753DCu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 395u, 0x088753DCu, 0x0882E9ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 610u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 610u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 610u, 0x0882E9ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088753DCu) goto L_088753DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088753DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088756E8;
      }
      goto L_088753E4;
    }
L_088753E4:
    aot_gpr_31 = (0x088753ECu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08874E8C;
L_088753EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088756E8;
      }
      goto L_088753F4;
    }
L_088753F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08875438;
      }
      goto L_08875404;
    }
L_08875404:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 197u);
    aot_gpr_31 = (0x08875414u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 400u, 0x08875414u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875414u) goto L_08875414;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875414:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_0887542C;
      }
      goto L_08875420;
    }
L_08875420:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_4);
      if (branch_taken) {
          goto L_08875470;
      }
      goto L_0887542C;
    }
L_0887542C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_4);
      if (branch_taken) {
          goto L_08875470;
      }
      goto L_08875438;
    }
L_08875438:
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08875470;
      }
      goto L_08875444;
    }
L_08875444:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 197u);
    aot_gpr_31 = (0x08875454u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 405u, 0x08875454u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875454u) goto L_08875454;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875454:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08875468;
      }
      goto L_08875460;
    }
L_08875460:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
      if (branch_taken) {
          goto L_08875470;
      }
      goto L_08875468;
    }
L_08875468:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_4);
    goto L_08875470;
L_08875470:
    aot_gpr_31 = (0x08875478u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875478u) goto L_08875478;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875478:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08875498;
      }
      goto L_08875488;
    }
L_08875488:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0887549C;
      }
      goto L_08875494;
    }
L_08875494:
    aot_gpr_5 = (0u | 1u);
    goto L_08875498;
L_08875498:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_0887549C;
L_0887549C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08875524;
      }
      goto L_088754A4;
    }
L_088754A4:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 196u);
    aot_gpr_31 = (0x088754B4u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 415u, 0x088754B4u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088754B4u) goto L_088754B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088754B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088754E8;
      }
      goto L_088754C0;
    }
L_088754C0:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088754D0u);
    aot_gpr_5 = (0u | 0u);
    goto L_08874584;
L_088754D0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27336));
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27328));
    aot_gpr_31 = (0x088754E0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 418u, 0x088754E0u, 0x08873D30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 896u, 0x08873D30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088754E0u) goto L_088754E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088754E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08875524;
      }
      goto L_088754E8;
    }
L_088754E8:
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08875524;
      }
      goto L_088754F4;
    }
L_088754F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887550C;
      }
      goto L_08875500;
    }
L_08875500:
    aot_gpr_31 = (0x08875508u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875508u) goto L_08875508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875508:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_0887550C;
L_0887550C:
    aot_gpr_31 = (0x08875514u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 424u, 0x08875514u, 0x08A54034u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 4u, 0x08A54034u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875514u) goto L_08875514;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875514:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08875524u);
    aot_gpr_5 = (0u | 0u);
    goto L_08874584;
L_08875524:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_0887553C;
      }
      goto L_08875530;
    }
L_08875530:
    aot_gpr_31 = (0x08875538u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875538u) goto L_08875538;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875538:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_0887553C;
L_0887553C:
    aot_gpr_31 = (0x08875544u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0147.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 429u, 0x08875544u, 0x08A53CC4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0147_entry(rt, ctx, 730u, aot_mem);
#else
        recomp_unit_0147_entry(rt, ctx, 730u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 730u, 0x08A53CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875544u) goto L_08875544;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875544:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(3164)));
        goto L_08875560;
    }
    goto L_08875550;
L_08875550:
    aot_gpr_31 = (0x08875558u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875558u) goto L_08875558;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875558:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(3164)));
    goto L_08875560;
L_08875560:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_088755BC;
      }
      goto L_08875568;
    }
L_08875568:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08875594;
      }
      goto L_08875574;
    }
L_08875574:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08875594;
      }
      goto L_08875580;
    }
L_08875580:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2213u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(23108));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    aot_gpr_5 = (0u | 1u);
        goto L_088755C0;
    }
    goto L_08875594;
L_08875594:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_088755C4;
      }
      goto L_0887559C;
    }
L_0887559C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_088755C4;
      }
      goto L_088755A8;
    }
L_088755A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(23100));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_088755C4;
      }
      goto L_088755BC;
    }
L_088755BC:
    aot_gpr_5 = (0u | 1u);
    goto L_088755C0;
L_088755C0:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_088755C4;
L_088755C4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088756E8;
      }
      goto L_088755CC;
    }
L_088755CC:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(228));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088755E0u);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088755E0u) goto L_088755E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088755E0:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088755FC;
      }
      goto L_088755F0;
    }
L_088755F0:
    aot_gpr_31 = (0x088755F8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088755F8u) goto L_088755F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088755F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_088755FC;
L_088755FC:
    aot_gpr_31 = (0x08875604u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 447u, 0x08875604u, 0x08A551F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 283u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 283u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 283u, 0x08A551F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875604u) goto L_08875604;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875604:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27320));
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27312));
    aot_gpr_31 = (0x08875614u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 448u, 0x08875614u, 0x08873D30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 896u, 0x08873D30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875614u) goto L_08875614;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875614:
    aot_gpr_31 = (0x0887561Cu);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0026.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 449u, 0x0887561Cu, 0x0886F9ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0026_entry(rt, ctx, 589u, aot_mem);
#else
        recomp_unit_0026_entry(rt, ctx, 589u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 589u, 0x0886F9ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887561Cu) goto L_0887561C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887561C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(12)));
        goto L_08875638;
    }
    goto L_08875628;
L_08875628:
    aot_gpr_31 = (0x08875630u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875630u) goto L_08875630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875630:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    goto L_08875638;
L_08875638:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088756E8;
      }
      goto L_08875640;
    }
L_08875640:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08875654;
      }
      goto L_08875648;
    }
L_08875648:
    aot_gpr_31 = (0x08875650u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875650u) goto L_08875650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875650:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08875654;
L_08875654:
    aot_gpr_31 = (0x0887565Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 457u, 0x0887565Cu, 0x08A54F5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 247u, 0x08A54F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887565Cu) goto L_0887565C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887565C:
    ctx.gpr[7] = (3u << 16u);
    ctx.gpr[8] = (3u << 16u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 66u);
    aot_gpr_6 = (0u | 16384u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3392));
    aot_gpr_31 = (0x08875684u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(3392));
    ctx.pc = 0x08B73044u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875684:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), aot_gpr_2);
      if (branch_taken) {
          goto L_0887569C;
      }
      goto L_0887568C;
    }
L_0887568C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27352));
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27344));
    aot_gpr_31 = (0x0887569Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 460u, 0x0887569Cu, 0x08873D30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 896u, 0x08873D30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887569Cu) goto L_0887569C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887569C:
    aot_gpr_31 = (0x088756A4u);
    ctx.pc = 0x08B73514u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088756A4:
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x088756B8u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.pc = 0x08B7343Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088756B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (13702u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 14269u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27284), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088756E8;
L_088756E8:
    aot_gpr_31 = (0x088756F0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 464u, 0x088756F0u, 0x08873EF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 923u, 0x08873EF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088756F0u) goto L_088756F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088756F0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08875708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const std::uint32_t aot_run_words[5]{aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(60), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(18))))));
        goto L_08875744;
    }
    goto L_08875734;
L_08875734:
    aot_gpr_31 = (0x0887573Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887573Cu) goto L_0887573C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887573C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(18))))));
    goto L_08875744;
L_08875744:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0887576C;
      }
      goto L_0887574C;
    }
L_0887574C:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 1u);
        goto L_08875770;
    }
    goto L_08875758;
L_08875758:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(21956));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08875774;
      }
      goto L_0887576C;
    }
L_0887576C:
    aot_gpr_5 = (0u | 1u);
    goto L_08875770;
L_08875770:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_08875774;
L_08875774:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08875894;
      }
      goto L_0887577C;
    }
L_0887577C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    aot_gpr_17 = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_088757A4;
      }
      goto L_0887578C;
    }
L_0887578C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x0887579Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 476u, 0x0887579Cu, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887579Cu) goto L_0887579C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887579C:
    aot_gpr_31 = (0x088757A4u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088757A4u) goto L_088757A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088757A4:
    aot_gpr_31 = (0x088757ACu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 478u, 0x088757ACu, 0x0882E9CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 614u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 614u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 614u, 0x0882E9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088757ACu) goto L_088757AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088757AC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08875894;
      }
      goto L_088757B4;
    }
L_088757B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x088757C4u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08874254;
L_088757C4:
    aot_gpr_31 = (0x088757CCu);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088757CCu) goto L_088757CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088757CC:
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_17 != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27044));
      if (branch_taken) {
          goto L_08875804;
      }
      goto L_088757D8;
    }
L_088757D8:
    aot_gpr_17 = (0u | 0u);
    aot_gpr_31 = (0x088757E4u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 483u, 0x088757E4u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088757E4u) goto L_088757E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088757E4:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088757FC;
      }
      goto L_088757F0;
    }
L_088757F0:
    aot_gpr_31 = (0x088757F8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088757F8u) goto L_088757F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088757F8:
    aot_gpr_17 = (ctx.gpr[18] | 0u);
    goto L_088757FC;
L_088757FC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), aot_gpr_17);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27044));
    goto L_08875804;
L_08875804:
    aot_gpr_31 = (0x0887580Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 488u, 0x0887580Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887580Cu) goto L_0887580C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887580C:
    aot_gpr_6 = (0u | 60u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0887581Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887581Cu) goto L_0887581C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887581C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 1u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x08875830u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08874254;
L_08875830:
    ctx.gpr[16] = (0u | 80u);
    aot_gpr_31 = (0x0887583Cu);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887583Cu) goto L_0887583C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887583C:
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_17 != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27036));
      if (branch_taken) {
          goto L_08875874;
      }
      goto L_08875848;
    }
L_08875848:
    aot_gpr_17 = (0u | 0u);
    aot_gpr_31 = (0x08875854u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 493u, 0x08875854u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875854u) goto L_08875854;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875854:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0887586C;
      }
      goto L_08875860;
    }
L_08875860:
    aot_gpr_31 = (0x08875868u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875868u) goto L_08875868;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875868:
    aot_gpr_17 = (ctx.gpr[18] | 0u);
    goto L_0887586C;
L_0887586C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), aot_gpr_17);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27036));
    goto L_08875874;
L_08875874:
    aot_gpr_31 = (0x0887587Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 498u, 0x0887587Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887587Cu) goto L_0887587C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887587C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0887588Cu);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887588Cu) goto L_0887588C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887588C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08875E04;
      }
      goto L_08875894;
    }
L_08875894:
    aot_gpr_17 = (0u | 1u);
    aot_gpr_31 = (0x088758A0u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088758A0u) goto L_088758A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088758A0:
    aot_gpr_31 = (0x088758A8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088758A8u) goto L_088758A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088758A8:
    aot_gpr_4 = (ctx.gpr[29] | 0u);
    aot_gpr_5 = (0u | 30u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x088758C0u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088758C0u) goto L_088758C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088758C0:
    ctx.gpr[18] = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (0u | 30u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x088758DCu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088758DCu) goto L_088758DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088758DC:
    ctx.gpr[19] = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (0u | 30u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x088758F8u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088758F8u) goto L_088758F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088758F8:
    ctx.gpr[20] = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (0u | 30u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x08875914u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875914u) goto L_08875914;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875914:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (ctx.gpr[18] & 255u);
    aot_gpr_6 = (ctx.gpr[19] & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (ctx.gpr[20] & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08875940u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875940u) goto L_08875940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875940:
    aot_gpr_5 = (16576u << 16u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (17389u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17288u << 16u);
    aot_gpr_31 = (0x08875964u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875964u) goto L_08875964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875964:
    aot_gpr_31 = (0x0887596Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 509u, 0x0887596Cu, 0x08B0C4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887596Cu) goto L_0887596C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887596C:
    aot_gpr_31 = (0x08875974u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875974u) goto L_08875974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875974:
    aot_gpr_31 = (0x0887597Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0205.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 511u, 0x0887597Cu, 0x08B3AAF0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0205_entry(rt, ctx, 734u, aot_mem);
#else
        recomp_unit_0205_entry(rt, ctx, 734u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 734u, 0x08B3AAF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887597Cu) goto L_0887597C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887597C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088759DC;
      }
      goto L_08875984;
    }
L_08875984:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27028));
      if (branch_taken) {
          goto L_088759BC;
      }
      goto L_08875990;
    }
L_08875990:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0887599Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 514u, 0x0887599Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887599Cu) goto L_0887599C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887599C:
    aot_gpr_17 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_088759B4;
      }
      goto L_088759A8;
    }
L_088759A8:
    aot_gpr_31 = (0x088759B0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088759B0u) goto L_088759B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088759B0:
    ctx.gpr[16] = (aot_gpr_17 | 0u);
    goto L_088759B4;
L_088759B4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27028));
    goto L_088759BC;
L_088759BC:
    aot_gpr_31 = (0x088759C4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 519u, 0x088759C4u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088759C4u) goto L_088759C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088759C4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088759D4u);
    aot_gpr_6 = (0u | 60u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088759D4u) goto L_088759D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088759D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08875E04;
      }
      goto L_088759DC;
    }
L_088759DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088759F4;
      }
      goto L_088759E8;
    }
L_088759E8:
    aot_gpr_31 = (0x088759F0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088759F0u) goto L_088759F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088759F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_088759F4;
L_088759F4:
    aot_gpr_31 = (0x088759FCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 525u, 0x088759FCu, 0x08A54ED4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 237u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 237u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088759FCu) goto L_088759FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088759FC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08875A5C;
      }
      goto L_08875A04;
    }
L_08875A04:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27020));
      if (branch_taken) {
          goto L_08875A3C;
      }
      goto L_08875A10;
    }
L_08875A10:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08875A1Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 528u, 0x08875A1Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875A1Cu) goto L_08875A1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875A1C:
    aot_gpr_17 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08875A34;
      }
      goto L_08875A28;
    }
L_08875A28:
    aot_gpr_31 = (0x08875A30u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875A30u) goto L_08875A30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875A30:
    ctx.gpr[16] = (aot_gpr_17 | 0u);
    goto L_08875A34;
L_08875A34:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27020));
    goto L_08875A3C;
L_08875A3C:
    aot_gpr_31 = (0x08875A44u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 533u, 0x08875A44u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875A44u) goto L_08875A44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875A44:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08875A54u);
    aot_gpr_6 = (0u | 60u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875A54u) goto L_08875A54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875A54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08875E04;
      }
      goto L_08875A5C;
    }
L_08875A5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[18] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08875A80;
      }
      goto L_08875A6C;
    }
L_08875A6C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_17);
    aot_gpr_31 = (0x08875A78u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 537u, 0x08875A78u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875A78u) goto L_08875A78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875A78:
    aot_gpr_31 = (0x08875A80u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875A80u) goto L_08875A80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875A80:
    aot_gpr_31 = (0x08875A88u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 539u, 0x08875A88u, 0x0882E9A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 609u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 609u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 609u, 0x0882E9A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875A88u) goto L_08875A88;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875A88:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
      if (branch_taken) {
          goto L_08875C5C;
      }
      goto L_08875A90;
    }
L_08875A90:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08875E04;
      }
      goto L_08875A98;
    }
L_08875A98:
    aot_gpr_4 = (16174u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 5243u);
    aot_gpr_31 = (0x08875AA8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 542u, 0x08875AA8u, 0x08B0C520u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 68u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 68u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875AA8u) goto L_08875AA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875AA8:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27012));
      if (branch_taken) {
          goto L_08875AE0;
      }
      goto L_08875AB4;
    }
L_08875AB4:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x08875AC0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 544u, 0x08875AC0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875AC0u) goto L_08875AC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875AC0:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08875AD8;
      }
      goto L_08875ACC;
    }
L_08875ACC:
    aot_gpr_31 = (0x08875AD4u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875AD4u) goto L_08875AD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875AD4:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08875AD8;
L_08875AD8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27012));
    goto L_08875AE0;
L_08875AE0:
    aot_gpr_31 = (0x08875AE8u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 549u, 0x08875AE8u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875AE8u) goto L_08875AE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875AE8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08875AF8u);
    aot_gpr_6 = (0u | 60u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875AF8u) goto L_08875AF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875AF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08875B18;
      }
      goto L_08875B04;
    }
L_08875B04:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_17);
    aot_gpr_31 = (0x08875B10u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 552u, 0x08875B10u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875B10u) goto L_08875B10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875B10:
    aot_gpr_31 = (0x08875B18u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875B18u) goto L_08875B18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875B18:
    aot_gpr_31 = (0x08875B20u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 554u, 0x08875B20u, 0x0882E9CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 614u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 614u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 614u, 0x0882E9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875B20u) goto L_08875B20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875B20:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08875E04;
      }
      goto L_08875B28;
    }
L_08875B28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08875B60;
      }
      goto L_08875B34;
    }
L_08875B34:
    aot_gpr_17 = (0u | 0u);
    aot_gpr_31 = (0x08875B40u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 557u, 0x08875B40u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875B40u) goto L_08875B40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875B40:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08875B58;
      }
      goto L_08875B4C;
    }
L_08875B4C:
    aot_gpr_31 = (0x08875B54u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875B54u) goto L_08875B54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875B54:
    aot_gpr_17 = (ctx.gpr[18] | 0u);
    goto L_08875B58;
L_08875B58:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), aot_gpr_17);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_08875B60;
L_08875B60:
    aot_gpr_31 = (0x08875B68u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27004));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 562u, 0x08875B68u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875B68u) goto L_08875B68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875B68:
    aot_gpr_6 = (0u | 120u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08875B78u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875B78u) goto L_08875B78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875B78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x08875B88u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08874254;
L_08875B88:
    aot_gpr_17 = (0u | 170u);
    aot_gpr_31 = (0x08875B94u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875B94u) goto L_08875B94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875B94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08875BCC;
      }
      goto L_08875BA0;
    }
L_08875BA0:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08875BACu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 567u, 0x08875BACu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875BACu) goto L_08875BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875BAC:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08875BC4;
      }
      goto L_08875BB8;
    }
L_08875BB8:
    aot_gpr_31 = (0x08875BC0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875BC0u) goto L_08875BC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875BC0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08875BC4;
L_08875BC4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08875BCC;
L_08875BCC:
    aot_gpr_31 = (0x08875BD4u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-26996));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 572u, 0x08875BD4u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875BD4u) goto L_08875BD4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875BD4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08875BE4u);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875BE4u) goto L_08875BE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875BE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 ^ 1u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x08875BF8u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08874254;
L_08875BF8:
    aot_gpr_17 = (0u | 190u);
    aot_gpr_31 = (0x08875C04u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875C04u) goto L_08875C04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875C04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08875C3C;
      }
      goto L_08875C10;
    }
L_08875C10:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08875C1Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 577u, 0x08875C1Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875C1Cu) goto L_08875C1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875C1C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08875C34;
      }
      goto L_08875C28;
    }
L_08875C28:
    aot_gpr_31 = (0x08875C30u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875C30u) goto L_08875C30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875C30:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08875C34;
L_08875C34:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08875C3C;
L_08875C3C:
    aot_gpr_31 = (0x08875C44u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-26988));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 582u, 0x08875C44u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875C44u) goto L_08875C44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875C44:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08875C54u);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875C54u) goto L_08875C54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875C54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08875E04;
      }
      goto L_08875C5C;
    }
L_08875C5C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08875DAC;
      }
      goto L_08875C64;
    }
L_08875C64:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-26980));
      if (branch_taken) {
          goto L_08875C9C;
      }
      goto L_08875C70;
    }
L_08875C70:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08875C7Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 587u, 0x08875C7Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875C7Cu) goto L_08875C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875C7C:
    aot_gpr_17 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08875C94;
      }
      goto L_08875C88;
    }
L_08875C88:
    aot_gpr_31 = (0x08875C90u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875C90u) goto L_08875C90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875C90:
    ctx.gpr[16] = (aot_gpr_17 | 0u);
    goto L_08875C94;
L_08875C94:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-26980));
    goto L_08875C9C;
L_08875C9C:
    aot_gpr_31 = (0x08875CA4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 592u, 0x08875CA4u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875CA4u) goto L_08875CA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875CA4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08875CB4u);
    aot_gpr_6 = (0u | 60u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875CB4u) goto L_08875CB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875CB4:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 236u);
    ctx.gpr[7] = (0u | 147u);
    aot_gpr_31 = (0x08875CCCu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875CCCu) goto L_08875CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875CCC:
    ctx.gpr[16] = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 236u);
    ctx.gpr[7] = (0u | 147u);
    aot_gpr_31 = (0x08875CE8u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875CE8u) goto L_08875CE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875CE8:
    aot_gpr_17 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 236u);
    ctx.gpr[7] = (0u | 147u);
    aot_gpr_31 = (0x08875D04u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875D04u) goto L_08875D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875D04:
    ctx.gpr[18] = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 236u);
    ctx.gpr[7] = (0u | 147u);
    aot_gpr_31 = (0x08875D20u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875D20u) goto L_08875D20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875D20:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (ctx.gpr[16] & 255u);
    aot_gpr_6 = (aot_gpr_17 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (ctx.gpr[18] & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08875D4Cu);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875D4Cu) goto L_08875D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875D4C:
    aot_gpr_31 = (0x08875D54u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875D54u) goto L_08875D54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875D54:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-26972));
      if (branch_taken) {
          goto L_08875D8C;
      }
      goto L_08875D60;
    }
L_08875D60:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08875D6Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 601u, 0x08875D6Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875D6Cu) goto L_08875D6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875D6C:
    aot_gpr_17 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08875D84;
      }
      goto L_08875D78;
    }
L_08875D78:
    aot_gpr_31 = (0x08875D80u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875D80u) goto L_08875D80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875D80:
    ctx.gpr[16] = (aot_gpr_17 | 0u);
    goto L_08875D84;
L_08875D84:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-26972));
    goto L_08875D8C;
L_08875D8C:
    aot_gpr_31 = (0x08875D94u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 606u, 0x08875D94u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875D94u) goto L_08875D94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875D94:
    aot_gpr_6 = (0u | 170u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08875DA4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875DA4u) goto L_08875DA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875DA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08875E04;
      }
      goto L_08875DAC;
    }
L_08875DAC:
    aot_gpr_31 = (0x08875DB4u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875DB4u) goto L_08875DB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875DB4:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-26964));
      if (branch_taken) {
          goto L_08875DEC;
      }
      goto L_08875DC0;
    }
L_08875DC0:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08875DCCu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 611u, 0x08875DCCu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875DCCu) goto L_08875DCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875DCC:
    aot_gpr_17 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08875DE4;
      }
      goto L_08875DD8;
    }
L_08875DD8:
    aot_gpr_31 = (0x08875DE0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875DE0u) goto L_08875DE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875DE0:
    ctx.gpr[16] = (aot_gpr_17 | 0u);
    goto L_08875DE4;
L_08875DE4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-26964));
    goto L_08875DEC;
L_08875DEC:
    aot_gpr_31 = (0x08875DF4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 616u, 0x08875DF4u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875DF4u) goto L_08875DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875DF4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08875E04u);
    aot_gpr_6 = (0u | 60u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875E04u) goto L_08875E04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875E04:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(56), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08875E24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(156), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08875E64;
      }
      goto L_08875E48;
    }
L_08875E48:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08875E5Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28416));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 620u, 0x08875E5Cu, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875E5Cu) goto L_08875E5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875E5C:
    aot_gpr_31 = (0x08875E64u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875E64u) goto L_08875E64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875E64:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_31 = (0x08875E74u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28416));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 622u, 0x08875E74u, 0x0882E704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 553u, 0x0882E704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875E74u) goto L_08875E74;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875E74:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08875E80u);
    aot_gpr_5 = (0u | 0u);
    goto L_08874808;
L_08875E80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08875E98;
    }
    goto L_08875E8C;
L_08875E8C:
    aot_gpr_31 = (0x08875E94u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875E94u) goto L_08875E94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875E94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08875E98;
L_08875E98:
    aot_gpr_31 = (0x08875EA0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 627u, 0x08875EA0u, 0x08A545ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 80u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 80u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 80u, 0x08A545ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875EA0u) goto L_08875EA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875EA0:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[7] = (2183u << 16u);
    aot_gpr_17 = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(14));
    aot_gpr_5 = (0u | 7u);
    aot_gpr_6 = (0u | 10u);
    aot_gpr_31 = (0x08875ED8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(13788));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 628u, 0x08875ED8u, 0x08B60C7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 158u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 158u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875ED8u) goto L_08875ED8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875ED8:
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08875F10;
      }
      goto L_08875EE0;
    }
L_08875EE0:
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08875F10;
      }
      goto L_08875EEC;
    }
L_08875EEC:
    aot_gpr_6 = (aot_gpr_17 + aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[29] + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08875EEC;
      }
      goto L_08875F10;
    }
L_08875F10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08875F24;
      }
      goto L_08875F1C;
    }
L_08875F1C:
    aot_gpr_31 = (0x08875F24u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875F24u) goto L_08875F24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875F24:
    aot_gpr_31 = (0x08875F2Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0147.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 634u, 0x08875F2Cu, 0x08A53CC4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0147_entry(rt, ctx, 730u, aot_mem);
#else
        recomp_unit_0147_entry(rt, ctx, 730u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 730u, 0x08A53CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875F2Cu) goto L_08875F2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875F2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08875F40;
      }
      goto L_08875F38;
    }
L_08875F38:
    aot_gpr_31 = (0x08875F40u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875F40u) goto L_08875F40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875F40:
    aot_gpr_31 = (0x08875F48u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 637u, 0x08875F48u, 0x08A54ED4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 237u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 237u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875F48u) goto L_08875F48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875F48:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08875F70;
      }
      goto L_08875F50;
    }
L_08875F50:
    aot_gpr_31 = (0x08875F58u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875F58u) goto L_08875F58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875F58:
    aot_gpr_31 = (0x08875F60u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 640u, 0x08875F60u, 0x0898C008u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 2u, 0x0898C008u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875F60u) goto L_08875F60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875F60:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088760C8;
      }
      goto L_08875F68;
    }
L_08875F68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
      if (branch_taken) {
          goto L_08875FA4;
      }
      goto L_08875F70;
    }
L_08875F70:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 198u);
    aot_gpr_31 = (0x08875F8Cu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 643u, 0x08875F8Cu, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875F8Cu) goto L_08875F8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875F8C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27352));
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27344));
    aot_gpr_31 = (0x08875F9Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 644u, 0x08875F9Cu, 0x08873D30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 896u, 0x08873D30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875F9Cu) goto L_08875F9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08875F9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 92u, 0x088784A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08875FA4;
    }
L_08875FA4:
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08875FB8;
    }
    goto L_08875FAC;
L_08875FAC:
    aot_gpr_31 = (0x08875FB4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08875FB4u) goto L_08875FB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08875FB4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08875FB8;
L_08875FB8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08875FEC;
      }
      goto L_08875FC4;
    }
L_08875FC4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_08875FF0;
    }
    goto L_08875FD4;
L_08875FD4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(21956));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08875FF4;
      }
      goto L_08875FEC;
    }
L_08875FEC:
    aot_gpr_4 = (0u | 1u);
    goto L_08875FF0;
L_08875FF0:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08875FF4;
L_08875FF4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088760C8;
      }
      goto L_08875FFC;
    }
L_08875FFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08876014;
    }
    goto L_08876008;
L_08876008:
    aot_gpr_31 = (0x08876010u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876010u) goto L_08876010;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876010:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08876014;
L_08876014:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(3164)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08876090;
      }
      goto L_08876020;
    }
L_08876020:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_0887605C;
    }
    goto L_08876030;
L_08876030:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_0887605C;
    }
    goto L_08876040;
L_08876040:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(23108));
    if (aot_gpr_6 == aot_gpr_5) {
    aot_gpr_4 = (0u | 1u);
        goto L_08876094;
    }
    goto L_08876058;
L_08876058:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_0887605C;
L_0887605C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_08876098;
    }
    goto L_08876068;
L_08876068:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_08876098;
    }
    goto L_08876078;
L_08876078:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(23100));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08876098;
      }
      goto L_08876090;
    }
L_08876090:
    aot_gpr_4 = (0u | 1u);
    goto L_08876094;
L_08876094:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08876098;
L_08876098:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088760C8;
      }
      goto L_088760A0;
    }
L_088760A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_088760B8;
    }
    goto L_088760AC;
L_088760AC:
    aot_gpr_31 = (0x088760B4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088760B4u) goto L_088760B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088760B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_088760B8;
L_088760B8:
    aot_gpr_31 = (0x088760C0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 672u, 0x088760C0u, 0x08A545ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 80u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 80u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 80u, 0x08A545ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088760C0u) goto L_088760C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088760C0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08876268;
      }
      goto L_088760C8;
    }
L_088760C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088760DC;
      }
      goto L_088760D4;
    }
L_088760D4:
    aot_gpr_31 = (0x088760DCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088760DCu) goto L_088760DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088760DC:
    aot_gpr_31 = (0x088760E4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 676u, 0x088760E4u, 0x08A54ED4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 237u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 237u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088760E4u) goto L_088760E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088760E4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08876138;
      }
      goto L_088760EC;
    }
L_088760EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08876100;
      }
      goto L_088760F8;
    }
L_088760F8:
    aot_gpr_31 = (0x08876100u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876100u) goto L_08876100;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876100:
    aot_gpr_31 = (0x08876108u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 680u, 0x08876108u, 0x08A546D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 93u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 93u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 93u, 0x08A546D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876108u) goto L_08876108;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876108:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08876120;
      }
      goto L_08876114;
    }
L_08876114:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    aot_gpr_31 = (0x08876120u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876120:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08876138;
      }
      goto L_0887612C;
    }
L_0887612C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(248)));
    aot_gpr_31 = (0x08876138u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876138:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 198u);
    aot_gpr_31 = (0x08876154u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 685u, 0x08876154u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876154u) goto L_08876154;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876154:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27352));
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27344));
    aot_gpr_31 = (0x08876164u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 686u, 0x08876164u, 0x08873D30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 896u, 0x08873D30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876164u) goto L_08876164;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876164:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
    aot_gpr_31 = (0x08876170u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876170u) goto L_08876170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876170:
    aot_gpr_31 = (0x08876178u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 688u, 0x08876178u, 0x0898C008u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 2u, 0x0898C008u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876178u) goto L_08876178;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876178:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08876260;
      }
      goto L_08876180;
    }
L_08876180:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08876198;
    }
    goto L_0887618C;
L_0887618C:
    aot_gpr_31 = (0x08876194u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876194u) goto L_08876194;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876194:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08876198;
L_08876198:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(3164)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08876214;
      }
      goto L_088761A4;
    }
L_088761A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_088761E0;
    }
    goto L_088761B4;
L_088761B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_088761E0;
    }
    goto L_088761C4;
L_088761C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(23108));
    if (aot_gpr_6 == aot_gpr_5) {
    aot_gpr_4 = (0u | 1u);
        goto L_08876218;
    }
    goto L_088761DC;
L_088761DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_088761E0;
L_088761E0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_0887621C;
    }
    goto L_088761EC;
L_088761EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_0887621C;
    }
    goto L_088761FC;
L_088761FC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(23100));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0887621C;
      }
      goto L_08876214;
    }
L_08876214:
    aot_gpr_4 = (0u | 1u);
    goto L_08876218;
L_08876218:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0887621C;
L_0887621C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08876260;
      }
      goto L_08876224;
    }
L_08876224:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08876250;
      }
      goto L_08876230;
    }
L_08876230:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08876244u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28416));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 705u, 0x08876244u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876244u) goto L_08876244;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876244:
    aot_gpr_31 = (0x0887624Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887624Cu) goto L_0887624C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887624C:
    aot_gpr_4 = (2237u << 16u);
    goto L_08876250;
L_08876250:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08876260u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28416));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 708u, 0x08876260u, 0x0882FCA0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 942u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 942u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 942u, 0x0882FCA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876260u) goto L_08876260;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876260:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 92u, 0x088784A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08876268;
    }
L_08876268:
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08876278u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0029.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 710u, 0x08876278u, 0x0887BF94u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0029_entry(rt, ctx, 1338u, aot_mem);
#else
        recomp_unit_0029_entry(rt, ctx, 1338u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 1338u, 0x0887BF94u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876278u) goto L_08876278;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876278:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088762D0;
      }
      goto L_08876284;
    }
L_08876284:
    aot_gpr_31 = (0x0887628Cu);
    ctx.pc = 0x08B73514u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887628C:
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x088762A0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.pc = 0x08B7343Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088762A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (13702u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 14269u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27284), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088762D0;
L_088762D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_088762E8;
    }
    goto L_088762DC;
L_088762DC:
    aot_gpr_31 = (0x088762E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088762E4u) goto L_088762E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088762E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_088762E8;
L_088762E8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08876440;
      }
      goto L_088762F4;
    }
L_088762F4:
    aot_gpr_31 = (0x088762FCu);
    ctx.pc = 0x08B73514u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088762FC:
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08876310u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.pc = 0x08B7343Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876310:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr_5 = (13702u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 | 14269u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27284)));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16384u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[16])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08876440;
      }
      goto L_0887635C;
    }
L_0887635C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08876370;
      }
      goto L_08876368;
    }
L_08876368:
    aot_gpr_31 = (0x08876370u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876370u) goto L_08876370;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876370:
    aot_gpr_31 = (0x08876378u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 724u, 0x08876378u, 0x08A54ED4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 237u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 237u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876378u) goto L_08876378;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876378:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088763CC;
      }
      goto L_08876380;
    }
L_08876380:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08876394;
      }
      goto L_0887638C;
    }
L_0887638C:
    aot_gpr_31 = (0x08876394u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876394u) goto L_08876394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876394:
    aot_gpr_31 = (0x0887639Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 728u, 0x0887639Cu, 0x08A546D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 93u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 93u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 93u, 0x08A546D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887639Cu) goto L_0887639C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887639C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088763B4;
      }
      goto L_088763A8;
    }
L_088763A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    aot_gpr_31 = (0x088763B4u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088763B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088763CC;
      }
      goto L_088763C0;
    }
L_088763C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(248)));
    aot_gpr_31 = (0x088763CCu);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088763CC:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 198u);
    aot_gpr_31 = (0x088763E8u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 733u, 0x088763E8u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088763E8u) goto L_088763E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088763E8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27352));
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27344));
    aot_gpr_31 = (0x088763F8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 734u, 0x088763F8u, 0x08873D30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 896u, 0x08873D30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088763F8u) goto L_088763F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088763F8:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08876428;
      }
      goto L_08876408;
    }
L_08876408:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x0887641Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28416));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 736u, 0x0887641Cu, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887641Cu) goto L_0887641C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887641C:
    aot_gpr_31 = (0x08876424u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876424u) goto L_08876424;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876424:
    aot_gpr_4 = (2237u << 16u);
    goto L_08876428;
L_08876428:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08876438u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28416));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 739u, 0x08876438u, 0x0882FCA0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 942u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 942u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 942u, 0x0882FCA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876438u) goto L_08876438;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876438:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 92u, 0x088784A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08876440;
    }
L_08876440:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (0u | 0u);
    aot_gpr_31 = (0x08876450u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876450u) goto L_08876450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876450:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088764C4;
      }
      goto L_08876460;
    }
L_08876460:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24064)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08876478:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 5u);
      if (branch_taken) {
          goto L_088764C4;
      }
      goto L_08876480;
    }
L_08876480:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 6u);
      if (branch_taken) {
          goto L_088764C4;
      }
      goto L_08876488;
    }
L_08876488:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 3u);
      if (branch_taken) {
          goto L_088764C4;
      }
      goto L_08876490;
    }
L_08876490:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 4u);
      if (branch_taken) {
          goto L_088764C4;
      }
      goto L_08876498;
    }
L_08876498:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 2u);
      if (branch_taken) {
          goto L_088764C4;
      }
      goto L_088764A0;
    }
L_088764A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 3u);
      if (branch_taken) {
          goto L_088764C4;
      }
      goto L_088764A8;
    }
L_088764A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 3u);
      if (branch_taken) {
          goto L_088764C4;
      }
      goto L_088764B0;
    }
L_088764B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 4u);
      if (branch_taken) {
          goto L_088764C4;
      }
      goto L_088764B8;
    }
L_088764B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 3u);
      if (branch_taken) {
          goto L_088764C4;
      }
      goto L_088764C0;
    }
L_088764C0:
    aot_gpr_17 = (0u | 3u);
    goto L_088764C4;
L_088764C4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x088764D0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088764D0u) goto L_088764D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088764D0:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_088764F8;
      }
      goto L_088764D8;
    }
L_088764D8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088764F8;
      }
      goto L_088764F4;
    }
L_088764F4:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(2));
    goto L_088764F8;
L_088764F8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08876504u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 758u, 0x08876504u, 0x08873F64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 933u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 933u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 933u, 0x08873F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876504u) goto L_08876504;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876504:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[18] = (aot_gpr_17 | 0u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_088765A4;
      }
      goto L_08876514;
    }
L_08876514:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088765A4;
      }
      goto L_08876530;
    }
L_08876530:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887654C;
      }
      goto L_0887653C;
    }
L_0887653C:
    aot_gpr_31 = (0x08876544u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 762u, 0x08876544u, 0x0887352Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 743u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 743u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 743u, 0x0887352Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876544u) goto L_08876544;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876544:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08876568;
      }
      goto L_0887654C;
    }
L_0887654C:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 197u);
    aot_gpr_31 = (0x0887655Cu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 764u, 0x0887655Cu, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887655Cu) goto L_0887655C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887655C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7072)));
    aot_gpr_4 = (aot_gpr_4 ^ 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7072), aot_gpr_4);
    goto L_08876568;
L_08876568:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08876588;
      }
      goto L_08876578;
    }
L_08876578:
    aot_gpr_31 = (0x08876580u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 767u, 0x08876580u, 0x08873584u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 751u, 0x08873584u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876580u) goto L_08876580;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876580:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088765A4;
      }
      goto L_08876588;
    }
L_08876588:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 197u);
    aot_gpr_31 = (0x08876598u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 769u, 0x08876598u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876598u) goto L_08876598;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876598:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7072)));
    aot_gpr_4 = (aot_gpr_4 ^ 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7072), aot_gpr_4);
    goto L_088765A4;
L_088765A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_088765BC;
    }
    goto L_088765B0;
L_088765B0:
    aot_gpr_31 = (0x088765B8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088765B8u) goto L_088765B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088765B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_088765BC;
L_088765BC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08876650;
      }
      goto L_088765C8;
    }
L_088765C8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08876648;
      }
      goto L_088765E8;
    }
L_088765E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08876608;
      }
      goto L_088765F8;
    }
L_088765F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0887661C;
      }
      goto L_08876608;
    }
L_08876608:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (aot_gpr_5 == aot_gpr_4) {
    aot_gpr_4 = (ctx.gpr[18] | 0u);
        goto L_08876618;
    }
    goto L_08876618;
L_08876618:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_4);
    goto L_0887661C;
L_0887661C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08876630;
      }
      goto L_0887662C;
    }
L_0887662C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), ctx.gpr[18]);
    goto L_08876630;
L_08876630:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 82u, 0x08878430u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08876640;
    }
L_08876640:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_17);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 82u, 0x08878430u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08876648;
    }
L_08876648:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_17);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 82u, 0x08878430u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08876650;
    }
L_08876650:
    ctx.gpr[18] = (aot_gpr_17 + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887669C;
      }
      goto L_08876664;
    }
L_08876664:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08876680;
      }
      goto L_08876670;
    }
L_08876670:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 197u);
    aot_gpr_31 = (0x08876680u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 787u, 0x08876680u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876680u) goto L_08876680;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876680:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_4);
      if (branch_taken) {
          goto L_0887669C;
      }
      goto L_08876694;
    }
L_08876694:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_4);
    goto L_0887669C;
L_0887669C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088766D4;
      }
      goto L_088766AC;
    }
L_088766AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088766C8;
      }
      goto L_088766B8;
    }
L_088766B8:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 197u);
    aot_gpr_31 = (0x088766C8u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 792u, 0x088766C8u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088766C8u) goto L_088766C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088766C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_4);
    goto L_088766D4;
L_088766D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088766E8;
      }
      goto L_088766E4;
    }
L_088766E4:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
    goto L_088766E8;
L_088766E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088766FC;
      }
      goto L_088766F8;
    }
L_088766F8:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
    goto L_088766FC;
L_088766FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_0887670C;
      }
      goto L_08876708;
    }
L_08876708:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), ctx.gpr[18]);
    goto L_0887670C;
L_0887670C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08876724;
    }
    goto L_08876718;
L_08876718:
    aot_gpr_31 = (0x08876720u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876720u) goto L_08876720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876720:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08876724;
L_08876724:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0887675C;
      }
      goto L_08876734;
    }
L_08876734:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 1u);
        goto L_08876760;
    }
    goto L_08876744;
L_08876744:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[7] = (2213u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(21956));
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_6;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08876764;
      }
      goto L_0887675C;
    }
L_0887675C:
    aot_gpr_5 = (0u | 1u);
    goto L_08876760;
L_08876760:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08876764;
L_08876764:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_088767E4;
    }
    goto L_0887676C;
L_0887676C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_088767A8;
    }
    goto L_0887677C;
L_0887677C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_088767A8;
    }
    goto L_0887678C;
L_0887678C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(21964));
    if (aot_gpr_6 == aot_gpr_5) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_088767E4;
    }
    goto L_088767A4;
L_088767A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_088767A8;
L_088767A8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_088767E0;
    }
    goto L_088767B4;
L_088767B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_088767E0;
    }
    goto L_088767C4;
L_088767C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(22528));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088767E4;
      }
      goto L_088767DC;
    }
L_088767DC:
    aot_gpr_4 = (0u | 1u);
    goto L_088767E0;
L_088767E0:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088767E4;
L_088767E4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088767F4;
      }
      goto L_088767EC;
    }
L_088767EC:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_4);
    goto L_088767F4;
L_088767F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08876810;
      }
      goto L_08876800;
    }
L_08876800:
    aot_gpr_31 = (0x08876808u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 821u, 0x08876808u, 0x0887352Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 743u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 743u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 743u, 0x0887352Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876808u) goto L_08876808;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876808:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08877498;
      }
      goto L_08876810;
    }
L_08876810:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08876838;
      }
      goto L_0887681C;
    }
L_0887681C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_17;
      if (branch_taken) {
          goto L_08876838;
      }
      goto L_08876828;
    }
L_08876828:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 197u);
    aot_gpr_31 = (0x08876838u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 825u, 0x08876838u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876838u) goto L_08876838;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876838:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088768A0;
      }
      goto L_08876844;
    }
L_08876844:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08876850u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876850u) goto L_08876850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876850:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08876870;
      }
      goto L_08876858;
    }
L_08876858:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 9u);
    aot_gpr_31 = (0x08876868u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 829u, 0x08876868u, 0x08ADC72Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 136u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 136u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 136u, 0x08ADC72Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876868u) goto L_08876868;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876868:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887688C;
      }
      goto L_08876870;
    }
L_08876870:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08876880u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876880u) goto L_08876880;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876880:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x0887688Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 832u, 0x0887688Cu, 0x08ADC72Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 136u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 136u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 136u, 0x08ADC72Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887688Cu) goto L_0887688C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887688C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08876898u);
    aot_gpr_5 = (0u | 1u);
    goto L_08874584;
L_08876898:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088768A0;
    }
L_088768A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08876928;
      }
      goto L_088768B0;
    }
L_088768B0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x088768BCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088768BCu) goto L_088768BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088768BC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088768DC;
      }
      goto L_088768C4;
    }
L_088768C4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 11u);
    aot_gpr_31 = (0x088768D4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 838u, 0x088768D4u, 0x08ADC73Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 138u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 138u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 138u, 0x08ADC73Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088768D4u) goto L_088768D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088768D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088768F8;
      }
      goto L_088768DC;
    }
L_088768DC:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x088768ECu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088768ECu) goto L_088768EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088768EC:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x088768F8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 841u, 0x088768F8u, 0x08ADC73Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 138u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 138u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 138u, 0x08ADC73Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088768F8u) goto L_088768F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088768F8:
    aot_gpr_31 = (0x08876900u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0887487C;
L_08876900:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088768B0;
      }
      goto L_08876908;
    }
L_08876908:
    aot_gpr_31 = (0x08876910u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08874B80;
L_08876910:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088768B0;
      }
      goto L_08876918;
    }
L_08876918:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08876928;
    }
L_08876928:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08876934u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876934u) goto L_08876934;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876934:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08876944;
    }
L_08876944:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24024)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0887695C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08876CC0;
      }
      goto L_08876970;
    }
L_08876970:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088769E0;
      }
      goto L_0887697C;
    }
L_0887697C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08876A30;
      }
      goto L_08876984;
    }
L_08876984:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876A80;
      }
      goto L_0887698C;
    }
L_0887698C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08876BA4;
      }
      goto L_08876994;
    }
L_08876994:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_088769C8;
      }
      goto L_088769AC;
    }
L_088769AC:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_6 & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(48), aot_gpr_4);
      if (branch_taken) {
          goto L_088769D8;
      }
      goto L_088769C8;
    }
L_088769C8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_5 | 2u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_gpr_5);
    goto L_088769D8;
L_088769D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08876CC0;
      }
      goto L_088769E0;
    }
L_088769E0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x088769ECu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 859u, 0x088769ECu, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088769ECu) goto L_088769EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088769EC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) > 0;
      if (branch_taken) {
          goto L_08876A0C;
      }
      goto L_088769F4;
    }
L_088769F4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 50u);
    aot_gpr_31 = (0x08876A04u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 861u, 0x08876A04u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876A04u) goto L_08876A04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876A04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08876A28;
      }
      goto L_08876A0C;
    }
L_08876A0C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08876A1Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 863u, 0x08876A1Cu, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876A1Cu) goto L_08876A1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876A1C:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08876A28u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 864u, 0x08876A28u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876A28u) goto L_08876A28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876A28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08876CC0;
      }
      goto L_08876A30;
    }
L_08876A30:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08876A3Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 866u, 0x08876A3Cu, 0x08ADC774u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 145u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 145u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876A3Cu) goto L_08876A3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876A3C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) > 0;
      if (branch_taken) {
          goto L_08876A5C;
      }
      goto L_08876A44;
    }
L_08876A44:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 60u);
    aot_gpr_31 = (0x08876A54u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 868u, 0x08876A54u, 0x08ADC76Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 144u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 144u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 144u, 0x08ADC76Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876A54u) goto L_08876A54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876A54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08876A78;
      }
      goto L_08876A5C;
    }
L_08876A5C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08876A6Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 870u, 0x08876A6Cu, 0x08ADC774u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 145u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 145u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876A6Cu) goto L_08876A6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876A6C:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08876A78u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 871u, 0x08876A78u, 0x08ADC76Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 144u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 144u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 144u, 0x08ADC76Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876A78u) goto L_08876A78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876A78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08876CC0;
      }
      goto L_08876A80;
    }
L_08876A80:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08876B9C;
      }
      goto L_08876AA0;
    }
L_08876AA0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08876AACu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 874u, 0x08876AACu, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876AACu) goto L_08876AAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876AAC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) > 0;
      if (branch_taken) {
          goto L_08876ACC;
      }
      goto L_08876AB4;
    }
L_08876AB4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 9u);
    aot_gpr_31 = (0x08876AC4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 876u, 0x08876AC4u, 0x08ADC79Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 150u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 150u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 150u, 0x08ADC79Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876AC4u) goto L_08876AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876AC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08876AEC;
      }
      goto L_08876ACC;
    }
L_08876ACC:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08876ADCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 878u, 0x08876ADCu, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876ADCu) goto L_08876ADC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876ADC:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_31 = (0x08876AECu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 879u, 0x08876AECu, 0x08ADC79Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 150u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 150u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 150u, 0x08ADC79Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876AECu) goto L_08876AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876AEC:
    aot_gpr_4 = (2237u << 16u);
    goto L_08876AF0;
L_08876AF0:
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08876AFCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 881u, 0x08876AFCu, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876AFCu) goto L_08876AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876AFC:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08876B08u);
    aot_gpr_17 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 882u, 0x08876B08u, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876B08u) goto L_08876B08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876B08:
    { const bool branch_taken = aot_gpr_17 == aot_gpr_2;
      if (branch_taken) {
          goto L_08876B48;
      }
      goto L_08876B10;
    }
L_08876B10:
    aot_gpr_31 = (0x08876B18u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0127.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 884u, 0x08876B18u, 0x08A01484u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0127_entry(rt, ctx, 359u, aot_mem);
#else
        recomp_unit_0127_entry(rt, ctx, 359u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 359u, 0x08A01484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876B18u) goto L_08876B18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876B18:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08876B28u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 885u, 0x08876B28u, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876B28u) goto L_08876B28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876B28:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 3u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-19192));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08876B9C;
      }
      goto L_08876B48;
    }
L_08876B48:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08876B54u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 887u, 0x08876B54u, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876B54u) goto L_08876B54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876B54:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) > 0;
      if (branch_taken) {
          goto L_08876B74;
      }
      goto L_08876B5C;
    }
L_08876B5C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 9u);
    aot_gpr_31 = (0x08876B6Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 889u, 0x08876B6Cu, 0x08ADC79Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 150u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 150u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 150u, 0x08ADC79Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876B6Cu) goto L_08876B6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876B6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08876B94;
      }
      goto L_08876B74;
    }
L_08876B74:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08876B84u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 891u, 0x08876B84u, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876B84u) goto L_08876B84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876B84:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_31 = (0x08876B94u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 892u, 0x08876B94u, 0x08ADC79Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 150u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 150u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 150u, 0x08ADC79Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876B94u) goto L_08876B94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876B94:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08876AF0;
      }
      goto L_08876B9C;
    }
L_08876B9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08876CC0;
      }
      goto L_08876BA4;
    }
L_08876BA4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08876CC0;
      }
      goto L_08876BC4;
    }
L_08876BC4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08876BD0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 896u, 0x08876BD0u, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876BD0u) goto L_08876BD0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876BD0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) > 0;
      if (branch_taken) {
          goto L_08876BF0;
      }
      goto L_08876BD8;
    }
L_08876BD8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 9u);
    aot_gpr_31 = (0x08876BE8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 898u, 0x08876BE8u, 0x08ADC7ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 152u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 152u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 152u, 0x08ADC7ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876BE8u) goto L_08876BE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876BE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08876C10;
      }
      goto L_08876BF0;
    }
L_08876BF0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08876C00u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 900u, 0x08876C00u, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876C00u) goto L_08876C00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876C00:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_31 = (0x08876C10u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 901u, 0x08876C10u, 0x08ADC7ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 152u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 152u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 152u, 0x08ADC7ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876C10u) goto L_08876C10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876C10:
    aot_gpr_4 = (2237u << 16u);
    goto L_08876C14;
L_08876C14:
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08876C20u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 903u, 0x08876C20u, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876C20u) goto L_08876C20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876C20:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08876C2Cu);
    aot_gpr_17 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 904u, 0x08876C2Cu, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876C2Cu) goto L_08876C2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876C2C:
    { const bool branch_taken = aot_gpr_17 == aot_gpr_2;
      if (branch_taken) {
          goto L_08876C6C;
      }
      goto L_08876C34;
    }
L_08876C34:
    aot_gpr_31 = (0x08876C3Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0127.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 906u, 0x08876C3Cu, 0x08A01484u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0127_entry(rt, ctx, 359u, aot_mem);
#else
        recomp_unit_0127_entry(rt, ctx, 359u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 359u, 0x08A01484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876C3Cu) goto L_08876C3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876C3C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08876C4Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 907u, 0x08876C4Cu, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876C4Cu) goto L_08876C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876C4C:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 3u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-19192));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08876CC0;
      }
      goto L_08876C6C;
    }
L_08876C6C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08876C78u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 909u, 0x08876C78u, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876C78u) goto L_08876C78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876C78:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) > 0;
      if (branch_taken) {
          goto L_08876C98;
      }
      goto L_08876C80;
    }
L_08876C80:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 9u);
    aot_gpr_31 = (0x08876C90u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 911u, 0x08876C90u, 0x08ADC7ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 152u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 152u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 152u, 0x08ADC7ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876C90u) goto L_08876C90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876C90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08876CB8;
      }
      goto L_08876C98;
    }
L_08876C98:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08876CA8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 913u, 0x08876CA8u, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876CA8u) goto L_08876CA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876CA8:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_31 = (0x08876CB8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 914u, 0x08876CB8u, 0x08ADC7ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 152u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 152u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 152u, 0x08ADC7ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876CB8u) goto L_08876CB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876CB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08876C14;
      }
      goto L_08876CC0;
    }
L_08876CC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08876CC8;
    }
L_08876CC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08876CF4;
      }
      goto L_08876CD8;
    }
L_08876CD8:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088770BC;
      }
      goto L_08876CE4;
    }
L_08876CE4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08876E40;
      }
      goto L_08876CEC;
    }
L_08876CEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08876D0C;
      }
      goto L_08876CF4;
    }
L_08876CF4:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08877018;
      }
      goto L_08876CFC;
    }
L_08876CFC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887706C;
      }
      goto L_08876D04;
    }
L_08876D04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088770BC;
      }
      goto L_08876D0C;
    }
L_08876D0C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (0u | 0u);
    aot_gpr_31 = (0x08876D1Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876D1Cu) goto L_08876D1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876D1C:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_17 & 255u);
      if (branch_taken) {
          goto L_08876D48;
      }
      goto L_08876D28;
    }
L_08876D28:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08876D34u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876D34u) goto L_08876D34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876D34:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_17 & 255u);
      if (branch_taken) {
          goto L_08876D48;
      }
      goto L_08876D40;
    }
L_08876D40:
    aot_gpr_17 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_17 & 255u);
    goto L_08876D48;
L_08876D48:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08876D74;
      }
      goto L_08876D50;
    }
L_08876D50:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08876D5Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876D5Cu) goto L_08876D5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876D5C:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-18872));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08876DFC;
      }
      goto L_08876D74;
    }
L_08876D74:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (0u | 0u);
    aot_gpr_31 = (0x08876D84u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876D84u) goto L_08876D84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876D84:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_17 & 255u);
      if (branch_taken) {
          goto L_08876DB0;
      }
      goto L_08876D90;
    }
L_08876D90:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08876D9Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876D9Cu) goto L_08876D9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876D9C:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_17 & 255u);
      if (branch_taken) {
          goto L_08876DB0;
      }
      goto L_08876DA8;
    }
L_08876DA8:
    aot_gpr_17 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_17 & 255u);
    goto L_08876DB0;
L_08876DB0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08876DDC;
      }
      goto L_08876DB8;
    }
L_08876DB8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08876DC4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876DC4u) goto L_08876DC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876DC4:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-18824));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08876DFC;
      }
      goto L_08876DDC;
    }
L_08876DDC:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08876DE8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876DE8u) goto L_08876DE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876DE8:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-19064));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08876DFC;
L_08876DFC:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
      if (branch_taken) {
          goto L_08876E24;
      }
      goto L_08876E10;
    }
L_08876E10:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08876E38;
      }
      goto L_08876E24;
    }
L_08876E24:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08876E38;
L_08876E38:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088770BC;
      }
      goto L_08876E40;
    }
L_08876E40:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (0u | 0u);
    aot_gpr_31 = (0x08876E50u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876E50u) goto L_08876E50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876E50:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08876E74;
      }
      goto L_08876E5C;
    }
L_08876E5C:
    aot_gpr_31 = (0x08876E64u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876E64u) goto L_08876E64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876E64:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08876E74;
      }
      goto L_08876E70;
    }
L_08876E70:
    aot_gpr_17 = (0u | 1u);
    goto L_08876E74;
L_08876E74:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_17 & 255u);
    aot_gpr_31 = (0x08876E84u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876E84u) goto L_08876E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876E84:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) > 0;
      if (branch_taken) {
          goto L_08876EA4;
      }
      goto L_08876E8C;
    }
L_08876E8C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08876E9Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 953u, 0x08876E9Cu, 0x08ADC77Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 146u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 146u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 146u, 0x08ADC77Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876E9Cu) goto L_08876E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876E9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08876EC0;
      }
      goto L_08876EA4;
    }
L_08876EA4:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08876EB4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876EB4u) goto L_08876EB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876EB4:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08876EC0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 956u, 0x08876EC0u, 0x08ADC77Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 146u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 146u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 146u, 0x08ADC77Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876EC0u) goto L_08876EC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876EC0:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x08876ED0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876ED0u) goto L_08876ED0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876ED0:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08876EFC;
      }
      goto L_08876EDC;
    }
L_08876EDC:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08876EE8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876EE8u) goto L_08876EE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876EE8:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08876EFC;
      }
      goto L_08876EF4;
    }
L_08876EF4:
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[19] & 255u);
    goto L_08876EFC;
L_08876EFC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08876F34;
      }
      goto L_08876F04;
    }
L_08876F04:
    aot_gpr_31 = (0x08876F0Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0127.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 963u, 0x08876F0Cu, 0x08A01484u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0127_entry(rt, ctx, 359u, aot_mem);
#else
        recomp_unit_0127_entry(rt, ctx, 359u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 359u, 0x08A01484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876F0Cu) goto L_08876F0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876F0C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08876F34;
      }
      goto L_08876F18;
    }
L_08876F18:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08876F28u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876F28u) goto L_08876F28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876F28:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08876F34u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 966u, 0x08876F34u, 0x08ADC77Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 146u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 146u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 146u, 0x08ADC77Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876F34u) goto L_08876F34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876F34:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08876F48u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 967u, 0x08876F48u, 0x08ADC73Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 138u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 138u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 138u, 0x08ADC73Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876F48u) goto L_08876F48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876F48:
    aot_gpr_31 = (0x08876F50u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0887487C;
L_08876F50:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08876F68;
      }
      goto L_08876F58;
    }
L_08876F58:
    aot_gpr_31 = (0x08876F60u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08874B80;
L_08876F60:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08876FB0;
      }
      goto L_08876F68;
    }
L_08876F68:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08876F78u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876F78u) goto L_08876F78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876F78:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08876F84u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 973u, 0x08876F84u, 0x08ADC73Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 138u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 138u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 138u, 0x08ADC73Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876F84u) goto L_08876F84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876F84:
    aot_gpr_31 = (0x08876F8Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876F8Cu) goto L_08876F8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876F8C:
    aot_gpr_4 = (0u | 12u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08876FA8;
      }
      goto L_08876F98;
    }
L_08876F98:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08876FA8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 976u, 0x08876FA8u, 0x08ADC73Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 138u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 138u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 138u, 0x08ADC73Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876FA8u) goto L_08876FA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08876FA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08876F48;
      }
      goto L_08876FB0;
    }
L_08876FB0:
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08877010;
      }
      goto L_08876FB8;
    }
L_08876FB8:
    aot_gpr_17 = (0u | 0u);
    aot_gpr_31 = (0x08876FC4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876FC4u) goto L_08876FC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876FC4:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_17 & 255u);
      if (branch_taken) {
          goto L_08876FF0;
      }
      goto L_08876FD0;
    }
L_08876FD0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08876FDCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08876FDCu) goto L_08876FDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08876FDC:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_17 & 255u);
      if (branch_taken) {
          goto L_08876FF0;
      }
      goto L_08876FE8;
    }
L_08876FE8:
    aot_gpr_17 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_17 & 255u);
    goto L_08876FF0;
L_08876FF0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877010;
      }
      goto L_08876FF8;
    }
L_08876FF8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(425)));
    aot_gpr_31 = (0x08877008u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 985u, 0x08877008u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877008u) goto L_08877008;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877008:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(425), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08877010;
L_08877010:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088770BC;
      }
      goto L_08877018;
    }
L_08877018:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877024u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 988u, 0x08877024u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877024u) goto L_08877024;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877024:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08877048;
      }
      goto L_08877030;
    }
L_08877030:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 8u);
    aot_gpr_31 = (0x08877040u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 990u, 0x08877040u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877040u) goto L_08877040;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877040:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877064;
      }
      goto L_08877048;
    }
L_08877048:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08877058u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 992u, 0x08877058u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877058u) goto L_08877058;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877058:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08877064u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 993u, 0x08877064u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877064u) goto L_08877064;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877064:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088770BC;
      }
      goto L_0887706C;
    }
L_0887706C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_17 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(54)));
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_08877080;
L_08877080:
    aot_gpr_31 = (0x08877088u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0186.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 996u, 0x08877088u, 0x08AEECF8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0186_entry(rt, ctx, 565u, aot_mem);
#else
        recomp_unit_0186_entry(rt, ctx, 565u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 565u, 0x08AEECF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877088u) goto L_08877088;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877088:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088770B0;
      }
      goto L_08877090;
    }
L_08877090:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_17 < static_cast<std::uint32_t>(170) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088770A8;
      }
      goto L_088770A0;
    }
L_088770A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_17 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088770A8;
L_088770A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_17 | 0u);
      if (branch_taken) {
          goto L_08877080;
      }
      goto L_088770B0;
    }
L_088770B0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(aot_gpr_17));
    goto L_088770BC;
L_088770BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088770C4;
    }
L_088770C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0887712C;
      }
      goto L_088770D4;
    }
L_088770D4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_08877118;
      }
      goto L_088770E8;
    }
L_088770E8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x088770F8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088770F8u) goto L_088770F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088770F8:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-18968));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0887712C;
      }
      goto L_08877118;
    }
L_08877118:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_0887712C;
L_0887712C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08877134;
    }
L_08877134:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_08877158;
    }
    goto L_08877144;
L_08877144:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877210;
      }
      goto L_08877150;
    }
L_08877150:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877168;
      }
      goto L_08877158;
    }
L_08877158:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088771C8;
      }
      goto L_08877160;
    }
L_08877160:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877210;
      }
      goto L_08877168;
    }
L_08877168:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_088771AC;
      }
      goto L_0887717C;
    }
L_0887717C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x0887718Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887718Cu) goto L_0887718C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887718C:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-19016));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088771C0;
      }
      goto L_088771AC;
    }
L_088771AC:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_088771C0;
L_088771C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877210;
      }
      goto L_088771C8;
    }
L_088771C8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x088771D4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088771D4u) goto L_088771D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088771D4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) > 0;
      if (branch_taken) {
          goto L_088771F4;
      }
      goto L_088771DC;
    }
L_088771DC:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_31 = (0x088771ECu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1021u, 0x088771ECu, 0x08ADC77Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 146u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 146u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 146u, 0x08ADC77Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088771ECu) goto L_088771EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088771EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877210;
      }
      goto L_088771F4;
    }
L_088771F4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08877204u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877204u) goto L_08877204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877204:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08877210u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1024u, 0x08877210u, 0x08ADC77Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 146u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 146u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 146u, 0x08ADC77Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877210u) goto L_08877210;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877210:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08877218;
    }
L_08877218:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08877274;
      }
      goto L_08877228;
    }
L_08877228:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877234u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1027u, 0x08877234u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877234u) goto L_08877234;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877234:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08877258;
      }
      goto L_08877240;
    }
L_08877240:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 15u);
    aot_gpr_31 = (0x08877250u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1029u, 0x08877250u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877250u) goto L_08877250;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877250:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877274;
      }
      goto L_08877258;
    }
L_08877258:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08877268u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1031u, 0x08877268u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877268u) goto L_08877268;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877268:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08877274u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1032u, 0x08877274u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877274u) goto L_08877274;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877274:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0887727C;
    }
L_0887727C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088772D8;
      }
      goto L_0887728C;
    }
L_0887728C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877298u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1035u, 0x08877298u, 0x08ADC794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 149u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 149u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 149u, 0x08ADC794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877298u) goto L_08877298;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877298:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 1001 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088772BC;
      }
      goto L_088772A4;
    }
L_088772A4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 20000u);
    aot_gpr_31 = (0x088772B4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1037u, 0x088772B4u, 0x08ADC78Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 148u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 148u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 148u, 0x08ADC78Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088772B4u) goto L_088772B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088772B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088772D8;
      }
      goto L_088772BC;
    }
L_088772BC:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x088772CCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1039u, 0x088772CCu, 0x08ADC794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 149u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 149u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 149u, 0x08ADC794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088772CCu) goto L_088772CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088772CC:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(-1000));
    aot_gpr_31 = (0x088772D8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1040u, 0x088772D8u, 0x08ADC78Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 148u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 148u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 148u, 0x08ADC78Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088772D8u) goto L_088772D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088772D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088772E0;
    }
L_088772E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088772E8;
    }
L_088772E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_0887730C;
    }
    goto L_088772F8;
L_088772F8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088773B4;
      }
      goto L_08877304;
    }
L_08877304:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0887731C;
      }
      goto L_0887730C;
    }
L_0887730C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887736C;
      }
      goto L_08877314;
    }
L_08877314:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088773B4;
      }
      goto L_0887731C;
    }
L_0887731C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877328u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1048u, 0x08877328u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877328u) goto L_08877328;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877328:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) > 0;
      if (branch_taken) {
          goto L_08877348;
      }
      goto L_08877330;
    }
L_08877330:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 50u);
    aot_gpr_31 = (0x08877340u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1050u, 0x08877340u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877340u) goto L_08877340;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877340:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877364;
      }
      goto L_08877348;
    }
L_08877348:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08877358u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1052u, 0x08877358u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877358u) goto L_08877358;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877358:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08877364u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1053u, 0x08877364u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877364u) goto L_08877364;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877364:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088773B4;
      }
      goto L_0887736C;
    }
L_0887736C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877378u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1055u, 0x08877378u, 0x08ADC774u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 145u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 145u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877378u) goto L_08877378;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877378:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) > 0;
      if (branch_taken) {
          goto L_08877398;
      }
      goto L_08877380;
    }
L_08877380:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 60u);
    aot_gpr_31 = (0x08877390u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1057u, 0x08877390u, 0x08ADC76Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 144u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 144u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 144u, 0x08ADC76Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877390u) goto L_08877390;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877390:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088773B4;
      }
      goto L_08877398;
    }
L_08877398:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x088773A8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1059u, 0x088773A8u, 0x08ADC774u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 145u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 145u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088773A8u) goto L_088773A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088773A8:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x088773B4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1060u, 0x088773B4u, 0x08ADC76Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 144u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 144u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 144u, 0x08ADC76Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088773B4u) goto L_088773B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088773B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088773BC;
    }
L_088773BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08877424;
      }
      goto L_088773CC;
    }
L_088773CC:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_08877410;
      }
      goto L_088773E0;
    }
L_088773E0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x088773F0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088773F0u) goto L_088773F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088773F0:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-18920));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08877424;
      }
      goto L_08877410;
    }
L_08877410:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08877424;
L_08877424:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0887742C;
    }
L_0887742C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08877490;
      }
      goto L_0887743C;
    }
L_0887743C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2237u << 16u);
      if (branch_taken) {
          goto L_0887747C;
      }
      goto L_08877464;
    }
L_08877464:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_5 | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_gpr_5);
      if (branch_taken) {
          goto L_08877490;
      }
      goto L_0887747C;
    }
L_0887747C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_6 & aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(48), aot_gpr_4);
    goto L_08877490;
L_08877490:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08877498;
    }
L_08877498:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088774B8;
      }
      goto L_088774A8;
    }
L_088774A8:
    aot_gpr_31 = (0x088774B0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1074u, 0x088774B0u, 0x08873584u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 751u, 0x08873584u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088774B0u) goto L_088774B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088774B0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088774B8;
    }
L_088774B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088774E0;
      }
      goto L_088774C4;
    }
L_088774C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_17;
      if (branch_taken) {
          goto L_088774E0;
      }
      goto L_088774D0;
    }
L_088774D0:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 197u);
    aot_gpr_31 = (0x088774E0u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1078u, 0x088774E0u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088774E0u) goto L_088774E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088774E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887754C;
      }
      goto L_088774EC;
    }
L_088774EC:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x088774F8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088774F8u) goto L_088774F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088774F8:
    aot_gpr_4 = (aot_gpr_2 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887751C;
      }
      goto L_08877504;
    }
L_08877504:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08877514u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1082u, 0x08877514u, 0x08ADC72Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 136u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 136u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 136u, 0x08ADC72Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877514u) goto L_08877514;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877514:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877538;
      }
      goto L_0887751C;
    }
L_0887751C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x0887752Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887752Cu) goto L_0887752C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887752C:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08877538u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1085u, 0x08877538u, 0x08ADC72Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 136u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 136u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 136u, 0x08ADC72Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877538u) goto L_08877538;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877538:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08877544u);
    aot_gpr_5 = (0u | 1u);
    goto L_08874584;
L_08877544:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0887754C;
    }
L_0887754C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088775D8;
      }
      goto L_0887755C;
    }
L_0887755C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877568u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877568u) goto L_08877568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877568:
    aot_gpr_4 = (aot_gpr_2 < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0887758C;
      }
      goto L_08877574;
    }
L_08877574:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08877584u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1091u, 0x08877584u, 0x08ADC73Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 138u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 138u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 138u, 0x08ADC73Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877584u) goto L_08877584;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877584:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088775A8;
      }
      goto L_0887758C;
    }
L_0887758C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x0887759Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887759Cu) goto L_0887759C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0887759C:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x088775A8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1094u, 0x088775A8u, 0x08ADC73Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 138u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 138u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 138u, 0x08ADC73Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088775A8u) goto L_088775A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088775A8:
    aot_gpr_31 = (0x088775B0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0887487C;
L_088775B0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0887755C;
      }
      goto L_088775B8;
    }
L_088775B8:
    aot_gpr_31 = (0x088775C0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08874B80;
L_088775C0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0887755C;
      }
      goto L_088775C8;
    }
L_088775C8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088775D8;
    }
L_088775D8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x088775E4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088775E4u) goto L_088775E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088775E4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088775F4;
    }
L_088775F4:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-23984)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0887760C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08877988;
      }
      goto L_08877620;
    }
L_08877620:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08877690;
      }
      goto L_0887762C;
    }
L_0887762C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088776E4;
      }
      goto L_08877634;
    }
L_08877634:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08877738;
      }
      goto L_0887763C;
    }
L_0887763C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08877864;
      }
      goto L_08877644;
    }
L_08877644:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08877678;
      }
      goto L_0887765C;
    }
L_0887765C:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_6 & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(48), aot_gpr_4);
      if (branch_taken) {
          goto L_08877688;
      }
      goto L_08877678;
    }
L_08877678:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_5 | 2u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_gpr_5);
    goto L_08877688;
L_08877688:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877988;
      }
      goto L_08877690;
    }
L_08877690:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x0887769Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1112u, 0x0887769Cu, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887769Cu) goto L_0887769C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887769C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 50 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088776C0;
      }
      goto L_088776A8;
    }
L_088776A8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088776B8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1114u, 0x088776B8u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088776B8u) goto L_088776B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088776B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088776DC;
      }
      goto L_088776C0;
    }
L_088776C0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x088776D0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1116u, 0x088776D0u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088776D0u) goto L_088776D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088776D0:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x088776DCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1117u, 0x088776DCu, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088776DCu) goto L_088776DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088776DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877988;
      }
      goto L_088776E4;
    }
L_088776E4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x088776F0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1119u, 0x088776F0u, 0x08ADC774u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 145u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 145u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088776F0u) goto L_088776F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088776F0:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 60 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877714;
      }
      goto L_088776FC;
    }
L_088776FC:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0887770Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1121u, 0x0887770Cu, 0x08ADC76Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 144u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 144u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 144u, 0x08ADC76Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887770Cu) goto L_0887770C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887770C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877730;
      }
      goto L_08877714;
    }
L_08877714:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08877724u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1123u, 0x08877724u, 0x08ADC774u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 145u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 145u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877724u) goto L_08877724;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877724:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08877730u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1124u, 0x08877730u, 0x08ADC76Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 144u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 144u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 144u, 0x08ADC76Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877730u) goto L_08877730;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877730:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877988;
      }
      goto L_08877738;
    }
L_08877738:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887785C;
      }
      goto L_08877758;
    }
L_08877758:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877764u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1127u, 0x08877764u, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877764u) goto L_08877764;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877764:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877788;
      }
      goto L_08877770;
    }
L_08877770:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08877780u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1129u, 0x08877780u, 0x08ADC79Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 150u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 150u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 150u, 0x08ADC79Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877780u) goto L_08877780;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877780:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088777A8;
      }
      goto L_08877788;
    }
L_08877788:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08877798u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1131u, 0x08877798u, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877798u) goto L_08877798;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877798:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_31 = (0x088777A8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1132u, 0x088777A8u, 0x08ADC79Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 150u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 150u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 150u, 0x08ADC79Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088777A8u) goto L_088777A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088777A8:
    aot_gpr_4 = (2237u << 16u);
    goto L_088777AC;
L_088777AC:
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x088777B8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1134u, 0x088777B8u, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088777B8u) goto L_088777B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088777B8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x088777C4u);
    aot_gpr_17 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1135u, 0x088777C4u, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088777C4u) goto L_088777C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088777C4:
    { const bool branch_taken = aot_gpr_17 == aot_gpr_2;
      if (branch_taken) {
          goto L_08877804;
      }
      goto L_088777CC;
    }
L_088777CC:
    aot_gpr_31 = (0x088777D4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0127.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1137u, 0x088777D4u, 0x08A01484u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0127_entry(rt, ctx, 359u, aot_mem);
#else
        recomp_unit_0127_entry(rt, ctx, 359u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 359u, 0x08A01484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088777D4u) goto L_088777D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088777D4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088777E4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1138u, 0x088777E4u, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088777E4u) goto L_088777E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088777E4:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 3u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-19192));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0887785C;
      }
      goto L_08877804;
    }
L_08877804:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877810u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1140u, 0x08877810u, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877810u) goto L_08877810;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877810:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877834;
      }
      goto L_0887781C;
    }
L_0887781C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0887782Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1142u, 0x0887782Cu, 0x08ADC79Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 150u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 150u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 150u, 0x08ADC79Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887782Cu) goto L_0887782C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887782C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877854;
      }
      goto L_08877834;
    }
L_08877834:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08877844u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1144u, 0x08877844u, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877844u) goto L_08877844;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877844:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_31 = (0x08877854u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1145u, 0x08877854u, 0x08ADC79Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 150u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 150u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 150u, 0x08ADC79Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877854u) goto L_08877854;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877854:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_088777AC;
      }
      goto L_0887785C;
    }
L_0887785C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877988;
      }
      goto L_08877864;
    }
L_08877864:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08877988;
      }
      goto L_08877884;
    }
L_08877884:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877890u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1149u, 0x08877890u, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877890u) goto L_08877890;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877890:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088778B4;
      }
      goto L_0887789C;
    }
L_0887789C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088778ACu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1151u, 0x088778ACu, 0x08ADC7ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 152u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 152u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 152u, 0x08ADC7ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088778ACu) goto L_088778AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088778AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088778D4;
      }
      goto L_088778B4;
    }
L_088778B4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x088778C4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1153u, 0x088778C4u, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088778C4u) goto L_088778C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088778C4:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_31 = (0x088778D4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1154u, 0x088778D4u, 0x08ADC7ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 152u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 152u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 152u, 0x08ADC7ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088778D4u) goto L_088778D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088778D4:
    aot_gpr_4 = (2237u << 16u);
    goto L_088778D8;
L_088778D8:
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x088778E4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1156u, 0x088778E4u, 0x08ADC7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088778E4u) goto L_088778E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088778E4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x088778F0u);
    aot_gpr_17 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1157u, 0x088778F0u, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088778F0u) goto L_088778F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088778F0:
    { const bool branch_taken = aot_gpr_17 == aot_gpr_2;
      if (branch_taken) {
          goto L_08877930;
      }
      goto L_088778F8;
    }
L_088778F8:
    aot_gpr_31 = (0x08877900u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0127.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1159u, 0x08877900u, 0x08A01484u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0127_entry(rt, ctx, 359u, aot_mem);
#else
        recomp_unit_0127_entry(rt, ctx, 359u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 359u, 0x08A01484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877900u) goto L_08877900;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877900:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08877910u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1160u, 0x08877910u, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877910u) goto L_08877910;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877910:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 3u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-19192));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08877988;
      }
      goto L_08877930;
    }
L_08877930:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x0887793Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1162u, 0x0887793Cu, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0887793Cu) goto L_0887793C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0887793C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877960;
      }
      goto L_08877948;
    }
L_08877948:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08877958u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1164u, 0x08877958u, 0x08ADC7ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 152u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 152u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 152u, 0x08ADC7ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877958u) goto L_08877958;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877958:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877980;
      }
      goto L_08877960;
    }
L_08877960:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08877970u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1166u, 0x08877970u, 0x08ADC7B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 153u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 153u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877970u) goto L_08877970;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877970:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_31 = (0x08877980u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1167u, 0x08877980u, 0x08ADC7ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 152u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 152u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 152u, 0x08ADC7ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877980u) goto L_08877980;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877980:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_088778D8;
      }
      goto L_08877988;
    }
L_08877988:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08877990;
    }
L_08877990:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_088779BC;
      }
      goto L_088779A0;
    }
L_088779A0:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088779CC;
      }
      goto L_088779AC;
    }
L_088779AC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877B0C;
      }
      goto L_088779B4;
    }
L_088779B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088779D4;
      }
      goto L_088779BC;
    }
L_088779BC:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08877CE0;
      }
      goto L_088779C4;
    }
L_088779C4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877D34;
      }
      goto L_088779CC;
    }
L_088779CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088779D4;
    }
L_088779D4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (0u | 0u);
    aot_gpr_31 = (0x088779E4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088779E4u) goto L_088779E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088779E4:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_17 & 255u);
      if (branch_taken) {
          goto L_08877A10;
      }
      goto L_088779F0;
    }
L_088779F0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x088779FCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088779FCu) goto L_088779FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088779FC:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_17 & 255u);
      if (branch_taken) {
          goto L_08877A10;
      }
      goto L_08877A08;
    }
L_08877A08:
    aot_gpr_17 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_17 & 255u);
    goto L_08877A10;
L_08877A10:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08877A3C;
      }
      goto L_08877A18;
    }
L_08877A18:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877A24u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877A24u) goto L_08877A24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877A24:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-18872));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08877AC4;
      }
      goto L_08877A3C;
    }
L_08877A3C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (0u | 0u);
    aot_gpr_31 = (0x08877A4Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877A4Cu) goto L_08877A4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877A4C:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_17 & 255u);
      if (branch_taken) {
          goto L_08877A78;
      }
      goto L_08877A58;
    }
L_08877A58:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877A64u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877A64u) goto L_08877A64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877A64:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_17 & 255u);
      if (branch_taken) {
          goto L_08877A78;
      }
      goto L_08877A70;
    }
L_08877A70:
    aot_gpr_17 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_17 & 255u);
    goto L_08877A78;
L_08877A78:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08877AA4;
      }
      goto L_08877A80;
    }
L_08877A80:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877A8Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877A8Cu) goto L_08877A8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877A8C:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-18824));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08877AC4;
      }
      goto L_08877AA4;
    }
L_08877AA4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877AB0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877AB0u) goto L_08877AB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877AB0:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-19064));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08877AC4;
L_08877AC4:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877AF0;
      }
      goto L_08877AE0;
    }
L_08877AE0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08877B04;
      }
      goto L_08877AF0;
    }
L_08877AF0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08877B04;
L_08877B04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088779CC;
      }
      goto L_08877B0C;
    }
L_08877B0C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (0u | 0u);
    aot_gpr_31 = (0x08877B1Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877B1Cu) goto L_08877B1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877B1C:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08877B40;
      }
      goto L_08877B28;
    }
L_08877B28:
    aot_gpr_31 = (0x08877B30u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877B30u) goto L_08877B30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877B30:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08877B40;
      }
      goto L_08877B3C;
    }
L_08877B3C:
    aot_gpr_17 = (0u | 1u);
    goto L_08877B40;
L_08877B40:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_17 & 255u);
    aot_gpr_31 = (0x08877B50u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877B50u) goto L_08877B50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877B50:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877B74;
      }
      goto L_08877B5C;
    }
L_08877B5C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08877B6Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1206u, 0x08877B6Cu, 0x08ADC77Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 146u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 146u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 146u, 0x08ADC77Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877B6Cu) goto L_08877B6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877B6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877B90;
      }
      goto L_08877B74;
    }
L_08877B74:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08877B84u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877B84u) goto L_08877B84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877B84:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08877B90u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1209u, 0x08877B90u, 0x08ADC77Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 146u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 146u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 146u, 0x08ADC77Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877B90u) goto L_08877B90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877B90:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x08877BA0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877BA0u) goto L_08877BA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877BA0:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08877BCC;
      }
      goto L_08877BAC;
    }
L_08877BAC:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877BB8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877BB8u) goto L_08877BB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877BB8:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08877BCC;
      }
      goto L_08877BC4;
    }
L_08877BC4:
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[19] & 255u);
    goto L_08877BCC;
L_08877BCC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08877BF8;
      }
      goto L_08877BD4;
    }
L_08877BD4:
    aot_gpr_31 = (0x08877BDCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0127.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1216u, 0x08877BDCu, 0x08A01484u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0127_entry(rt, ctx, 359u, aot_mem);
#else
        recomp_unit_0127_entry(rt, ctx, 359u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 359u, 0x08A01484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877BDCu) goto L_08877BDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877BDC:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08877BF8;
      }
      goto L_08877BE8;
    }
L_08877BE8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08877BF8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1218u, 0x08877BF8u, 0x08ADC77Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 146u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 146u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 146u, 0x08ADC77Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877BF8u) goto L_08877BF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877BF8:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08877C0Cu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1219u, 0x08877C0Cu, 0x08ADC73Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 138u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 138u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 138u, 0x08ADC73Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877C0Cu) goto L_08877C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877C0C:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    goto L_08877C10;
L_08877C10:
    aot_gpr_31 = (0x08877C18u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0887487C;
L_08877C18:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08877C30;
      }
      goto L_08877C20;
    }
L_08877C20:
    aot_gpr_31 = (0x08877C28u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08874B80;
L_08877C28:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08877C78;
      }
      goto L_08877C30;
    }
L_08877C30:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08877C40u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877C40u) goto L_08877C40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877C40:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08877C4Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1226u, 0x08877C4Cu, 0x08ADC73Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 138u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 138u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 138u, 0x08ADC73Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877C4Cu) goto L_08877C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877C4C:
    aot_gpr_31 = (0x08877C54u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877C54u) goto L_08877C54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877C54:
    aot_gpr_4 = (0u | 12u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08877C70;
      }
      goto L_08877C60;
    }
L_08877C60:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08877C70u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1229u, 0x08877C70u, 0x08ADC73Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 138u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 138u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 138u, 0x08ADC73Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877C70u) goto L_08877C70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877C70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877C10;
      }
      goto L_08877C78;
    }
L_08877C78:
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08877CD8;
      }
      goto L_08877C80;
    }
L_08877C80:
    aot_gpr_17 = (0u | 0u);
    aot_gpr_31 = (0x08877C8Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877C8Cu) goto L_08877C8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877C8C:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_17 & 255u);
      if (branch_taken) {
          goto L_08877CB8;
      }
      goto L_08877C98;
    }
L_08877C98:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877CA4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877CA4u) goto L_08877CA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877CA4:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_17 & 255u);
      if (branch_taken) {
          goto L_08877CB8;
      }
      goto L_08877CB0;
    }
L_08877CB0:
    aot_gpr_17 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_17 & 255u);
    goto L_08877CB8;
L_08877CB8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877CD8;
      }
      goto L_08877CC0;
    }
L_08877CC0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(425)));
    aot_gpr_31 = (0x08877CD0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1238u, 0x08877CD0u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877CD0u) goto L_08877CD0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877CD0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(425), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08877CD8;
L_08877CD8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088779CC;
      }
      goto L_08877CE0;
    }
L_08877CE0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877CECu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1241u, 0x08877CECu, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877CECu) goto L_08877CEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877CEC:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877D10;
      }
      goto L_08877CF8;
    }
L_08877CF8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08877D08u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1243u, 0x08877D08u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877D08u) goto L_08877D08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877D08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877D2C;
      }
      goto L_08877D10;
    }
L_08877D10:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08877D20u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1245u, 0x08877D20u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877D20u) goto L_08877D20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877D20:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08877D2Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1246u, 0x08877D2Cu, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877D2Cu) goto L_08877D2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877D2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088779CC;
      }
      goto L_08877D34;
    }
L_08877D34:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_17 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(54)));
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_08877D48;
L_08877D48:
    aot_gpr_31 = (0x08877D50u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0186.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1249u, 0x08877D50u, 0x08AEECF8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0186_entry(rt, ctx, 565u, aot_mem);
#else
        recomp_unit_0186_entry(rt, ctx, 565u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 565u, 0x08AEECF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877D50u) goto L_08877D50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877D50:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08877D7C;
      }
      goto L_08877D58;
    }
L_08877D58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08877D74;
      }
      goto L_08877D70;
    }
L_08877D70:
    aot_gpr_17 = (0u | 170u);
    goto L_08877D74;
L_08877D74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_17 | 0u);
      if (branch_taken) {
          goto L_08877D48;
      }
      goto L_08877D7C;
    }
L_08877D7C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(aot_gpr_17));
      if (branch_taken) {
          goto L_088779CC;
      }
      goto L_08877D8C;
    }
L_08877D8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08877DF4;
      }
      goto L_08877D9C;
    }
L_08877D9C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08877DACu);
    aot_gpr_17 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877DACu) goto L_08877DAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877DAC:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-18968));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877DE0;
      }
      goto L_08877DD0;
    }
L_08877DD0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08877DF4;
      }
      goto L_08877DE0;
    }
L_08877DE0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08877DF4;
L_08877DF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08877DFC;
    }
L_08877DFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08877E58;
      }
      goto L_08877E0C;
    }
L_08877E0C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877E18u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1262u, 0x08877E18u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877E18u) goto L_08877E18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877E18:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 15 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877E3C;
      }
      goto L_08877E24;
    }
L_08877E24:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_31 = (0x08877E34u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1264u, 0x08877E34u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877E34u) goto L_08877E34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877E34:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877E58;
      }
      goto L_08877E3C;
    }
L_08877E3C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08877E4Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1266u, 0x08877E4Cu, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877E4Cu) goto L_08877E4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877E4C:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08877E58u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1267u, 0x08877E58u, 0x08ADC75Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 142u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 142u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877E58u) goto L_08877E58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877E58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08877E60;
    }
L_08877E60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08877EBC;
      }
      goto L_08877E70;
    }
L_08877E70:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877E7Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1270u, 0x08877E7Cu, 0x08ADC794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 149u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 149u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 149u, 0x08ADC794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877E7Cu) goto L_08877E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877E7C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 20000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877EA0;
      }
      goto L_08877E88;
    }
L_08877E88:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 1000u);
    aot_gpr_31 = (0x08877E98u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1272u, 0x08877E98u, 0x08ADC78Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 148u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 148u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 148u, 0x08ADC78Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877E98u) goto L_08877E98;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877E98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877EBC;
      }
      goto L_08877EA0;
    }
L_08877EA0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08877EB0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1274u, 0x08877EB0u, 0x08ADC794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 149u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 149u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 149u, 0x08ADC794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877EB0u) goto L_08877EB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877EB0:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1000));
    aot_gpr_31 = (0x08877EBCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1275u, 0x08877EBCu, 0x08ADC78Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 148u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 148u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 148u, 0x08ADC78Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877EBCu) goto L_08877EBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877EBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08877EC4;
    }
L_08877EC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_08877EE8;
    }
    goto L_08877ED4;
L_08877ED4:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877FA4;
      }
      goto L_08877EE0;
    }
L_08877EE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877EF8;
      }
      goto L_08877EE8;
    }
L_08877EE8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877F58;
      }
      goto L_08877EF0;
    }
L_08877EF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877FA4;
      }
      goto L_08877EF8;
    }
L_08877EF8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08877F08u);
    aot_gpr_17 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877F08u) goto L_08877F08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877F08:
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-19016));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877F3C;
      }
      goto L_08877F2C;
    }
L_08877F2C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08877F50;
      }
      goto L_08877F3C;
    }
L_08877F3C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08877F50;
L_08877F50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877FA4;
      }
      goto L_08877F58;
    }
L_08877F58:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877F64u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877F64u) goto L_08877F64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877F64:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08877F88;
      }
      goto L_08877F70;
    }
L_08877F70:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08877F80u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1289u, 0x08877F80u, 0x08ADC77Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 146u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 146u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 146u, 0x08ADC77Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877F80u) goto L_08877F80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877F80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877FA4;
      }
      goto L_08877F88;
    }
L_08877F88:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_17 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08877F98u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877F98u) goto L_08877F98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08877F98:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08877FA4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1292u, 0x08877FA4u, 0x08ADC77Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 146u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 146u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 146u, 0x08ADC77Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877FA4u) goto L_08877FA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877FA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08877FAC;
    }
L_08877FAC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 23u, 0x08878164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08877FB4;
    }
L_08877FB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_08877FD8;
    }
    goto L_08877FC4;
L_08877FC4:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 12u, 0x08878088u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08877FD0;
    }
L_08877FD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08877FE8;
      }
      goto L_08877FD8;
    }
L_08877FD8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 6u, 0x0887803Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08877FE0;
    }
L_08877FE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 12u, 0x08878088u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08877FE8;
    }
L_08877FE8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08877FF4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0028->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0028_entry, 1300u, 0x08877FF4u, 0x08ADC764u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 143u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 143u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08877FF4u) goto L_08877FF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08877FF4:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 50 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 3u, 0x08878018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0029_entry, 29u, 1u, 0x08878000u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0028(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0028_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_28(Runtime &runtime) {
    runtime.register_generated_unit(28u, 0x08874000u, 16384u, &recomp_unit_0028, &recomp_unit_0028_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08874000u, &recomp_unit_0028, "recomp_unit_0028",
                                          kEntryMasks_recomp_unit_0028, 64u);
}
} // namespace psprecomp
