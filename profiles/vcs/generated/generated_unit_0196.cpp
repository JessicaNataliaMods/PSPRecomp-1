#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0196[64] = {
    0x0000000000800501ull, 0x0241000094880480ull, 0x0000000000000000ull, 0x0000022880020492ull,
    0x00A9102080902A02ull, 0x0000100A02409012ull, 0x6040A00148208008ull, 0x020008A800C400D0ull,
    0x0E34810221080000ull, 0x05492A0600010020ull, 0x20108AA050000860ull, 0x0042002950280004ull,
    0xAAA5290842004040ull, 0x8A6851410A112592ull, 0x108B0892C9555294ull, 0x8A211494B108A111ull,
    0x0494450A0A884510ull, 0x0D51501000008111ull, 0xD2A4908009008000ull, 0x081500685040A800ull,
    0x0000083001410214ull, 0xD001C1588A020002ull, 0x5224042850122222ull, 0x0104444810A44912ull,
    0x2900480081480210ull, 0x0900102900090010ull, 0x9200101000020520ull, 0x00800CA900088922ull,
    0x4800428201808080ull, 0x530281001112A914ull, 0x908C511152122003ull, 0x540244848462888Aull,
    0x554A8041808202AAull, 0x1A52328001060210ull, 0x016B48AA45128008ull, 0x48914A9128010301ull,
    0x0081A52328001033ull, 0x6542259488923280ull, 0x200430544A50101Aull, 0x0048010121292001ull,
    0x1089500101212924ull, 0x50900403212A9200ull, 0x1194001032929949ull, 0x4CA0004049940008ull,
    0x41550554CA000404ull, 0x010200C941688040ull, 0x8820206484402091ull, 0x04A4488008252440ull,
    0x0295489025291110ull, 0x5540888A40205051ull, 0x414000008404942Aull, 0x0220A00000420204ull,
    0x0200080008894291ull, 0x09010100404A0800ull, 0x0000481010802920ull, 0x8808110440000000ull,
    0x434A110102208800ull, 0x9088041AEAA90880ull, 0x1AEAA9088041AEAAull, 0x844041AEAA908804ull,
    0x28440434A11010D2ull, 0x1022A22A2095010Dull, 0xA043284449094081ull, 0x1124A001088041A4ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0196[64] = {
    1u, 5u, 15u, 15u, 24u, 37u, 46u, 57u, 68u, 80u, 92u, 104u, 114u, 130u, 151u, 174u,
    194u, 211u, 224u, 237u, 250u, 259u, 274u, 290u, 305u, 316u, 325u, 334u, 347u, 357u, 374u, 392u,
    410u, 428u, 443u, 462u, 479u, 495u, 516u, 532u, 543u, 558u, 573u, 592u, 605u, 622u, 635u, 649u,
    663u, 681u, 698u, 710u, 718u, 729u, 738u, 747u, 754u, 767u, 786u, 811u, 830u, 847u, 865u, 882u,
};
void recomp_unit_0196_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,29,6,2 fprs=12,13,14,20 gpr_occ=4509 fpr_occ=411 gpr_total=6137 fpr_total=488
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[2] = aot_gpr_2; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_2 = ctx.gpr[2]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B14000u;
        entry_id = 0u;
        if (entry_delta < 16372u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0196[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0196[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08B14000;
    case 2u: goto L_08B14020;
    case 3u: goto L_08B14028;
    case 4u: goto L_08B1405C;
    case 5u: goto L_08B1411C;
    case 6u: goto L_08B14128;
    case 7u: goto L_08B1414C;
    case 8u: goto L_08B1415C;
    case 9u: goto L_08B14168;
    case 10u: goto L_08B14170;
    case 11u: goto L_08B1417C;
    case 12u: goto L_08B141C0;
    case 13u: goto L_08B141D8;
    case 14u: goto L_08B141E4;
    case 15u: goto L_08B14304;
    case 16u: goto L_08B14310;
    case 17u: goto L_08B1431C;
    case 18u: goto L_08B14328;
    case 19u: goto L_08B14344;
    case 20u: goto L_08B1437C;
    case 21u: goto L_08B1438C;
    case 22u: goto L_08B14394;
    case 23u: goto L_08B143A4;
    case 24u: goto L_08B14404;
    case 25u: goto L_08B14424;
    case 26u: goto L_08B1442C;
    case 27u: goto L_08B14434;
    case 28u: goto L_08B14450;
    case 29u: goto L_08B1445C;
    case 30u: goto L_08B1447C;
    case 31u: goto L_08B14494;
    case 32u: goto L_08B144B0;
    case 33u: goto L_08B144C0;
    case 34u: goto L_08B144CC;
    case 35u: goto L_08B144D4;
    case 36u: goto L_08B144DC;
    case 37u: goto L_08B14504;
    case 38u: goto L_08B14510;
    case 39u: goto L_08B14530;
    case 40u: goto L_08B1453C;
    case 41u: goto L_08B14558;
    case 42u: goto L_08B14564;
    case 43u: goto L_08B14584;
    case 44u: goto L_08B1458C;
    case 45u: goto L_08B145B0;
    case 46u: goto L_08B1460C;
    case 47u: goto L_08B1463C;
    case 48u: goto L_08B14654;
    case 49u: goto L_08B1466C;
    case 50u: goto L_08B14678;
    case 51u: goto L_08B14680;
    case 52u: goto L_08B146B4;
    case 53u: goto L_08B146BC;
    case 54u: goto L_08B146D8;
    case 55u: goto L_08B146F4;
    case 56u: goto L_08B146F8;
    case 57u: goto L_08B14710;
    case 58u: goto L_08B14718;
    case 59u: goto L_08B1471C;
    case 60u: goto L_08B14748;
    case 61u: goto L_08B14758;
    case 62u: goto L_08B1475C;
    case 63u: goto L_08B1478C;
    case 64u: goto L_08B14794;
    case 65u: goto L_08B1479C;
    case 66u: goto L_08B147AC;
    case 67u: goto L_08B147E4;
    case 68u: goto L_08B1484C;
    case 69u: goto L_08B14860;
    case 70u: goto L_08B14874;
    case 71u: goto L_08B14884;
    case 72u: goto L_08B148A0;
    case 73u: goto L_08B148BC;
    case 74u: goto L_08B148C8;
    case 75u: goto L_08B148D0;
    case 76u: goto L_08B148D4;
    case 77u: goto L_08B148E4;
    case 78u: goto L_08B148E8;
    case 79u: goto L_08B148EC;
    case 80u: goto L_08B14914;
    case 81u: goto L_08B14940;
    case 82u: goto L_08B14984;
    case 83u: goto L_08B14988;
    case 84u: goto L_08B149A4;
    case 85u: goto L_08B149AC;
    case 86u: goto L_08B149B4;
    case 87u: goto L_08B149C0;
    case 88u: goto L_08B149CC;
    case 89u: goto L_08B149D8;
    case 90u: goto L_08B149E0;
    case 91u: goto L_08B149E8;
    case 92u: goto L_08B14A14;
    case 93u: goto L_08B14A18;
    case 94u: goto L_08B14A2C;
    case 95u: goto L_08B14A70;
    case 96u: goto L_08B14A78;
    case 97u: goto L_08B14A94;
    case 98u: goto L_08B14A9C;
    case 99u: goto L_08B14AA4;
    case 100u: goto L_08B14AAC;
    case 101u: goto L_08B14ABC;
    case 102u: goto L_08B14AD0;
    case 103u: goto L_08B14AF4;
    case 104u: goto L_08B14B08;
    case 105u: goto L_08B14B4C;
    case 106u: goto L_08B14B54;
    case 107u: goto L_08B14B70;
    case 108u: goto L_08B14B78;
    case 109u: goto L_08B14B80;
    case 110u: goto L_08B14B8C;
    case 111u: goto L_08B14B94;
    case 112u: goto L_08B14BC4;
    case 113u: goto L_08B14BD8;
    case 114u: goto L_08B14C18;
    case 115u: goto L_08B14C38;
    case 116u: goto L_08B14C64;
    case 117u: goto L_08B14C78;
    case 118u: goto L_08B14C8C;
    case 119u: goto L_08B14CA0;
    case 120u: goto L_08B14CAC;
    case 121u: goto L_08B14CB4;
    case 122u: goto L_08B14CC0;
    case 123u: goto L_08B14CC8;
    case 124u: goto L_08B14CD4;
    case 125u: goto L_08B14CDC;
    case 126u: goto L_08B14CE4;
    case 127u: goto L_08B14CEC;
    case 128u: goto L_08B14CF4;
    case 129u: goto L_08B14CFC;
    case 130u: goto L_08B14D04;
    case 131u: goto L_08B14D10;
    case 132u: goto L_08B14D1C;
    case 133u: goto L_08B14D20;
    case 134u: goto L_08B14D28;
    case 135u: goto L_08B14D34;
    case 136u: goto L_08B14D40;
    case 137u: goto L_08B14D50;
    case 138u: goto L_08B14D64;
    case 139u: goto L_08B14D6C;
    case 140u: goto L_08B14D80;
    case 141u: goto L_08B14D98;
    case 142u: goto L_08B14DA0;
    case 143u: goto L_08B14DB0;
    case 144u: goto L_08B14DB8;
    case 145u: goto L_08B14DCC;
    case 146u: goto L_08B14DD4;
    case 147u: goto L_08B14DD8;
    case 148u: goto L_08B14DE4;
    case 149u: goto L_08B14DEC;
    case 150u: goto L_08B14DFC;
    case 151u: goto L_08B14E08;
    case 152u: goto L_08B14E10;
    case 153u: goto L_08B14E1C;
    case 154u: goto L_08B14E24;
    case 155u: goto L_08B14E30;
    case 156u: goto L_08B14E38;
    case 157u: goto L_08B14E40;
    case 158u: goto L_08B14E48;
    case 159u: goto L_08B14E50;
    case 160u: goto L_08B14E58;
    case 161u: goto L_08B14E60;
    case 162u: goto L_08B14E6C;
    case 163u: goto L_08B14E78;
    case 164u: goto L_08B14E7C;
    case 165u: goto L_08B14E84;
    case 166u: goto L_08B14E90;
    case 167u: goto L_08B14E9C;
    case 168u: goto L_08B14EAC;
    case 169u: goto L_08B14EC0;
    case 170u: goto L_08B14EC4;
    case 171u: goto L_08B14ECC;
    case 172u: goto L_08B14EDC;
    case 173u: goto L_08B14EF0;
    case 174u: goto L_08B14F00;
    case 175u: goto L_08B14F10;
    case 176u: goto L_08B14F20;
    case 177u: goto L_08B14F34;
    case 178u: goto L_08B14F3C;
    case 179u: goto L_08B14F4C;
    case 180u: goto L_08B14F60;
    case 181u: goto L_08B14F70;
    case 182u: goto L_08B14F74;
    case 183u: goto L_08B14F7C;
    case 184u: goto L_08B14F88;
    case 185u: goto L_08B14F90;
    case 186u: goto L_08B14F9C;
    case 187u: goto L_08B14FA8;
    case 188u: goto L_08B14FB0;
    case 189u: goto L_08B14FC0;
    case 190u: goto L_08B14FD4;
    case 191u: goto L_08B14FE4;
    case 192u: goto L_08B14FEC;
    case 193u: goto L_08B14FFC;
    case 194u: goto L_08B15010;
    case 195u: goto L_08B15020;
    case 196u: goto L_08B15028;
    case 197u: goto L_08B15038;
    case 198u: goto L_08B1504C;
    case 199u: goto L_08B1505C;
    case 200u: goto L_08B15064;
    case 201u: goto L_08B1506C;
    case 202u: goto L_08B15084;
    case 203u: goto L_08B1508C;
    case 204u: goto L_08B150A0;
    case 205u: goto L_08B150A8;
    case 206u: goto L_08B150B8;
    case 207u: goto L_08B150C8;
    case 208u: goto L_08B150D0;
    case 209u: goto L_08B150DC;
    case 210u: goto L_08B150E8;
    case 211u: goto L_08B15100;
    case 212u: goto L_08B15110;
    case 213u: goto L_08B15120;
    case 214u: goto L_08B1513C;
    case 215u: goto L_08B15190;
    case 216u: goto L_08B151B0;
    case 217u: goto L_08B151B8;
    case 218u: goto L_08B151C0;
    case 219u: goto L_08B151D0;
    case 220u: goto L_08B151D8;
    case 221u: goto L_08B151E0;
    case 222u: goto L_08B151E8;
    case 223u: goto L_08B151EC;
    case 224u: goto L_08B1523C;
    case 225u: goto L_08B15260;
    case 226u: goto L_08B1526C;
    case 227u: goto L_08B1529C;
    case 228u: goto L_08B152B0;
    case 229u: goto L_08B152BC;
    case 230u: goto L_08B152C8;
    case 231u: goto L_08B152D4;
    case 232u: goto L_08B152DC;
    case 233u: goto L_08B152E4;
    case 234u: goto L_08B152F0;
    case 235u: goto L_08B152F8;
    case 236u: goto L_08B152FC;
    case 237u: goto L_08B1532C;
    case 238u: goto L_08B15334;
    case 239u: goto L_08B1533C;
    case 240u: goto L_08B15358;
    case 241u: goto L_08B15370;
    case 242u: goto L_08B15378;
    case 243u: goto L_08B1538C;
    case 244u: goto L_08B15394;
    case 245u: goto L_08B15398;
    case 246u: goto L_08B153C0;
    case 247u: goto L_08B153C8;
    case 248u: goto L_08B153D0;
    case 249u: goto L_08B153EC;
    case 250u: goto L_08B15408;
    case 251u: goto L_08B15410;
    case 252u: goto L_08B15424;
    case 253u: goto L_08B15440;
    case 254u: goto L_08B15458;
    case 255u: goto L_08B15460;
    case 256u: goto L_08B15490;
    case 257u: goto L_08B15494;
    case 258u: goto L_08B154AC;
    case 259u: goto L_08B15504;
    case 260u: goto L_08B15544;
    case 261u: goto L_08B15564;
    case 262u: goto L_08B1556C;
    case 263u: goto L_08B1557C;
    case 264u: goto L_08B1558C;
    case 265u: goto L_08B15590;
    case 266u: goto L_08B15598;
    case 267u: goto L_08B155A0;
    case 268u: goto L_08B155B8;
    case 269u: goto L_08B155BC;
    case 270u: goto L_08B155C0;
    case 271u: goto L_08B155F0;
    case 272u: goto L_08B155F8;
    case 273u: goto L_08B155FC;
    case 274u: goto L_08B15604;
    case 275u: goto L_08B15614;
    case 276u: goto L_08B15624;
    case 277u: goto L_08B15634;
    case 278u: goto L_08B15644;
    case 279u: goto L_08B15650;
    case 280u: goto L_08B15670;
    case 281u: goto L_08B15678;
    case 282u: goto L_08B1568C;
    case 283u: goto L_08B15694;
    case 284u: goto L_08B156A8;
    case 285u: goto L_08B156C8;
    case 286u: goto L_08B156D4;
    case 287u: goto L_08B156E4;
    case 288u: goto L_08B156F0;
    case 289u: goto L_08B156F8;
    case 290u: goto L_08B15704;
    case 291u: goto L_08B15710;
    case 292u: goto L_08B15720;
    case 293u: goto L_08B1572C;
    case 294u: goto L_08B15738;
    case 295u: goto L_08B15748;
    case 296u: goto L_08B15754;
    case 297u: goto L_08B1575C;
    case 298u: goto L_08B15770;
    case 299u: goto L_08B1578C;
    case 300u: goto L_08B15798;
    case 301u: goto L_08B157A8;
    case 302u: goto L_08B157B8;
    case 303u: goto L_08B157C8;
    case 304u: goto L_08B157E0;
    case 305u: goto L_08B15810;
    case 306u: goto L_08B15824;
    case 307u: goto L_08B1584C;
    case 308u: goto L_08B15858;
    case 309u: goto L_08B15860;
    case 310u: goto L_08B1587C;
    case 311u: goto L_08B158AC;
    case 312u: goto L_08B158B8;
    case 313u: goto L_08B158E0;
    case 314u: goto L_08B158EC;
    case 315u: goto L_08B158F4;
    case 316u: goto L_08B15910;
    case 317u: goto L_08B15940;
    case 318u: goto L_08B1594C;
    case 319u: goto L_08B15980;
    case 320u: goto L_08B1598C;
    case 321u: goto L_08B15994;
    case 322u: goto L_08B159B0;
    case 323u: goto L_08B159E0;
    case 324u: goto L_08B159EC;
    case 325u: goto L_08B15A14;
    case 326u: goto L_08B15A20;
    case 327u: goto L_08B15A28;
    case 328u: goto L_08B15A44;
    case 329u: goto L_08B15A90;
    case 330u: goto L_08B15AB0;
    case 331u: goto L_08B15AE4;
    case 332u: goto L_08B15AF0;
    case 333u: goto L_08B15AFC;
    case 334u: goto L_08B15B04;
    case 335u: goto L_08B15B14;
    case 336u: goto L_08B15B20;
    case 337u: goto L_08B15B2C;
    case 338u: goto L_08B15B3C;
    case 339u: goto L_08B15B4C;
    case 340u: goto L_08B15B80;
    case 341u: goto L_08B15B8C;
    case 342u: goto L_08B15B94;
    case 343u: goto L_08B15B9C;
    case 344u: goto L_08B15BA8;
    case 345u: goto L_08B15BAC;
    case 346u: goto L_08B15BDC;
    case 347u: goto L_08B15C1C;
    case 348u: goto L_08B15C3C;
    case 349u: goto L_08B15C5C;
    case 350u: goto L_08B15C60;
    case 351u: goto L_08B15C84;
    case 352u: goto L_08B15C9C;
    case 353u: goto L_08B15CA4;
    case 354u: goto L_08B15CB8;
    case 355u: goto L_08B15CEC;
    case 356u: goto L_08B15CF8;
    case 357u: goto L_08B15D08;
    case 358u: goto L_08B15D10;
    case 359u: goto L_08B15D20;
    case 360u: goto L_08B15D2C;
    case 361u: goto L_08B15D34;
    case 362u: goto L_08B15D3C;
    case 363u: goto L_08B15D44;
    case 364u: goto L_08B15D50;
    case 365u: goto L_08B15D60;
    case 366u: goto L_08B15D70;
    case 367u: goto L_08B15DA0;
    case 368u: goto L_08B15DBC;
    case 369u: goto L_08B15DC4;
    case 370u: goto L_08B15DE0;
    case 371u: goto L_08B15DE4;
    case 372u: goto L_08B15DF0;
    case 373u: goto L_08B15DF8;
    case 374u: goto L_08B15E00;
    case 375u: goto L_08B15E04;
    case 376u: goto L_08B15E34;
    case 377u: goto L_08B15E44;
    case 378u: goto L_08B15E50;
    case 379u: goto L_08B15E64;
    case 380u: goto L_08B15E70;
    case 381u: goto L_08B15E78;
    case 382u: goto L_08B15E80;
    case 383u: goto L_08B15E90;
    case 384u: goto L_08B15EA0;
    case 385u: goto L_08B15EB0;
    case 386u: goto L_08B15EB8;
    case 387u: goto L_08B15EC8;
    case 388u: goto L_08B15ECC;
    case 389u: goto L_08B15EDC;
    case 390u: goto L_08B15EF0;
    case 391u: goto L_08B15EFC;
    case 392u: goto L_08B15F04;
    case 393u: goto L_08B15F0C;
    case 394u: goto L_08B15F1C;
    case 395u: goto L_08B15F2C;
    case 396u: goto L_08B15F3C;
    case 397u: goto L_08B15F44;
    case 398u: goto L_08B15F54;
    case 399u: goto L_08B15F58;
    case 400u: goto L_08B15F68;
    case 401u: goto L_08B15F7C;
    case 402u: goto L_08B15F88;
    case 403u: goto L_08B15F9C;
    case 404u: goto L_08B15FA8;
    case 405u: goto L_08B15FB8;
    case 406u: goto L_08B15FC4;
    case 407u: goto L_08B15FE8;
    case 408u: goto L_08B15FF0;
    case 409u: goto L_08B15FF8;
    case 410u: goto L_08B16004;
    case 411u: goto L_08B1600C;
    case 412u: goto L_08B16014;
    case 413u: goto L_08B1601C;
    case 414u: goto L_08B16024;
    case 415u: goto L_08B16044;
    case 416u: goto L_08B1605C;
    case 417u: goto L_08B1607C;
    case 418u: goto L_08B16080;
    case 419u: goto L_08B16098;
    case 420u: goto L_08B160BC;
    case 421u: goto L_08B160C4;
    case 422u: goto L_08B160CC;
    case 423u: goto L_08B160D8;
    case 424u: goto L_08B160E0;
    case 425u: goto L_08B160E8;
    case 426u: goto L_08B160F0;
    case 427u: goto L_08B160F8;
    case 428u: goto L_08B16110;
    case 429u: goto L_08B16124;
    case 430u: goto L_08B16144;
    case 431u: goto L_08B16148;
    case 432u: goto L_08B16160;
    case 433u: goto L_08B1619C;
    case 434u: goto L_08B161A4;
    case 435u: goto L_08B161B0;
    case 436u: goto L_08B161B4;
    case 437u: goto L_08B161C4;
    case 438u: goto L_08B161D0;
    case 439u: goto L_08B161D8;
    case 440u: goto L_08B161E4;
    case 441u: goto L_08B161EC;
    case 442u: goto L_08B161F0;
    case 443u: goto L_08B1620C;
    case 444u: goto L_08B1623C;
    case 445u: goto L_08B16244;
    case 446u: goto L_08B16250;
    case 447u: goto L_08B16260;
    case 448u: goto L_08B16268;
    case 449u: goto L_08B16278;
    case 450u: goto L_08B16284;
    case 451u: goto L_08B1628C;
    case 452u: goto L_08B16294;
    case 453u: goto L_08B1629C;
    case 454u: goto L_08B162AC;
    case 455u: goto L_08B162B8;
    case 456u: goto L_08B162C0;
    case 457u: goto L_08B162C4;
    case 458u: goto L_08B162CC;
    case 459u: goto L_08B162D4;
    case 460u: goto L_08B162D8;
    case 461u: goto L_08B162E0;
    case 462u: goto L_08B16300;
    case 463u: goto L_08B16320;
    case 464u: goto L_08B16324;
    case 465u: goto L_08B16340;
    case 466u: goto L_08B1636C;
    case 467u: goto L_08B16374;
    case 468u: goto L_08B16380;
    case 469u: goto L_08B16390;
    case 470u: goto L_08B1639C;
    case 471u: goto L_08B163A4;
    case 472u: goto L_08B163AC;
    case 473u: goto L_08B163B8;
    case 474u: goto L_08B163C0;
    case 475u: goto L_08B163D0;
    case 476u: goto L_08B163DC;
    case 477u: goto L_08B163EC;
    case 478u: goto L_08B163F8;
    case 479u: goto L_08B16400;
    case 480u: goto L_08B16404;
    case 481u: goto L_08B16410;
    case 482u: goto L_08B16414;
    case 483u: goto L_08B16430;
    case 484u: goto L_08B1646C;
    case 485u: goto L_08B16474;
    case 486u: goto L_08B16480;
    case 487u: goto L_08B16484;
    case 488u: goto L_08B16494;
    case 489u: goto L_08B164A0;
    case 490u: goto L_08B164A8;
    case 491u: goto L_08B164B4;
    case 492u: goto L_08B164BC;
    case 493u: goto L_08B164C0;
    case 494u: goto L_08B164DC;
    case 495u: goto L_08B1651C;
    case 496u: goto L_08B16524;
    case 497u: goto L_08B16530;
    case 498u: goto L_08B16534;
    case 499u: goto L_08B16544;
    case 500u: goto L_08B16550;
    case 501u: goto L_08B1655C;
    case 502u: goto L_08B1656C;
    case 503u: goto L_08B1657C;
    case 504u: goto L_08B16588;
    case 505u: goto L_08B16590;
    case 506u: goto L_08B1659C;
    case 507u: goto L_08B165A0;
    case 508u: goto L_08B165A8;
    case 509u: goto L_08B165B4;
    case 510u: goto L_08B165C4;
    case 511u: goto L_08B165D8;
    case 512u: goto L_08B165E0;
    case 513u: goto L_08B165E8;
    case 514u: goto L_08B165F4;
    case 515u: goto L_08B165F8;
    case 516u: goto L_08B16604;
    case 517u: goto L_08B1660C;
    case 518u: goto L_08B16610;
    case 519u: goto L_08B16630;
    case 520u: goto L_08B16650;
    case 521u: goto L_08B16658;
    case 522u: goto L_08B16664;
    case 523u: goto L_08B1666C;
    case 524u: goto L_08B16678;
    case 525u: goto L_08B16688;
    case 526u: goto L_08B16690;
    case 527u: goto L_08B16698;
    case 528u: goto L_08B166B0;
    case 529u: goto L_08B166B4;
    case 530u: goto L_08B166C8;
    case 531u: goto L_08B166F4;
    case 532u: goto L_08B16700;
    case 533u: goto L_08B16734;
    case 534u: goto L_08B16740;
    case 535u: goto L_08B1674C;
    case 536u: goto L_08B16754;
    case 537u: goto L_08B16760;
    case 538u: goto L_08B16774;
    case 539u: goto L_08B16780;
    case 540u: goto L_08B167A0;
    case 541u: goto L_08B167CC;
    case 542u: goto L_08B167D8;
    case 543u: goto L_08B16808;
    case 544u: goto L_08B16814;
    case 545u: goto L_08B16820;
    case 546u: goto L_08B1682C;
    case 547u: goto L_08B16834;
    case 548u: goto L_08B16840;
    case 549u: goto L_08B16854;
    case 550u: goto L_08B16860;
    case 551u: goto L_08B16880;
    case 552u: goto L_08B168B0;
    case 553u: goto L_08B168B8;
    case 554u: goto L_08B168C0;
    case 555u: goto L_08B168CC;
    case 556u: goto L_08B168DC;
    case 557u: goto L_08B168F0;
    case 558u: goto L_08B16924;
    case 559u: goto L_08B16930;
    case 560u: goto L_08B1693C;
    case 561u: goto L_08B16944;
    case 562u: goto L_08B1694C;
    case 563u: goto L_08B16954;
    case 564u: goto L_08B16960;
    case 565u: goto L_08B16974;
    case 566u: goto L_08B16980;
    case 567u: goto L_08B16984;
    case 568u: goto L_08B169A8;
    case 569u: goto L_08B169D0;
    case 570u: goto L_08B169DC;
    case 571u: goto L_08B169F0;
    case 572u: goto L_08B169F8;
    case 573u: goto L_08B16A00;
    case 574u: goto L_08B16A0C;
    case 575u: goto L_08B16A18;
    case 576u: goto L_08B16A20;
    case 577u: goto L_08B16A2C;
    case 578u: goto L_08B16A30;
    case 579u: goto L_08B16A3C;
    case 580u: goto L_08B16A44;
    case 581u: goto L_08B16A50;
    case 582u: goto L_08B16A5C;
    case 583u: goto L_08B16A64;
    case 584u: goto L_08B16A70;
    case 585u: goto L_08B16A74;
    case 586u: goto L_08B16A90;
    case 587u: goto L_08B16AC8;
    case 588u: goto L_08B16AD0;
    case 589u: goto L_08B16ADC;
    case 590u: goto L_08B16AE0;
    case 591u: goto L_08B16AF0;
    case 592u: goto L_08B16B0C;
    case 593u: goto L_08B16B48;
    case 594u: goto L_08B16B50;
    case 595u: goto L_08B16B5C;
    case 596u: goto L_08B16B60;
    case 597u: goto L_08B16B6C;
    case 598u: goto L_08B16B78;
    case 599u: goto L_08B16B98;
    case 600u: goto L_08B16BD4;
    case 601u: goto L_08B16BDC;
    case 602u: goto L_08B16BE8;
    case 603u: goto L_08B16BEC;
    case 604u: goto L_08B16BF8;
    case 605u: goto L_08B16C08;
    case 606u: goto L_08B16C28;
    case 607u: goto L_08B16C64;
    case 608u: goto L_08B16C6C;
    case 609u: goto L_08B16C78;
    case 610u: goto L_08B16C7C;
    case 611u: goto L_08B16C88;
    case 612u: goto L_08B16C90;
    case 613u: goto L_08B16C98;
    case 614u: goto L_08B16CA0;
    case 615u: goto L_08B16CA8;
    case 616u: goto L_08B16CC0;
    case 617u: goto L_08B16CC8;
    case 618u: goto L_08B16CD0;
    case 619u: goto L_08B16CD8;
    case 620u: goto L_08B16CE0;
    case 621u: goto L_08B16CF8;
    case 622u: goto L_08B16D18;
    case 623u: goto L_08B16D3C;
    case 624u: goto L_08B16D4C;
    case 625u: goto L_08B16D54;
    case 626u: goto L_08B16D58;
    case 627u: goto L_08B16D60;
    case 628u: goto L_08B16D78;
    case 629u: goto L_08B16D80;
    case 630u: goto L_08B16D8C;
    case 631u: goto L_08B16D98;
    case 632u: goto L_08B16D9C;
    case 633u: goto L_08B16DC4;
    case 634u: goto L_08B16DE0;
    case 635u: goto L_08B16E00;
    case 636u: goto L_08B16E10;
    case 637u: goto L_08B16E1C;
    case 638u: goto L_08B16E34;
    case 639u: goto L_08B16E58;
    case 640u: goto L_08B16E68;
    case 641u: goto L_08B16E7C;
    case 642u: goto L_08B16E88;
    case 643u: goto L_08B16E94;
    case 644u: goto L_08B16E98;
    case 645u: goto L_08B16EB4;
    case 646u: goto L_08B16ED4;
    case 647u: goto L_08B16EEC;
    case 648u: goto L_08B16EFC;
    case 649u: goto L_08B16F18;
    case 650u: goto L_08B16F28;
    case 651u: goto L_08B16F34;
    case 652u: goto L_08B16F40;
    case 653u: goto L_08B16F48;
    case 654u: goto L_08B16F54;
    case 655u: goto L_08B16F6C;
    case 656u: goto L_08B16F9C;
    case 657u: goto L_08B16FAC;
    case 658u: goto L_08B16FB8;
    case 659u: goto L_08B16FC8;
    case 660u: goto L_08B16FD4;
    case 661u: goto L_08B16FDC;
    case 662u: goto L_08B16FE8;
    case 663u: goto L_08B17010;
    case 664u: goto L_08B17020;
    case 665u: goto L_08B17030;
    case 666u: goto L_08B17040;
    case 667u: goto L_08B1704C;
    case 668u: goto L_08B17054;
    case 669u: goto L_08B17060;
    case 670u: goto L_08B17068;
    case 671u: goto L_08B17074;
    case 672u: goto L_08B17090;
    case 673u: goto L_08B1709C;
    case 674u: goto L_08B170AC;
    case 675u: goto L_08B170B8;
    case 676u: goto L_08B170C0;
    case 677u: goto L_08B170C8;
    case 678u: goto L_08B170D0;
    case 679u: goto L_08B170DC;
    case 680u: goto L_08B170E4;
    case 681u: goto L_08B17100;
    case 682u: goto L_08B17110;
    case 683u: goto L_08B17118;
    case 684u: goto L_08B17130;
    case 685u: goto L_08B17138;
    case 686u: goto L_08B17154;
    case 687u: goto L_08B17178;
    case 688u: goto L_08B17184;
    case 689u: goto L_08B1718C;
    case 690u: goto L_08B1719C;
    case 691u: goto L_08B171AC;
    case 692u: goto L_08B171BC;
    case 693u: goto L_08B171D8;
    case 694u: goto L_08B171E0;
    case 695u: goto L_08B171E8;
    case 696u: goto L_08B171F0;
    case 697u: goto L_08B171F8;
    case 698u: goto L_08B17204;
    case 699u: goto L_08B1720C;
    case 700u: goto L_08B17214;
    case 701u: goto L_08B17228;
    case 702u: goto L_08B17230;
    case 703u: goto L_08B1723C;
    case 704u: goto L_08B17248;
    case 705u: goto L_08B17268;
    case 706u: goto L_08B1727C;
    case 707u: goto L_08B172D8;
    case 708u: goto L_08B172E0;
    case 709u: goto L_08B172F8;
    case 710u: goto L_08B17308;
    case 711u: goto L_08B17324;
    case 712u: goto L_08B17344;
    case 713u: goto L_08B17358;
    case 714u: goto L_08B173B4;
    case 715u: goto L_08B173BC;
    case 716u: goto L_08B173D4;
    case 717u: goto L_08B173E4;
    case 718u: goto L_08B17400;
    case 719u: goto L_08B17410;
    case 720u: goto L_08B1741C;
    case 721u: goto L_08B17424;
    case 722u: goto L_08B17438;
    case 723u: goto L_08B17440;
    case 724u: goto L_08B1744C;
    case 725u: goto L_08B1745C;
    case 726u: goto L_08B1746C;
    case 727u: goto L_08B174AC;
    case 728u: goto L_08B174E4;
    case 729u: goto L_08B1752C;
    case 730u: goto L_08B17544;
    case 731u: goto L_08B1754C;
    case 732u: goto L_08B17558;
    case 733u: goto L_08B17578;
    case 734u: goto L_08B175A0;
    case 735u: goto L_08B175C0;
    case 736u: goto L_08B175E0;
    case 737u: goto L_08B175EC;
    case 738u: goto L_08B17614;
    case 739u: goto L_08B17620;
    case 740u: goto L_08B1762C;
    case 741u: goto L_08B17634;
    case 742u: goto L_08B1765C;
    case 743u: goto L_08B17670;
    case 744u: goto L_08B17690;
    case 745u: goto L_08B176AC;
    case 746u: goto L_08B176B8;
    case 747u: goto L_08B17778;
    case 748u: goto L_08B17788;
    case 749u: goto L_08B177A0;
    case 750u: goto L_08B177B0;
    case 751u: goto L_08B177CC;
    case 752u: goto L_08B177EC;
    case 753u: goto L_08B177FC;
    case 754u: goto L_08B1782C;
    case 755u: goto L_08B1783C;
    case 756u: goto L_08B17854;
    case 757u: goto L_08B17864;
    case 758u: goto L_08B17880;
    case 759u: goto L_08B178A0;
    case 760u: goto L_08B178B0;
    case 761u: goto L_08B178C4;
    case 762u: goto L_08B178CC;
    case 763u: goto L_08B178D8;
    case 764u: goto L_08B178E0;
    case 765u: goto L_08B178E4;
    case 766u: goto L_08B178F8;
    case 767u: goto L_08B1791C;
    case 768u: goto L_08B1792C;
    case 769u: goto L_08B17940;
    case 770u: goto L_08B1794C;
    case 771u: goto L_08B17954;
    case 772u: goto L_08B1795C;
    case 773u: goto L_08B17964;
    case 774u: goto L_08B1796C;
    case 775u: goto L_08B17974;
    case 776u: goto L_08B17978;
    case 777u: goto L_08B1797C;
    case 778u: goto L_08B17984;
    case 779u: goto L_08B1798C;
    case 780u: goto L_08B17990;
    case 781u: goto L_08B179A8;
    case 782u: goto L_08B179CC;
    case 783u: goto L_08B179DC;
    case 784u: goto L_08B179F0;
    case 785u: goto L_08B179FC;
    case 786u: goto L_08B17A04;
    case 787u: goto L_08B17A0C;
    case 788u: goto L_08B17A14;
    case 789u: goto L_08B17A1C;
    case 790u: goto L_08B17A24;
    case 791u: goto L_08B17A28;
    case 792u: goto L_08B17A2C;
    case 793u: goto L_08B17A34;
    case 794u: goto L_08B17A3C;
    case 795u: goto L_08B17A40;
    case 796u: goto L_08B17A58;
    case 797u: goto L_08B17A7C;
    case 798u: goto L_08B17A8C;
    case 799u: goto L_08B17AA0;
    case 800u: goto L_08B17AAC;
    case 801u: goto L_08B17AB4;
    case 802u: goto L_08B17ABC;
    case 803u: goto L_08B17AC4;
    case 804u: goto L_08B17ACC;
    case 805u: goto L_08B17AD4;
    case 806u: goto L_08B17AD8;
    case 807u: goto L_08B17ADC;
    case 808u: goto L_08B17AE4;
    case 809u: goto L_08B17AEC;
    case 810u: goto L_08B17AF0;
    case 811u: goto L_08B17B08;
    case 812u: goto L_08B17B2C;
    case 813u: goto L_08B17B3C;
    case 814u: goto L_08B17B50;
    case 815u: goto L_08B17B5C;
    case 816u: goto L_08B17B64;
    case 817u: goto L_08B17B6C;
    case 818u: goto L_08B17B74;
    case 819u: goto L_08B17B7C;
    case 820u: goto L_08B17B84;
    case 821u: goto L_08B17B88;
    case 822u: goto L_08B17B8C;
    case 823u: goto L_08B17B94;
    case 824u: goto L_08B17B9C;
    case 825u: goto L_08B17BA0;
    case 826u: goto L_08B17BB8;
    case 827u: goto L_08B17BD8;
    case 828u: goto L_08B17BE8;
    case 829u: goto L_08B17BFC;
    case 830u: goto L_08B17C04;
    case 831u: goto L_08B17C10;
    case 832u: goto L_08B17C18;
    case 833u: goto L_08B17C1C;
    case 834u: goto L_08B17C30;
    case 835u: goto L_08B17C50;
    case 836u: goto L_08B17C60;
    case 837u: goto L_08B17C74;
    case 838u: goto L_08B17C7C;
    case 839u: goto L_08B17C88;
    case 840u: goto L_08B17C90;
    case 841u: goto L_08B17C94;
    case 842u: goto L_08B17CA8;
    case 843u: goto L_08B17CC8;
    case 844u: goto L_08B17CD8;
    case 845u: goto L_08B17CEC;
    case 846u: goto L_08B17CF4;
    case 847u: goto L_08B17D00;
    case 848u: goto L_08B17D08;
    case 849u: goto L_08B17D0C;
    case 850u: goto L_08B17D20;
    case 851u: goto L_08B17D40;
    case 852u: goto L_08B17D48;
    case 853u: goto L_08B17D50;
    case 854u: goto L_08B17D5C;
    case 855u: goto L_08B17D74;
    case 856u: goto L_08B17D84;
    case 857u: goto L_08B17D8C;
    case 858u: goto L_08B17D94;
    case 859u: goto L_08B17DA4;
    case 860u: goto L_08B17DB4;
    case 861u: goto L_08B17DBC;
    case 862u: goto L_08B17DC4;
    case 863u: goto L_08B17DD4;
    case 864u: goto L_08B17DF0;
    case 865u: goto L_08B17E00;
    case 866u: goto L_08B17E1C;
    case 867u: goto L_08B17E38;
    case 868u: goto L_08B17E40;
    case 869u: goto L_08B17E4C;
    case 870u: goto L_08B17E60;
    case 871u: goto L_08B17E6C;
    case 872u: goto L_08B17E78;
    case 873u: goto L_08B17E88;
    case 874u: goto L_08B17E98;
    case 875u: goto L_08B17EAC;
    case 876u: goto L_08B17EB4;
    case 877u: goto L_08B17EC0;
    case 878u: goto L_08B17EC4;
    case 879u: goto L_08B17ED8;
    case 880u: goto L_08B17EF4;
    case 881u: goto L_08B17EFC;
    case 882u: goto L_08B17F08;
    case 883u: goto L_08B17F14;
    case 884u: goto L_08B17F1C;
    case 885u: goto L_08B17F20;
    case 886u: goto L_08B17F38;
    case 887u: goto L_08B17F5C;
    case 888u: goto L_08B17F6C;
    case 889u: goto L_08B17F80;
    case 890u: goto L_08B17FB4;
    case 891u: goto L_08B17FBC;
    case 892u: goto L_08B17FC8;
    case 893u: goto L_08B17FD4;
    case 894u: goto L_08B17FE0;
    case 895u: goto L_08B17FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x08B14000u;
        if (local_delta_v813 >= 16372u || (local_delta_v813 & 3u) != 0u) {
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
L_08B14000:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[15];
    aot_gpr_5 = (16256u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08B14028;
      }
      goto L_08B14020;
    }
L_08B14020:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B1405C;
      }
      goto L_08B14028;
    }
L_08B14028:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    ctx.execute_vfpu_unary_ct<0u, 0u, 1u, 17u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08B1405C;
L_08B1405C:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[15];
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<0u, 0u, 1u, 5u>();
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 23u>();
    ctx.execute_vfpu_vec3_ct<0u, 64u, 32u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<64u, 32u, 0u, 1u, 1u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[15];
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<0u, 0u, 1u, 5u>();
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 23u>();
    ctx.execute_vfpu_vec3_ct<0u, 64u, 32u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<64u, 32u, 0u, 1u, 1u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_08B14128;
      }
      goto L_08B1411C;
    }
