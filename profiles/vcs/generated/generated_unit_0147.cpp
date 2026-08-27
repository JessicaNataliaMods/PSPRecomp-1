#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0147[64] = {
    0x4140800A0A828A21ull, 0x414014A028000000ull, 0x010500240AA21101ull, 0x280952A008202014ull,
    0x00A00952A40952A0ull, 0x009012554244000Aull, 0x0040400000000000ull, 0x0101000000000080ull,
    0x4000104104105108ull, 0x0001400008102808ull, 0x0100010442000000ull, 0x1000000018000000ull,
    0x4040810204480200ull, 0x0040020109000008ull, 0x0204220800000001ull, 0x4000000000040001ull,
    0x1108440542200040ull, 0x2051000020009000ull, 0x0000220002200008ull, 0x08881000008A2000ull,
    0x0202202000100010ull, 0x1284000082410108ull, 0x8400008244501152ull, 0x2100800080009052ull,
    0x2820428004442041ull, 0x84928A04A0810A81ull, 0x831000020022A440ull, 0x0800001000002000ull,
    0x0002002210002040ull, 0x0042081108008101ull, 0xA8A5100292900010ull, 0x94661456A900010Aull,
    0x924800AA2A412492ull, 0x924A14215458A904ull, 0x40800414040020A4ull, 0x211014A8A9000400ull,
    0x092494CCAAD52000ull, 0x8A904924800A5152ull, 0x1100492494421545ull, 0x2910004400001292ull,
    0x1020102210020000ull, 0xAC8B4A010AA85202ull, 0x122269005AA48100ull, 0xA921020001015204ull,
    0x002040880121590Aull, 0x5220024AB1249140ull, 0x011120A621429488ull, 0x4093126524888004ull,
    0xAA8A00480B0A0800ull, 0x20810400209522C6ull, 0x2000110902810489ull, 0x0011102088021001ull,
    0x4020900314512000ull, 0x204A4A90A4102801ull, 0x1140450412402044ull, 0x0004202144111040ull,
    0xA5A556A8A2108000ull, 0x14B49695A4100925ull, 0x081400120406AA51ull, 0x04022284040A0008ull,
    0x2282080840004440ull, 0x006208010088A912ull, 0x0A2882028C710800ull, 0x955542A95C240850ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0147[64] = {
    1u, 16u, 25u, 38u, 52u, 69u, 83u, 85u, 88u, 98u, 105u, 110u, 113u, 122u, 128u, 134u,
    137u, 148u, 155u, 160u, 168u, 174u, 184u, 197u, 206u, 218u, 235u, 246u, 249u, 255u, 264u, 279u,
    299u, 318u, 339u, 349u, 362u, 383u, 402u, 420u, 431u, 438u, 459u, 476u, 489u, 502u, 520u, 537u,
    554u, 569u, 584u, 596u, 605u, 617u, 633u, 646u, 656u, 676u, 699u, 714u, 724u, 734u, 747u, 762u,
};
void recomp_unit_0147_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,29,6,2 fprs=12,13,14,20 gpr_occ=4025 fpr_occ=541 gpr_total=5825 fpr_total=716
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
        const std::uint32_t entry_delta = local_pc - 0x08A50000u;
        entry_id = 0u;
        if (entry_delta < 16384u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0147[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0147[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08A50000;
    case 2u: goto L_08A50014;
    case 3u: goto L_08A50024;
    case 4u: goto L_08A5002C;
    case 5u: goto L_08A5003C;
    case 6u: goto L_08A50044;
    case 7u: goto L_08A5005C;
    case 8u: goto L_08A50064;
    case 9u: goto L_08A5006C;
    case 10u: goto L_08A50084;
    case 11u: goto L_08A5008C;
    case 12u: goto L_08A500BC;
    case 13u: goto L_08A500D8;
    case 14u: goto L_08A500E0;
    case 15u: goto L_08A500F8;
    case 16u: goto L_08A5016C;
    case 17u: goto L_08A50174;
    case 18u: goto L_08A50194;
    case 19u: goto L_08A5019C;
    case 20u: goto L_08A501A8;
    case 21u: goto L_08A501B0;
    case 22u: goto L_08A501D8;
    case 23u: goto L_08A501E0;
    case 24u: goto L_08A501F8;
    case 25u: goto L_08A50200;
    case 26u: goto L_08A50220;
    case 27u: goto L_08A50230;
    case 28u: goto L_08A50244;
    case 29u: goto L_08A50254;
    case 30u: goto L_08A5025C;
    case 31u: goto L_08A50264;
    case 32u: goto L_08A5026C;
    case 33u: goto L_08A50288;
    case 34u: goto L_08A50294;
    case 35u: goto L_08A502C0;
    case 36u: goto L_08A502C8;
    case 37u: goto L_08A502E0;
    case 38u: goto L_08A50308;
    case 39u: goto L_08A50310;
    case 40u: goto L_08A50334;
    case 41u: goto L_08A50354;
    case 42u: goto L_08A5036C;
    case 43u: goto L_08A50394;
    case 44u: goto L_08A5039C;
    case 45u: goto L_08A503A4;
    case 46u: goto L_08A503B0;
    case 47u: goto L_08A503B8;
    case 48u: goto L_08A503C0;
    case 49u: goto L_08A503CC;
    case 50u: goto L_08A503EC;
    case 51u: goto L_08A503F4;
    case 52u: goto L_08A50414;
    case 53u: goto L_08A5041C;
    case 54u: goto L_08A50424;
    case 55u: goto L_08A50430;
    case 56u: goto L_08A50438;
    case 57u: goto L_08A50440;
    case 58u: goto L_08A5044C;
    case 59u: goto L_08A50468;
    case 60u: goto L_08A50474;
    case 61u: goto L_08A5047C;
    case 62u: goto L_08A50484;
    case 63u: goto L_08A50490;
    case 64u: goto L_08A50498;
    case 65u: goto L_08A504A0;
    case 66u: goto L_08A504AC;
    case 67u: goto L_08A504D4;
    case 68u: goto L_08A504DC;
    case 69u: goto L_08A50504;
    case 70u: goto L_08A5050C;
    case 71u: goto L_08A50548;
    case 72u: goto L_08A50558;
    case 73u: goto L_08A50564;
    case 74u: goto L_08A50578;
    case 75u: goto L_08A50580;
    case 76u: goto L_08A50588;
    case 77u: goto L_08A50590;
    case 78u: goto L_08A50598;
    case 79u: goto L_08A505A4;
    case 80u: goto L_08A505B0;
    case 81u: goto L_08A505D0;
    case 82u: goto L_08A505DC;
    case 83u: goto L_08A506B8;
    case 84u: goto L_08A506D8;
    case 85u: goto L_08A5071C;
    case 86u: goto L_08A507C0;
    case 87u: goto L_08A507E0;
    case 88u: goto L_08A5080C;
    case 89u: goto L_08A50820;
    case 90u: goto L_08A50830;
    case 91u: goto L_08A50838;
    case 92u: goto L_08A50850;
    case 93u: goto L_08A50868;
    case 94u: goto L_08A50880;
    case 95u: goto L_08A50898;
    case 96u: goto L_08A508B0;
    case 97u: goto L_08A508F8;
    case 98u: goto L_08A5090C;
    case 99u: goto L_08A5092C;
    case 100u: goto L_08A50934;
    case 101u: goto L_08A50950;
    case 102u: goto L_08A5096C;
    case 103u: goto L_08A509B8;
    case 104u: goto L_08A509C0;
    case 105u: goto L_08A50A64;
    case 106u: goto L_08A50A78;
    case 107u: goto L_08A50A88;
    case 108u: goto L_08A50AA0;
    case 109u: goto L_08A50AE0;
    case 110u: goto L_08A50B6C;
    case 111u: goto L_08A50B70;
    case 112u: goto L_08A50BF0;
    case 113u: goto L_08A50C24;
    case 114u: goto L_08A50C4C;
    case 115u: goto L_08A50C58;
    case 116u: goto L_08A50C68;
    case 117u: goto L_08A50C84;
    case 118u: goto L_08A50CA0;
    case 119u: goto L_08A50CBC;
    case 120u: goto L_08A50CD8;
    case 121u: goto L_08A50CF8;
    case 122u: goto L_08A50D0C;
    case 123u: goto L_08A50D60;
    case 124u: goto L_08A50D6C;
    case 125u: goto L_08A50D80;
    case 126u: goto L_08A50DA4;
    case 127u: goto L_08A50DD8;
    case 128u: goto L_08A50E00;
    case 129u: goto L_08A50E8C;
    case 130u: goto L_08A50EA4;
    case 131u: goto L_08A50EB4;
    case 132u: goto L_08A50EC8;
    case 133u: goto L_08A50EE4;
    case 134u: goto L_08A50F00;
    case 135u: goto L_08A50F48;
    case 136u: goto L_08A50FF8;
    case 137u: goto L_08A51018;
    case 138u: goto L_08A51054;
    case 139u: goto L_08A51064;
    case 140u: goto L_08A51078;
    case 141u: goto L_08A51080;
    case 142u: goto L_08A51088;
    case 143u: goto L_08A510A8;
    case 144u: goto L_08A510B8;
    case 145u: goto L_08A510CC;
    case 146u: goto L_08A510E0;
    case 147u: goto L_08A510F0;
    case 148u: goto L_08A51130;
    case 149u: goto L_08A5113C;
    case 150u: goto L_08A51174;
    case 151u: goto L_08A511C0;
    case 152u: goto L_08A511D0;
    case 153u: goto L_08A511D8;
    case 154u: goto L_08A511F4;
    case 155u: goto L_08A5120C;
    case 156u: goto L_08A51254;
    case 157u: goto L_08A51264;
    case 158u: goto L_08A512A4;
    case 159u: goto L_08A512B4;
    case 160u: goto L_08A51334;
    case 161u: goto L_08A51344;
    case 162u: goto L_08A5134C;
    case 163u: goto L_08A5135C;
    case 164u: goto L_08A513B0;
    case 165u: goto L_08A513CC;
    case 166u: goto L_08A513DC;
    case 167u: goto L_08A513EC;
    case 168u: goto L_08A51410;
    case 169u: goto L_08A51450;
    case 170u: goto L_08A51494;
    case 171u: goto L_08A514B4;
    case 172u: goto L_08A514C4;
    case 173u: goto L_08A514E4;
    case 174u: goto L_08A5150C;
    case 175u: goto L_08A51520;
    case 176u: goto L_08A51540;
    case 177u: goto L_08A51558;
    case 178u: goto L_08A51564;
    case 179u: goto L_08A5157C;
    case 180u: goto L_08A515C8;
    case 181u: goto L_08A515DC;
    case 182u: goto L_08A515E4;
    case 183u: goto L_08A515F0;
    case 184u: goto L_08A51604;
    case 185u: goto L_08A51610;
    case 186u: goto L_08A51618;
    case 187u: goto L_08A51620;
    case 188u: goto L_08A51630;
    case 189u: goto L_08A51650;
    case 190u: goto L_08A51658;
    case 191u: goto L_08A51668;
    case 192u: goto L_08A51678;
    case 193u: goto L_08A51684;
    case 194u: goto L_08A5169C;
    case 195u: goto L_08A516E8;
    case 196u: goto L_08A516FC;
    case 197u: goto L_08A51704;
    case 198u: goto L_08A51710;
    case 199u: goto L_08A51718;
    case 200u: goto L_08A51730;
    case 201u: goto L_08A5173C;
    case 202u: goto L_08A5177C;
    case 203u: goto L_08A517BC;
    case 204u: goto L_08A517E0;
    case 205u: goto L_08A517F4;
    case 206u: goto L_08A51800;
    case 207u: goto L_08A51818;
    case 208u: goto L_08A51834;
    case 209u: goto L_08A51848;
    case 210u: goto L_08A51858;
    case 211u: goto L_08A51868;
    case 212u: goto L_08A5189C;
    case 213u: goto L_08A518A4;
    case 214u: goto L_08A518B8;
    case 215u: goto L_08A518D4;
    case 216u: goto L_08A518EC;
    case 217u: goto L_08A518F4;
    case 218u: goto L_08A51900;
    case 219u: goto L_08A5191C;
    case 220u: goto L_08A51924;
    case 221u: goto L_08A5192C;
    case 222u: goto L_08A51940;
    case 223u: goto L_08A5195C;
    case 224u: goto L_08A51974;
    case 225u: goto L_08A5197C;
    case 226u: goto L_08A51988;
    case 227u: goto L_08A519A4;
    case 228u: goto L_08A519AC;
    case 229u: goto L_08A519BC;
    case 230u: goto L_08A519C4;
    case 231u: goto L_08A519D0;
    case 232u: goto L_08A519DC;
    case 233u: goto L_08A519E8;
    case 234u: goto L_08A519FC;
    case 235u: goto L_08A51A18;
    case 236u: goto L_08A51A28;
    case 237u: goto L_08A51A34;
    case 238u: goto L_08A51A3C;
    case 239u: goto L_08A51A44;
    case 240u: goto L_08A51A54;
    case 241u: goto L_08A51A84;
    case 242u: goto L_08A51AD0;
    case 243u: goto L_08A51AE0;
    case 244u: goto L_08A51AE4;
    case 245u: goto L_08A51AFC;
    case 246u: goto L_08A51B34;
    case 247u: goto L_08A51B90;
    case 248u: goto L_08A51BEC;
    case 249u: goto L_08A51C18;
    case 250u: goto L_08A51C34;
    case 251u: goto L_08A51C70;
    case 252u: goto L_08A51C84;
    case 253u: goto L_08A51C94;
    case 254u: goto L_08A51CC4;
    case 255u: goto L_08A51D00;
    case 256u: goto L_08A51D20;
    case 257u: goto L_08A51D3C;
    case 258u: goto L_08A51D6C;
    case 259u: goto L_08A51D80;
    case 260u: goto L_08A51D90;
    case 261u: goto L_08A51DAC;
    case 262u: goto L_08A51DC4;
    case 263u: goto L_08A51DD8;
    case 264u: goto L_08A51E10;
    case 265u: goto L_08A51E50;
    case 266u: goto L_08A51E5C;
    case 267u: goto L_08A51E64;
    case 268u: goto L_08A51E70;
    case 269u: goto L_08A51E7C;
    case 270u: goto L_08A51E84;
    case 271u: goto L_08A51EB0;
    case 272u: goto L_08A51EC0;
    case 273u: goto L_08A51EC8;
    case 274u: goto L_08A51ED4;
    case 275u: goto L_08A51EDC;
    case 276u: goto L_08A51EEC;
    case 277u: goto L_08A51EF4;
    case 278u: goto L_08A51EFC;
    case 279u: goto L_08A51F04;
    case 280u: goto L_08A51F0C;
    case 281u: goto L_08A51F20;
    case 282u: goto L_08A51F60;
    case 283u: goto L_08A51F6C;
    case 284u: goto L_08A51F74;
    case 285u: goto L_08A51F7C;
    case 286u: goto L_08A51F84;
    case 287u: goto L_08A51F88;
    case 288u: goto L_08A51F90;
    case 289u: goto L_08A51F98;
    case 290u: goto L_08A51FA8;
    case 291u: goto L_08A51FB0;
    case 292u: goto L_08A51FC4;
    case 293u: goto L_08A51FC8;
    case 294u: goto L_08A51FD4;
    case 295u: goto L_08A51FD8;
    case 296u: goto L_08A51FE8;
    case 297u: goto L_08A51FF0;
    case 298u: goto L_08A51FFC;
    case 299u: goto L_08A52004;
    case 300u: goto L_08A52010;
    case 301u: goto L_08A5201C;
    case 302u: goto L_08A52028;
    case 303u: goto L_08A52034;
    case 304u: goto L_08A52040;
    case 305u: goto L_08A52058;
    case 306u: goto L_08A52064;
    case 307u: goto L_08A5206C;
    case 308u: goto L_08A52074;
    case 309u: goto L_08A52084;
    case 310u: goto L_08A5208C;
    case 311u: goto L_08A52094;
    case 312u: goto L_08A5209C;
    case 313u: goto L_08A520CC;
    case 314u: goto L_08A520D8;
    case 315u: goto L_08A520E4;
    case 316u: goto L_08A520F0;
    case 317u: goto L_08A520FC;
    case 318u: goto L_08A52108;
    case 319u: goto L_08A52120;
    case 320u: goto L_08A5212C;
    case 321u: goto L_08A52134;
    case 322u: goto L_08A5213C;
    case 323u: goto L_08A5214C;
    case 324u: goto L_08A52150;
    case 325u: goto L_08A52158;
    case 326u: goto L_08A52168;
    case 327u: goto L_08A52170;
    case 328u: goto L_08A52178;
    case 329u: goto L_08A52180;
    case 330u: goto L_08A52194;
    case 331u: goto L_08A521A8;
    case 332u: goto L_08A521B0;
    case 333u: goto L_08A521C4;
    case 334u: goto L_08A521CC;
    case 335u: goto L_08A521D8;
    case 336u: goto L_08A521E4;
    case 337u: goto L_08A521F0;
    case 338u: goto L_08A521FC;
    case 339u: goto L_08A52208;
    case 340u: goto L_08A52214;
    case 341u: goto L_08A5221C;
    case 342u: goto L_08A52234;
    case 343u: goto L_08A52268;
    case 344u: goto L_08A52288;
    case 345u: goto L_08A52290;
    case 346u: goto L_08A522A8;
    case 347u: goto L_08A522DC;
    case 348u: goto L_08A522F8;
    case 349u: goto L_08A52328;
    case 350u: goto L_08A52360;
    case 351u: goto L_08A5236C;
    case 352u: goto L_08A52374;
    case 353u: goto L_08A5237C;
    case 354u: goto L_08A5238C;
    case 355u: goto L_08A52394;
    case 356u: goto L_08A5239C;
    case 357u: goto L_08A523A8;
    case 358u: goto L_08A523B0;
    case 359u: goto L_08A523D0;
    case 360u: goto L_08A523E0;
    case 361u: goto L_08A523F4;
    case 362u: goto L_08A52434;
    case 363u: goto L_08A52440;
    case 364u: goto L_08A52448;
    case 365u: goto L_08A52450;
    case 366u: goto L_08A52458;
    case 367u: goto L_08A5245C;
    case 368u: goto L_08A52464;
    case 369u: goto L_08A5246C;
    case 370u: goto L_08A52474;
    case 371u: goto L_08A5247C;
    case 372u: goto L_08A52488;
    case 373u: goto L_08A5248C;
    case 374u: goto L_08A52498;
    case 375u: goto L_08A5249C;
    case 376u: goto L_08A524A8;
    case 377u: goto L_08A524B0;
    case 378u: goto L_08A524BC;
    case 379u: goto L_08A524C8;
    case 380u: goto L_08A524D4;
    case 381u: goto L_08A524E0;
    case 382u: goto L_08A524EC;
    case 383u: goto L_08A52504;
    case 384u: goto L_08A52510;
    case 385u: goto L_08A52518;
    case 386u: goto L_08A52520;
    case 387u: goto L_08A52530;
    case 388u: goto L_08A52538;
    case 389u: goto L_08A52544;
    case 390u: goto L_08A5254C;
    case 391u: goto L_08A5257C;
    case 392u: goto L_08A52588;
    case 393u: goto L_08A52594;
    case 394u: goto L_08A525A0;
    case 395u: goto L_08A525AC;
    case 396u: goto L_08A525B8;
    case 397u: goto L_08A525D0;
    case 398u: goto L_08A525DC;
    case 399u: goto L_08A525E4;
    case 400u: goto L_08A525EC;
    case 401u: goto L_08A525FC;
    case 402u: goto L_08A52600;
    case 403u: goto L_08A52608;
    case 404u: goto L_08A52618;
    case 405u: goto L_08A52620;
    case 406u: goto L_08A52628;
    case 407u: goto L_08A52630;
    case 408u: goto L_08A52644;
    case 409u: goto L_08A52658;
    case 410u: goto L_08A52668;
    case 411u: goto L_08A52670;
    case 412u: goto L_08A5267C;
    case 413u: goto L_08A52688;
    case 414u: goto L_08A52694;
    case 415u: goto L_08A526A0;
    case 416u: goto L_08A526AC;
    case 417u: goto L_08A526B8;
    case 418u: goto L_08A526E0;
    case 419u: goto L_08A526F0;
    case 420u: goto L_08A52704;
    case 421u: goto L_08A52710;
    case 422u: goto L_08A5271C;
    case 423u: goto L_08A52724;
    case 424u: goto L_08A52730;
    case 425u: goto L_08A52788;
    case 426u: goto L_08A52798;
    case 427u: goto L_08A527D0;
    case 428u: goto L_08A527E0;
    case 429u: goto L_08A527EC;
    case 430u: goto L_08A527F4;
    case 431u: goto L_08A52844;
    case 432u: goto L_08A52870;
    case 433u: goto L_08A52884;
    case 434u: goto L_08A52894;
    case 435u: goto L_08A528B0;
    case 436u: goto L_08A528D4;
    case 437u: goto L_08A528F0;
    case 438u: goto L_08A52904;
    case 439u: goto L_08A52924;
    case 440u: goto L_08A52930;
    case 441u: goto L_08A52938;
    case 442u: goto L_08A5294C;
    case 443u: goto L_08A52954;
    case 444u: goto L_08A5295C;
    case 445u: goto L_08A52964;
    case 446u: goto L_08A5296C;
    case 447u: goto L_08A52980;
    case 448u: goto L_08A529A4;
    case 449u: goto L_08A529AC;
    case 450u: goto L_08A529B8;
    case 451u: goto L_08A529C0;
    case 452u: goto L_08A529C4;
    case 453u: goto L_08A529CC;
    case 454u: goto L_08A529DC;
    case 455u: goto L_08A529E8;
    case 456u: goto L_08A529EC;
    case 457u: goto L_08A529F4;
    case 458u: goto L_08A529FC;
    case 459u: goto L_08A52A20;
    case 460u: goto L_08A52A3C;
    case 461u: goto L_08A52A48;
    case 462u: goto L_08A52A54;
    case 463u: goto L_08A52A5C;
    case 464u: goto L_08A52A64;
    case 465u: goto L_08A52A6C;
    case 466u: goto L_08A52A70;
    case 467u: goto L_08A52A78;
    case 468u: goto L_08A52AA0;
    case 469u: goto L_08A52AAC;
    case 470u: goto L_08A52AB4;
    case 471u: goto L_08A52AB8;
    case 472u: goto L_08A52AC4;
    case 473u: goto L_08A52AD4;
    case 474u: goto L_08A52AE4;
    case 475u: goto L_08A52AF0;
    case 476u: goto L_08A52B08;
    case 477u: goto L_08A52B24;
    case 478u: goto L_08A52B30;
    case 479u: goto L_08A52B38;
    case 480u: goto L_08A52B40;
    case 481u: goto L_08A52B60;
    case 482u: goto L_08A52BA4;
    case 483u: goto L_08A52BC0;
    case 484u: goto L_08A52BD4;
    case 485u: goto L_08A52BE0;
    case 486u: goto L_08A52BEC;
    case 487u: goto L_08A52BF4;
    case 488u: goto L_08A52BFC;
    case 489u: goto L_08A52C04;
    case 490u: goto L_08A52C0C;
    case 491u: goto L_08A52C20;
    case 492u: goto L_08A52C2C;
    case 493u: goto L_08A52C30;
    case 494u: goto L_08A52C38;
    case 495u: goto L_08A52C40;
    case 496u: goto L_08A52C54;
    case 497u: goto L_08A52C60;
    case 498u: goto L_08A52C8C;
    case 499u: goto L_08A52C9C;
    case 500u: goto L_08A52CB8;
    case 501u: goto L_08A52CD4;
    case 502u: goto L_08A52D18;
    case 503u: goto L_08A52D20;
    case 504u: goto L_08A52D30;
    case 505u: goto L_08A52D3C;
    case 506u: goto L_08A52D48;
    case 507u: goto L_08A52D54;
    case 508u: goto L_08A52D60;
    case 509u: goto L_08A52D70;
    case 510u: goto L_08A52D74;
    case 511u: goto L_08A52D7C;
    case 512u: goto L_08A52D84;
    case 513u: goto L_08A52D8C;
    case 514u: goto L_08A52D98;
    case 515u: goto L_08A52DA4;
    case 516u: goto L_08A52DD4;
    case 517u: goto L_08A52DE4;
    case 518u: goto L_08A52DF0;
    case 519u: goto L_08A52DF8;
    case 520u: goto L_08A52E0C;
    case 521u: goto L_08A52E1C;
    case 522u: goto L_08A52E28;
    case 523u: goto L_08A52E30;
    case 524u: goto L_08A52E3C;
    case 525u: goto L_08A52E44;
    case 526u: goto L_08A52E58;
    case 527u: goto L_08A52E60;
    case 528u: goto L_08A52E74;
    case 529u: goto L_08A52E84;
    case 530u: goto L_08A52E88;
    case 531u: goto L_08A52E94;
    case 532u: goto L_08A52E9C;
    case 533u: goto L_08A52EB4;
    case 534u: goto L_08A52EC0;
    case 535u: goto L_08A52ED0;
    case 536u: goto L_08A52EE0;
    case 537u: goto L_08A52F08;
    case 538u: goto L_08A52F3C;
    case 539u: goto L_08A52F4C;
    case 540u: goto L_08A52F5C;
    case 541u: goto L_08A52F68;
    case 542u: goto L_08A52F74;
    case 543u: goto L_08A52F80;
    case 544u: goto L_08A52F88;
    case 545u: goto L_08A52F94;
    case 546u: goto L_08A52F98;
    case 547u: goto L_08A52FA4;
    case 548u: goto L_08A52FB0;
    case 549u: goto L_08A52FC0;
    case 550u: goto L_08A52FC4;
    case 551u: goto L_08A52FD0;
    case 552u: goto L_08A52FDC;
    case 553u: goto L_08A52FF8;
    case 554u: goto L_08A5302C;
    case 555u: goto L_08A53044;
    case 556u: goto L_08A5304C;
    case 557u: goto L_08A53060;
    case 558u: goto L_08A53064;
    case 559u: goto L_08A5306C;
    case 560u: goto L_08A5308C;
    case 561u: goto L_08A53098;
    case 562u: goto L_08A530C4;
    case 563u: goto L_08A530CC;
    case 564u: goto L_08A530DC;
    case 565u: goto L_08A530E4;
    case 566u: goto L_08A530EC;
    case 567u: goto L_08A530F4;
    case 568u: goto L_08A530FC;
    case 569u: goto L_08A53104;
    case 570u: goto L_08A53108;
    case 571u: goto L_08A53118;
    case 572u: goto L_08A5311C;
    case 573u: goto L_08A53124;
    case 574u: goto L_08A53134;
    case 575u: goto L_08A53140;
    case 576u: goto L_08A53148;
    case 577u: goto L_08A53150;
    case 578u: goto L_08A5315C;
    case 579u: goto L_08A53174;
    case 580u: goto L_08A531A8;
    case 581u: goto L_08A531C0;
    case 582u: goto L_08A531DC;
    case 583u: goto L_08A531F4;
    case 584u: goto L_08A53200;
    case 585u: goto L_08A5320C;
    case 586u: goto L_08A5321C;
    case 587u: goto L_08A53228;
    case 588u: goto L_08A53240;
    case 589u: goto L_08A5325C;
    case 590u: goto L_08A53264;
    case 591u: goto L_08A53280;
    case 592u: goto L_08A5328C;
    case 593u: goto L_08A532A0;
    case 594u: goto L_08A532B0;
    case 595u: goto L_08A532F4;
    case 596u: goto L_08A53300;
    case 597u: goto L_08A53330;
    case 598u: goto L_08A53344;
    case 599u: goto L_08A5336C;
    case 600u: goto L_08A5337C;
    case 601u: goto L_08A53394;
    case 602u: goto L_08A533B0;
    case 603u: goto L_08A533C0;
    case 604u: goto L_08A533D0;
    case 605u: goto L_08A53434;
    case 606u: goto L_08A53440;
    case 607u: goto L_08A53450;
    case 608u: goto L_08A53458;
    case 609u: goto L_08A53468;
    case 610u: goto L_08A53470;
    case 611u: goto L_08A53480;
    case 612u: goto L_08A53484;
    case 613u: goto L_08A534B0;
    case 614u: goto L_08A534BC;
    case 615u: goto L_08A534D4;
    case 616u: goto L_08A534F8;
    case 617u: goto L_08A53500;
    case 618u: goto L_08A5352C;
    case 619u: goto L_08A53534;
    case 620u: goto L_08A53550;
    case 621u: goto L_08A53568;
    case 622u: goto L_08A53574;
    case 623u: goto L_08A5357C;
    case 624u: goto L_08A53590;
    case 625u: goto L_08A5359C;
    case 626u: goto L_08A535A4;
    case 627u: goto L_08A535AC;
    case 628u: goto L_08A535B8;
    case 629u: goto L_08A535C4;
    case 630u: goto L_08A535CC;
    case 631u: goto L_08A535D8;
    case 632u: goto L_08A535F4;
    case 633u: goto L_08A53608;
    case 634u: goto L_08A53618;
    case 635u: goto L_08A53634;
    case 636u: goto L_08A53658;
    case 637u: goto L_08A53664;
    case 638u: goto L_08A53670;
    case 639u: goto L_08A53688;
    case 640u: goto L_08A536A0;
    case 641u: goto L_08A536A8;
    case 642u: goto L_08A536B8;
    case 643u: goto L_08A536D8;
    case 644u: goto L_08A536E0;
    case 645u: goto L_08A536F0;
    case 646u: goto L_08A53718;
    case 647u: goto L_08A53730;
    case 648u: goto L_08A53740;
    case 649u: goto L_08A53750;
    case 650u: goto L_08A53768;
    case 651u: goto L_08A53778;
    case 652u: goto L_08A53780;
    case 653u: goto L_08A53794;
    case 654u: goto L_08A537B4;
    case 655u: goto L_08A537C8;
    case 656u: goto L_08A5383C;
    case 657u: goto L_08A53850;
    case 658u: goto L_08A53864;
    case 659u: goto L_08A53874;
    case 660u: goto L_08A5387C;
    case 661u: goto L_08A5388C;
    case 662u: goto L_08A53894;
    case 663u: goto L_08A5389C;
    case 664u: goto L_08A538A4;
    case 665u: goto L_08A538A8;
    case 666u: goto L_08A538B0;
    case 667u: goto L_08A538B8;
    case 668u: goto L_08A538C0;
    case 669u: goto L_08A538C8;
    case 670u: goto L_08A538D4;
    case 671u: goto L_08A538DC;
    case 672u: goto L_08A538E0;
    case 673u: goto L_08A538E8;
    case 674u: goto L_08A538F4;
    case 675u: goto L_08A538FC;
    case 676u: goto L_08A53900;
    case 677u: goto L_08A53908;
    case 678u: goto L_08A53914;
    case 679u: goto L_08A53920;
    case 680u: goto L_08A5392C;
    case 681u: goto L_08A53950;
    case 682u: goto L_08A53968;
    case 683u: goto L_08A53974;
    case 684u: goto L_08A5397C;
    case 685u: goto L_08A53980;
    case 686u: goto L_08A53988;
    case 687u: goto L_08A53990;
    case 688u: goto L_08A5399C;
    case 689u: goto L_08A539A4;
    case 690u: goto L_08A539A8;
    case 691u: goto L_08A539B0;
    case 692u: goto L_08A539BC;
    case 693u: goto L_08A539C8;
    case 694u: goto L_08A539D0;
    case 695u: goto L_08A539D4;
    case 696u: goto L_08A539DC;
    case 697u: goto L_08A539E8;
    case 698u: goto L_08A539F0;
    case 699u: goto L_08A53A00;
    case 700u: goto L_08A53A10;
    case 701u: goto L_08A53A18;
    case 702u: goto L_08A53A24;
    case 703u: goto L_08A53A2C;
    case 704u: goto L_08A53A34;
    case 705u: goto L_08A53A3C;
    case 706u: goto L_08A53A44;
    case 707u: goto L_08A53A48;
    case 708u: goto L_08A53A68;
    case 709u: goto L_08A53A84;
    case 710u: goto L_08A53A90;
    case 711u: goto L_08A53AC8;
    case 712u: goto L_08A53AD0;
    case 713u: goto L_08A53AEC;
    case 714u: goto L_08A53B0C;
    case 715u: goto L_08A53B44;
    case 716u: goto L_08A53B4C;
    case 717u: goto L_08A53B68;
    case 718u: goto L_08A53B88;
    case 719u: goto L_08A53B9C;
    case 720u: goto L_08A53BA4;
    case 721u: goto L_08A53BB4;
    case 722u: goto L_08A53BC4;
    case 723u: goto L_08A53BE8;
    case 724u: goto L_08A53C18;
    case 725u: goto L_08A53C28;
    case 726u: goto L_08A53C38;
    case 727u: goto L_08A53C78;
    case 728u: goto L_08A53C8C;
    case 729u: goto L_08A53CAC;
    case 730u: goto L_08A53CC4;
    case 731u: goto L_08A53CDC;
    case 732u: goto L_08A53CE4;
    case 733u: goto L_08A53CF4;
    case 734u: goto L_08A53D04;
    case 735u: goto L_08A53D10;
    case 736u: goto L_08A53D20;
    case 737u: goto L_08A53D2C;
    case 738u: goto L_08A53D34;
    case 739u: goto L_08A53D3C;
    case 740u: goto L_08A53D4C;
    case 741u: goto L_08A53D5C;
    case 742u: goto L_08A53D80;
    case 743u: goto L_08A53DAC;
    case 744u: goto L_08A53DC4;
    case 745u: goto L_08A53DD4;
    case 746u: goto L_08A53DD8;
    case 747u: goto L_08A53E2C;
    case 748u: goto L_08A53E40;
    case 749u: goto L_08A53E50;
    case 750u: goto L_08A53E54;
    case 751u: goto L_08A53E58;
    case 752u: goto L_08A53E68;
    case 753u: goto L_08A53E6C;
    case 754u: goto L_08A53E7C;
    case 755u: goto L_08A53E84;
    case 756u: goto L_08A53EA4;
    case 757u: goto L_08A53EBC;
    case 758u: goto L_08A53ECC;
    case 759u: goto L_08A53ED4;
    case 760u: goto L_08A53EE4;
    case 761u: goto L_08A53EEC;
    case 762u: goto L_08A53F10;
    case 763u: goto L_08A53F18;
    case 764u: goto L_08A53F2C;
    case 765u: goto L_08A53F48;
    case 766u: goto L_08A53F54;
    case 767u: goto L_08A53F68;
    case 768u: goto L_08A53F6C;
    case 769u: goto L_08A53F70;
    case 770u: goto L_08A53F78;
    case 771u: goto L_08A53F80;
    case 772u: goto L_08A53F8C;
    case 773u: goto L_08A53F94;
    case 774u: goto L_08A53F9C;
    case 775u: goto L_08A53FA4;
    case 776u: goto L_08A53FB8;
    case 777u: goto L_08A53FC0;
    case 778u: goto L_08A53FC8;
    case 779u: goto L_08A53FD0;
    case 780u: goto L_08A53FD8;
    case 781u: goto L_08A53FE0;
    case 782u: goto L_08A53FE8;
    case 783u: goto L_08A53FF0;
    case 784u: goto L_08A53FFC;
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
L_08A50000:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08A50014u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50014u) goto L_08A50014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50014:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[22] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0146_entry, 146u, 584u, 0x08A4FF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A50024;
    }
L_08A50024:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08A5008C;
      }
      goto L_08A5002C;
    }