L_08B1411C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B14128;
L_08B14128:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(68));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6000));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (0u | 36u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_31 = (0x08B1414Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 7u, 0x08B1414Cu, 0x08ABE308u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1414Cu) goto L_08B1414C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1414C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08B14170;
      }
      goto L_08B1415C;
    }
L_08B1415C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_31 = (0x08B14168u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14168u) goto L_08B14168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B14168:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    goto L_08B14170;
L_08B14170:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    if (aot_gpr_6 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
        goto L_08B141C0;
    }
    goto L_08B1417C;
L_08B1417C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_08B141C0;
L_08B141C0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
    goto L_08B141D8;
L_08B141D8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B141E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (0u | 7u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6004), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (0u | 8u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6012), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (0u | 6u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6020), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (0u | 5u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6028), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (0u | 9u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6036), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6044), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6052), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6060), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6068), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6076), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (2225u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(14152));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6008), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (2225u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(14880));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6016), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (2225u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(14968));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6024), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (2225u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(15104));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6032), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (2225u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(15172));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6040), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (2225u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(15400));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6048), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (2225u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(15488));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6056), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (2225u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(15556));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6064), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (2225u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(15672));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6072), aot_gpr_6);
    aot_gpr_6 = (2225u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(15704));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B14304u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6080), aot_gpr_6);
    goto L_08B14310;
L_08B14304:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B14310:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08B1431C;
L_08B1431C:
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08B14328;
L_08B14328:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(6004)));
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(6012)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(aot_gpr_2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
      if (branch_taken) {
          goto L_08B1437C;
      }
      goto L_08B14344;
    }
L_08B14344:
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(6004));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6012));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6012));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), aot_gpr_5);
    goto L_08B1437C;
L_08B1437C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B14328;
      }
      goto L_08B1438C;
    }
L_08B1438C:
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_08B1431C;
      }
      goto L_08B14394;
    }
L_08B14394:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B143A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2444)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2440)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 31u));
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    aot_gpr_31 = (0x08B14404u);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 24u, 0x08B14404u, 0x08B60E84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 178u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 178u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14404u) goto L_08B14404;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B14404:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2452)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2448)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2460)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2456)));
    aot_gpr_5 = (ctx.gpr[3] & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_2 & aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_08B1442C;
      }
      goto L_08B14424;
    }
L_08B14424:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
      if (branch_taken) {
          goto L_08B144D4;
      }
      goto L_08B1442C;
    }
L_08B1442C:
    aot_gpr_31 = (0x08B14434u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14434u) goto L_08B14434;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B14434:
    aot_gpr_5 = (16457u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B14450u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08B145B0;
L_08B14450:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08B144CC;
      }
      goto L_08B1445C;
    }
L_08B1445C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(240));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_5);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08B1447Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1447Cu) goto L_08B1447C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B1447C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17963), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B14494u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0057.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 31u, 0x08B14494u, 0x088EB074u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0057_entry(rt, ctx, 594u, aot_mem);
#else
        recomp_unit_0057_entry(rt, ctx, 594u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 594u, 0x088EB074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14494u) goto L_08B14494;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B14494:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B144CC;
      }
      goto L_08B144B0;
    }
L_08B144B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B144CC;
      }
      goto L_08B144C0;
    }
L_08B144C0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B144CCu);
    aot_gpr_5 = (0u | 116u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 34u, 0x08B144CCu, 0x08860424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B144CCu) goto L_08B144CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B144CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B1458C;
      }
      goto L_08B144D4;
    }
L_08B144D4:
    aot_gpr_31 = (0x08B144DCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B144DCu) goto L_08B144DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B144DC:
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_6 = (16544u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B14504u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08B147E4;
L_08B14504:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08B1453C;
      }
      goto L_08B14510;
    }
L_08B14510:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(240));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_5);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08B14530u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14530u) goto L_08B14530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B14530:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17963), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B1458C;
      }
      goto L_08B1453C;
    }
L_08B1453C:
    aot_gpr_5 = (16457u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B14558u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08B145B0;
L_08B14558:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08B1458C;
      }
      goto L_08B14564;
    }
L_08B14564:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(240));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_5);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08B14584u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14584u) goto L_08B14584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B14584:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17963), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B1458C;
L_08B1458C:
    aot_gpr_2 = (ctx.gpr[19] | 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B145B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_gpr_4 = (18804u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 9200u);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 0u);
    goto L_08B1460C;
L_08B1460C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6000));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B1478C;
      }
      goto L_08B1463C;
    }
L_08B1463C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B14758;
      }
      goto L_08B14654;
    }
L_08B14654:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B14758;
      }
      goto L_08B1466C;
    }
L_08B1466C:
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B14678u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0064.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 50u, 0x08B14678u, 0x089068C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0064_entry(rt, ctx, 571u, aot_mem);
#else
        recomp_unit_0064_entry(rt, ctx, 571u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 571u, 0x089068C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14678u) goto L_08B14678;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B14678:
    if (aot_gpr_2 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
        goto L_08B1475C;
    }
    goto L_08B14680;
L_08B14680:
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B146B4u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0081.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 52u, 0x08B146B4u, 0x08949B54u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0081_entry(rt, ctx, 385u, aot_mem);
#else
        recomp_unit_0081_entry(rt, ctx, 385u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 385u, 0x08949B54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B146B4u) goto L_08B146B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B146B4:
    if (aot_gpr_2 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
        goto L_08B1475C;
    }
    goto L_08B146BC;
L_08B146BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
        goto L_08B146F8;
    }
    goto L_08B146D8;
L_08B146D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2208)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6004)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
        goto L_08B1471C;
    }
    goto L_08B146F4;
L_08B146F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    goto L_08B146F8;
L_08B146F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(6008)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08B14710u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14710u) goto L_08B14710;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B14710:
    if (aot_gpr_2 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
        goto L_08B1475C;
    }
    goto L_08B14718;
L_08B14718:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08B1471C;
L_08B1471C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2428)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(2432)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B14758;
      }
      goto L_08B14748;
    }
L_08B14748:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    goto L_08B14758;
L_08B14758:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08B1475C;
L_08B1475C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6000));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B1463C;
      }
      goto L_08B1478C;
    }
L_08B1478C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08B1479C;
      }
      goto L_08B14794;
    }
L_08B14794:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B147AC;
      }
      goto L_08B1479C;
    }
L_08B1479C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B1460C;
      }
      goto L_08B147AC;
    }