L_08A5002C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A50064;
      }
      goto L_08A5003C;
    }
L_08A5003C:
    aot_gpr_31 = (0x08A50044u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50044u) goto L_08A50044;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50044:
    aot_gpr_4 = (0u | 12u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5005Cu);
    ctx.gpr[8] = (0u | 10000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5005Cu) goto L_08A5005C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5005C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5016C;
      }
      goto L_08A50064;
    }
L_08A50064:
    aot_gpr_31 = (0x08A5006Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5006Cu) goto L_08A5006C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5006C:
    aot_gpr_4 = (0u | 11u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A50084u);
    ctx.gpr[8] = (0u | 10000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50084u) goto L_08A50084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50084:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5016C;
      }
      goto L_08A5008C;
    }
L_08A5008C:
    aot_gpr_4 = (0u | 24u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(680), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9642)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(682), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(683), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(684), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08A500BCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 456u, 0x08A427C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A500BCu) goto L_08A500BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A500BC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(686), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_4 = (ctx.gpr[23] & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A500E0;
      }
      goto L_08A500D8;
    }
L_08A500D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A500F8;
      }
      goto L_08A500E0;
    }
L_08A500E0:
    aot_gpr_4 = (0u | 255u);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[21] = (aot_gpr_4 | 0u);
        goto L_08A500F8;
    }
    goto L_08A500F8;