L_08B147AC:
    aot_gpr_2 = (ctx.gpr[22] | 0u);
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.gpr[16] = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      ctx.gpr[20] = aot_run_words[7];
      ctx.gpr[21] = aot_run_words[8];
      ctx.gpr[22] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B147E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(6000));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 ^ ctx.gpr[7]);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B14914;
      }
      goto L_08B1484C;
    }
L_08B1484C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B148E8;
      }
      goto L_08B14860;
    }
L_08B14860:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_20)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08B148EC;
    }
    goto L_08B14874;
L_08B14874:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_08B14884;
L_08B14884:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 6u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B148D4;
      }
      goto L_08B148A0;
    }
L_08B148A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2208)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6004)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B148D0;
      }
      goto L_08B148BC;
    }
L_08B148BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6008)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08B148C8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B148C8u) goto L_08B148C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B148C8:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B148D4;
      }
      goto L_08B148D0;
    }
L_08B148D0:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    goto L_08B148D4;
L_08B148D4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[20]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B14884;
      }
      goto L_08B148E4;
    }
L_08B148E4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    goto L_08B148E8;
L_08B148E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B148EC;
L_08B148EC:
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(6000));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B1484C;
      }
      goto L_08B14914;
    }
L_08B14914:
    aot_gpr_2 = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.gpr[16] = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B14940:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6000));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_6);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
      if (branch_taken) {
          goto L_08B14A14;
      }
      goto L_08B14984;
    }
L_08B14984:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B14988;
L_08B14988:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 6u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08B149E8;
    }
    goto L_08B149A4;
L_08B149A4:
    aot_gpr_31 = (0x08B149ACu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 85u, 0x08B149ACu, 0x08B13E34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 776u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 776u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 776u, 0x08B13E34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B149ACu) goto L_08B149AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B149AC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08B149E0;
      }
      goto L_08B149B4;
    }
L_08B149B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
      if (branch_taken) {
          goto L_08B149E0;
      }
      goto L_08B149C0;
    }
L_08B149C0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B149D8;
      }
      goto L_08B149CC;
    }
L_08B149CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
      if (branch_taken) {
          goto L_08B149E0;
      }
      goto L_08B149D8;
    }
L_08B149D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B14A18;
      }
      goto L_08B149E0;
    }
L_08B149E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B149E8;
L_08B149E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(6000));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B14988;
    }
    goto L_08B14A14;
L_08B14A14:
    aot_gpr_2 = (0u | 0u);
    goto L_08B14A18;
L_08B14A18:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B14A2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6000));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_6);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
      if (branch_taken) {
          goto L_08B14AF4;
      }
      goto L_08B14A70;
    }
L_08B14A70:
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B14A78;
L_08B14A78:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 6u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B14ABC;
      }
      goto L_08B14A94;
    }
L_08B14A94:
    aot_gpr_31 = (0x08B14A9Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 98u, 0x08B14A9Cu, 0x08B13E34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 776u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 776u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 776u, 0x08B13E34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14A9Cu) goto L_08B14A9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B14A9C:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B14AAC;
      }
      goto L_08B14AA4;
    }
L_08B14AA4:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08B14AAC;
L_08B14AAC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6000));
      if (branch_taken) {
          goto L_08B14AD0;
      }
      goto L_08B14ABC;
    }
L_08B14ABC:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6000));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B14AD0;
L_08B14AD0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B14A78;
    }
    goto L_08B14AF4;
L_08B14AF4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B14B08:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6000));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_6);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
      if (branch_taken) {
          goto L_08B14BC4;
      }
      goto L_08B14B4C;
    }
L_08B14B4C:
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B14B54;
L_08B14B54:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 6u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B14B8C;
      }
      goto L_08B14B70;
    }
L_08B14B70:
    aot_gpr_31 = (0x08B14B78u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 108u, 0x08B14B78u, 0x08B13E34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 776u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 776u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 776u, 0x08B13E34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14B78u) goto L_08B14B78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B14B78:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B14B94;
      }
      goto L_08B14B80;
    }
L_08B14B80:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[17]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B14B94;
      }
      goto L_08B14B8C;
    }
L_08B14B8C:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08B14B94;
L_08B14B94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(6000));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B14B54;
    }
    goto L_08B14BC4;
L_08B14BC4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B14BD8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3292)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), ctx.gpr[16], ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    { const std::uint32_t aot_run_words[7]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    aot_gpr_31 = (0x08B14C18u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6000));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 114u, 0x08B14C18u, 0x08B6BAECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 721u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 721u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 721u, 0x08B6BAECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14C18u) goto L_08B14C18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B14C18:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x08B14C38u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14C38u) goto L_08B14C38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B14C38:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-13362))))));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B14D6C;
      }
      goto L_08B14C64;
    }
L_08B14C64:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[30] = (0u | 45u);
      if (branch_taken) {
          goto L_08B14D64;
      }
      goto L_08B14C78;
    }
L_08B14C78:
    ctx.gpr[23] = (0u | 48u);
    ctx.gpr[22] = (0u | 46u);
    ctx.gpr[21] = (0u | 6u);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[20] = (512u << 16u);
    goto L_08B14C8C;
L_08B14C8C:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
      if (branch_taken) {
          goto L_08B14CAC;
      }
      goto L_08B14CA0;
    }
L_08B14CA0:
    aot_gpr_6 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_08B14CD4;
      }
      goto L_08B14CAC;
    }
L_08B14CAC:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B14CC0;
      }
      goto L_08B14CB4;
    }
L_08B14CB4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[16] == aot_gpr_6;
      if (branch_taken) {
          goto L_08B14CD4;
      }
      goto L_08B14CC0;
    }
L_08B14CC0:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14CC8;
    }
L_08B14CC8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_6;
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14CD4;
    }
L_08B14CD4:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B14CF4;
      }
      goto L_08B14CDC;
    }
L_08B14CDC:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[30];
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14CE4;
    }
L_08B14CE4:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[23];
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14CEC;
    }
L_08B14CEC:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14CF4;
    }
L_08B14CF4:
    aot_gpr_31 = (0x08B14CFCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 129u, 0x08B14CFCu, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14CFCu) goto L_08B14CFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B14CFC:
    if (aot_gpr_2 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
        goto L_08B14D20;
    }
    goto L_08B14D04;
L_08B14D04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14D10;
    }
L_08B14D10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14D1C;
    }
L_08B14D1C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    goto L_08B14D20;
L_08B14D20:
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[18];
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
      if (branch_taken) {
          goto L_08B14D34;
      }
      goto L_08B14D28;
    }
L_08B14D28:
    aot_gpr_5 = (aot_gpr_4 & ctx.gpr[20]);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14D34;
    }
L_08B14D34:
    aot_gpr_4 = (aot_gpr_4 & 256u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B14D50;
      }
      goto L_08B14D40;
    }
L_08B14D40:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08B14D50u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 137u, 0x08B14D50u, 0x08B13F8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 804u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 804u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 804u, 0x08B13F8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14D50u) goto L_08B14D50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B14D50:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B14C8C;
      }
      goto L_08B14D64;
    }
L_08B14D64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
      if (branch_taken) {
          goto L_08B14EC4;
      }
      goto L_08B14D6C;
    }
L_08B14D6C:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B14EC0;
      }
      goto L_08B14D80;
    }
L_08B14D80:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[30] = (0u | 46u);
    ctx.gpr[23] = (0u | 6u);
    ctx.gpr[22] = (512u << 16u);
    ctx.gpr[19] = (ctx.lo);
    goto L_08B14D98;
L_08B14D98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
      if (branch_taken) {
          goto L_08B14DB0;
      }
      goto L_08B14DA0;
    }
L_08B14DA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08B14DB8;
    }
    goto L_08B14DB0;
L_08B14DB0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B14DD8;
      }
      goto L_08B14DB8;
    }
L_08B14DB8:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08B14DD4;
    }
    goto L_08B14DCC;
L_08B14DCC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B14DD8;
      }
      goto L_08B14DD4;
    }
L_08B14DD4:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    goto L_08B14DD8;
L_08B14DD8:
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14DE4;
    }
L_08B14DE4:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14DEC;
    }
L_08B14DEC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[7] = (0u | 57u);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
      if (branch_taken) {
          goto L_08B14E08;
      }
      goto L_08B14DFC;
    }
L_08B14DFC:
    ctx.gpr[7] = (0u | 58u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08B14E30;
      }
      goto L_08B14E08;
    }
L_08B14E08:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B14E1C;
      }
      goto L_08B14E10;
    }
L_08B14E10:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
      if (branch_taken) {
          goto L_08B14E30;
      }
      goto L_08B14E1C;
    }
L_08B14E1C:
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E24;
    }
L_08B14E24:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E30;
    }
L_08B14E30:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (0u | 45u);
      if (branch_taken) {
          goto L_08B14E50;
      }
      goto L_08B14E38;
    }
L_08B14E38:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_gpr_4 = (0u | 48u);
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E40;
    }
L_08B14E40:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E48;
    }
L_08B14E48:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[30];
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E50;
    }
L_08B14E50:
    aot_gpr_31 = (0x08B14E58u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 160u, 0x08B14E58u, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14E58u) goto L_08B14E58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B14E58:
    if (aot_gpr_2 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
        goto L_08B14E7C;
    }
    goto L_08B14E60;
L_08B14E60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E6C;
    }
L_08B14E6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[23];
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E78;
    }
L_08B14E78:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    goto L_08B14E7C;
L_08B14E7C:
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[18];
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
      if (branch_taken) {
          goto L_08B14E90;
      }
      goto L_08B14E84;
    }
L_08B14E84:
    aot_gpr_5 = (aot_gpr_4 & ctx.gpr[22]);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E90;
    }
L_08B14E90:
    aot_gpr_4 = (aot_gpr_4 & 256u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B14EAC;
      }
      goto L_08B14E9C;
    }
L_08B14E9C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08B14EACu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 168u, 0x08B14EACu, 0x08B13F8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 804u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 804u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 804u, 0x08B13F8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14EACu) goto L_08B14EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B14EAC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08B14D98;
      }
      goto L_08B14EC0;
    }
L_08B14EC0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    goto L_08B14EC4;
L_08B14EC4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B150C8;
      }
      goto L_08B14ECC;
    }
L_08B14ECC:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9624)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9628)));
    { const bool branch_taken = ctx.gpr[19] == aot_gpr_4;
    ctx.gpr[20] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B150C8;
      }
      goto L_08B14EDC;
    }
L_08B14EDC:
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(18));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(19));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(21));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28736));
    goto L_08B14EF0;
L_08B14EF0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08B14F20;
      }
      goto L_08B14F00;
    }
L_08B14F00:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(17));
    aot_gpr_31 = (0x08B14F10u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 175u, 0x08B14F10u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14F10u) goto L_08B14F10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B14F10:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(17)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B14F20;
L_08B14F20:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(180));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 57u);
    if (aot_gpr_4 == aot_gpr_6) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
        goto L_08B14F74;
    }
    goto L_08B14F34;
L_08B14F34:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08B14F60;
      }
      goto L_08B14F3C;
    }
L_08B14F3C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B14F4Cu);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 179u, 0x08B14F4Cu, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14F4Cu) goto L_08B14F4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B14F4C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(18)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(180));
    goto L_08B14F60;
L_08B14F60:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_08B14F9C;
      }
      goto L_08B14F70;
    }
L_08B14F70:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    goto L_08B14F74;
L_08B14F74:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B14F88;
      }
      goto L_08B14F7C;
    }
L_08B14F7C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_6;
      if (branch_taken) {
          goto L_08B14F9C;
      }
      goto L_08B14F88;
    }
L_08B14F88:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B150B8;
      }
      goto L_08B14F90;
    }
L_08B14F90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_08B150B8;
      }
      goto L_08B14F9C;
    }
L_08B14F9C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B1505C;
      }
      goto L_08B14FA8;
    }
L_08B14FA8:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08B14FD4;
      }
      goto L_08B14FB0;
    }
L_08B14FB0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B14FC0u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 189u, 0x08B14FC0u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14FC0u) goto L_08B14FC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B14FC0:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(19)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(180));
    goto L_08B14FD4;
L_08B14FD4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 45u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
      if (branch_taken) {
          goto L_08B150B8;
      }
      goto L_08B14FE4;
    }
L_08B14FE4:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08B15010;
      }
      goto L_08B14FEC;
    }
L_08B14FEC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B14FFCu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 193u, 0x08B14FFCu, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B14FFCu) goto L_08B14FFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B14FFC:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(180));
    goto L_08B15010;
L_08B15010:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 48u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
      if (branch_taken) {
          goto L_08B150B8;
      }
      goto L_08B15020;
    }
L_08B15020:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08B1504C;
      }
      goto L_08B15028;
    }
L_08B15028:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B15038u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 197u, 0x08B15038u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15038u) goto L_08B15038;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15038:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(21)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(180));
    goto L_08B1504C;
L_08B1504C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 46u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B150B8;
      }
      goto L_08B1505C;
    }
L_08B1505C:
    aot_gpr_31 = (0x08B15064u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 200u, 0x08B15064u, 0x08AD0600u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 58u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 58u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 58u, 0x08AD0600u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15064u) goto L_08B15064;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15064:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B150B8;
      }
      goto L_08B1506C;
    }
L_08B1506C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B150A8;
      }
      goto L_08B15084;
    }
L_08B15084:
    aot_gpr_31 = (0x08B1508Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0115.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 203u, 0x08B1508Cu, 0x089D3458u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0115_entry(rt, ctx, 597u, aot_mem);
#else
        recomp_unit_0115_entry(rt, ctx, 597u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 597u, 0x089D3458u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1508Cu) goto L_08B1508C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1508C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (0x08B150A0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 204u, 0x08B150A0u, 0x08ADC560u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B150A0u) goto L_08B150A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B150A0:
    { const bool branch_taken = ctx.gpr[16] == aot_gpr_2;
      if (branch_taken) {
          goto L_08B150B8;
      }
      goto L_08B150A8;
    }
L_08B150A8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08B150B8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 206u, 0x08B150B8u, 0x08B13F8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 804u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 804u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 804u, 0x08B13F8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B150B8u) goto L_08B150B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B150B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9628)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_08B14EF0;
      }
      goto L_08B150C8;
    }
L_08B150C8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08B150D0;
L_08B150D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    aot_gpr_31 = (0x08B150DCu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3176)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B150DCu) goto L_08B150DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B150DC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B15110;
      }
      goto L_08B150E8;
    }
L_08B150E8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(482))))));
    aot_gpr_5 = (aot_gpr_5 & 64u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B15110;
      }
      goto L_08B15100;
    }
L_08B15100:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08B15110u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 212u, 0x08B15110u, 0x08B13F8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 804u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 804u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 804u, 0x08B13F8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15110u) goto L_08B15110;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15110:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B150D0;
      }
      goto L_08B15120;
    }
L_08B15120:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3292)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6000));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_31 = (0x08B1513Cu);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(22))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 500u, 0x08B728A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1513Cu) goto L_08B1513C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B1513C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3292)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6000));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_2 = (aot_gpr_4 & 255u);
    aot_gpr_2 = (aot_gpr_2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B15190:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_31);
    aot_gpr_31 = (0x08B151B0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    goto L_08B14BD8;
L_08B151B0:
    aot_gpr_31 = (0x08B151B8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08B14940;
L_08B151B8:
    if (aot_gpr_2 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
        goto L_08B151EC;
    }
    goto L_08B151C0;
L_08B151C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B151E0;
      }
      goto L_08B151D0;
    }
L_08B151D0:
    aot_gpr_31 = (0x08B151D8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08B14A2C;
L_08B151D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
      if (branch_taken) {
          goto L_08B151EC;
      }
      goto L_08B151E0;
    }
L_08B151E0:
    aot_gpr_31 = (0x08B151E8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08B14B08;
L_08B151E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    goto L_08B151EC;
L_08B151EC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6000));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B15260;
      }
      goto L_08B1523C;
    }