L_08A500F8:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(689), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(690), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(692));
    aot_mem.aot_direct_store_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(660)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store_word_left(aot_gpr_6 + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(664)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(143)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(687), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(688), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(691), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(680));
    aot_gpr_31 = (0x08A5016Cu);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5016Cu) goto L_08A5016C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5016C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A50334;
      }
      goto L_08A50174;
    }
L_08A50174:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A50200;
      }
      goto L_08A50194;
    }
L_08A50194:
    aot_gpr_31 = (0x08A5019Cu);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5019Cu) goto L_08A5019C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5019C:
    aot_gpr_5 = (ctx.gpr[23] & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08A501E0;
      }
      goto L_08A501A8;
    }
L_08A501A8:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    goto L_08A501B0;
L_08A501B0:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[21]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_13)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(624), aot_run_words); }
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(624));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A501D8u);
    aot_gpr_6 = (0u | 45u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0192_entry, 192u, 71u, 0x08B0452Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A501D8u) goto L_08A501D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A501D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A50334;
      }
      goto L_08A501E0;
    }
L_08A501E0:
    aot_gpr_5 = (0u | 255u);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[21] = (aot_gpr_5 | 0u);
        goto L_08A501F8;
    }
    goto L_08A501F8;
L_08A501F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A501B0;
      }
      goto L_08A50200;
    }
L_08A50200:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 14u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A50310;
      }
      goto L_08A50220;
    }
L_08A50220:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08A5025C;
      }
      goto L_08A50230;
    }
L_08A50230:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08A50244u);
    ctx.gpr[22] = (ctx.gpr[18] + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50244u) goto L_08A50244;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50244:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A50254u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50254u) goto L_08A50254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50254:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08A50264;
      }
      goto L_08A5025C;
    }
L_08A5025C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A50264;
      }
      goto L_08A50264;
    }
L_08A50264:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08A50308;
      }
      goto L_08A5026C;
    }
L_08A5026C:
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(704), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9645)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(706), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08A50288u);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50288u) goto L_08A50288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50288:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A50294u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 456u, 0x08A427C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50294u) goto L_08A50294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50294:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(707), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(708), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(709), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(710), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_4 = (ctx.gpr[23] & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A502C8;
      }
      goto L_08A502C0;
    }
L_08A502C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A502E0;
      }
      goto L_08A502C8;
    }
L_08A502C8:
    aot_gpr_4 = (0u | 255u);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[21] = (aot_gpr_4 | 0u);
        goto L_08A502E0;
    }
    goto L_08A502E0;
L_08A502E0:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(711), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(712), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_4 = (0u | 45u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(713), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(704));
    aot_gpr_31 = (0x08A50308u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50308u) goto L_08A50308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50308:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A50334;
      }
      goto L_08A50310;
    }
L_08A50310:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(720), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(724), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(728), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A50334u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(720));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0008_entry, 8u, 584u, 0x08827CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50334u) goto L_08A50334;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50334:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A50504;
      }
      goto L_08A50354;
    }
L_08A50354:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(7016)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A5036C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(736));
    aot_gpr_4 = (0u | 72u);
    aot_gpr_31 = (0x08A50394u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50394u) goto L_08A50394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50394:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A50504;
      }
      goto L_08A5039C;
    }
L_08A5039C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08A503CC;
      }
      goto L_08A503A4;
    }
L_08A503A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A503CC;
      }
      goto L_08A503B0;
    }
L_08A503B0:
    aot_gpr_31 = (0x08A503B8u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A503B8u) goto L_08A503B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A503B8:
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_2;
      if (branch_taken) {
          goto L_08A503CC;
      }
      goto L_08A503C0;
    }
L_08A503C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9328)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9328), aot_gpr_4);
    goto L_08A503CC;
L_08A503CC:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(96)));
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (0u | 62u);
    aot_gpr_31 = (0x08A503ECu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A503ECu) goto L_08A503EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A503EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A50504;
      }
      goto L_08A503F4;
    }
L_08A503F4:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(96)));
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (0u | 61u);
    aot_gpr_31 = (0x08A50414u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50414u) goto L_08A50414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50414:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A50504;
      }
      goto L_08A5041C;
    }
L_08A5041C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08A5044C;
      }
      goto L_08A50424;
    }
L_08A50424:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5044C;
      }
      goto L_08A50430;
    }
L_08A50430:
    aot_gpr_31 = (0x08A50438u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50438u) goto L_08A50438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50438:
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_2;
      if (branch_taken) {
          goto L_08A5044C;
      }
      goto L_08A50440;
    }
L_08A50440:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9328)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9328), aot_gpr_4);
    goto L_08A5044C;
L_08A5044C:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (0u | 61u);
    aot_gpr_31 = (0x08A50468u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50468u) goto L_08A50468;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50468:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_gpr_31 = (0x08A50474u);
    aot_gpr_5 = (0u | 106u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50474u) goto L_08A50474;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50474:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A50504;
      }
      goto L_08A5047C;
    }
L_08A5047C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08A504AC;
      }
      goto L_08A50484;
    }
L_08A50484:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A504AC;
      }
      goto L_08A50490;
    }
L_08A50490:
    aot_gpr_31 = (0x08A50498u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50498u) goto L_08A50498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50498:
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_2;
      if (branch_taken) {
          goto L_08A504AC;
      }
      goto L_08A504A0;
    }
L_08A504A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9328)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9328), aot_gpr_4);
    goto L_08A504AC;
L_08A504AC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(736));
    aot_gpr_4 = (0u | 73u);
    aot_gpr_31 = (0x08A504D4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A504D4u) goto L_08A504D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A504D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A50504;
      }
      goto L_08A504DC;
    }
L_08A504DC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(736));
    aot_gpr_4 = (0u | 74u);
    aot_gpr_31 = (0x08A50504u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50504u) goto L_08A50504;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50504:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A50564;
      }
      goto L_08A5050C;
    }
L_08A5050C:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(752));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(768));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(784));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_31 = (0x08A50548u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 571u, 0x08A3FBACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50548u) goto L_08A50548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50548:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A50558u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 569u, 0x08A3FB78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50558u) goto L_08A50558;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50558:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08A50564;
L_08A50564:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08A50578u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 324u, 0x088AA4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50578u) goto L_08A50578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50578:
    aot_gpr_31 = (0x08A50580u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50580u) goto L_08A50580;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50580:
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_2;
      if (branch_taken) {
          goto L_08A505D0;
      }
      goto L_08A50588;
    }
L_08A50588:
    aot_gpr_31 = (0x08A50590u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50590u) goto L_08A50590;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50590:
    aot_gpr_31 = (0x08A50598u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50598u) goto L_08A50598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50598:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08A505A4u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A505A4u) goto L_08A505A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A505A4:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08A505B0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A505B0u) goto L_08A505B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A505B0:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(48));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 240u);
    aot_gpr_6 = (0u | 128u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A505D0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 955u, 0x0898BB44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A505D0u) goto L_08A505D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A505D0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A506D8;
      }
      goto L_08A505DC;
    }
L_08A505DC:
    aot_gpr_4 = (0u | 41u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(800), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9643)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(802), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(800));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(803));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(815));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(827));
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    aot_gpr_2 = (ctx.gpr[10] + static_cast<std::uint32_t>(8));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[3]);
    aot_mem.aot_direct_store_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store_word_left(aot_gpr_6 + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store_word_left(ctx.gpr[8] + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(168)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(320)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store_word_left(ctx.gpr[10] + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(ctx.gpr[10] + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(324)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store_word_left(ctx.gpr[11] + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(ctx.gpr[11] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(328)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store_word_left(aot_gpr_2 + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(aot_gpr_2 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A506B8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 456u, 0x08A427C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A506B8u) goto L_08A506B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A506B8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(839), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(840), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A506D8u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 186u, 0x08ADC9FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A506D8u) goto L_08A506D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A506D8:
    aot_gpr_2 = (0u | 1u);
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1236), aot_run_words);
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
      ctx.gpr[22] = aot_run_words[10];
      ctx.gpr[23] = aot_run_words[11];
      ctx.gpr[30] = aot_run_words[12];
      aot_gpr_31 = aot_run_words[13];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1296));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A5071C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-256));
    { const std::uint32_t aot_run_words[14]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), aot_gpr_6);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[30] = (0u | 0u);
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[7] = (0u | 15u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_31 = (0x08A507C0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A507C0u) goto L_08A507C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A507C0:
    aot_gpr_4 = (17948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(112))))));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A50950;
      }
      goto L_08A507E0;
    }
L_08A507E0:
    aot_gpr_4 = (16073u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[23] = (0u | 6u);
    ctx.gpr[22] = (0u | 7u);
    ctx.gpr[21] = (0u | 10u);
    ctx.gpr[20] = (0u | 11u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    goto L_08A5080C;
L_08A5080C:
    ctx.gpr[16] = (ctx.gpr[17] << 2u);
    ctx.gpr[16] = (aot_gpr_29 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
      if (branch_taken) {
          goto L_08A50934;
      }
      goto L_08A50820;
    }
L_08A50820:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A50830u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 627u, 0x089AB048u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50830u) goto L_08A50830;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50830:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A50934;
      }
      goto L_08A50838;
    }
L_08A50838:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_4 = (aot_gpr_4 >> 4u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[23];
      if (branch_taken) {
          goto L_08A50934;
      }
      goto L_08A50850;
    }
L_08A50850:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_4 = (aot_gpr_4 >> 4u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
      if (branch_taken) {
          goto L_08A50934;
      }
      goto L_08A50868;
    }
L_08A50868:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_4 = (aot_gpr_4 >> 4u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
      if (branch_taken) {
          goto L_08A50934;
      }
      goto L_08A50880;
    }
L_08A50880:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_4 = (aot_gpr_4 >> 4u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_08A50934;
      }
      goto L_08A50898;
    }
L_08A50898:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_4 = (aot_gpr_4 >> 4u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_08A50934;
      }
      goto L_08A508B0;
    }
L_08A508B0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[16];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
        goto L_08A508F8;
    }
    goto L_08A508F8;
L_08A508F8:
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A50934;
      }
      goto L_08A5090C;
    }
L_08A5090C:
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A50934;
      }
      goto L_08A5092C;
    }
L_08A5092C:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[30] = (ctx.gpr[17] | 0u);
    goto L_08A50934;
L_08A50934:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_gpr_4 << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(112))))));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5080C;
      }
      goto L_08A50950;
    }
L_08A50950:
    aot_gpr_4 = (17932u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 40960u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A50AA0;
      }
      goto L_08A5096C;
    }
L_08A5096C:
    ctx.gpr[30] = (ctx.gpr[30] << 2u);
    ctx.gpr[30] = (aot_gpr_29 + ctx.gpr[30]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    aot_gpr_2 = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08A509B8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A509B8u) goto L_08A509B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A509B8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08A50AA0;
      }
      goto L_08A509C0;
    }
L_08A509C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(48)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = ctx.fpr[16] - aot_fpr_13;
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[15];
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = ctx.fpr[18] - ctx.fpr[15];
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_fpr_13 = std::sqrt(aot_fpr_13);
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (16025u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[15];
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 6u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A50A88;
      }
      goto L_08A50A64;
    }
L_08A50A64:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (aot_gpr_5 & 8192u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A50A88;
      }
      goto L_08A50A78;
    }
L_08A50A78:
    aot_gpr_5 = (16204u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    goto L_08A50A88;
L_08A50A88:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[15] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A50AA0;
L_08A50AA0:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_run_words);
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
      ctx.gpr[22] = aot_run_words[10];
      ctx.gpr[23] = aot_run_words[11];
      ctx.gpr[30] = aot_run_words[12];
      aot_gpr_31 = aot_run_words[13];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A50AE0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-352));
    { const std::uint32_t aot_run_words[16]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(288), aot_run_words); }
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(280), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    ctx.gpr[21] = (aot_gpr_6 | 0u);
    ctx.gpr[23] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(284), aot_gpr_5);
      if (branch_taken) {
          goto L_08A50B70;
      }
      goto L_08A50B6C;
    }
L_08A50B6C:
    ctx.gpr[19] = (0u | 1u);
    goto L_08A50B70;
L_08A50B70:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[11] = (0u < ctx.gpr[19] ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[7] = (0u | 15u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_31 = (0x08A50BF0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50BF0u) goto L_08A50BF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50BF0:
    aot_gpr_4 = (17948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = aot_fpr_12 / aot_fpr_20;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(96))))));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[30] = (32u << 16u);
      if (branch_taken) {
          goto L_08A50EC8;
      }
      goto L_08A50C24;
    }
L_08A50C24:
    aot_gpr_4 = (16448u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (16544u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[16] = (aot_gpr_29 | 0u);
    goto L_08A50C4C;
L_08A50C4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[20] == aot_gpr_4;
      if (branch_taken) {
          goto L_08A50EB4;
      }
      goto L_08A50C58;
    }
L_08A50C58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A50EB4;
      }
      goto L_08A50C68;
    }
L_08A50C68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_4 = (aot_gpr_4 >> 4u);
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A50EB4;
      }
      goto L_08A50C84;
    }
L_08A50C84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_4 = (aot_gpr_4 >> 4u);
    aot_gpr_5 = (0u | 7u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A50EB4;
      }
      goto L_08A50CA0;
    }
L_08A50CA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_4 = (aot_gpr_4 >> 4u);
    aot_gpr_5 = (0u | 10u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A50EB4;
      }
      goto L_08A50CBC;
    }
L_08A50CBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_4 = (aot_gpr_4 >> 4u);
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A50EB4;
      }
      goto L_08A50CD8;
    }
L_08A50CD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A50D0C;
      }
      goto L_08A50CF8;
    }
L_08A50CF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[30]);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A50EB4;
      }
      goto L_08A50D0C;
    }
L_08A50D0C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_20 = std::sqrt(aot_fpr_20);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = ctx.fpr[15] + aot_fpr_13;
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08A50D60;
    }
    goto L_08A50D60;
L_08A50D60:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A50D80;
      }
      goto L_08A50D6C;
    }
L_08A50D6C:
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A50EB4;
      }
      goto L_08A50D80;
    }
L_08A50D80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    aot_gpr_31 = (0x08A50DA4u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 186u, 0x088B1424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50DA4u) goto L_08A50DA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50DA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A50EB4;
      }
      goto L_08A50DD8;
    }
L_08A50DD8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[30])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A50EB4;
      }
      goto L_08A50E00;
    }
L_08A50E00:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A50EB4;
      }
      goto L_08A50E8C;
    }
L_08A50E8C:
    aot_fpr_12 = ctx.fpr[28] - aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A50EB4;
      }
      goto L_08A50EA4;
    }
L_08A50EA4:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[19] << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(280), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08A50EB4;
L_08A50EB4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(96))))));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A50C4C;
      }
      goto L_08A50EC8;
    }
L_08A50EC8:
    aot_gpr_4 = (17932u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 40960u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A50F00;
      }
      goto L_08A50EE4;
    }
L_08A50EE4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(280))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08A50F00;
L_08A50F00:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(288), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A50F48:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-528));
    { const std::uint32_t aot_run_words[14]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(464), aot_run_words); }
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(460), static_cast<std::uint16_t>(aot_gpr_4));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_2 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[7] = (0u | 15u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_31 = (0x08A50FF8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A50FF8u) goto L_08A50FF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A50FF8:
    aot_gpr_4 = (17948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(96))))));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A511F4;
      }
      goto L_08A51018;
    }
L_08A51018:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(456), ctx.gpr[8]);
    aot_gpr_4 = (16544u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_5 = (ctx.gpr[8] + static_cast<std::uint32_t>(48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(452), aot_gpr_4);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    aot_gpr_4 = (15897u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(448), aot_gpr_5);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    goto L_08A51054;
L_08A51054:
    ctx.gpr[16] = (ctx.gpr[17] << 2u);
    ctx.gpr[16] = (aot_gpr_29 + ctx.gpr[16]);
    aot_gpr_31 = (0x08A51064u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 244u, 0x088E289Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51064u) goto L_08A51064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51064:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_gpr_5 = (0u | 57u);
      if (branch_taken) {
          goto L_08A511D8;
      }
      goto L_08A51078;
    }
L_08A51078:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 58u);
      if (branch_taken) {
          goto L_08A511D8;
      }
      goto L_08A51080;
    }
L_08A51080:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A511D8;
      }
      goto L_08A51088;
    }
L_08A51088:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A510B8;
      }
      goto L_08A510A8;
    }
L_08A510A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
      if (branch_taken) {
          goto L_08A511D8;
      }
      goto L_08A510B8;
    }
L_08A510B8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A510CCu);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 186u, 0x088B1424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A510CCu) goto L_08A510CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A510CC:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 275u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A510F0;
      }
      goto L_08A510E0;
    }
L_08A510E0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-996));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A5113C;
      }
      goto L_08A510F0;
    }
L_08A510F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
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
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(452)));
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
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A51130;
    }
    goto L_08A51130;
L_08A51130:
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A51174;
      }
      goto L_08A5113C;
    }
L_08A5113C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
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
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(448)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08A51174;
L_08A51174:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A511D8;
      }
      goto L_08A511C0;
    }
L_08A511C0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A511D8;
      }
      goto L_08A511D0;
    }
L_08A511D0:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(460), static_cast<std::uint16_t>(ctx.gpr[17]));
    goto L_08A511D8;
L_08A511D8:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_gpr_4 << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(96))))));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A51054;
      }
      goto L_08A511F4;
    }
L_08A511F4:
    aot_gpr_4 = (16416u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 275u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A51254;
      }
      goto L_08A5120C;
    }
L_08A5120C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6392)));
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (17204u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_vrot_ct<1u, 64u, 2u, 4u>();
    ctx.execute_vfpu_vec3_ct<0u, 33u, 1u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A512A4;
      }
      goto L_08A51254;
    }
L_08A51254:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-996));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A512A4;
      }
      goto L_08A51264;
    }
L_08A51264:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6388)));
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (17204u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_vrot_ct<1u, 64u, 2u, 4u>();
    ctx.execute_vfpu_vec3_ct<0u, 33u, 1u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    goto L_08A512A4;
L_08A512A4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A51410;
      }
      goto L_08A512B4;
    }
L_08A512B4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(460))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 6u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_08A5134C;
      }
      goto L_08A51334;
    }
L_08A51334:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A51344u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 571u, 0x088E3E88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51344u) goto L_08A51344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51344:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5135C;
      }
      goto L_08A5134C;
    }
L_08A5134C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
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
    goto L_08A5135C;
L_08A5135C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = aot_fpr_20 / ctx.fpr[22];
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A51410;
      }
      goto L_08A513B0;
    }
L_08A513B0:
    aot_gpr_4 = (48665u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15897u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_gpr_31 = (0x08A513CCu);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A513CCu) goto L_08A513CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A513CC:
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08A513DCu);
    ctx.fpr[24] = aot_fpr_20 + aot_fpr_12;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A513DCu) goto L_08A513DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A513DC:
    aot_fpr_13 = ctx.fpr[22] - aot_fpr_20;
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_31 = (0x08A513ECu);
    ctx.fpr[26] = aot_fpr_20 + aot_fpr_13;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A513ECu) goto L_08A513EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A513EC:
    aot_fpr_14 = ctx.fpr[22] - aot_fpr_20;
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_14;
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(256), aot_run_words); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    aot_gpr_31 = (0x08A51410u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51410u) goto L_08A51410;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51410:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(464), aot_run_words);
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
      ctx.gpr[22] = aot_run_words[10];
      ctx.gpr[23] = aot_run_words[11];
      ctx.gpr[30] = aot_run_words[12];
      aot_gpr_31 = aot_run_words[13];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A51450:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-448));
    { const std::uint32_t aot_run_words[10]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(404), aot_run_words); }
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A51A54;
      }
      goto L_08A51494;
    }
L_08A51494:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A51A54;
      }
      goto L_08A514B4;
    }
L_08A514B4:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08A514C4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 157u, 0x08805288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A514C4u) goto L_08A514C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A514C4:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A514E4u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A514E4u) goto L_08A514E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A514E4:
    { const std::uint32_t vfpu_address = aot_gpr_2 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A515F0;
      }
      goto L_08A5150C;
    }
L_08A5150C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(900)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A515F0;
      }
      goto L_08A51520;
    }
L_08A51520:
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_run_words); }
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(900)));
    aot_gpr_31 = (0x08A51540u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51540u) goto L_08A51540;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51540:
    ctx.gpr[23] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(900)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(708)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x08A51558u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51558u) goto L_08A51558;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51558:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08A51564u);
    ctx.gpr[23] = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0896918C, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51564u) goto L_08A51564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51564:
    ctx.gpr[7] = (ctx.gpr[23] << 6u);
    ctx.gpr[7] = (aot_gpr_2 + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08A5157Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 239u, 0x088619ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5157Cu) goto L_08A5157C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5157C:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_run_words);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[15] = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(ctx.fpr[15])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_run_words); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08A515C8u);
    ctx.gpr[7] = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 124u, 0x08A1943Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A515C8u) goto L_08A515C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A515C8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08A515DCu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.pc = 0x088B1554u;
    ([&]() { AOT_REGCACHE_SYNC_OUT(); rt.invoke_native_fast_path(0x088B1554u, ctx); AOT_REGCACHE_SYNC_IN(); }());
    if (ctx.pc == 0x08A515DCu) goto L_08A515DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A515DC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A515F0;
      }
      goto L_08A515E4;
    }