L_08B1523C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B1523C;
      }
      goto L_08B15260;
    }
L_08B15260:
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B15490;
      }
      goto L_08B1526C;
    }
L_08B1526C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6000));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B15490;
      }
      goto L_08B1529C;
    }
L_08B1529C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2076)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08B152C8;
      }
      goto L_08B152B0;
    }
L_08B152B0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
        goto L_08B15460;
    }
    goto L_08B152BC;
L_08B152BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3332)));
    if (aot_gpr_5 != aot_gpr_4) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
        goto L_08B15460;
    }
    goto L_08B152C8;
L_08B152C8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B152E4;
      }
      goto L_08B152D4;
    }
L_08B152D4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08B15424;
      }
      goto L_08B152DC;
    }
L_08B152DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B152F8;
      }
      goto L_08B152E4;
    }
L_08B152E4:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B15394;
      }
      goto L_08B152F0;
    }
L_08B152F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B15424;
      }
      goto L_08B152F8;
    }
L_08B152F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08B152FC;
L_08B152FC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6000));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B15358;
      }
      goto L_08B1532C;
    }
L_08B1532C:
    if (ctx.gpr[16] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
        goto L_08B1533C;
    }
    goto L_08B15334;
L_08B15334:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B15494;
      }
      goto L_08B1533C;
    }
L_08B1533C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6000));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08B15358;
L_08B15358:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08B15370u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0064.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 241u, 0x08B15370u, 0x089069ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0064_entry(rt, ctx, 579u, aot_mem);
#else
        recomp_unit_0064_entry(rt, ctx, 579u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 579u, 0x089069ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15370u) goto L_08B15370;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15370:
    if (aot_gpr_2 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
        goto L_08B152FC;
    }
    goto L_08B15378;
L_08B15378:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
        goto L_08B152FC;
    }
    goto L_08B1538C;
L_08B1538C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B15424;
      }
      goto L_08B15394;
    }
L_08B15394:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    goto L_08B15398;
L_08B15398:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6000));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
        goto L_08B153EC;
    }
    goto L_08B153C0;
L_08B153C0:
    if (ctx.gpr[16] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
        goto L_08B153D0;
    }
    goto L_08B153C8;
L_08B153C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B15494;
      }
      goto L_08B153D0;
    }
L_08B153D0:
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6000));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08B153EC;
L_08B153EC:
    aot_gpr_6 = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B15408u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0064.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 250u, 0x08B15408u, 0x089069ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0064_entry(rt, ctx, 579u, aot_mem);
#else
        recomp_unit_0064_entry(rt, ctx, 579u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 579u, 0x089069ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15408u) goto L_08B15408;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15408:
    if (aot_gpr_2 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
        goto L_08B15398;
    }
    goto L_08B15410;
L_08B15410:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
        goto L_08B15398;
    }
    goto L_08B15424;
L_08B15424:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(240));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B15440u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15440u) goto L_08B15440;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B15440:
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17963), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B15458u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0057.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 254u, 0x08B15458u, 0x088EB074u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0057_entry(rt, ctx, 594u, aot_mem);
#else
        recomp_unit_0057_entry(rt, ctx, 594u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 594u, 0x088EB074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15458u) goto L_08B15458;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15458:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B15494;
      }
      goto L_08B15460;
    }
L_08B15460:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6000));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B1529C;
      }
      goto L_08B15490;
    }
L_08B15490:
    aot_gpr_2 = (0u | 0u);
    goto L_08B15494;
L_08B15494:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B154AC:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (2280u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(20080));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20080), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_5 = (16256u << 16u);
    aot_gpr_4 = (2280u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(20112));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20112), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_run_words); }
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_13));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B15504:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_6);
    aot_mem.aot_direct_store_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), aot_gpr_6);
    aot_mem.aot_direct_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store_word_left(aot_gpr_6 + static_cast<std::uint32_t>(3), aot_gpr_5);
    aot_mem.aot_direct_store_word_right(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B15544:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B15598;
      }
      goto L_08B15564;
    }
L_08B15564:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    goto L_08B1556C;
L_08B1556C:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(12));
        goto L_08B1558C;
    }
    goto L_08B1557C;
L_08B1557C:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B15590;
      }
      goto L_08B1558C;
    }
L_08B1558C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_08B15590;
L_08B15590:
    if (aot_gpr_6 != 0u) {
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
        goto L_08B1556C;
    }
    goto L_08B15598;
L_08B15598:
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_08B155BC;
    }
    goto L_08B155A0;
L_08B155A0:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (ctx.gpr[7] < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
        goto L_08B155C0;
    }
    goto L_08B155B8;
L_08B155B8:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08B155BC;
L_08B155BC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    goto L_08B155C0;
L_08B155C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B155F8;
      }
      goto L_08B155F0;
    }
L_08B155F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B155FC;
      }
      goto L_08B155F8;
    }
L_08B155F8:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    goto L_08B155FC;
L_08B155FC:
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B15604:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B15614u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(2876));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 275u, 0x08B15614u, 0x0889D374u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 252u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 252u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15614u) goto L_08B15614;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15614:
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B15624:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B15634u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(2876));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 277u, 0x08B15634u, 0x0889D374u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 252u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 252u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15634u) goto L_08B15634;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15634:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr_4 != 0u) {
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08B15644;
    }
    goto L_08B15644;
L_08B15644:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B15650:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B15670u);
    goto L_08B15624;
L_08B15670:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_08B15694;
      }
      goto L_08B15678;
    }
L_08B15678:
    aot_gpr_6 = (2233u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-32176));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B1568Cu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 282u, 0x08B1568Cu, 0x0889CFFCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 201u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 201u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1568Cu) goto L_08B1568C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1568C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B15694;
      }
      goto L_08B15694;
    }
L_08B15694:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B156A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B156C8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B156C8u) goto L_08B156C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B156C8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(2876));
    aot_gpr_31 = (0x08B156D4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 286u, 0x08B156D4u, 0x0889D344u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 249u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 249u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 249u, 0x0889D344u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B156D4u) goto L_08B156D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B156D4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08B156E4u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 287u, 0x08B156E4u, 0x088071ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 459u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 459u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B156E4u) goto L_08B156E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B156E4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B156F0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806888, 0u, 324u, 0x08806888u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B156F0u) goto L_08B156F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B156F0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08B15748;
      }
      goto L_08B156F8;
    }
L_08B156F8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B15704u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806654, 0u, 303u, 0x08806654u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15704u) goto L_08B15704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B15704:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B15710u);
    aot_gpr_5 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 291u, 0x08B15710u, 0x088079D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 555u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 555u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 555u, 0x088079D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15710u) goto L_08B15710;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15710:
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B15720u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880682C, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15720u) goto L_08B15720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B15720:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B1572Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 293u, 0x08B1572Cu, 0x08807510u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 492u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 492u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 492u, 0x08807510u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1572Cu) goto L_08B1572C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1572C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B15738u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880682C, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15738u) goto L_08B15738;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B15738:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_31 = (0x08B15748u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 295u, 0x08B15748u, 0x0880748Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 489u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 489u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15748u) goto L_08B15748;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15748:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B15754u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 296u, 0x08B15754u, 0x088066C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 310u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 310u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 310u, 0x088066C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15754u) goto L_08B15754;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15754:
    aot_gpr_31 = (0x08B1575Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1575Cu) goto L_08B1575C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B1575C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B15770:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B1578Cu);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(3120));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 299u, 0x08B1578Cu, 0x08806E68u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 430u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 430u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1578Cu) goto L_08B1578C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1578C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B15798u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 300u, 0x08B15798u, 0x088070DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 453u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 453u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15798u) goto L_08B15798;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15798:
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B157A8u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B157A8:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08B157B8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B157B8u) goto L_08B157B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B157B8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08B157C8u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 303u, 0x08B157C8u, 0x08807644u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 508u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 508u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B157C8u) goto L_08B157C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B157C8:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B157E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B15810u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15810u) goto L_08B15810;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B15810:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_31 = (0x08B15824u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 306u, 0x08B15824u, 0x08ADC7D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 155u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 155u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 155u, 0x08ADC7D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15824u) goto L_08B15824;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15824:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_gpr_5 = (aot_gpr_5 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08B15858;
      }
      goto L_08B1584C;
    }
L_08B1584C:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08B15858;
L_08B15858:
    aot_gpr_31 = (0x08B15860u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15860u) goto L_08B15860;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B15860:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B1587C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B158ACu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15650;
L_08B158AC:
    aot_gpr_5 = (aot_gpr_2 & 255u);
    aot_gpr_31 = (0x08B158B8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 312u, 0x08B158B8u, 0x08ADC88Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 167u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 167u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 167u, 0x08ADC88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B158B8u) goto L_08B158B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B158B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_gpr_5 = (aot_gpr_5 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08B158EC;
      }
      goto L_08B158E0;
    }
L_08B158E0:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08B158EC;
L_08B158EC:
    aot_gpr_31 = (0x08B158F4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B158F4u) goto L_08B158F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B158F4:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B15910:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B15940u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15650;
L_08B15940:
    aot_gpr_5 = (aot_gpr_2 & 255u);
    aot_gpr_31 = (0x08B1594Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 318u, 0x08B1594Cu, 0x08ADC88Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 167u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 167u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 167u, 0x08ADC88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1594Cu) goto L_08B1594C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1594C:
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
          goto L_08B1598C;
      }
      goto L_08B15980;
    }
L_08B15980:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08B1598C;
L_08B1598C:
    aot_gpr_31 = (0x08B15994u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15994u) goto L_08B15994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B15994:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B159B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B159E0u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15650;
L_08B159E0:
    aot_gpr_5 = (aot_gpr_2 & 255u);
    aot_gpr_31 = (0x08B159ECu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 324u, 0x08B159ECu, 0x08ADC7F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 156u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 156u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 156u, 0x08ADC7F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B159ECu) goto L_08B159EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B159EC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_gpr_5 = (aot_gpr_5 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08B15A20;
      }
      goto L_08B15A14;
    }
L_08B15A14:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08B15A20;
L_08B15A20:
    aot_gpr_31 = (0x08B15A28u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15A28u) goto L_08B15A28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B15A28:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B15A44:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    { const std::uint32_t aot_run_words[10]{std::bit_cast<std::uint32_t>(aot_fpr_20), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_run_words); }
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08B15A90u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0075.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 329u, 0x08B15A90u, 0x08931AF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0075_entry(rt, ctx, 315u, aot_mem);
#else
        recomp_unit_0075_entry(rt, ctx, 315u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15A90u) goto L_08B15A90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15A90:
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (2237u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    goto L_08B15AB0;
L_08B15AB0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_08B15AE4;
    }
    goto L_08B15AE4;
L_08B15AE4:
    aot_gpr_4 = (ctx.gpr[19] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B15B9C;
      }
      goto L_08B15AF0;
    }
L_08B15AF0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B15AFCu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 333u, 0x08B15AFCu, 0x08ADC0F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 12u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 12u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15AFCu) goto L_08B15AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15AFC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B15B94;
      }
      goto L_08B15B04;
    }
L_08B15B04:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B15B14u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 335u, 0x08B15B14u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15B14u) goto L_08B15B14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15B14:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_08B15B94;
      }
      goto L_08B15B20;
    }
L_08B15B20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_08B15B4C;
    }
    goto L_08B15B2C;
L_08B15B2C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B15B3Cu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 338u, 0x08B15B3Cu, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15B3Cu) goto L_08B15B3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15B3C:
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_08B15B4C;
L_08B15B4C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
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
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B15B94;
      }
      goto L_08B15B80;
    }
L_08B15B80:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B15B8Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15B8Cu) goto L_08B15B8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B15B8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B15BAC;
      }
      goto L_08B15B94;
    }
L_08B15B94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B15AB0;
      }
      goto L_08B15B9C;
    }
L_08B15B9C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B15BA8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15BA8u) goto L_08B15BA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B15BA8:
    aot_gpr_2 = (ctx.gpr[18] | 0u);
    goto L_08B15BAC;
L_08B15BAC:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      ctx.gpr[23] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B15BDC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    { const std::uint32_t aot_run_words[10]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_run_words); }
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08B15C1Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15C1Cu) goto L_08B15C1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B15C1C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08B15C3Cu);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0075.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 348u, 0x08B15C3Cu, 0x08931AF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0075_entry(rt, ctx, 315u, aot_mem);
#else
        recomp_unit_0075_entry(rt, ctx, 315u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15C3Cu) goto L_08B15C3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15C3C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (49864u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B15C60;
      }
      goto L_08B15C5C;
    }
L_08B15C5C:
    ctx.gpr[23] = (0u | 0u);
    goto L_08B15C60;
L_08B15C60:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_6);
    aot_gpr_4 = (16416u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B15CA4;
      }
      goto L_08B15C84;
    }
L_08B15C84:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_6);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08B15C9Cu);
    aot_gpr_6 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0075.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 352u, 0x08B15C9Cu, 0x08932014u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0075_entry(rt, ctx, 406u, aot_mem);
#else
        recomp_unit_0075_entry(rt, ctx, 406u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 406u, 0x08932014u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15C9Cu) goto L_08B15C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15C9C:
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
    goto L_08B15CA4;
L_08B15CA4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    goto L_08B15CB8;
L_08B15CB8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_08B15CEC;
    }
    goto L_08B15CEC;
L_08B15CEC:
    aot_gpr_4 = (ctx.gpr[17] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B15E00;
      }
      goto L_08B15CF8;
    }
L_08B15CF8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x08B15D08u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 357u, 0x08B15D08u, 0x08ADC0D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 10u, 0x08ADC0D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15D08u) goto L_08B15D08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15D08:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B15DF8;
      }
      goto L_08B15D10;
    }
L_08B15D10:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B15D20u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 359u, 0x08B15D20u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15D20u) goto L_08B15D20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15D20:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08B15DF8;
      }
      goto L_08B15D2C;
    }
L_08B15D2C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08B15D44;
      }
      goto L_08B15D34;
    }
L_08B15D34:
    jump_target = ctx.gpr[19];
    aot_gpr_31 = (0x08B15D3Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15D3Cu) goto L_08B15D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B15D3C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B15DF8;
      }
      goto L_08B15D44;
    }
L_08B15D44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08B15D70;
    }
    goto L_08B15D50;
L_08B15D50:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B15D60u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 365u, 0x08B15D60u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15D60u) goto L_08B15D60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15D60:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08B15D70;
L_08B15D70:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B15DF8;
      }
      goto L_08B15DA0;
    }
L_08B15DA0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B15DF8;
      }
      goto L_08B15DBC;
    }
L_08B15DBC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08B15DE4;
      }
      goto L_08B15DC4;
    }
L_08B15DC4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B15DF8;
      }
      goto L_08B15DE0;
    }
L_08B15DE0:
    ctx.gpr[16] = (0u | 1u);
    goto L_08B15DE4;
L_08B15DE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_gpr_31 = (0x08B15DF0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08B156A8;
L_08B15DF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B15E04;
      }
      goto L_08B15DF8;
    }
L_08B15DF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B15CB8;
      }
      goto L_08B15E00;
    }
L_08B15E00:
    aot_gpr_2 = (0u | 0u);
    goto L_08B15E04;
L_08B15E04:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B15E34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B15E44u);
    aot_gpr_5 = (0u | 0u);
    goto L_08B15BDC;
L_08B15E44:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B15E50:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B15E78;
      }
      goto L_08B15E64;
    }
L_08B15E64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B15E80;
      }
      goto L_08B15E70;
    }
L_08B15E70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08B15EA0;
      }
      goto L_08B15E78;
    }
L_08B15E78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B15ECC;
      }
      goto L_08B15E80;
    }
L_08B15E80:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B15E90u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 383u, 0x08B15E90u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15E90u) goto L_08B15E90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15E90:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08B15EA0;
L_08B15EA0:
    aot_gpr_2 = (aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(176)));
    aot_gpr_4 = (0u | 65535u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08B15EB8;
      }
      goto L_08B15EB0;
    }