L_08A515E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(900)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[19] = (0u | 1u);
    goto L_08A515F0;
L_08A515F0:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(565)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A51730;
      }
      goto L_08A51604;
    }
L_08A51604:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A51610u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51610u) goto L_08A51610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51610:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A51718;
      }
      goto L_08A51618;
    }
L_08A51618:
    aot_gpr_31 = (0x08A51620u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51620u) goto L_08A51620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51620:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A51718;
      }
      goto L_08A51630;
    }
L_08A51630:
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(224), aot_run_words); }
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A51650u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51650u) goto L_08A51650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51650:
    aot_gpr_31 = (0x08A51658u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51658u) goto L_08A51658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51658:
    ctx.gpr[30] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A51668u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51668u) goto L_08A51668;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51668:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(708)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x08A51678u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51678u) goto L_08A51678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51678:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x08A51684u);
    ctx.gpr[30] = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0896918C, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51684u) goto L_08A51684;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51684:
    ctx.gpr[7] = (ctx.gpr[30] << 6u);
    ctx.gpr[7] = (aot_gpr_2 + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08A5169Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 239u, 0x088619ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5169Cu) goto L_08A5169C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5169C:
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(224), aot_run_words);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[15] = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(ctx.fpr[15])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_run_words); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08A516E8u);
    ctx.gpr[7] = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 124u, 0x08A1943Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A516E8u) goto L_08A516E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A516E8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08A516FCu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.pc = 0x088B1554u;
    ([&]() { AOT_REGCACHE_SYNC_OUT(); rt.invoke_native_fast_path(0x088B1554u, ctx); AOT_REGCACHE_SYNC_IN(); }());
    if (ctx.pc == 0x08A516FCu) goto L_08A516FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A516FC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A51718;
      }
      goto L_08A51704;
    }
L_08A51704:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A51710u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51710u) goto L_08A51710;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51710:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_2);
    ctx.gpr[19] = (0u | 1u);
    goto L_08A51718;
L_08A51718:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] & 65535u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(565)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A51604;
      }
      goto L_08A51730;
    }
L_08A51730:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A51A3C;
      }
      goto L_08A5173C;
    }
L_08A5173C:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
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
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
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
          goto L_08A51A3C;
      }
      goto L_08A5177C;
    }
L_08A5177C:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
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
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
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
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A51A3C;
      }
      goto L_08A517BC;
    }
L_08A517BC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08A51A3C;
      }
      goto L_08A517E0;
    }
L_08A517E0:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A517F4u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 934u, 0x0885FE8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A517F4u) goto L_08A517F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A517F4:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08A51800u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51800u) goto L_08A51800;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51800:
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08A51818u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 568u, 0x08A3FB50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51818u) goto L_08A51818;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51818:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08A51834u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 568u, 0x08A3FB50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51834u) goto L_08A51834;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51834:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A519A4;
      }
      goto L_08A51848;
    }
L_08A51848:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A5192C;
      }
      goto L_08A51858;
    }
L_08A51858:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A51924;
      }
      goto L_08A51868;
    }
L_08A51868:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (ctx.gpr[22] << 4u);
    ctx.gpr[22] = (aot_gpr_4 + ctx.gpr[22]);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(336));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vx2i_ct<0u, 2u, 2u, 3u>();
    ctx.execute_vfpu_vx2i_ct<1u, 66u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<0u, 0u, 3u, 23u>();
    ctx.execute_vfpu_vi2f_ct<1u, 1u, 3u, 23u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08A5189Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.pc = 0x088B1780u;
    ([&]() { AOT_REGCACHE_SYNC_OUT(); rt.invoke_native_fast_path(0x088B1780u, ctx); AOT_REGCACHE_SYNC_IN(); }());
    if (ctx.pc == 0x08A5189Cu) goto L_08A5189C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5189C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A5191C;
      }
      goto L_08A518A4;
    }
L_08A518A4:
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(6))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(14))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5191C;
      }
      goto L_08A518B8;
    }
L_08A518B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (ctx.gpr[23] << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6)));
    aot_gpr_5 = (0u | 7u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A51900;
      }
      goto L_08A518D4;
    }
L_08A518D4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (ctx.gpr[23] << 3u);
    aot_gpr_31 = (0x08A518ECu);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 428u, 0x088B36D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A518ECu) goto L_08A518EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A518EC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A51900;
      }
      goto L_08A518F4;
    }
L_08A518F4:
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5191C;
      }
      goto L_08A51900;
    }
L_08A51900:
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (aot_gpr_4 << 16u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 16u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(14))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A518B8;
      }
      goto L_08A5191C;
    }
L_08A5191C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A519A4;
      }
      goto L_08A51924;
    }
L_08A51924:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A519A4;
      }
      goto L_08A5192C;
    }
L_08A5192C:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(50)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A519A4;
      }
      goto L_08A51940;
    }
L_08A51940:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (ctx.gpr[22] << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6)));
    aot_gpr_5 = (0u | 7u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A51988;
      }
      goto L_08A5195C;
    }
L_08A5195C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (ctx.gpr[22] << 3u);
    aot_gpr_31 = (0x08A51974u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 428u, 0x088B36D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51974u) goto L_08A51974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51974:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A51988;
      }
      goto L_08A5197C;
    }
L_08A5197C:
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A519A4;
      }
      goto L_08A51988;
    }
L_08A51988:
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (aot_gpr_4 << 16u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(50)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A51940;
      }
      goto L_08A519A4;
    }
L_08A519A4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_08A51A18;
      }
      goto L_08A519AC;
    }
L_08A519AC:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08A519BCu);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 348u, 0x08B0D6E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A519BCu) goto L_08A519BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A519BC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A51A18;
      }
      goto L_08A519C4;
    }
L_08A519C4:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08A519D0u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 374u, 0x08B0D8D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A519D0u) goto L_08A519D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A519D0:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08A519E8;
      }
      goto L_08A519DC;
    }
L_08A519DC:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08A519E8u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 348u, 0x08B0D6E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A519E8u) goto L_08A519E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A519E8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 20u);
    aot_gpr_6 = (0u | 4u);
    aot_gpr_31 = (0x08A519FCu);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 322u, 0x08831790u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A519FCu) goto L_08A519FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A519FC:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x08A51A18u);
    aot_gpr_6 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51A18u) goto L_08A51A18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51A18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(328)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A51A3C;
      }
      goto L_08A51A28;
    }
L_08A51A28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A51A3C;
      }
      goto L_08A51A34;
    }
L_08A51A34:
    aot_gpr_31 = (0x08A51A3Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(320)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51A3Cu) goto L_08A51A3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51A3C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08A51A54;
      }
      goto L_08A51A44;
    }
L_08A51A44:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A51A54u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 157u, 0x08805288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51A54u) goto L_08A51A54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51A54:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(404), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(448));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A51A84:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-192));
    { const std::uint32_t aot_run_words[12]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 150u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08A51AE4;
      }
      goto L_08A51AD0;
    }
L_08A51AD0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A51AE4;
      }
      goto L_08A51AE0;
    }
L_08A51AE0:
    aot_gpr_4 = (0u | 400u);
    goto L_08A51AE4;
L_08A51AE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A51DD8;
      }
      goto L_08A51AFC;
    }
L_08A51AFC:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_08A51B34;
    }
    goto L_08A51B34;
L_08A51B34:
    aot_fpr_20 = ctx.fpr[15] / aot_fpr_12;
    ctx.fpr[22] = aot_fpr_14 / aot_fpr_12;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(656), aot_gpr_4);
    aot_gpr_4 = (16243u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (16660u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (16217u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A51B90u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 568u, 0x08A3FB50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51B90u) goto L_08A51B90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51B90:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (17008u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08A51BECu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51BECu) goto L_08A51BEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51BEC:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-128));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (15477u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    aot_gpr_31 = (0x08A51C18u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51C18u) goto L_08A51C18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51C18:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-128));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_31 = (0x08A51C34u);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51C34u) goto L_08A51C34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51C34:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-128));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A51C70u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51C70u) goto L_08A51C70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51C70:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A51C84u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_08A50AE0;
L_08A51C84:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A51C94u);
    aot_gpr_6 = (0u | 15u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 524u, 0x08A43300u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51C94u) goto L_08A51C94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51C94:
    aot_gpr_4 = (49011u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A51CC4u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 568u, 0x08A3FB50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51CC4u) goto L_08A51CC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51CC4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    aot_gpr_31 = (0x08A51D00u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51D00u) goto L_08A51D00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51D00:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-128));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    aot_gpr_31 = (0x08A51D20u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51D20u) goto L_08A51D20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51D20:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-128));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_31 = (0x08A51D3Cu);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51D3Cu) goto L_08A51D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51D3C:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-128));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A51D6Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51D6Cu) goto L_08A51D6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51D6C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A51D80u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_08A50AE0;
L_08A51D80:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A51D90u);
    aot_gpr_6 = (0u | 15u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 524u, 0x08A43300u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51D90u) goto L_08A51D90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51D90:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (0u | 55u);
    aot_gpr_31 = (0x08A51DACu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51DACu) goto L_08A51DAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51DAC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(625)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(625), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(625)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A51DD8;
      }
      goto L_08A51DC4;
    }
L_08A51DC4:
    aot_gpr_4 = (0u | 20u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(625), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1400));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(656), aot_gpr_4);
    goto L_08A51DD8;
L_08A51DD8:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_run_words);
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
      aot_gpr_31 = aot_run_words[11];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A51E10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[10]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    aot_gpr_31 = (0x08A51E50u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 32u, 0x08A4031Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51E50u) goto L_08A51E50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51E50:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A51E84;
      }
      goto L_08A51E5C;
    }
L_08A51E5C:
    aot_gpr_31 = (0x08A51E64u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089474C4, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51E64u) goto L_08A51E64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51E64:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A51E84;
      }
      goto L_08A51E70;
    }
L_08A51E70:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A51E84;
      }
      goto L_08A51E7C;
    }
L_08A51E7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A522F8;
      }
      goto L_08A51E84;
    }
L_08A51E84:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[17] + aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (0u | 194u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08A51F04;
      }
      goto L_08A51EB0;
    }
L_08A51EB0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (0u | 9u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08A51EFC;
      }
      goto L_08A51EC0;
    }
L_08A51EC0:
    aot_gpr_31 = (0x08A51EC8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51EC8u) goto L_08A51EC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51EC8:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A51EF4;
      }
      goto L_08A51ED4;
    }
L_08A51ED4:
    aot_gpr_31 = (0x08A51EDCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51EDCu) goto L_08A51EDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51EDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A51F0C;
      }
      goto L_08A51EEC;
    }
L_08A51EEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A522F8;
      }
      goto L_08A51EF4;
    }
L_08A51EF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A522F8;
      }
      goto L_08A51EFC;
    }
L_08A51EFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A522F8;
      }
      goto L_08A51F04;
    }
L_08A51F04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A522F8;
      }
      goto L_08A51F0C;
    }
L_08A51F0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A51F20u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0144_entry, 144u, 382u, 0x08A45F20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51F20u) goto L_08A51F20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51F20:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (2236u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[21]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(112))))));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A51F6C;
      }
      goto L_08A51F60;
    }
L_08A51F60:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1964)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A51FB0;
      }
      goto L_08A51F6C;
    }
L_08A51F6C:
    aot_gpr_31 = (0x08A51F74u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51F74u) goto L_08A51F74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51F74:
    aot_gpr_31 = (0x08A51F7Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 148u, 0x0898C6D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51F7Cu) goto L_08A51F7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51F7C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A51F88;
      }
      goto L_08A51F84;
    }
L_08A51F84:
    ctx.gpr[20] = (0u | 1u);
    goto L_08A51F88;
L_08A51F88:
    aot_gpr_31 = (0x08A51F90u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51F90u) goto L_08A51F90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51F90:
    aot_gpr_31 = (0x08A51F98u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 200u, 0x0898C924u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A51F98u) goto L_08A51F98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A51F98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(614))))));
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 8u);
      if (branch_taken) {
          goto L_08A51FD8;
      }
      goto L_08A51FA8;
    }
L_08A51FA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A51FD8;
      }
      goto L_08A51FB0;
    }
L_08A51FB0:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(245)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(614))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (aot_gpr_5 & 8u);
      if (branch_taken) {
          goto L_08A51FC8;
      }
      goto L_08A51FC4;
    }
L_08A51FC4:
    ctx.gpr[20] = (0u | 1u);
    goto L_08A51FC8;
L_08A51FC8:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(246)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08A51FD8;
      }
      goto L_08A51FD4;
    }
L_08A51FD4:
    ctx.gpr[19] = (0u | 1u);
    goto L_08A51FD8;
L_08A51FD8:
    ctx.gpr[22] = (0u | 105u);
    ctx.gpr[23] = (0u | 106u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A51FF0;
      }
      goto L_08A51FE8;
    }
L_08A51FE8:
    ctx.gpr[22] = (0u | 107u);
    ctx.gpr[23] = (0u | 108u);
    goto L_08A51FF0;
L_08A51FF0:
    aot_gpr_5 = (ctx.gpr[20] | ctx.gpr[19]);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A521C4;
      }
      goto L_08A51FFC;
    }
L_08A51FFC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08A5208C;
      }
      goto L_08A52004;
    }
L_08A52004:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08A52010u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0886D4BC, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52010u) goto L_08A52010;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52010:
    ctx.gpr[23] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_08A52028;
      }
      goto L_08A5201C;
    }
L_08A5201C:
    aot_gpr_4 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A52028;
L_08A52028:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08A52034u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0886D4BC, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52034u) goto L_08A52034;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52034:
    ctx.gpr[30] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_08A52058;
      }
      goto L_08A52040;
    }
L_08A52040:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A52150;
      }
      goto L_08A52058;
    }
L_08A52058:
    ctx.gpr[30] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[30] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_08A52074;
    }
    goto L_08A52064;
L_08A52064:
    aot_gpr_31 = (0x08A5206Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5206Cu) goto L_08A5206C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5206C:
    ctx.gpr[30] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_08A52074;
L_08A52074:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08A52084u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52084u) goto L_08A52084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08A52150;
      }
      goto L_08A5208C;
    }
L_08A5208C:
    aot_gpr_31 = (0x08A52094u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52094u) goto L_08A52094;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52094:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A520CC;
      }
      goto L_08A5209C;
    }