L_08B15EB0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B15ECC;
      }
      goto L_08B15EB8;
    }
L_08B15EB8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_gpr_31 = (0x08B15EC8u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 387u, 0x08B15EC8u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15EC8u) goto L_08B15EC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15EC8:
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    goto L_08B15ECC;
L_08B15ECC:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B15EDC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B15F04;
      }
      goto L_08B15EF0;
    }
L_08B15EF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B15F0C;
      }
      goto L_08B15EFC;
    }
L_08B15EFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08B15F2C;
      }
      goto L_08B15F04;
    }
L_08B15F04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B15F58;
      }
      goto L_08B15F0C;
    }
L_08B15F0C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B15F1Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 394u, 0x08B15F1Cu, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15F1Cu) goto L_08B15F1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15F1C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08B15F2C;
L_08B15F2C:
    aot_gpr_2 = (aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(176)));
    aot_gpr_4 = (0u | 65535u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08B15F44;
      }
      goto L_08B15F3C;
    }
L_08B15F3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B15F58;
      }
      goto L_08B15F44;
    }
L_08B15F44:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_gpr_31 = (0x08B15F54u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 398u, 0x08B15F54u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15F54u) goto L_08B15F54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15F54:
    aot_gpr_2 = (aot_gpr_2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08B15F58;
L_08B15F58:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B15F68:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_5 = (2225u << 16u);
    aot_gpr_31 = (0x08B15F7Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24144));
    goto L_08B15BDC;
L_08B15F7C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B15F88:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_5 = (2225u << 16u);
    aot_gpr_31 = (0x08B15F9Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24284));
    goto L_08B15BDC;
L_08B15F9C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B15FA8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B15FB8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 405u, 0x08B15FB8u, 0x08B10FA0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 239u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 239u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 239u, 0x08B10FA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15FB8u) goto L_08B15FB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15FB8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B15FC4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B15FE8u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 407u, 0x08B15FE8u, 0x08B10D5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 200u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 200u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15FE8u) goto L_08B15FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B15FE8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B16014;
      }
      goto L_08B15FF0;
    }
L_08B15FF0:
    aot_gpr_31 = (0x08B15FF8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B15FF8u) goto L_08B15FF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B15FF8:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08B16004u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 410u, 0x08B16004u, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16004u) goto L_08B16004;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16004:
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
        goto L_08B1601C;
    }
    goto L_08B1600C;
L_08B1600C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B16044;
      }
      goto L_08B16014;
    }
L_08B16014:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B16080;
      }
      goto L_08B1601C;
    }
L_08B1601C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B16044;
      }
      goto L_08B16024;
    }
L_08B16024:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
      if (branch_taken) {
          goto L_08B1605C;
      }
      goto L_08B16044;
    }
L_08B16044:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    goto L_08B1605C;
L_08B1605C:
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_fpr_14 = aot_fpr_14 / aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B1607Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0075.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 417u, 0x08B1607Cu, 0x08931AD0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0075_entry(rt, ctx, 313u, aot_mem);
#else
        recomp_unit_0075_entry(rt, ctx, 313u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 313u, 0x08931AD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1607Cu) goto L_08B1607C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1607C:
    aot_gpr_2 = (ctx.gpr[18] | 0u);
    goto L_08B16080;
L_08B16080:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B16098:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B160BCu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 420u, 0x08B160BCu, 0x08B10D5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 200u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 200u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B160BCu) goto L_08B160BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B160BC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B160E8;
      }
      goto L_08B160C4;
    }
L_08B160C4:
    aot_gpr_31 = (0x08B160CCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B160CCu) goto L_08B160CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B160CC:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08B160D8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 423u, 0x08B160D8u, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B160D8u) goto L_08B160D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B160D8:
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
        goto L_08B160F0;
    }
    goto L_08B160E0;
L_08B160E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B16110;
      }
      goto L_08B160E8;
    }
L_08B160E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B16148;
      }
      goto L_08B160F0;
    }
L_08B160F0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B16110;
      }
      goto L_08B160F8;
    }
L_08B160F8:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
      if (branch_taken) {
          goto L_08B16124;
      }
      goto L_08B16110;
    }
L_08B16110:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    goto L_08B16124;
L_08B16124:
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_fpr_14 = aot_fpr_14 / aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16144u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0075.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 430u, 0x08B16144u, 0x08931AD0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0075_entry(rt, ctx, 313u, aot_mem);
#else
        recomp_unit_0075_entry(rt, ctx, 313u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 313u, 0x08931AD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16144u) goto L_08B16144;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16144:
    aot_gpr_2 = (ctx.gpr[18] | 0u);
    goto L_08B16148;
L_08B16148:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B16160:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (2237u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B1619Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15604;
L_08B1619C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B161B4;
      }
      goto L_08B161A4;
    }
L_08B161A4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B161B0u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B161B0:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    goto L_08B161B4;
L_08B161B4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B161C4u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 437u, 0x08B161C4u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B161C4u) goto L_08B161C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B161C4:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08B161EC;
      }
      goto L_08B161D0;
    }
L_08B161D0:
    aot_gpr_31 = (0x08B161D8u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0008.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 439u, 0x08B161D8u, 0x088242B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0008_entry(rt, ctx, 30u, aot_mem);
#else
        recomp_unit_0008_entry(rt, ctx, 30u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0008_entry, 8u, 30u, 0x088242B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B161D8u) goto L_08B161D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B161D8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B161E4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B161E4u) goto L_08B161E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B161E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B161F0;
      }
      goto L_08B161EC;
    }
L_08B161EC:
    aot_gpr_2 = (0u | 0u);
    goto L_08B161F0;
L_08B161F0:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
L_08B1620C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_31 = (0x08B1623Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15604;
L_08B1623C:
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B16294;
      }
      goto L_08B16244;
    }
L_08B16244:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16250u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B16250:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16260u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806888, 0u, 324u, 0x08806888u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16260u) goto L_08B16260;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16260:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[19];
      if (branch_taken) {
          goto L_08B1628C;
      }
      goto L_08B16268;
    }
L_08B16268:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B16278u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 449u, 0x08B16278u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16278u) goto L_08B16278;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16278:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_08B1629C;
      }
      goto L_08B16284;
    }
L_08B16284:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B16320;
      }
      goto L_08B1628C;
    }
L_08B1628C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B16324;
      }
      goto L_08B16294;
    }
L_08B16294:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B16324;
      }
      goto L_08B1629C;
    }
L_08B1629C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B16320;
      }
      goto L_08B162AC;
    }
L_08B162AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B162C4;
    }
    goto L_08B162B8;
L_08B162B8:
    aot_gpr_31 = (0x08B162C0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B162C0u) goto L_08B162C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B162C0:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B162C4;
L_08B162C4:
    if (ctx.gpr[18] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B162D8;
    }
    goto L_08B162CC;
L_08B162CC:
    aot_gpr_31 = (0x08B162D4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B162D4u) goto L_08B162D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B162D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B162D8;
L_08B162D8:
    aot_gpr_31 = (0x08B162E0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0002.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 461u, 0x08B162E0u, 0x0880E450u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0002_entry(rt, ctx, 495u, aot_mem);
#else
        recomp_unit_0002_entry(rt, ctx, 495u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B162E0u) goto L_08B162E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B162E0:
    aot_gpr_4 = (aot_gpr_2 << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(656));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16300u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16300u) goto L_08B16300;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16300:
    aot_gpr_4 = (aot_gpr_2 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B16320;
L_08B16320:
    aot_gpr_2 = (0u | 0u);
    goto L_08B16324;
L_08B16324:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
L_08B16340:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08B1636Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15604;
L_08B1636C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B163A4;
      }
      goto L_08B16374;
    }
L_08B16374:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B16380u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B16380:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08B16390u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16390u) goto L_08B16390;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16390:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B163AC;
      }
      goto L_08B1639C;
    }
L_08B1639C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B163C0;
      }
      goto L_08B163A4;
    }
L_08B163A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B16414;
      }
      goto L_08B163AC;
    }
L_08B163AC:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B163B8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B163B8u) goto L_08B163B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B163B8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B163C0;
L_08B163C0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B163D0u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 475u, 0x08B163D0u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B163D0u) goto L_08B163D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B163D0:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08B16410;
      }
      goto L_08B163DC;
    }
L_08B163DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B16410;
      }
      goto L_08B163EC;
    }
L_08B163EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B16404;
    }
    goto L_08B163F8;
L_08B163F8:
    aot_gpr_31 = (0x08B16400u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16400u) goto L_08B16400;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16400:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B16404;
L_08B16404:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    aot_gpr_31 = (0x08B16410u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0002.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 481u, 0x08B16410u, 0x0880E240u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0002_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0002_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 466u, 0x0880E240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16410u) goto L_08B16410;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16410:
    aot_gpr_2 = (0u | 0u);
    goto L_08B16414;
L_08B16414:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
L_08B16430:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (2237u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B1646Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15604;
L_08B1646C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B16484;
      }
      goto L_08B16474;
    }
L_08B16474:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16480u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B16480:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    goto L_08B16484;
L_08B16484:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B16494u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 488u, 0x08B16494u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16494u) goto L_08B16494;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16494:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08B164BC;
      }
      goto L_08B164A0;
    }
L_08B164A0:
    aot_gpr_31 = (0x08B164A8u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0008.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 490u, 0x08B164A8u, 0x08824300u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0008_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0008_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0008_entry, 8u, 34u, 0x08824300u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B164A8u) goto L_08B164A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B164A8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B164B4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B164B4u) goto L_08B164B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B164B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B164C0;
      }
      goto L_08B164BC;
    }
L_08B164BC:
    aot_gpr_2 = (0u | 0u);
    goto L_08B164C0;
L_08B164C0:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
L_08B164DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B1651Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15604;
L_08B1651C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B16534;
      }
      goto L_08B16524;
    }
L_08B16524:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16530u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B16530:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    goto L_08B16534;
L_08B16534:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B16544u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 499u, 0x08B16544u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16544u) goto L_08B16544;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16544:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08B1660C;
      }
      goto L_08B16550;
    }
L_08B16550:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (0u | 65535u);
      if (branch_taken) {
          goto L_08B1657C;
      }
      goto L_08B1655C;
    }
L_08B1655C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B1656Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 502u, 0x08B1656Cu, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1656Cu) goto L_08B1656C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1656C:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08B1657C;
L_08B1657C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B16590;
      }
      goto L_08B16588;
    }
L_08B16588:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B165A0;
      }
      goto L_08B16590;
    }
L_08B16590:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_gpr_31 = (0x08B1659Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 506u, 0x08B1659Cu, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1659Cu) goto L_08B1659C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1659C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_08B165A0;
L_08B165A0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B1660C;
      }
      goto L_08B165A8;
    }
L_08B165A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
        goto L_08B165D8;
    }
    goto L_08B165B4;
L_08B165B4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(17));
    aot_gpr_31 = (0x08B165C4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 510u, 0x08B165C4u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B165C4u) goto L_08B165C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B165C4:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(17)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    goto L_08B165D8;
L_08B165D8:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B165E8;
      }
      goto L_08B165E0;
    }
L_08B165E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B165F8;
      }
      goto L_08B165E8;
    }
L_08B165E8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_gpr_31 = (0x08B165F4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 514u, 0x08B165F4u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B165F4u) goto L_08B165F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B165F4:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    goto L_08B165F8;
L_08B165F8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16604u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 516u, 0x08B16604u, 0x08B10EBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 225u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 225u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 225u, 0x08B10EBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16604u) goto L_08B16604;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16604:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B16610;
      }
      goto L_08B1660C;
    }
L_08B1660C:
    aot_gpr_2 = (0u | 0u);
    goto L_08B16610;
L_08B16610:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
L_08B16630:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_31 = (0x08B16650u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15604;
L_08B16650:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08B16690;
      }
      goto L_08B16658;
    }
L_08B16658:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16664u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880692C, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16664u) goto L_08B16664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16664:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B16698;
      }
      goto L_08B1666C;
    }
L_08B1666C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16678u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16678u) goto L_08B16678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16678:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B16688u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B156A8;
L_08B16688:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B166B0;
      }
      goto L_08B16690;
    }
L_08B16690:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B166B4;
      }
      goto L_08B16698;
    }
L_08B16698:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (0x08B166B0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B156A8;
L_08B166B0:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    goto L_08B166B4;
L_08B166B4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B166C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B166F4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 531u, 0x08B166F4u, 0x08807220u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 462u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 462u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B166F4u) goto L_08B166F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B166F4:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_08B16700;
L_08B16700:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_08B16734;
    }
    goto L_08B16734;
L_08B16734:
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B16780;
      }
      goto L_08B16740;
    }
L_08B16740:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B1674Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 535u, 0x08B1674Cu, 0x08ADC0F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 12u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 12u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1674Cu) goto L_08B1674C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1674C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B16774;
      }
      goto L_08B16754;
    }
L_08B16754:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16760u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08B156A8;
L_08B16760:
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16774u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 538u, 0x08B16774u, 0x0880748Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 489u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 489u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16774u) goto L_08B16774;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16774:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08B16700;
      }
      goto L_08B16780;
    }
L_08B16780:
    aot_gpr_2 = (0u | 1u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
L_08B167A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B167CCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 541u, 0x08B167CCu, 0x08807220u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 462u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 462u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B167CCu) goto L_08B167CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B167CC:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_08B167D8;
L_08B167D8:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    ctx.gpr[7] = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_08B16808;
    }
    goto L_08B16808;
L_08B16808:
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B16860;
      }
      goto L_08B16814;
    }
L_08B16814:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
      if (branch_taken) {
          goto L_08B16854;
      }
      goto L_08B16820;
    }
L_08B16820:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B1682Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 546u, 0x08B1682Cu, 0x08ADC0F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 12u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 12u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1682Cu) goto L_08B1682C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1682C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B16854;
      }
      goto L_08B16834;
    }
L_08B16834:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16840u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08B156A8;
L_08B16840:
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16854u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 549u, 0x08B16854u, 0x0880748Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 489u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 489u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16854u) goto L_08B16854;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16854:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08B167D8;
      }
      goto L_08B16860;
    }
L_08B16860:
    aot_gpr_2 = (0u | 1u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
L_08B16880:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[7]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[21] = (0u | 1u);
    aot_gpr_31 = (0x08B168B0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880692C, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B168B0u) goto L_08B168B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B168B0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08B168C0;
      }
      goto L_08B168B8;
    }
L_08B168B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B16984;
      }
      goto L_08B168C0;
    }
L_08B168C0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B168CCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B168CCu) goto L_08B168CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B168CC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B168DCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 556u, 0x08B168DCu, 0x08807220u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 462u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 462u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B168DCu) goto L_08B168DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B168DC:
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_08B168F0;
L_08B168F0:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_08B16924;
    }
    goto L_08B16924;
L_08B16924:
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B16980;
      }
      goto L_08B16930;
    }
L_08B16930:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B1693Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 560u, 0x08B1693Cu, 0x08ADC0F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 12u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 12u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1693Cu) goto L_08B1693C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1693C:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B16974;
      }
      goto L_08B16944;
    }
L_08B16944:
    aot_gpr_31 = (0x08B1694Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 562u, 0x08B1694Cu, 0x08ADC560u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1694Cu) goto L_08B1694C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1694C:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[20];
      if (branch_taken) {
          goto L_08B16974;
      }
      goto L_08B16954;
    }
L_08B16954:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16960u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08B156A8;
L_08B16960:
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16974u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 565u, 0x08B16974u, 0x0880748Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 489u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 489u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16974u) goto L_08B16974;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16974:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08B168F0;
      }
      goto L_08B16980;
    }
L_08B16980:
    aot_gpr_2 = (ctx.gpr[21] | 0u);
    goto L_08B16984;
L_08B16984:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
L_08B169A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_31 = (0x08B169D0u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 569u, 0x08B169D0u, 0x08806984u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 344u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 344u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 344u, 0x08806984u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B169D0u) goto L_08B169D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B169D0:
    ctx.gpr[18] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08B16A00;
      }
      goto L_08B169DC;
    }
L_08B169DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B169F0u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15604;
L_08B169F0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08B16A20;
      }
      goto L_08B169F8;
    }
L_08B169F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B16A30;
      }
      goto L_08B16A00;
    }
L_08B16A00:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16A0Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 574u, 0x08B16A0Cu, 0x08806B2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 375u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 375u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16A0Cu) goto L_08B16A0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16A0C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B16A18u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 575u, 0x08B16A18u, 0x08ADC18Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 24u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 24u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 24u, 0x08ADC18Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16A18u) goto L_08B16A18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16A18:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B16A74;
      }
      goto L_08B16A20;
    }
L_08B16A20:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16A2Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B16A2C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    goto L_08B16A30;
L_08B16A30:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B16A3Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 579u, 0x08B16A3Cu, 0x08ADC150u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 20u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 20u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 20u, 0x08ADC150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16A3Cu) goto L_08B16A3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16A3C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B16A64;
      }
      goto L_08B16A44;
    }
L_08B16A44:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B16A50u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 581u, 0x08B16A50u, 0x08ADC204u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 32u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 32u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 32u, 0x08ADC204u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16A50u) goto L_08B16A50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16A50:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16A5Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 582u, 0x08B16A5Cu, 0x08806E68u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 430u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 430u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16A5Cu) goto L_08B16A5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16A5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B16A70;
      }
      goto L_08B16A64;
    }
L_08B16A64:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(3132));
    aot_gpr_31 = (0x08B16A70u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 584u, 0x08B16A70u, 0x08806E68u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 430u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 430u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16A70u) goto L_08B16A70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16A70:
    aot_gpr_2 = (ctx.gpr[19] | 0u);
    goto L_08B16A74;
L_08B16A74:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
L_08B16A90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16AC8u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15604;
L_08B16AC8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B16AE0;
      }
      goto L_08B16AD0;
    }
L_08B16AD0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16ADCu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B16ADC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    goto L_08B16AE0;
L_08B16AE0:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[18]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08B16AF0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16AF0u) goto L_08B16AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16AF0:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B16B0C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (2237u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16B48u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15604;
L_08B16B48:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B16B60;
      }
      goto L_08B16B50;
    }
L_08B16B50:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16B5Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B16B5C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    goto L_08B16B60;
L_08B16B60:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B16B6Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 597u, 0x08B16B6Cu, 0x08ADC4C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 91u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 91u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 91u, 0x08ADC4C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16B6Cu) goto L_08B16B6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16B6C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16B78u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 598u, 0x08B16B78u, 0x08806E68u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 430u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 430u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16B78u) goto L_08B16B78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16B78:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
L_08B16B98:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (2237u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16BD4u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15604;
L_08B16BD4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B16BEC;
      }
      goto L_08B16BDC;
    }
L_08B16BDC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16BE8u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B16BE8:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    goto L_08B16BEC;
L_08B16BEC:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B16BF8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 604u, 0x08B16BF8u, 0x08ADC560u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16BF8u) goto L_08B16BF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16BF8:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08B16C08u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16C08u) goto L_08B16C08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16C08:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
L_08B16C28:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (2237u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16C64u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15604;
L_08B16C64:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B16C7C;
      }
      goto L_08B16C6C;
    }
L_08B16C6C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16C78u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B16C78:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    goto L_08B16C7C;
L_08B16C7C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B16C88u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 611u, 0x08B16C88u, 0x08ADC560u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 101u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 101u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16C88u) goto L_08B16C88;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16C88:
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
      if (branch_taken) {
          goto L_08B16CC8;
      }
      goto L_08B16C90;
    }
L_08B16C90:
    if (ctx.gpr[19] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
        goto L_08B16CA8;
    }
    goto L_08B16C98;
L_08B16C98:
    aot_gpr_31 = (0x08B16CA0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16CA0u) goto L_08B16CA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16CA0:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    goto L_08B16CA8;
L_08B16CA8:
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08B16CC0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16CC0u) goto L_08B16CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16CC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B16CF8;
      }
      goto L_08B16CC8;
    }
L_08B16CC8:
    if (ctx.gpr[19] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
        goto L_08B16CE0;
    }
    goto L_08B16CD0;
L_08B16CD0:
    aot_gpr_31 = (0x08B16CD8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16CD8u) goto L_08B16CD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16CD8:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    goto L_08B16CE0;
L_08B16CE0:
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08B16CF8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16CF8u) goto L_08B16CF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16CF8:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
L_08B16D18:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B16D3Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15650;
L_08B16D3C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08B16D58;
    }
    goto L_08B16D4C;
L_08B16D4C:
    aot_gpr_31 = (0x08B16D54u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16D54u) goto L_08B16D54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16D54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08B16D58;
L_08B16D58:
    aot_gpr_31 = (0x08B16D60u);
    aot_gpr_5 = (ctx.gpr[17] & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0147.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 627u, 0x08B16D60u, 0x08A53098u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0147_entry(rt, ctx, 561u, aot_mem);
#else
        recomp_unit_0147_entry(rt, ctx, 561u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 561u, 0x08A53098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16D60u) goto L_08B16D60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16D60:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 == 0u) {
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
        goto L_08B16D80;
    }
    goto L_08B16D78;
L_08B16D78:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B16D9C;
      }
      goto L_08B16D80;
    }
L_08B16D80:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08B16D98;
      }
      goto L_08B16D8C;
    }
L_08B16D8C:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    goto L_08B16D98;
L_08B16D98:
    aot_fpr_13 = aot_fpr_13 / aot_fpr_12;
    goto L_08B16D9C;
L_08B16D9C:
    aot_gpr_4 = (17530u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(aot_fpr_12));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08B16DC4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16DC4u) goto L_08B16DC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16DC4:
    aot_gpr_2 = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B16DE0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_31 = (0x08B16E00u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15650;
L_08B16E00:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08B16E10u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 636u, 0x08B16E10u, 0x08ADC150u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 20u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 20u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 20u, 0x08ADC150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16E10u) goto L_08B16E10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16E10:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16E1Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16E1Cu) goto L_08B16E1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16E1C:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B16E34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), ctx.gpr[16], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B16E58u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 639u, 0x08B16E58u, 0x0889D610u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 294u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 294u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16E58u) goto L_08B16E58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16E58:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16E68u);
    aot_gpr_5 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 640u, 0x08B16E68u, 0x0889D610u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 294u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 294u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16E68u) goto L_08B16E68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16E68:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (49864u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08B16E7Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16E7Cu) goto L_08B16E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16E7C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B16E98;
      }
      goto L_08B16E88;
    }
L_08B16E88:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16E94u);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 643u, 0x08B16E94u, 0x0889D610u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 294u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 294u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16E94u) goto L_08B16E94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16E94:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B16E98;
L_08B16E98:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08B16EB4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 645u, 0x08B16EB4u, 0x08ADDF58u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 516u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 516u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 516u, 0x08ADDF58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16EB4u) goto L_08B16EB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16EB4:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.gpr[16] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B16ED4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08B16EECu);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(304)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16EECu) goto L_08B16EEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16EEC:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B16EFC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B16F18u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16F18u) goto L_08B16F18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16F18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 59u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B16F34;
      }
      goto L_08B16F28;
    }
L_08B16F28:
    aot_gpr_5 = (0u | 61u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B16F48;
      }
      goto L_08B16F34;
    }
L_08B16F34:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16F40u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16F40u) goto L_08B16F40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16F40:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B16F54;
      }
      goto L_08B16F48;
    }
L_08B16F48:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16F54u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16F54u) goto L_08B16F54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16F54:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B16F6C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16F9Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 656u, 0x08B16F9Cu, 0x0889D610u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 294u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 294u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16F9Cu) goto L_08B16F9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16F9C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B16FACu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 657u, 0x08B16FACu, 0x08ADC120u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 16u, 0x08ADC120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16FACu) goto L_08B16FAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16FAC:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08B16FB8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16FB8u) goto L_08B16FB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B16FB8:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B16FC8u);
    aot_gpr_5 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 659u, 0x08B16FC8u, 0x08B10D5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 200u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 200u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B16FC8u) goto L_08B16FC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B16FC8:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B17054;
      }
      goto L_08B16FD4;
    }
L_08B16FD4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08B17030;
      }
      goto L_08B16FDC;
    }
L_08B16FDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B17030;
      }
      goto L_08B16FE8;
    }
L_08B16FE8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B17030;
      }
      goto L_08B17010;
    }
L_08B17010:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 59u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B17030;
      }
      goto L_08B17020;
    }
L_08B17020:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 61u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B17068;
      }
      goto L_08B17030;
    }
L_08B17030:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08B17040u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 666u, 0x08B17040u, 0x08ADCEA0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 264u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 264u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 264u, 0x08ADCEA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17040u) goto L_08B17040;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17040:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B1704Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1704Cu) goto L_08B1704C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B1704C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B17138;
      }
      goto L_08B17054;
    }
L_08B17054:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B17060u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17060u) goto L_08B17060;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17060:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B17138;
      }
      goto L_08B17068;
    }
L_08B17068:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B17074u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0081.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 671u, 0x08B17074u, 0x08948114u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0081_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0081_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17074u) goto L_08B17074;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17074:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(2116), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    aot_gpr_31 = (0x08B17090u);
    aot_gpr_5 = (0u | 18u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0178.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 672u, 0x08B17090u, 0x08ACD698u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0178_entry(rt, ctx, 482u, aot_mem);
#else
        recomp_unit_0178_entry(rt, ctx, 482u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17090u) goto L_08B17090;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17090:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    aot_gpr_31 = (0x08B1709Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0073.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 673u, 0x08B1709Cu, 0x0892BA54u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0073_entry(rt, ctx, 878u, aot_mem);
#else
        recomp_unit_0073_entry(rt, ctx, 878u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0073_entry, 73u, 878u, 0x0892BA54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1709Cu) goto L_08B1709C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1709C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(2116), 0u);
    aot_gpr_31 = (0x08B170ACu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 674u, 0x08B170ACu, 0x08AC7F64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 1089u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 1089u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B170ACu) goto L_08B170AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B170AC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B170B8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B170B8u) goto L_08B170B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B170B8:
    aot_gpr_31 = (0x08B170C0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 676u, 0x08B170C0u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B170C0u) goto L_08B170C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B170C0:
    aot_gpr_31 = (0x08B170C8u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 677u, 0x08B170C8u, 0x08809958u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 321u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 321u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 321u, 0x08809958u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B170C8u) goto L_08B170C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B170C8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08B170E4;
      }
      goto L_08B170D0;
    }
L_08B170D0:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B170DCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 679u, 0x08B170DCu, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B170DCu) goto L_08B170DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B170DC:
    aot_gpr_31 = (0x08B170E4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 680u, 0x08B170E4u, 0x08AD3578u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 587u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 587u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 587u, 0x08AD3578u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B170E4u) goto L_08B170E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B170E4:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08B17100u);
    ctx.gpr[7] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 681u, 0x08B17100u, 0x08A1CF7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 156u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 156u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17100u) goto L_08B17100;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17100:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B17110u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 682u, 0x08B17110u, 0x08A1C044u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17110u) goto L_08B17110;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17110:
    aot_gpr_31 = (0x08B17118u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 683u, 0x08B17118u, 0x08A1C8D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 91u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 91u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 91u, 0x08A1C8D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17118u) goto L_08B17118;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17118:
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_31 = (0x08B17130u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 684u, 0x08B17130u, 0x08A1C044u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17130u) goto L_08B17130;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17130:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B17138;
      }
      goto L_08B17138;
    }
L_08B17138:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17154:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08B17184;
      }
      goto L_08B17178;
    }
L_08B17178:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08B17184;
L_08B17184:
    aot_gpr_31 = (0x08B1718Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1718Cu) goto L_08B1718C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B1718C:
    aot_gpr_2 = (0u | 1u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B1719C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B171ACu);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 691u, 0x08B171ACu, 0x08946EA8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 571u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 571u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 571u, 0x08946EA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B171ACu) goto L_08B171AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B171AC:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B171BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3))))));
    aot_gpr_5 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 1u);
      if (branch_taken) {
          goto L_08B17204;
      }
      goto L_08B171D8;
    }
L_08B171D8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B171F0;
      }
      goto L_08B171E0;
    }
L_08B171E0:
    aot_gpr_31 = (0x08B171E8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B171E8u) goto L_08B171E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B171E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_2 + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B1723C;
      }
      goto L_08B171F0;
    }
L_08B171F0:
    aot_gpr_31 = (0x08B171F8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B171F8u) goto L_08B171F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B171F8:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_2 + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B1723C;
      }
      goto L_08B17204;
    }
L_08B17204:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B17228;
      }
      goto L_08B1720C;
    }
L_08B1720C:
    aot_gpr_31 = (0x08B17214u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17214u) goto L_08B17214;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17214:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_2 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B1723C;
      }
      goto L_08B17228;
    }
L_08B17228:
    aot_gpr_31 = (0x08B17230u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17230u) goto L_08B17230;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17230:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(154)));
    aot_gpr_4 = (aot_gpr_4 | 32u);
    aot_mem.aot_direct_store16(aot_gpr_2 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08B1723C;
L_08B1723C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17248:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B17268u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 705u, 0x08B17268u, 0x0889D610u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 294u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 294u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17268u) goto L_08B17268;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17268:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B1727Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1727Cu) goto L_08B1727C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B1727C:
    aot_gpr_4 = (0u < aot_gpr_2 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u | 4u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10548)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(19))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(19))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B172D8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 707u, 0x08B172D8u, 0x08ADC0B8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 8u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 8u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 8u, 0x08ADC0B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B172D8u) goto L_08B172D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B172D8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B172F8;
      }
      goto L_08B172E0;
    }
L_08B172E0:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08B172F8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B171BC;
L_08B172F8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B17308u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 710u, 0x08B17308u, 0x08ADCA34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 189u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 189u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17308u) goto L_08B17308;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17308:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17324:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B17344u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 712u, 0x08B17344u, 0x0889D610u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 294u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 294u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17344u) goto L_08B17344;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17344:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B17358u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17358u) goto L_08B17358;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17358:
    aot_gpr_4 = (0u < aot_gpr_2 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u | 4u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10548)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(19))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(19))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B173B4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 714u, 0x08B173B4u, 0x08ADC0B8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 8u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 8u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 8u, 0x08ADC0B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B173B4u) goto L_08B173B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B173B4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B173D4;
      }
      goto L_08B173BC;
    }
L_08B173BC:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08B173D4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B171BC;
L_08B173D4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B173E4u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 717u, 0x08B173E4u, 0x08ADCA34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 189u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 189u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B173E4u) goto L_08B173E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B173E4:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17400:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B17410u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17410u) goto L_08B17410;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17410:
    aot_gpr_4 = (0u < aot_gpr_2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B17438;
      }
      goto L_08B1741C;
    }
L_08B1741C:
    aot_gpr_31 = (0x08B17424u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17424u) goto L_08B17424;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17424:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_2 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B1744C;
      }
      goto L_08B17438;
    }
L_08B17438:
    aot_gpr_31 = (0x08B17440u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17440u) goto L_08B17440;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17440:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(154)));
    aot_gpr_4 = (aot_gpr_4 | 32u);
    aot_mem.aot_direct_store16(aot_gpr_2 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08B1744C;
L_08B1744C:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B1745C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B1746Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1746Cu) goto L_08B1746C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B1746C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_5 << 8u);
    ctx.gpr[7] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (2238u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6992));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(328), aot_gpr_4);
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B174AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_6);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B174E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B174E4u) goto L_08B174E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B174E4:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[19] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[19]));
    ctx.gpr[19] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[19]));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(7));
    ctx.gpr[18] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[18]));
    ctx.gpr[18] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[18]));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(11));
    ctx.gpr[17] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[17]));
    ctx.gpr[17] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[17]));
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[17]);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08B1752Cu);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 729u, 0x08B1752Cu, 0x08893460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 519u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 519u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1752Cu) goto L_08B1752C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1752C:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[0] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B17544u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 730u, 0x08B17544u, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17544u) goto L_08B17544;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17544:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B17578;
      }
      goto L_08B1754C;
    }