L_08A5209C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A52150;
      }
      goto L_08A520CC;
    }
L_08A520CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08A520D8u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0886D4BC, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A520D8u) goto L_08A520D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A520D8:
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08A520F0;
      }
      goto L_08A520E4;
    }
L_08A520E4:
    aot_gpr_4 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A520F0;
L_08A520F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08A520FCu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0886D4BC, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A520FCu) goto L_08A520FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A520FC:
    ctx.gpr[30] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_08A52120;
      }
      goto L_08A52108;
    }
L_08A52108:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A52150;
      }
      goto L_08A52120;
    }
L_08A52120:
    ctx.gpr[30] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[30] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_08A5213C;
    }
    goto L_08A5212C;
L_08A5212C:
    aot_gpr_31 = (0x08A52134u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52134u) goto L_08A52134;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52134:
    ctx.gpr[30] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_08A5213C;
L_08A5213C:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08A5214Cu);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5214Cu) goto L_08A5214C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5214C:
    ctx.gpr[30] = (aot_gpr_2 | 0u);
    goto L_08A52150;
L_08A52150:
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_08A52168;
      }
      goto L_08A52158;
    }
L_08A52158:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A52214;
      }
      goto L_08A52168;
    }
L_08A52168:
    aot_gpr_31 = (0x08A52170u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52170u) goto L_08A52170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52170:
    aot_gpr_31 = (0x08A52178u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 347u, 0x0898CF8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52178u) goto L_08A52178;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52178:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A52214;
      }
      goto L_08A52180;
    }
L_08A52180:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A52214;
      }
      goto L_08A52194;
    }
L_08A52194:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A521A8u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 175u, 0x08A40DCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A521A8u) goto L_08A521A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A521A8:
    aot_gpr_31 = (0x08A521B0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A521B0u) goto L_08A521B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A521B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), aot_gpr_4);
      if (branch_taken) {
          goto L_08A52214;
      }
      goto L_08A521C4;
    }
L_08A521C4:
    aot_gpr_31 = (0x08A521CCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 212u, 0x08A40FCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A521CCu) goto L_08A521CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A521CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08A521D8u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0886D4BC, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A521D8u) goto L_08A521D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A521D8:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08A521F0;
      }
      goto L_08A521E4;
    }
L_08A521E4:
    aot_gpr_4 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A521F0;
L_08A521F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08A521FCu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0886D4BC, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A521FCu) goto L_08A521FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A521FC:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08A52214;
      }
      goto L_08A52208;
    }
L_08A52208:
    aot_gpr_4 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A52214;
L_08A52214:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_08A52288;
      }
      goto L_08A5221C;
    }
L_08A5221C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1844)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A52288;
      }
      goto L_08A52234;
    }
L_08A52234:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1844), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(272));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08A52268;
    }
    goto L_08A52268;
L_08A52268:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1844), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_6 = (0u | 173u);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08A52288u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52288u) goto L_08A52288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52288:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08A522F8;
      }
      goto L_08A52290;
    }
L_08A52290:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1848)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A522F8;
      }
      goto L_08A522A8;
    }
L_08A522A8:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1848), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(272));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_08A522DC;
    }
    goto L_08A522DC;
L_08A522DC:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1848), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_5 = (0u | 8u);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08A522F8u);
    aot_gpr_6 = (0u | 173u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A522F8u) goto L_08A522F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A522F8:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A52328:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[8]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (0u | 2u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A5237C;
      }
      goto L_08A52360;
    }
L_08A52360:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_31 = (0x08A5236Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5236Cu) goto L_08A5236C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5236C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08A52394;
      }
      goto L_08A52374;
    }
L_08A52374:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A523B0;
      }
      goto L_08A5237C;
    }
L_08A5237C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1120)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5238Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 581u, 0x08A438FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5238Cu) goto L_08A5238C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5238C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A526B8;
      }
      goto L_08A52394;
    }
L_08A52394:
    aot_gpr_31 = (0x08A5239Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089474C4, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5239Cu) goto L_08A5239C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5239C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A523B0;
      }
      goto L_08A523A8;
    }
L_08A523A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A526B8;
      }
      goto L_08A523B0;
    }
L_08A523B0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[18] + aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x08A523D0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A523D0u) goto L_08A523D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A523D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A526B8;
      }
      goto L_08A523E0;
    }
L_08A523E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A523F4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0144_entry, 144u, 382u, 0x08A45F20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A523F4u) goto L_08A523F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A523F4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (2236u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08A52440;
      }
      goto L_08A52434;
    }
L_08A52434:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1964)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A5247C;
      }
      goto L_08A52440;
    }
L_08A52440:
    aot_gpr_31 = (0x08A52448u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52448u) goto L_08A52448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52448:
    aot_gpr_31 = (0x08A52450u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 148u, 0x0898C6D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52450u) goto L_08A52450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52450:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A5245C;
      }
      goto L_08A52458;
    }
L_08A52458:
    ctx.gpr[20] = (0u | 1u);
    goto L_08A5245C;
L_08A5245C:
    aot_gpr_31 = (0x08A52464u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52464u) goto L_08A52464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52464:
    aot_gpr_31 = (0x08A5246Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 200u, 0x0898C924u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5246Cu) goto L_08A5246C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5246C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A5249C;
      }
      goto L_08A52474;
    }
L_08A52474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5249C;
      }
      goto L_08A5247C;
    }
L_08A5247C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(245)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A5248C;
      }
      goto L_08A52488;
    }
L_08A52488:
    ctx.gpr[20] = (0u | 1u);
    goto L_08A5248C;
L_08A5248C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(246)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5249C;
      }
      goto L_08A52498;
    }
L_08A52498:
    ctx.gpr[19] = (0u | 1u);
    goto L_08A5249C;
L_08A5249C:
    aot_gpr_4 = (ctx.gpr[20] | ctx.gpr[19]);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A52668;
      }
      goto L_08A524A8;
    }
L_08A524A8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08A52538;
      }
      goto L_08A524B0;
    }
L_08A524B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08A524BCu);
    aot_gpr_5 = (0u | 106u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0886D4BC, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A524BCu) goto L_08A524BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A524BC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A524D4;
      }
      goto L_08A524C8;
    }
L_08A524C8:
    aot_gpr_5 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A524D4;
L_08A524D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08A524E0u);
    aot_gpr_5 = (0u | 105u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0886D4BC, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A524E0u) goto L_08A524E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A524E0:
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08A52504;
      }
      goto L_08A524EC;
    }
L_08A524EC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A52600;
      }
      goto L_08A52504;
    }
L_08A52504:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[22] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
        goto L_08A52520;
    }
    goto L_08A52510;
L_08A52510:
    aot_gpr_31 = (0x08A52518u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52518u) goto L_08A52518;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52518:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    goto L_08A52520;
L_08A52520:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08A52530u);
    ctx.gpr[7] = (0u | 105u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52530u) goto L_08A52530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52530:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08A52600;
      }
      goto L_08A52538;
    }
L_08A52538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    aot_gpr_31 = (0x08A52544u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52544u) goto L_08A52544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52544:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A5257C;
      }
      goto L_08A5254C;
    }
L_08A5254C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A52600;
      }
      goto L_08A5257C;
    }
L_08A5257C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08A52588u);
    aot_gpr_5 = (0u | 105u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0886D4BC, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52588u) goto L_08A52588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52588:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A525A0;
      }
      goto L_08A52594;
    }
L_08A52594:
    aot_gpr_5 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A525A0;
L_08A525A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08A525ACu);
    aot_gpr_5 = (0u | 106u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0886D4BC, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A525ACu) goto L_08A525AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A525AC:
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08A525D0;
      }
      goto L_08A525B8;
    }
L_08A525B8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A52600;
      }
      goto L_08A525D0;
    }
L_08A525D0:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[22] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
        goto L_08A525EC;
    }
    goto L_08A525DC;
L_08A525DC:
    aot_gpr_31 = (0x08A525E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A525E4u) goto L_08A525E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A525E4:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    goto L_08A525EC;
L_08A525EC:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08A525FCu);
    ctx.gpr[7] = (0u | 106u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A525FCu) goto L_08A525FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A525FC:
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    goto L_08A52600;
L_08A52600:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08A52618;
      }
      goto L_08A52608;
    }
L_08A52608:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A526B8;
      }
      goto L_08A52618;
    }
L_08A52618:
    aot_gpr_31 = (0x08A52620u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52620u) goto L_08A52620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52620:
    aot_gpr_31 = (0x08A52628u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 347u, 0x0898CF8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52628u) goto L_08A52628;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52628:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A526B8;
      }
      goto L_08A52630;
    }
L_08A52630:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A526B8;
      }
      goto L_08A52644;
    }
L_08A52644:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A52658u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 175u, 0x08A40DCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52658u) goto L_08A52658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52658:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(70));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), aot_gpr_4);
      if (branch_taken) {
          goto L_08A526B8;
      }
      goto L_08A52668;
    }
L_08A52668:
    aot_gpr_31 = (0x08A52670u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 212u, 0x08A40FCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52670u) goto L_08A52670;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52670:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08A5267Cu);
    aot_gpr_5 = (0u | 105u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0886D4BC, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5267Cu) goto L_08A5267C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5267C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08A52694;
      }
      goto L_08A52688;
    }
L_08A52688:
    aot_gpr_4 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A52694;
L_08A52694:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08A526A0u);
    aot_gpr_5 = (0u | 106u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0886D4BC, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A526A0u) goto L_08A526A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A526A0:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08A526B8;
      }
      goto L_08A526AC;
    }
L_08A526AC:
    aot_gpr_4 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A526B8;
L_08A526B8:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A526E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A52724;
      }
      goto L_08A526F0;
    }
L_08A526F0:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-25892));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5872), 0u);
      if (branch_taken) {
          goto L_08A52710;
      }
      goto L_08A52704;
    }
L_08A52704:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_08A52710;
L_08A52710:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A52724;
      }
      goto L_08A5271C;
    }
L_08A5271C:
    aot_gpr_31 = (0x08A52724u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52724u) goto L_08A52724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52724:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A52730:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store16(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(6)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6240));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x08A52788u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52788u) goto L_08A52788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52788:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A52798u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52798u) goto L_08A52798;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52798:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_12), 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(104), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(106), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (0u | 24u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(108), 0u);
    aot_gpr_31 = (0x08A527D0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A527D0u) goto L_08A527D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A527D0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A527F4;
      }
      goto L_08A527E0;
    }
L_08A527E0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_2);
    aot_gpr_31 = (0x08A527ECu);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A527ECu) goto L_08A527EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A527EC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08A527F4;
L_08A527F4:
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(108), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(112), 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(116));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(108)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A52844:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08A529FC;
      }
      goto L_08A52870;
    }
L_08A52870:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(108));
      if (branch_taken) {
          goto L_08A52954;
      }
      goto L_08A52884;
    }
L_08A52884:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    goto L_08A52894;
L_08A52894:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08A52904;
      }
      goto L_08A528B0;
    }
L_08A528B0:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A528F0;
      }
      goto L_08A528D4;
    }
L_08A528D4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A528F0u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A528F0u) goto L_08A528F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A528F0:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08A5294C;
      }
      goto L_08A52904;
    }
L_08A52904:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08A52924u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 484u, 0x08B6AC34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52924u) goto L_08A52924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52924:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A52938;
      }
      goto L_08A52930;
    }
L_08A52930:
    aot_gpr_31 = (0x08A52938u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52938u) goto L_08A52938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52938:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08A5294C;
L_08A5294C:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
        goto L_08A52894;
    }
    goto L_08A52954;
L_08A52954:
    if (ctx.gpr[21] == 0u) {
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
        goto L_08A529C4;
    }
    goto L_08A5295C;
L_08A5295C:
    if (ctx.gpr[21] == 0u) {
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
        goto L_08A529C4;
    }
    goto L_08A52964;
L_08A52964:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A529A4;
      }
      goto L_08A5296C;
    }
L_08A5296C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08A52980u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 375u, 0x08B6DB8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52980u) goto L_08A52980;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52980:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    goto L_08A529A4;
L_08A529A4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A529C4;
      }
      goto L_08A529AC;
    }
L_08A529AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
        goto L_08A529C4;
    }
    goto L_08A529B8;
L_08A529B8:
    aot_gpr_31 = (0x08A529C0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A529C0u) goto L_08A529C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A529C0:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08A529C4;
L_08A529C4:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08A529EC;
      }
      goto L_08A529CC;
    }
L_08A529CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A529E8;
      }
      goto L_08A529DC;
    }
L_08A529DC:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08A529E8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A529E8u) goto L_08A529E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A529E8:
    aot_gpr_4 = (ctx.gpr[17] & 1u);
    goto L_08A529EC;
L_08A529EC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A529FC;
      }
      goto L_08A529F4;
    }
L_08A529F4:
    aot_gpr_31 = (0x08A529FCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A529FCu) goto L_08A529FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A529FC:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A52A20:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A52A64;
      }
      goto L_08A52A3C;
    }
L_08A52A3C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A52A5C;
      }
      goto L_08A52A48;
    }
L_08A52A48:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A52A6C;
      }
      goto L_08A52A54;
    }
L_08A52A54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A52A70;
      }
      goto L_08A52A5C;
    }
L_08A52A5C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A52A70;
      }
      goto L_08A52A64;
    }
L_08A52A64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A52A70;
      }
      goto L_08A52A6C;
    }
L_08A52A6C:
    aot_gpr_2 = (0u | 1u);
    goto L_08A52A70;
L_08A52A70:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A52A78:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A52AF0;
      }
      goto L_08A52AA0;
    }
L_08A52AA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08A52AB8;
    }
    goto L_08A52AAC;
L_08A52AAC:
    aot_gpr_31 = (0x08A52AB4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52AB4u) goto L_08A52AB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52AB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08A52AB8;
L_08A52AB8:
    aot_gpr_6 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08A52AC4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 180u, 0x08A54B14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52AC4u) goto L_08A52AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52AC4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08A52AD4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52AD4u) goto L_08A52AD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52AD4:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[16] == aot_gpr_4;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A52AF0;
      }
      goto L_08A52AE4;
    }
L_08A52AE4:
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A52AF0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52AF0u) goto L_08A52AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52AF0:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A52B08:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08A52B30;
      }
      goto L_08A52B24;
    }
L_08A52B24:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(96));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A52B38;
      }
      goto L_08A52B30;
    }
L_08A52B30:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    goto L_08A52B38;
L_08A52B38:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A52B40:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A52B60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(30072));
    { const std::uint32_t aot_run_words[4]{aot_gpr_5, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-99));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), 0u);
    aot_gpr_2 = (aot_gpr_4 | 0u);
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A52BA4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08A52C40;
      }
      goto L_08A52BC0;
    }