L_08B1754C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B17578;
      }
      goto L_08B17558;
    }
L_08B17558:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_08B175A0;
      }
      goto L_08B17578;
    }
L_08B17578:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(112));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08B175A0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B175A0u) goto L_08B175A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B175A0:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B175C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B175E0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B175E0u) goto L_08B175E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B175E0:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08B175ECu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 737u, 0x08B175ECu, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B175ECu) goto L_08B175EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B175EC:
    ctx.gpr[1] = (aot_mem.aot_direct_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[1]));
    ctx.gpr[1] = (aot_mem.aot_direct_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(6), ctx.gpr[1]));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[1]);
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (17204u << 16u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B17634;
      }
      goto L_08B17614;
    }
L_08B17614:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B17634;
      }
      goto L_08B17620;
    }
L_08B17620:
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_31 = (0x08B1762Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 740u, 0x08B1762Cu, 0x08AAF8ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 785u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 785u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1762Cu) goto L_08B1762C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1762C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B1765C;
      }
      goto L_08B17634;
    }
L_08B17634:
    aot_fpr_13 = aot_fpr_13 / aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[1] = (aot_mem.aot_direct_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[1]));
    ctx.gpr[1] = (aot_mem.aot_direct_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(6), ctx.gpr[1]));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[1]);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_31 = (0x08B1765Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 742u, 0x08B1765Cu, 0x08AAF8ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 785u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 785u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1765Cu) goto L_08B1765C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1765C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17670:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B17690u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B17690:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 2u);
    aot_gpr_31 = (0x08B176ACu);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0075.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 745u, 0x08B176ACu, 0x08931AF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0075_entry(rt, ctx, 315u, aot_mem);
#else
        recomp_unit_0075_entry(rt, ctx, 315u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B176ACu) goto L_08B176AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B176AC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B176B8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08B15504;
L_08B176B8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(18))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(66), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(68), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(22))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(24))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(26))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(74), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (0u | 15u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10549)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(51));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(66))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(67))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(68))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(69))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(70))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(71))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(72))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(73))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(74))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(75))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(76))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(77))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08B17788;
      }
      goto L_08B17778;
    }
L_08B17778:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_08B177A0;
      }
      goto L_08B17788;
    }
L_08B17788:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(64))))));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08B177A0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B174AC;
L_08B177A0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B177B0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 750u, 0x08B177B0u, 0x08ADCA34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 189u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 189u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B177B0u) goto L_08B177B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B177B0:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B177CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B177ECu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B177EC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B177FCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B177FCu) goto L_08B177FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B177FC:
    aot_gpr_4 = (0u | 7u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10550)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[1] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), ctx.gpr[1]);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), ctx.gpr[1]);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08B1783C;
      }
      goto L_08B1782C;
    }
L_08B1782C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_08B17854;
      }
      goto L_08B1783C;
    }
L_08B1783C:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(24))))));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08B17854u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B175C0;
L_08B17854:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B17864u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 757u, 0x08B17864u, 0x08ADCA34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 189u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 189u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17864u) goto L_08B17864;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17864:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17880:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_31 = (0x08B178A0u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B178A0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (2237u << 16u);
      if (branch_taken) {
          goto L_08B178C4;
      }
      goto L_08B178B0;
    }
L_08B178B0:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B178E0;
      }
      goto L_08B178C4;
    }
L_08B178C4:
    aot_gpr_31 = (0x08B178CCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B178CCu) goto L_08B178CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B178CC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(34))))));
    aot_gpr_31 = (0x08B178D8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B178D8u) goto L_08B178D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B178D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B178E4;
      }
      goto L_08B178E0;
    }
L_08B178E0:
    aot_gpr_2 = (0u | 0u);
    goto L_08B178E4;
L_08B178E4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B178F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_31 = (0x08B1791Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B1791C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (2237u << 16u);
      if (branch_taken) {
          goto L_08B17940;
      }
      goto L_08B1792C;
    }
L_08B1792C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B1798C;
      }
      goto L_08B17940;
    }
L_08B17940:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08B1794Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1794Cu) goto L_08B1794C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B1794C:
    aot_gpr_31 = (0x08B17954u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 771u, 0x08B17954u, 0x0898BC8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 980u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 980u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 980u, 0x0898BC8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17954u) goto L_08B17954;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17954:
    if (aot_gpr_2 != 0u) {
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
        goto L_08B17978;
    }
    goto L_08B1795C;
L_08B1795C:
    aot_gpr_31 = (0x08B17964u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17964u) goto L_08B17964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17964:
    aot_gpr_31 = (0x08B1796Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 774u, 0x08B1796Cu, 0x0898C420u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 100u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 100u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B1796Cu) goto L_08B1796C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B1796C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B1797C;
      }
      goto L_08B17974;
    }
L_08B17974:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08B17978;
L_08B17978:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B1797C;
L_08B1797C:
    aot_gpr_31 = (0x08B17984u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17984u) goto L_08B17984;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17984:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B17990;
      }
      goto L_08B1798C;
    }
L_08B1798C:
    aot_gpr_2 = (0u | 0u);
    goto L_08B17990;
L_08B17990:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B179A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_31 = (0x08B179CCu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B179CC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (2237u << 16u);
      if (branch_taken) {
          goto L_08B179F0;
      }
      goto L_08B179DC;
    }
L_08B179DC:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B17A3C;
      }
      goto L_08B179F0;
    }
L_08B179F0:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08B179FCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B179FCu) goto L_08B179FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B179FC:
    aot_gpr_31 = (0x08B17A04u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 786u, 0x08B17A04u, 0x0898BCACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 984u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 984u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 984u, 0x0898BCACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17A04u) goto L_08B17A04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17A04:
    if (aot_gpr_2 != 0u) {
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
        goto L_08B17A28;
    }
    goto L_08B17A0C;
L_08B17A0C:
    aot_gpr_31 = (0x08B17A14u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17A14u) goto L_08B17A14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17A14:
    aot_gpr_31 = (0x08B17A1Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 789u, 0x08B17A1Cu, 0x0898C420u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 100u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 100u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17A1Cu) goto L_08B17A1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17A1C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) <= 0;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B17A2C;
      }
      goto L_08B17A24;
    }
L_08B17A24:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08B17A28;
L_08B17A28:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B17A2C;
L_08B17A2C:
    aot_gpr_31 = (0x08B17A34u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17A34u) goto L_08B17A34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17A34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B17A40;
      }
      goto L_08B17A3C;
    }
L_08B17A3C:
    aot_gpr_2 = (0u | 0u);
    goto L_08B17A40;
L_08B17A40:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17A58:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_31 = (0x08B17A7Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B17A7C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (2237u << 16u);
      if (branch_taken) {
          goto L_08B17AA0;
      }
      goto L_08B17A8C;
    }
L_08B17A8C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B17AEC;
      }
      goto L_08B17AA0;
    }
L_08B17AA0:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08B17AACu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17AACu) goto L_08B17AAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17AAC:
    aot_gpr_31 = (0x08B17AB4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 801u, 0x08B17AB4u, 0x0898BC4Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 972u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 972u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 972u, 0x0898BC4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17AB4u) goto L_08B17AB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17AB4:
    if (aot_gpr_2 != 0u) {
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
        goto L_08B17AD8;
    }
    goto L_08B17ABC;
L_08B17ABC:
    aot_gpr_31 = (0x08B17AC4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17AC4u) goto L_08B17AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17AC4:
    aot_gpr_31 = (0x08B17ACCu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 804u, 0x08B17ACCu, 0x0898C604u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 134u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 134u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17ACCu) goto L_08B17ACC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17ACC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B17ADC;
      }
      goto L_08B17AD4;
    }
L_08B17AD4:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08B17AD8;
L_08B17AD8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B17ADC;
L_08B17ADC:
    aot_gpr_31 = (0x08B17AE4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17AE4u) goto L_08B17AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17AE4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B17AF0;
      }
      goto L_08B17AEC;
    }
L_08B17AEC:
    aot_gpr_2 = (0u | 0u);
    goto L_08B17AF0;
L_08B17AF0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17B08:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_31 = (0x08B17B2Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B17B2C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (2237u << 16u);
      if (branch_taken) {
          goto L_08B17B50;
      }
      goto L_08B17B3C;
    }
L_08B17B3C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B17B9C;
      }
      goto L_08B17B50;
    }
L_08B17B50:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08B17B5Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17B5Cu) goto L_08B17B5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17B5C:
    aot_gpr_31 = (0x08B17B64u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 816u, 0x08B17B64u, 0x0898BC6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 976u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 976u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 976u, 0x0898BC6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17B64u) goto L_08B17B64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17B64:
    if (aot_gpr_2 != 0u) {
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
        goto L_08B17B88;
    }
    goto L_08B17B6C;
L_08B17B6C:
    aot_gpr_31 = (0x08B17B74u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17B74u) goto L_08B17B74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17B74:
    aot_gpr_31 = (0x08B17B7Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 819u, 0x08B17B7Cu, 0x0898C604u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 134u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 134u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17B7Cu) goto L_08B17B7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17B7C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) <= 0;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B17B8C;
      }
      goto L_08B17B84;
    }
L_08B17B84:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08B17B88;
L_08B17B88:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B17B8C;
L_08B17B8C:
    aot_gpr_31 = (0x08B17B94u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17B94u) goto L_08B17B94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17B94:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B17BA0;
      }
      goto L_08B17B9C;
    }
L_08B17B9C:
    aot_gpr_2 = (0u | 0u);
    goto L_08B17BA0;
L_08B17BA0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17BB8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_31 = (0x08B17BD8u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B17BD8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (2237u << 16u);
      if (branch_taken) {
          goto L_08B17BFC;
      }
      goto L_08B17BE8;
    }
L_08B17BE8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B17C18;
      }
      goto L_08B17BFC;
    }
L_08B17BFC:
    aot_gpr_31 = (0x08B17C04u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17C04u) goto L_08B17C04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17C04:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(42))))));
    aot_gpr_31 = (0x08B17C10u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17C10u) goto L_08B17C10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17C10:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B17C1C;
      }
      goto L_08B17C18;
    }
L_08B17C18:
    aot_gpr_2 = (0u | 0u);
    goto L_08B17C1C;
L_08B17C1C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17C30:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_31 = (0x08B17C50u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B17C50:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (2237u << 16u);
      if (branch_taken) {
          goto L_08B17C74;
      }
      goto L_08B17C60;
    }
L_08B17C60:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B17C90;
      }
      goto L_08B17C74;
    }
L_08B17C74:
    aot_gpr_31 = (0x08B17C7Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17C7Cu) goto L_08B17C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17C7C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(44))))));
    aot_gpr_31 = (0x08B17C88u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17C88u) goto L_08B17C88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17C88:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B17C94;
      }
      goto L_08B17C90;
    }
L_08B17C90:
    aot_gpr_2 = (0u | 0u);
    goto L_08B17C94;
L_08B17C94:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17CA8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_31 = (0x08B17CC8u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B17CC8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (2237u << 16u);
      if (branch_taken) {
          goto L_08B17CEC;
      }
      goto L_08B17CD8;
    }
L_08B17CD8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B17D08;
      }
      goto L_08B17CEC;
    }
L_08B17CEC:
    aot_gpr_31 = (0x08B17CF4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17CF4u) goto L_08B17CF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17CF4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(40))))));
    aot_gpr_31 = (0x08B17D00u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17D00u) goto L_08B17D00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17D00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B17D0C;
      }
      goto L_08B17D08;
    }
L_08B17D08:
    aot_gpr_2 = (0u | 0u);
    goto L_08B17D0C;
L_08B17D0C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17D20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_31 = (0x08B17D40u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B17D40:
    aot_gpr_31 = (0x08B17D48u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17D48u) goto L_08B17D48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17D48:
    aot_gpr_31 = (0x08B17D50u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 853u, 0x08B17D50u, 0x089476E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 710u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 710u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 710u, 0x089476E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17D50u) goto L_08B17D50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17D50:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B17D5Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17D5Cu) goto L_08B17D5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17D5C:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17D74:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B17D84u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B17D84:
    aot_gpr_31 = (0x08B17D8Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17D8Cu) goto L_08B17D8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17D8C:
    aot_gpr_31 = (0x08B17D94u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 858u, 0x08B17D94u, 0x08947890u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 736u, 0x08947890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17D94u) goto L_08B17D94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17D94:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17DA4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B17DB4u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B17DB4:
    aot_gpr_31 = (0x08B17DBCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17DBCu) goto L_08B17DBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17DBC:
    aot_gpr_31 = (0x08B17DC4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 862u, 0x08B17DC4u, 0x08947870u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 733u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 733u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 733u, 0x08947870u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17DC4u) goto L_08B17DC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17DC4:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17DD4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_31 = (0x08B17DF0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17DF0u) goto L_08B17DF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17DF0:
    aot_gpr_4 = (0u < aot_gpr_2 ? 1u : 0u);
    ctx.gpr[17] = (aot_gpr_4 & 255u);
    aot_gpr_31 = (0x08B17E00u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17E00u) goto L_08B17E00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17E00:
    aot_mem.aot_direct_store16(aot_gpr_2 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17E1C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B17E38u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15604;
L_08B17E38:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B17EB4;
      }
      goto L_08B17E40;
    }
L_08B17E40:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B17E4Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B17E4C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08B17E60u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 870u, 0x08B17E60u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17E60u) goto L_08B17E60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17E60:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B17EB4;
      }
      goto L_08B17E6C;
    }
L_08B17E6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08B17E98;
    }
    goto L_08B17E78;
L_08B17E78:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B17E88u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 873u, 0x08B17E88u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17E88u) goto L_08B17E88;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17E88:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08B17E98;
L_08B17E98:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(178)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08B17EACu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17EACu) goto L_08B17EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17EAC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B17EC4;
      }
      goto L_08B17EB4;
    }
L_08B17EB4:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08B17EC0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17EC0u) goto L_08B17EC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17EC0:
    aot_gpr_2 = (0u | 1u);
    goto L_08B17EC4;
L_08B17EC4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17ED8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), ctx.gpr[16], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B17EF4u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15604;
L_08B17EF4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B17F20;
      }
      goto L_08B17EFC;
    }
L_08B17EFC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B17F08u);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B17F08:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B17F14u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17F14u) goto L_08B17F14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17F14:
    aot_gpr_31 = (0x08B17F1Cu);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17F1Cu) goto L_08B17F1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17F1C:
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08B17F20;
L_08B17F20:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B17F38:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B17F5Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08B15624;
L_08B17F5C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08B17F80;
      }
      goto L_08B17F6C;
    }
L_08B17F6C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_5;
      if (branch_taken) {
          goto L_08B17FBC;
      }
      goto L_08B17F80;
    }
L_08B17F80:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 << 8u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(208)));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x08B17FB4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17FB4u) goto L_08B17FB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B17FB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 4u, 0x08B1801Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B17FBC;
    }
L_08B17FBC:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B17FC8u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 892u, 0x08B17FC8u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17FC8u) goto L_08B17FC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17FC8:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 3u, 0x08B18018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B17FD4;
    }
L_08B17FD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 1u, 0x08B18000u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B17FE0;
L_08B17FE0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B17FF0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0196->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0196_entry, 895u, 0x08B17FF0u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B17FF0u) goto L_08B17FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B17FF0:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.pc = 0x08B18000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0196(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0196_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_196(Runtime &runtime) {
    runtime.register_generated_unit(196u, 0x08B14000u, 16384u, &recomp_unit_0196, &recomp_unit_0196_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08B14000u, &recomp_unit_0196, "recomp_unit_0196",
                                          kEntryMasks_recomp_unit_0196, 64u);
}
} // namespace psprecomp