L_08A52BC0:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(30072));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_31 = (0x08A52BD4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08A52C60;
L_08A52BD4:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A52C04;
      }
      goto L_08A52BE0;
    }
L_08A52BE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A52C04;
      }
      goto L_08A52BEC;
    }
L_08A52BEC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A52C04;
      }
      goto L_08A52BF4;
    }
L_08A52BF4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A52C04;
      }
      goto L_08A52BFC;
    }
L_08A52BFC:
    aot_gpr_31 = (0x08A52C04u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52C04u) goto L_08A52C04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52C04:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A52C30;
      }
      goto L_08A52C0C;
    }
L_08A52C0C:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-25892));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5872), 0u);
      if (branch_taken) {
          goto L_08A52C2C;
      }
      goto L_08A52C20;
    }
L_08A52C20:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08A52C2C;
L_08A52C2C:
    aot_gpr_4 = (ctx.gpr[16] & 1u);
    goto L_08A52C30;
L_08A52C30:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A52C40;
      }
      goto L_08A52C38;
    }
L_08A52C38:
    aot_gpr_31 = (0x08A52C40u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52C40u) goto L_08A52C40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52C40:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
L_08A52C54:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_6);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A52C60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A52CB8;
      }
      goto L_08A52C8C;
    }
L_08A52C8C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A52C9Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_08A52F08;
L_08A52C9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A52C8C;
      }
      goto L_08A52CB8;
    }
L_08A52CB8:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), aot_gpr_4);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A52CD4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_5 & 255u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A52D48;
      }
      goto L_08A52D18;
    }
L_08A52D18:
    jump_target = ctx.gpr[20];
    aot_gpr_31 = (0x08A52D20u);
    aot_gpr_4 = (0u | 120u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52D20u) goto L_08A52D20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52D20:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A52D3C;
      }
      goto L_08A52D30;
    }
L_08A52D30:
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A52D3Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08A52730;
L_08A52D3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A52D7C;
      }
      goto L_08A52D48;
    }
L_08A52D48:
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_31 = (0x08A52D54u);
    aot_gpr_4 = (0u | 120u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52D54u) goto L_08A52D54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52D54:
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_gpr_4 = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A52D74;
      }
      goto L_08A52D60;
    }
L_08A52D60:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A52D70u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08A52730;
L_08A52D70:
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    goto L_08A52D74;
L_08A52D74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08A52D7C;
L_08A52D7C:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A52DA4;
      }
      goto L_08A52D84;
    }
L_08A52D84:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A52D98;
      }
      goto L_08A52D8C;
    }
L_08A52D8C:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    goto L_08A52D98;
L_08A52D98:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08A52EB4;
      }
      goto L_08A52DA4;
    }
L_08A52DA4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_5);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
      if (branch_taken) {
          goto L_08A52DE4;
      }
      goto L_08A52DD4;
    }
L_08A52DD4:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A52DF0;
      }
      goto L_08A52DE4;
    }
L_08A52DE4:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[17]);
    goto L_08A52DF0;
L_08A52DF0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08A52E30;
      }
      goto L_08A52DF8;
    }
L_08A52DF8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[17] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_31 = (0x08A52E0Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52E0Cu) goto L_08A52E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52E0C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A52E30;
      }
      goto L_08A52E1C;
    }
L_08A52E1C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_31 = (0x08A52E28u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52E28u) goto L_08A52E28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52E28:
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_08A52E30;
L_08A52E30:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    ctx.gpr[18] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08A52E44;
      }
      goto L_08A52E3C;
    }
L_08A52E3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A52E60;
      }
      goto L_08A52E44;
    }
L_08A52E44:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    ctx.gpr[22] = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A52E58u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52E58u) goto L_08A52E58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52E58:
    aot_gpr_5 = (aot_gpr_2 + ctx.gpr[22]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08A52E60;
L_08A52E60:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (aot_gpr_5 == 0u) {
    ctx.gpr[20] = (aot_gpr_4 | 0u);
        goto L_08A52E88;
    }
    goto L_08A52E74;
L_08A52E74:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A52E74;
      }
      goto L_08A52E84;
    }
L_08A52E84:
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    goto L_08A52E88;
L_08A52E88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A52E9C;
      }
      goto L_08A52E94;
    }
L_08A52E94:
    aot_gpr_31 = (0x08A52E9Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52E9Cu) goto L_08A52E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52E9C:
    aot_gpr_4 = (ctx.gpr[17] << 2u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), aot_gpr_4);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    goto L_08A52EB4;
L_08A52EB4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A52EC0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 278u, 0x08A89478u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52EC0u) goto L_08A52EC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52EC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08A52ED0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 330u, 0x08A897C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52ED0u) goto L_08A52ED0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52ED0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A52EE0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 330u, 0x08A897C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52EE0u) goto L_08A52EE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52EE0:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
L_08A52F08:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_5 & 255u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_31 = (0x08A52F3Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 367u, 0x08A89A28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52F3Cu) goto L_08A52F3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52F3C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
      if (branch_taken) {
          goto L_08A52FDC;
      }
      goto L_08A52F4C;
    }
L_08A52F4C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[19];
      if (branch_taken) {
          goto L_08A52FD0;
      }
      goto L_08A52F5C;
    }
L_08A52F5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A52F88;
      }
      goto L_08A52F68;
    }
L_08A52F68:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A52F74u);
    aot_gpr_5 = (0u | 2u);
    goto L_08A52844;
L_08A52F74:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08A52F80u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52F80u) goto L_08A52F80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52F80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A52F98;
      }
      goto L_08A52F88;
    }
L_08A52F88:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A52F94u);
    aot_gpr_5 = (0u | 3u);
    goto L_08A52844;
L_08A52F94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A52F98;
L_08A52F98:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A52FC4;
      }
      goto L_08A52FA4;
    }
L_08A52FA4:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A52FC4;
      }
      goto L_08A52FB0;
    }
L_08A52FB0:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_31 = (0x08A52FC0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A52FC0u) goto L_08A52FC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A52FC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A52FC4;
L_08A52FC4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), aot_gpr_4);
      if (branch_taken) {
          goto L_08A52FDC;
      }
      goto L_08A52FD0;
    }
L_08A52FD0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_08A52F4C;
      }
      goto L_08A52FDC;
    }
L_08A52FDC:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
L_08A52FF8:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_4 = (ctx.gpr[7] - aot_gpr_5);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08A53060;
      }
      goto L_08A5302C;
    }
L_08A5302C:
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    aot_gpr_2 = (aot_gpr_5 + ctx.gpr[8]);
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
      if (branch_taken) {
          goto L_08A5304C;
      }
      goto L_08A53044;
    }
L_08A53044:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A53064;
      }
      goto L_08A5304C;
    }
L_08A5304C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[7] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08A5302C;
      }
      goto L_08A53060;
    }
L_08A53060:
    aot_gpr_2 = (0u | 0u);
    goto L_08A53064;
L_08A53064:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A5306C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (0x08A5308Cu);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08A52FF8;
L_08A5308C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A53098:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (ctx.gpr[7] - aot_gpr_6);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    ctx.gpr[7] = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08A530CC;
      }
      goto L_08A530C4;
    }
L_08A530C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A5311C;
      }
      goto L_08A530CC;
    }
L_08A530CC:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[7] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A53118;
      }
      goto L_08A530DC;
    }
L_08A530DC:
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_5;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A530EC;
      }
      goto L_08A530E4;
    }
L_08A530E4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08A530FC;
      }
      goto L_08A530EC;
    }
L_08A530EC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08A53104;
      }
      goto L_08A530F4;
    }
L_08A530F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A53108;
      }
      goto L_08A530FC;
    }
L_08A530FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5311C;
      }
      goto L_08A53104;
    }
L_08A53104:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A53108;
L_08A53108:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A530DC;
      }
      goto L_08A53118;
    }
L_08A53118:
    aot_gpr_2 = (0u | 0u);
    goto L_08A5311C;
L_08A5311C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A53124:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A53134u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08A52FF8;
L_08A53134:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A53148;
      }
      goto L_08A53140;
    }
L_08A53140:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A53150;
      }
      goto L_08A53148;
    }
L_08A53148:
    aot_gpr_31 = (0x08A53150u);
    goto L_08A52A20;
L_08A53150:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A5315C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08A53174u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08A52FF8;
L_08A53174:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[16]);
    aot_gpr_6 = (15496u << 16u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_gpr_6 = (aot_gpr_6 | 34953u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (aot_gpr_5 ^ 14u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A53264;
      }
      goto L_08A531A8;
    }
L_08A531A8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(15) ? 1u : 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-15));
        goto L_08A531DC;
    }
    goto L_08A531C0;
L_08A531C0:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(44));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = aot_fpr_13 - aot_fpr_14;
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
      if (branch_taken) {
          goto L_08A531F4;
      }
      goto L_08A531DC;
    }
L_08A531DC:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(44));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = aot_fpr_13 - aot_fpr_14;
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    goto L_08A531F4;
L_08A531F4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A5320C;
      }
      goto L_08A53200;
    }
L_08A53200:
    aot_gpr_5 = (0u | 15u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_gpr_6 = (0u | 15u);
    goto L_08A5320C;
L_08A5320C:
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_5);
      if (branch_taken) {
          goto L_08A53228;
      }
      goto L_08A5321C;
    }
L_08A5321C:
    aot_gpr_5 = (0u | 15u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_gpr_6 = (0u | 15u);
    goto L_08A53228;
L_08A53228:
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[7] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_6;
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
      if (branch_taken) {
          goto L_08A5325C;
      }
      goto L_08A53240;
    }
L_08A53240:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    goto L_08A5325C;
L_08A5325C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08A532A0;
      }
      goto L_08A53264;
    }
L_08A53264:
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A5328C;
      }
      goto L_08A53280;
    }
L_08A53280:
    aot_gpr_5 = (0u | 15u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_gpr_6 = (0u | 15u);
    goto L_08A5328C;
L_08A5328C:
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_5 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08A532A0;
L_08A532A0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A532B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A53330;
      }
      goto L_08A532F4;
    }
L_08A532F4:
    aot_gpr_5 = (ctx.gpr[17] & 255u);
    aot_gpr_31 = (0x08A53300u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A53098;
L_08A53300:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A532F4;
      }
      goto L_08A53330;
    }
L_08A53330:
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
L_08A53344:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08A5336Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 278u, 0x08A89478u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5336Cu) goto L_08A5336C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5336C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    aot_gpr_31 = (0x08A5337Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 278u, 0x08A89478u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5337Cu) goto L_08A5337C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5337C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), aot_gpr_2);
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
L_08A53394:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08A533B0u);
    aot_gpr_5 = (0u | 0u);
    goto L_08A533D0;
L_08A533B0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A533C0u);
    aot_gpr_5 = (0u | 1u);
    goto L_08A533D0;
L_08A533C0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A533D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (aot_gpr_5 & 255u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A534B0;
      }
      goto L_08A53434;
    }
L_08A53434:
    aot_gpr_5 = (ctx.gpr[20] & 255u);
    aot_gpr_31 = (0x08A53440u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08A53098;
L_08A53440:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08A53450u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53450u) goto L_08A53450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53450:
    if (aot_gpr_2 != ctx.gpr[21]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_08A53484;
    }
    goto L_08A53458;
L_08A53458:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08A53468u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 357u, 0x08A89998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53468u) goto L_08A53468;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53468:
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_08A53484;
    }
    goto L_08A53470;
L_08A53470:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08A53480u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 330u, 0x08A897C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53480u) goto L_08A53480;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53480:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_08A53484;
L_08A53484:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A53434;
      }
      goto L_08A534B0;
    }
L_08A534B0:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(116));
    aot_gpr_31 = (0x08A534BCu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 759u, 0x08933F0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A534BCu) goto L_08A534BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A534BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(40));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A534D4u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A534D4u) goto L_08A534D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A534D4:
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
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A534F8:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A53500:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_gpr_5 = (aot_gpr_4 & 128u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A53534;
      }
      goto L_08A5352C;
    }
L_08A5352C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A53618;
      }
      goto L_08A53534;
    }
L_08A53534:
    aot_gpr_4 = (aot_gpr_4 | 128u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[17] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A53618;
      }
      goto L_08A53550;
    }
L_08A53550:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A53590;
      }
      goto L_08A53568;
    }
L_08A53568:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A53590;
      }
      goto L_08A53574;
    }
L_08A53574:
    aot_gpr_31 = (0x08A5357Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5357Cu) goto L_08A5357C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5357C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A53590;
L_08A53590:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08A535F4;
      }
      goto L_08A5359C;
    }
L_08A5359C:
    aot_gpr_31 = (0x08A535A4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A535A4u) goto L_08A535A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A535A4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A535F4;
      }
      goto L_08A535AC;
    }
L_08A535AC:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A535B8u);
    aot_gpr_5 = (0u | 46u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A535B8u) goto L_08A535B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A535B8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A535CC;
      }
      goto L_08A535C4;
    }
L_08A535C4:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    goto L_08A535CC;
L_08A535CC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08A535D8u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A535D8u) goto L_08A535D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A535D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_5 + ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A53608;
      }
      goto L_08A535F4;
    }
L_08A535F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A53608;
L_08A53608:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[17] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A53550;
      }
      goto L_08A53618;
    }
L_08A53618:
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
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A53634:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A53670;
      }
      goto L_08A53658;
    }
L_08A53658:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08A53664u);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[16]);
    goto L_08A53500;
L_08A53664:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_08A53658;
      }
      goto L_08A53670;
    }
L_08A53670:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A53688:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08A536A0u);
    aot_gpr_5 = (0u | 0u);
    goto L_08A534F8;
L_08A536A0:
    aot_gpr_31 = (0x08A536A8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A53500;
L_08A536A8:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A536B8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_gpr_5 = (2213u << 16u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08A536D8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(13560));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A536D8u) goto L_08A536D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A536D8:
    aot_gpr_31 = (0x08A536E0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A53634;
L_08A536E0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A536F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_gpr_31 = (0x08A53718u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 556u, 0x08AAEAFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53718u) goto L_08A53718;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53718:
    aot_gpr_4 = (97u << 16u);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(-31744));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A53730u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53730u) goto L_08A53730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53730:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A53740u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(7048));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53740u) goto L_08A53740;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53740:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    ctx.gpr[20] = (ctx.gpr[17] + ctx.gpr[16]);
    aot_gpr_31 = (0x08A53750u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53750u) goto L_08A53750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53750:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(15));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    ctx.gpr[20] = (ctx.gpr[20] - aot_gpr_4);
    aot_gpr_31 = (0x08A53768u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53768u) goto L_08A53768;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53768:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A53778u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53778u) goto L_08A53778;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53778:
    aot_gpr_31 = (0x08A53780u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53780u) goto L_08A53780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53780:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A53794u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 694u, 0x0893681Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53794u) goto L_08A53794;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53794:
    aot_gpr_4 = (18260u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16711));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08A537B4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 285u, 0x08A3137Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A537B4u) goto L_08A537B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A537B4:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (0u < ctx.gpr[17] ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_2);
      if (branch_taken) {
          goto L_08A53894;
      }
      goto L_08A537C8;
    }
L_08A537C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27440), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-15968), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-15964), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-15952), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-15980), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-15984), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9980), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5428), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25488), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (0x08A5383Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 167u, 0x08AECA10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5383Cu) goto L_08A5383C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5383C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(104), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr_31 = (0x08A53850u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 694u, 0x08AAF304u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53850u) goto L_08A53850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53850:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24056), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr_31 = (0x08A53864u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 341u, 0x08809A78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53864u) goto L_08A53864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53864:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11144), aot_gpr_4);
    aot_gpr_31 = (0x08A53874u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 564u, 0x08AA25D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53874u) goto L_08A53874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53874:
    aot_gpr_31 = (0x08A5387Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 524u, 0x08AD30F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5387Cu) goto L_08A5387C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5387C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08A5389C;
      }
      goto L_08A5388C;
    }
L_08A5388C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
      if (branch_taken) {
          goto L_08A538A8;
      }
      goto L_08A53894;
    }
L_08A53894:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A53A48;
      }
      goto L_08A5389C;
    }
L_08A5389C:
    aot_gpr_31 = (0x08A538A4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A538A4u) goto L_08A538A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A538A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08A538A8;
L_08A538A8:
    aot_gpr_31 = (0x08A538B0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 548u, 0x0893E20Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A538B0u) goto L_08A538B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A538B0:
    aot_gpr_31 = (0x08A538B8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 653u, 0x089AB1E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A538B8u) goto L_08A538B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A538B8:
    aot_gpr_31 = (0x08A538C0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 391u, 0x088B9D24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A538C0u) goto L_08A538C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A538C0:
    aot_gpr_31 = (0x08A538C8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 393u, 0x088B9D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A538C8u) goto L_08A538C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A538C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
        goto L_08A538E0;
    }
    goto L_08A538D4;
L_08A538D4:
    aot_gpr_31 = (0x08A538DCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 333u, 0x08B656D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A538DCu) goto L_08A538DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A538DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    goto L_08A538E0;
L_08A538E0:
    aot_gpr_31 = (0x08A538E8u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 709u, 0x08903F08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A538E8u) goto L_08A538E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A538E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5904)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5904)));
        goto L_08A53900;
    }
    goto L_08A538F4;
L_08A538F4:
    aot_gpr_31 = (0x08A538FCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 324u, 0x08B6A238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A538FCu) goto L_08A538FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A538FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5904)));
    goto L_08A53900;
L_08A53900:
    aot_gpr_31 = (0x08A53908u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 318u, 0x088C59F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53908u) goto L_08A53908;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53908:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    aot_gpr_31 = (0x08A53914u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 432u, 0x08AAE3B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53914u) goto L_08A53914;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53914:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(128)));
    aot_gpr_31 = (0x08A53920u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 434u, 0x08B11EECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53920u) goto L_08A53920;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53920:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(136)));
    aot_gpr_31 = (0x08A5392Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 16u, 0x08AF80F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5392Cu) goto L_08A5392C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5392C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
    aot_gpr_6 = (0u | 11248u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1548), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9984), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08A53950u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53950u) goto L_08A53950;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53950:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11840), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8816), aot_gpr_4);
    aot_gpr_31 = (0x08A53968u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 732u, 0x08B1FD68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53968u) goto L_08A53968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53968:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08A53980;
    }
    goto L_08A53974;
L_08A53974:
    aot_gpr_31 = (0x08A5397Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5397Cu) goto L_08A5397C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5397C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08A53980;
L_08A53980:
    aot_gpr_31 = (0x08A53988u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 583u, 0x089BABC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53988u) goto L_08A53988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53988:
    aot_gpr_31 = (0x08A53990u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(168)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 526u, 0x088AB604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53990u) goto L_08A53990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53990:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
        goto L_08A539A8;
    }
    goto L_08A5399C;
L_08A5399C:
    aot_gpr_31 = (0x08A539A4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A539A4u) goto L_08A539A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A539A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_08A539A8;
L_08A539A8:
    aot_gpr_31 = (0x08A539B0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(172)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 92u, 0x0884C8D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A539B0u) goto L_08A539B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A539B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x08A539BCu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 137u, 0x08AEC884u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A539BCu) goto L_08A539BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A539BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08A539D4;
    }
    goto L_08A539C8;
L_08A539C8:
    aot_gpr_31 = (0x08A539D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A539D0u) goto L_08A539D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A539D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A539D4;
L_08A539D4:
    aot_gpr_31 = (0x08A539DCu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 615u, 0x0880EFFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A539DCu) goto L_08A539DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A539DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    aot_gpr_31 = (0x08A539E8u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0086_entry, 86u, 305u, 0x0895DF84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A539E8u) goto L_08A539E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A539E8:
    aot_gpr_31 = (0x08A539F0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0126_entry, 126u, 394u, 0x089FD9F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A539F0u) goto L_08A539F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A539F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328), aot_gpr_4);
      if (branch_taken) {
          goto L_08A53A18;
      }
      goto L_08A53A00;
    }
L_08A53A00:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08A53A10u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53A10u) goto L_08A53A10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53A10:
    aot_gpr_31 = (0x08A53A18u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6224));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53A18u) goto L_08A53A18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53A18:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    aot_gpr_31 = (0x08A53A24u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 612u, 0x0882E9BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53A24u) goto L_08A53A24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53A24:
    aot_gpr_31 = (0x08A53A2Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 86u, 0x08B0C640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53A2Cu) goto L_08A53A2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53A2C:
    aot_gpr_31 = (0x08A53A34u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 88u, 0x08B0C650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53A34u) goto L_08A53A34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53A34:
    aot_gpr_31 = (0x08A53A3Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0193_entry, 193u, 703u, 0x08B0BFA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53A3Cu) goto L_08A53A3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53A3C:
    aot_gpr_31 = (0x08A53A44u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 327u, 0x088099B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53A44u) goto L_08A53A44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53A44:
    aot_gpr_2 = (ctx.gpr[18] | 0u);
    goto L_08A53A48;
L_08A53A48:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A53A68:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A53A84u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 585u, 0x08A56820u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53A84u) goto L_08A53A84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53A84:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A53A90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A53AD0;
      }
      goto L_08A53AC8;
    }
L_08A53AC8:
    aot_gpr_31 = (0x08A53AD0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53AD0u) goto L_08A53AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53AD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A53AECu);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 640u, 0x08A56C00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53AECu) goto L_08A53AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53AEC:
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
L_08A53B0C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A53B4C;
      }
      goto L_08A53B44;
    }
L_08A53B44:
    aot_gpr_31 = (0x08A53B4Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53B4Cu) goto L_08A53B4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53B4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A53B68u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 684u, 0x08A56F50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53B68u) goto L_08A53B68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53B68:
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
L_08A53B88:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-6096)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A53BB4;
      }
      goto L_08A53B9C;
    }
L_08A53B9C:
    aot_gpr_31 = (0x08A53BA4u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-6096), static_cast<std::uint8_t>(0u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 763u, 0x08B1B388u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53BA4u) goto L_08A53BA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53BA4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-6096), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08A53BB4u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B73524u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53BB4:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A53BC4:
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A53BE8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A53C18u);
    aot_gpr_6 = (0u | 1064u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53C18u) goto L_08A53C18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53C18:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(2100));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A53C28u);
    aot_gpr_6 = (0u | 1064u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53C28u) goto L_08A53C28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53C28:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(1156));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A53C38u);
    aot_gpr_6 = (0u | 938u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53C38u) goto L_08A53C38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53C38:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3164), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), 0u);
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(7096));
    aot_gpr_5 = (2213u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(15240));
    ctx.gpr[7] = (0u | 32768u);
    aot_gpr_6 = (0u | 16u);
    ctx.gpr[8] = (0u | 16384u);
    aot_gpr_31 = (0x08A53C78u);
    ctx.gpr[9] = (0u | 0u);
    ctx.pc = 0x08B734B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53C78:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A53C8Cu);
    aot_gpr_6 = (0u | 0u);
    ctx.pc = 0x08B73464u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53C8C:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6184)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6180)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A53CACu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 299u, 0x08A55324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53CACu) goto L_08A53CAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53CAC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A53CC4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_31 = (0x08A53CDCu);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53CDCu) goto L_08A53CDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53CDC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08A53D34;
      }
      goto L_08A53CE4;
    }
L_08A53CE4:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(7120));
    aot_gpr_31 = (0x08A53CF4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53CF4u) goto L_08A53CF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53CF4:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A53D04u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53D04u) goto L_08A53D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53D04:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A53D10u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 542u, 0x08A564A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53D10u) goto L_08A53D10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53D10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A53D2C;
      }
      goto L_08A53D20;
    }
L_08A53D20:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08A53D2Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53D2Cu) goto L_08A53D2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53D2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A53F18;
      }
      goto L_08A53D34;
    }
L_08A53D34:
    aot_gpr_31 = (0x08A53D3Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 575u, 0x08A56714u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53D3Cu) goto L_08A53D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53D3C:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(2100));
    aot_gpr_31 = (0x08A53D4Cu);
    aot_gpr_6 = (0u | 1064u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53D4Cu) goto L_08A53D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53D4C:
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[8]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A53ECC;
      }
      goto L_08A53D5C;
    }
L_08A53D5C:
    aot_gpr_4 = (ctx.gpr[8] << 4u);
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2100)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[8] << 4u);
      if (branch_taken) {
          goto L_08A53DC4;
      }
      goto L_08A53D80;
    }
L_08A53D80:
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2248));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 51 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A53DC4;
      }
      goto L_08A53DAC;
    }
L_08A53DAC:
    aot_gpr_4 = (ctx.gpr[8] << 4u);
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(2100), 0u);
    goto L_08A53DC4;
L_08A53DC4:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_6) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A53E7C;
      }
      goto L_08A53DD4;
    }
L_08A53DD4:
    aot_gpr_4 = (ctx.gpr[8] << 4u);
    goto L_08A53DD8;
L_08A53DD8:
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 << 3u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2122));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A53E54;
      }
      goto L_08A53E2C;
    }
L_08A53E2C:
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A53E54;
      }
      goto L_08A53E40;
    }
L_08A53E40:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[9];
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A53E58;
      }
      goto L_08A53E50;
    }
L_08A53E50:
    aot_gpr_4 = (0u | 1u);
    goto L_08A53E54;
L_08A53E54:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A53E58;
L_08A53E58:
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A53E6C;
      }
      goto L_08A53E68;
    }
L_08A53E68:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A53E6C;
L_08A53E6C:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_6) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[8] << 4u);
      if (branch_taken) {
          goto L_08A53DD8;
      }
      goto L_08A53E7C;
    }
L_08A53E7C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (ctx.gpr[8] << 4u);
      if (branch_taken) {
          goto L_08A53EBC;
      }
      goto L_08A53E84;
    }
L_08A53E84:
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2100)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A53EBC;
      }
      goto L_08A53EA4;
    }
L_08A53EA4:
    aot_gpr_4 = (ctx.gpr[8] << 4u);
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(2100), 0u);
    goto L_08A53EBC;
L_08A53EBC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[8]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A53D5C;
      }
      goto L_08A53ECC;
    }
L_08A53ECC:
    aot_gpr_31 = (0x08A53ED4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 577u, 0x08A56738u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53ED4u) goto L_08A53ED4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53ED4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
      if (branch_taken) {
          goto L_08A53EEC;
      }
      goto L_08A53EE4;
    }
L_08A53EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A53F10;
      }
      goto L_08A53EEC;
    }
L_08A53EEC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    goto L_08A53F10;
L_08A53F10:
    jump_target = ctx.gpr[16];
    aot_gpr_31 = (0x08A53F18u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53F18u) goto L_08A53F18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53F18:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A53F2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A53F68;
      }
      goto L_08A53F48;
    }
L_08A53F48:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_08A53F6C;
    }
    goto L_08A53F54;
L_08A53F54:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (2213u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(21956));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A53F70;
      }
      goto L_08A53F68;
    }
L_08A53F68:
    aot_gpr_4 = (0u | 1u);
    goto L_08A53F6C;
L_08A53F6C:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A53F70;
L_08A53F70:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A53F94;
      }
      goto L_08A53F78;
    }
L_08A53F78:
    aot_gpr_31 = (0x08A53F80u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B735B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53F80:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A53FB8;
      }
      goto L_08A53F8C;
    }
L_08A53F8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_08A53F9C;
      }
      goto L_08A53F94;
    }
L_08A53F94:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 3u, 0x08A54024u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A53F9C;
    }
L_08A53F9C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A53FB8;
      }
      goto L_08A53FA4;
    }
L_08A53FA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (2213u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21964));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A53FF0;
      }
      goto L_08A53FB8;
    }
L_08A53FB8:
    aot_gpr_31 = (0x08A53FC0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 255u, 0x08A54FE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53FC0u) goto L_08A53FC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53FC0:
    aot_gpr_31 = (0x08A53FC8u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 99u, 0x08A3C804u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53FC8u) goto L_08A53FC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53FC8:
    aot_gpr_31 = (0x08A53FD0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 293u, 0x08A552D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A53FD0u) goto L_08A53FD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53FD0:
    aot_gpr_31 = (0x08A53FD8u);
    ctx.pc = 0x08B72FD4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53FD8:
    aot_gpr_31 = (0x08A53FE0u);
    ctx.pc = 0x08B7302Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53FE0:
    aot_gpr_31 = (0x08A53FE8u);
    ctx.pc = 0x08B73064u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53FE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 1u, 0x08A54004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A53FF0;
    }
L_08A53FF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08A53FFCu);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B7346Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A53FFC:
    aot_gpr_31 = (0x08A54004u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B7349Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0147(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0147_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_147(Runtime &runtime) {
    runtime.register_generated_unit(147u, 0x08A50000u, 16384u, &recomp_unit_0147, &recomp_unit_0147_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08A50000u, &recomp_unit_0147, "recomp_unit_0147",
                                          kEntryMasks_recomp_unit_0147, 64u);
}
} // namespace psprecomp
