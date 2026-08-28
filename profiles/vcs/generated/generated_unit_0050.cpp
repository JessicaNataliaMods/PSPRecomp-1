#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0050[64] = {
    0x9082900204009209ull, 0x1220B05043048090ull, 0x0820050921008200ull, 0x0020881120001220ull,
    0x0200480204001440ull, 0x2005400600002801ull, 0x1480102004904800ull, 0x0582821824048484ull,
    0x0400890804100091ull, 0x0840800480004401ull, 0x10024824001002A0ull, 0x0C120242420A4008ull,
    0x200140000090C141ull, 0x8000008000D22A44ull, 0x000044D00292A448ull, 0x20000208080A8444ull,
    0x0458282182821422ull, 0x8001245214000022ull, 0x1200100016000082ull, 0x202C1410C1410A94ull,
    0xA8000820A2045842ull, 0x0081010000801498ull, 0x0092002444A23500ull, 0x4804408A50102002ull,
    0x00891408810C4284ull, 0x64A44000A8002000ull, 0x820011001000440Aull, 0x8A40020340010884ull,
    0x11288A5241295400ull, 0x1532A95492251488ull, 0x2A8AA08854054020ull, 0x088A2450A1448A14ull,
    0x1000150210861143ull, 0x45482A8001011041ull, 0x0A00444220142201ull, 0x04402885044000AAull,
    0x2200084241100022ull, 0x04A0801008825448ull, 0x09A0000000200680ull, 0x9110009480849148ull,
    0x0352490100DA92B4ull, 0x4040451280001000ull, 0x82A88D912080A110ull, 0x0884484140C4A444ull,
    0x010A01204A212010ull, 0x0192890091341492ull, 0x204048052051A84Aull, 0x1A11012234B204ADull,
    0x1000901044083088ull, 0x2041028050841641ull, 0x022108010480558Aull, 0x0A2902A480A51A48ull,
    0x22204090482212C4ull, 0xA801044000885112ull, 0x8042204008220181ull, 0x4000800020384056ull,
    0x140208AA14024454ull, 0x00044008810002AAull, 0x000101A000100408ull, 0x8A08442A08209200ull,
    0x8C0B0502960A052Aull, 0x4240020804400441ull, 0x8000321200005010ull, 0x10001A0064051084ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0050[64] = {
    1u, 14u, 29u, 39u, 48u, 56u, 65u, 75u, 90u, 100u, 108u, 118u, 131u, 141u, 152u, 166u,
    176u, 192u, 203u, 211u, 228u, 242u, 251u, 265u, 277u, 291u, 302u, 311u, 323u, 341u, 364u, 381u,
    399u, 413u, 427u, 439u, 452u, 462u, 475u, 483u, 498u, 519u, 528u, 546u, 562u, 574u, 592u, 608u,
    629u, 640u, 654u, 668u, 687u, 702u, 715u, 726u, 737u, 753u, 763u, 770u, 784u, 804u, 814u, 823u,
};
void recomp_unit_0050_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,6,16,7,29 fprs=12,13,20,14 gpr_occ=3356 fpr_occ=1455 gpr_total=4534 fpr_total=1872
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_7 = ctx.gpr[7];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[6] = aot_gpr_6; ctx.gpr[16] = aot_gpr_16; ctx.gpr[7] = aot_gpr_7; ctx.gpr[29] = aot_gpr_29; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_7 = ctx.gpr[7]; aot_gpr_29 = ctx.gpr[29]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088CC000u;
        entry_id = 0u;
        if (entry_delta < 16372u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0050[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0050[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_088CC000;
    case 2u: goto L_088CC00C;
    case 3u: goto L_088CC024;
    case 4u: goto L_088CC030;
    case 5u: goto L_088CC03C;
    case 6u: goto L_088CC068;
    case 7u: goto L_088CC084;
    case 8u: goto L_088CC0B0;
    case 9u: goto L_088CC0BC;
    case 10u: goto L_088CC0C4;
    case 11u: goto L_088CC0DC;
    case 12u: goto L_088CC0F0;
    case 13u: goto L_088CC0FC;
    case 14u: goto L_088CC110;
    case 15u: goto L_088CC11C;
    case 16u: goto L_088CC13C;
    case 17u: goto L_088CC148;
    case 18u: goto L_088CC160;
    case 19u: goto L_088CC164;
    case 20u: goto L_088CC178;
    case 21u: goto L_088CC190;
    case 22u: goto L_088CC198;
    case 23u: goto L_088CC1B0;
    case 24u: goto L_088CC1B4;
    case 25u: goto L_088CC1BC;
    case 26u: goto L_088CC1D4;
    case 27u: goto L_088CC1E4;
    case 28u: goto L_088CC1F0;
    case 29u: goto L_088CC224;
    case 30u: goto L_088CC23C;
    case 31u: goto L_088CC260;
    case 32u: goto L_088CC274;
    case 33u: goto L_088CC280;
    case 34u: goto L_088CC28C;
    case 35u: goto L_088CC2A0;
    case 36u: goto L_088CC2A8;
    case 37u: goto L_088CC2D4;
    case 38u: goto L_088CC2EC;
    case 39u: goto L_088CC314;
    case 40u: goto L_088CC324;
    case 41u: goto L_088CC330;
    case 42u: goto L_088CC374;
    case 43u: goto L_088CC380;
    case 44u: goto L_088CC390;
    case 45u: goto L_088CC3AC;
    case 46u: goto L_088CC3BC;
    case 47u: goto L_088CC3D4;
    case 48u: goto L_088CC418;
    case 49u: goto L_088CC428;
    case 50u: goto L_088CC430;
    case 51u: goto L_088CC468;
    case 52u: goto L_088CC484;
    case 53u: goto L_088CC4AC;
    case 54u: goto L_088CC4B8;
    case 55u: goto L_088CC4E4;
    case 56u: goto L_088CC500;
    case 57u: goto L_088CC52C;
    case 58u: goto L_088CC534;
    case 59u: goto L_088CC584;
    case 60u: goto L_088CC588;
    case 61u: goto L_088CC5B8;
    case 62u: goto L_088CC5C0;
    case 63u: goto L_088CC5C8;
    case 64u: goto L_088CC5F4;
    case 65u: goto L_088CC62C;
    case 66u: goto L_088CC638;
    case 67u: goto L_088CC650;
    case 68u: goto L_088CC65C;
    case 69u: goto L_088CC668;
    case 70u: goto L_088CC694;
    case 71u: goto L_088CC6B0;
    case 72u: goto L_088CC6DC;
    case 73u: goto L_088CC6E8;
    case 74u: goto L_088CC6F0;
    case 75u: goto L_088CC708;
    case 76u: goto L_088CC71C;
    case 77u: goto L_088CC728;
    case 78u: goto L_088CC73C;
    case 79u: goto L_088CC748;
    case 80u: goto L_088CC768;
    case 81u: goto L_088CC774;
    case 82u: goto L_088CC78C;
    case 83u: goto L_088CC790;
    case 84u: goto L_088CC7A4;
    case 85u: goto L_088CC7BC;
    case 86u: goto L_088CC7C4;
    case 87u: goto L_088CC7DC;
    case 88u: goto L_088CC7E0;
    case 89u: goto L_088CC7E8;
    case 90u: goto L_088CC800;
    case 91u: goto L_088CC810;
    case 92u: goto L_088CC81C;
    case 93u: goto L_088CC850;
    case 94u: goto L_088CC868;
    case 95u: goto L_088CC88C;
    case 96u: goto L_088CC8A0;
    case 97u: goto L_088CC8AC;
    case 98u: goto L_088CC8BC;
    case 99u: goto L_088CC8E8;
    case 100u: goto L_088CC900;
    case 101u: goto L_088CC928;
    case 102u: goto L_088CC938;
    case 103u: goto L_088CC97C;
    case 104u: goto L_088CC988;
    case 105u: goto L_088CC9BC;
    case 106u: goto L_088CC9D8;
    case 107u: goto L_088CC9EC;
    case 108u: goto L_088CCA14;
    case 109u: goto L_088CCA1C;
    case 110u: goto L_088CCA24;
    case 111u: goto L_088CCA50;
    case 112u: goto L_088CCA88;
    case 113u: goto L_088CCA94;
    case 114u: goto L_088CCAAC;
    case 115u: goto L_088CCAB8;
    case 116u: goto L_088CCAC4;
    case 117u: goto L_088CCAF0;
    case 118u: goto L_088CCB0C;
    case 119u: goto L_088CCB38;
    case 120u: goto L_088CCB44;
    case 121u: goto L_088CCB4C;
    case 122u: goto L_088CCB64;
    case 123u: goto L_088CCB78;
    case 124u: goto L_088CCB84;
    case 125u: goto L_088CCB98;
    case 126u: goto L_088CCBA4;
    case 127u: goto L_088CCBC4;
    case 128u: goto L_088CCBD0;
    case 129u: goto L_088CCBE8;
    case 130u: goto L_088CCBEC;
    case 131u: goto L_088CCC00;
    case 132u: goto L_088CCC18;
    case 133u: goto L_088CCC20;
    case 134u: goto L_088CCC38;
    case 135u: goto L_088CCC3C;
    case 136u: goto L_088CCC50;
    case 137u: goto L_088CCC5C;
    case 138u: goto L_088CCCB8;
    case 139u: goto L_088CCCC0;
    case 140u: goto L_088CCCF4;
    case 141u: goto L_088CCD08;
    case 142u: goto L_088CCD18;
    case 143u: goto L_088CCD24;
    case 144u: goto L_088CCD2C;
    case 145u: goto L_088CCD34;
    case 146u: goto L_088CCD44;
    case 147u: goto L_088CCD50;
    case 148u: goto L_088CCD58;
    case 149u: goto L_088CCD5C;
    case 150u: goto L_088CCD9C;
    case 151u: goto L_088CCDFC;
    case 152u: goto L_088CCE0C;
    case 153u: goto L_088CCE18;
    case 154u: goto L_088CCE28;
    case 155u: goto L_088CCE34;
    case 156u: goto L_088CCE3C;
    case 157u: goto L_088CCE44;
    case 158u: goto L_088CCE50;
    case 159u: goto L_088CCE5C;
    case 160u: goto L_088CCE64;
    case 161u: goto L_088CCE90;
    case 162u: goto L_088CCE98;
    case 163u: goto L_088CCE9C;
    case 164u: goto L_088CCEA8;
    case 165u: goto L_088CCEB8;
    case 166u: goto L_088CCF08;
    case 167u: goto L_088CCF18;
    case 168u: goto L_088CCF28;
    case 169u: goto L_088CCF3C;
    case 170u: goto L_088CCF44;
    case 171u: goto L_088CCF4C;
    case 172u: goto L_088CCF6C;
    case 173u: goto L_088CCF8C;
    case 174u: goto L_088CCFA4;
    case 175u: goto L_088CCFF4;
    case 176u: goto L_088CD004;
    case 177u: goto L_088CD014;
    case 178u: goto L_088CD028;
    case 179u: goto L_088CD030;
    case 180u: goto L_088CD044;
    case 181u: goto L_088CD05C;
    case 182u: goto L_088CD064;
    case 183u: goto L_088CD07C;
    case 184u: goto L_088CD080;
    case 185u: goto L_088CD094;
    case 186u: goto L_088CD0AC;
    case 187u: goto L_088CD0B4;
    case 188u: goto L_088CD0CC;
    case 189u: goto L_088CD0D0;
    case 190u: goto L_088CD0D8;
    case 191u: goto L_088CD0E8;
    case 192u: goto L_088CD104;
    case 193u: goto L_088CD114;
    case 194u: goto L_088CD168;
    case 195u: goto L_088CD170;
    case 196u: goto L_088CD184;
    case 197u: goto L_088CD190;
    case 198u: goto L_088CD198;
    case 199u: goto L_088CD1A8;
    case 200u: goto L_088CD1B4;
    case 201u: goto L_088CD1C0;
    case 202u: goto L_088CD1FC;
    case 203u: goto L_088CD204;
    case 204u: goto L_088CD21C;
    case 205u: goto L_088CD264;
    case 206u: goto L_088CD268;
    case 207u: goto L_088CD270;
    case 208u: goto L_088CD2B0;
    case 209u: goto L_088CD2E4;
    case 210u: goto L_088CD2F0;
    case 211u: goto L_088CD308;
    case 212u: goto L_088CD310;
    case 213u: goto L_088CD31C;
    case 214u: goto L_088CD324;
    case 215u: goto L_088CD32C;
    case 216u: goto L_088CD340;
    case 217u: goto L_088CD358;
    case 218u: goto L_088CD360;
    case 219u: goto L_088CD378;
    case 220u: goto L_088CD37C;
    case 221u: goto L_088CD390;
    case 222u: goto L_088CD3A8;
    case 223u: goto L_088CD3B0;
    case 224u: goto L_088CD3C8;
    case 225u: goto L_088CD3CC;
    case 226u: goto L_088CD3D4;
    case 227u: goto L_088CD3F4;
    case 228u: goto L_088CD404;
    case 229u: goto L_088CD418;
    case 230u: goto L_088CD42C;
    case 231u: goto L_088CD430;
    case 232u: goto L_088CD438;
    case 233u: goto L_088CD448;
    case 234u: goto L_088CD464;
    case 235u: goto L_088CD474;
    case 236u: goto L_088CD47C;
    case 237u: goto L_088CD494;
    case 238u: goto L_088CD4AC;
    case 239u: goto L_088CD4EC;
    case 240u: goto L_088CD4F4;
    case 241u: goto L_088CD4FC;
    case 242u: goto L_088CD50C;
    case 243u: goto L_088CD510;
    case 244u: goto L_088CD51C;
    case 245u: goto L_088CD528;
    case 246u: goto L_088CD530;
    case 247u: goto L_088CD55C;
    case 248u: goto L_088CD5A0;
    case 249u: goto L_088CD5C0;
    case 250u: goto L_088CD5DC;
    case 251u: goto L_088CD620;
    case 252u: goto L_088CD628;
    case 253u: goto L_088CD630;
    case 254u: goto L_088CD634;
    case 255u: goto L_088CD644;
    case 256u: goto L_088CD654;
    case 257u: goto L_088CD65C;
    case 258u: goto L_088CD668;
    case 259u: goto L_088CD678;
    case 260u: goto L_088CD688;
    case 261u: goto L_088CD694;
    case 262u: goto L_088CD6C4;
    case 263u: goto L_088CD6D0;
    case 264u: goto L_088CD6DC;
    case 265u: goto L_088CD704;
    case 266u: goto L_088CD734;
    case 267u: goto L_088CD750;
    case 268u: goto L_088CD770;
    case 269u: goto L_088CD778;
    case 270u: goto L_088CD784;
    case 271u: goto L_088CD78C;
    case 272u: goto L_088CD79C;
    case 273u: goto L_088CD7B8;
    case 274u: goto L_088CD7C8;
    case 275u: goto L_088CD7EC;
    case 276u: goto L_088CD7F8;
    case 277u: goto L_088CD808;
    case 278u: goto L_088CD81C;
    case 279u: goto L_088CD824;
    case 280u: goto L_088CD838;
    case 281u: goto L_088CD848;
    case 282u: goto L_088CD84C;
    case 283u: goto L_088CD860;
    case 284u: goto L_088CD87C;
    case 285u: goto L_088CD88C;
    case 286u: goto L_088CD8A8;
    case 287u: goto L_088CD8B0;
    case 288u: goto L_088CD8C0;
    case 289u: goto L_088CD8CC;
    case 290u: goto L_088CD8DC;
    case 291u: goto L_088CD934;
    case 292u: goto L_088CD96C;
    case 293u: goto L_088CD974;
    case 294u: goto L_088CD97C;
    case 295u: goto L_088CD9B8;
    case 296u: goto L_088CD9C8;
    case 297u: goto L_088CD9D4;
    case 298u: goto L_088CD9DC;
    case 299u: goto L_088CD9E8;
    case 300u: goto L_088CD9F4;
    case 301u: goto L_088CD9F8;
    case 302u: goto L_088CDA04;
    case 303u: goto L_088CDA0C;
    case 304u: goto L_088CDA28;
    case 305u: goto L_088CDA38;
    case 306u: goto L_088CDA70;
    case 307u: goto L_088CDAA0;
    case 308u: goto L_088CDAB0;
    case 309u: goto L_088CDAE4;
    case 310u: goto L_088CDAFC;
    case 311u: goto L_088CDB08;
    case 312u: goto L_088CDB1C;
    case 313u: goto L_088CDB2C;
    case 314u: goto L_088CDB40;
    case 315u: goto L_088CDB78;
    case 316u: goto L_088CDB80;
    case 317u: goto L_088CDB84;
    case 318u: goto L_088CDBA4;
    case 319u: goto L_088CDBD8;
    case 320u: goto L_088CDBE4;
    case 321u: goto L_088CDBEC;
    case 322u: goto L_088CDBFC;
    case 323u: goto L_088CDC28;
    case 324u: goto L_088CDC30;
    case 325u: goto L_088CDC38;
    case 326u: goto L_088CDC40;
    case 327u: goto L_088CDC4C;
    case 328u: goto L_088CDC54;
    case 329u: goto L_088CDC60;
    case 330u: goto L_088CDC78;
    case 331u: goto L_088CDC84;
    case 332u: goto L_088CDC90;
    case 333u: goto L_088CDC98;
    case 334u: goto L_088CDCA4;
    case 335u: goto L_088CDCAC;
    case 336u: goto L_088CDCBC;
    case 337u: goto L_088CDCCC;
    case 338u: goto L_088CDCD4;
    case 339u: goto L_088CDCE0;
    case 340u: goto L_088CDCF0;
    case 341u: goto L_088CDD0C;
    case 342u: goto L_088CDD1C;
    case 343u: goto L_088CDD28;
    case 344u: goto L_088CDD30;
    case 345u: goto L_088CDD40;
    case 346u: goto L_088CDD48;
    case 347u: goto L_088CDD54;
    case 348u: goto L_088CDD64;
    case 349u: goto L_088CDD70;
    case 350u: goto L_088CDD7C;
    case 351u: goto L_088CDD88;
    case 352u: goto L_088CDD90;
    case 353u: goto L_088CDD98;
    case 354u: goto L_088CDDA0;
    case 355u: goto L_088CDDAC;
    case 356u: goto L_088CDDB4;
    case 357u: goto L_088CDDBC;
    case 358u: goto L_088CDDC4;
    case 359u: goto L_088CDDD0;
    case 360u: goto L_088CDDD4;
    case 361u: goto L_088CDDE0;
    case 362u: goto L_088CDDE8;
    case 363u: goto L_088CDDF0;
    case 364u: goto L_088CDE14;
    case 365u: goto L_088CDE38;
    case 366u: goto L_088CDE40;
    case 367u: goto L_088CDE48;
    case 368u: goto L_088CDE68;
    case 369u: goto L_088CDE70;
    case 370u: goto L_088CDE78;
    case 371u: goto L_088CDE8C;
    case 372u: goto L_088CDE9C;
    case 373u: goto L_088CDEB4;
    case 374u: goto L_088CDEBC;
    case 375u: goto L_088CDEC4;
    case 376u: goto L_088CDECC;
    case 377u: goto L_088CDEDC;
    case 378u: goto L_088CDEE4;
    case 379u: goto L_088CDEEC;
    case 380u: goto L_088CDEF4;
    case 381u: goto L_088CDF08;
    case 382u: goto L_088CDF10;
    case 383u: goto L_088CDF24;
    case 384u: goto L_088CDF2C;
    case 385u: goto L_088CDF3C;
    case 386u: goto L_088CDF48;
    case 387u: goto L_088CDF58;
    case 388u: goto L_088CDF60;
    case 389u: goto L_088CDF74;
    case 390u: goto L_088CDF7C;
    case 391u: goto L_088CDF90;
    case 392u: goto L_088CDF98;
    case 393u: goto L_088CDFA8;
    case 394u: goto L_088CDFB4;
    case 395u: goto L_088CDFC4;
    case 396u: goto L_088CDFCC;
    case 397u: goto L_088CDFDC;
    case 398u: goto L_088CDFEC;
    case 399u: goto L_088CE000;
    case 400u: goto L_088CE004;
    case 401u: goto L_088CE018;
    case 402u: goto L_088CE020;
    case 403u: goto L_088CE030;
    case 404u: goto L_088CE044;
    case 405u: goto L_088CE048;
    case 406u: goto L_088CE05C;
    case 407u: goto L_088CE070;
    case 408u: goto L_088CE084;
    case 409u: goto L_088CE0A0;
    case 410u: goto L_088CE0A8;
    case 411u: goto L_088CE0B0;
    case 412u: goto L_088CE0F0;
    case 413u: goto L_088CE100;
    case 414u: goto L_088CE118;
    case 415u: goto L_088CE130;
    case 416u: goto L_088CE140;
    case 417u: goto L_088CE160;
    case 418u: goto L_088CE19C;
    case 419u: goto L_088CE1A4;
    case 420u: goto L_088CE1AC;
    case 421u: goto L_088CE1B4;
    case 422u: goto L_088CE1CC;
    case 423u: goto L_088CE1D8;
    case 424u: goto L_088CE1E0;
    case 425u: goto L_088CE1E8;
    case 426u: goto L_088CE1F8;
    case 427u: goto L_088CE200;
    case 428u: goto L_088CE224;
    case 429u: goto L_088CE234;
    case 430u: goto L_088CE248;
    case 431u: goto L_088CE250;
    case 432u: goto L_088CE274;
    case 433u: goto L_088CE284;
    case 434u: goto L_088CE298;
    case 435u: goto L_088CE2A8;
    case 436u: goto L_088CE2B8;
    case 437u: goto L_088CE2E4;
    case 438u: goto L_088CE2EC;
    case 439u: goto L_088CE304;
    case 440u: goto L_088CE30C;
    case 441u: goto L_088CE314;
    case 442u: goto L_088CE31C;
    case 443u: goto L_088CE358;
    case 444u: goto L_088CE368;
    case 445u: goto L_088CE380;
    case 446u: goto L_088CE388;
    case 447u: goto L_088CE39C;
    case 448u: goto L_088CE3AC;
    case 449u: goto L_088CE3B4;
    case 450u: goto L_088CE3D8;
    case 451u: goto L_088CE3E8;
    case 452u: goto L_088CE404;
    case 453u: goto L_088CE414;
    case 454u: goto L_088CE450;
    case 455u: goto L_088CE460;
    case 456u: goto L_088CE478;
    case 457u: goto L_088CE484;
    case 458u: goto L_088CE498;
    case 459u: goto L_088CE4AC;
    case 460u: goto L_088CE4E4;
    case 461u: goto L_088CE4F4;
    case 462u: goto L_088CE50C;
    case 463u: goto L_088CE518;
    case 464u: goto L_088CE528;
    case 465u: goto L_088CE530;
    case 466u: goto L_088CE538;
    case 467u: goto L_088CE544;
    case 468u: goto L_088CE55C;
    case 469u: goto L_088CE56C;
    case 470u: goto L_088CE590;
    case 471u: goto L_088CE5BC;
    case 472u: goto L_088CE5D4;
    case 473u: goto L_088CE5DC;
    case 474u: goto L_088CE5E8;
    case 475u: goto L_088CE61C;
    case 476u: goto L_088CE624;
    case 477u: goto L_088CE628;
    case 478u: goto L_088CE654;
    case 479u: goto L_088CE6D4;
    case 480u: goto L_088CE6DC;
    case 481u: goto L_088CE6E0;
    case 482u: goto L_088CE6EC;
    case 483u: goto L_088CE70C;
    case 484u: goto L_088CE718;
    case 485u: goto L_088CE720;
    case 486u: goto L_088CE730;
    case 487u: goto L_088CE73C;
    case 488u: goto L_088CE748;
    case 489u: goto L_088CE75C;
    case 490u: goto L_088CE77C;
    case 491u: goto L_088CE788;
    case 492u: goto L_088CE790;
    case 493u: goto L_088CE79C;
    case 494u: goto L_088CE7D0;
    case 495u: goto L_088CE7E0;
    case 496u: goto L_088CE7F0;
    case 497u: goto L_088CE7FC;
    case 498u: goto L_088CE808;
    case 499u: goto L_088CE810;
    case 500u: goto L_088CE814;
    case 501u: goto L_088CE81C;
    case 502u: goto L_088CE824;
    case 503u: goto L_088CE830;
    case 504u: goto L_088CE83C;
    case 505u: goto L_088CE844;
    case 506u: goto L_088CE84C;
    case 507u: goto L_088CE850;
    case 508u: goto L_088CE858;
    case 509u: goto L_088CE85C;
    case 510u: goto L_088CE880;
    case 511u: goto L_088CE8A0;
    case 512u: goto L_088CE8AC;
    case 513u: goto L_088CE8B8;
    case 514u: goto L_088CE8C4;
    case 515u: goto L_088CE8D0;
    case 516u: goto L_088CE8D8;
    case 517u: goto L_088CE8E0;
    case 518u: goto L_088CE8E4;
    case 519u: goto L_088CE930;
    case 520u: goto L_088CE97C;
    case 521u: goto L_088CE984;
    case 522u: goto L_088CE990;
    case 523u: goto L_088CE9A0;
    case 524u: goto L_088CE9A8;
    case 525u: goto L_088CE9B8;
    case 526u: goto L_088CE9D8;
    case 527u: goto L_088CE9F8;
    case 528u: goto L_088CEA10;
    case 529u: goto L_088CEA20;
    case 530u: goto L_088CEA34;
    case 531u: goto L_088CEA3C;
    case 532u: goto L_088CEA5C;
    case 533u: goto L_088CEA74;
    case 534u: goto L_088CEA80;
    case 535u: goto L_088CEA90;
    case 536u: goto L_088CEA9C;
    case 537u: goto L_088CEAA0;
    case 538u: goto L_088CEAA8;
    case 539u: goto L_088CEAAC;
    case 540u: goto L_088CEABC;
    case 541u: goto L_088CEACC;
    case 542u: goto L_088CEAD4;
    case 543u: goto L_088CEADC;
    case 544u: goto L_088CEAE4;
    case 545u: goto L_088CEAFC;
    case 546u: goto L_088CEB08;
    case 547u: goto L_088CEB18;
    case 548u: goto L_088CEB28;
    case 549u: goto L_088CEB34;
    case 550u: goto L_088CEB3C;
    case 551u: goto L_088CEB48;
    case 552u: goto L_088CEB58;
    case 553u: goto L_088CEB5C;
    case 554u: goto L_088CEB78;
    case 555u: goto L_088CEB80;
    case 556u: goto L_088CEB98;
    case 557u: goto L_088CEBAC;
    case 558u: goto L_088CEBB8;
    case 559u: goto L_088CEBC8;
    case 560u: goto L_088CEBDC;
    case 561u: goto L_088CEBEC;
    case 562u: goto L_088CEC10;
    case 563u: goto L_088CEC34;
    case 564u: goto L_088CEC40;
    case 565u: goto L_088CEC54;
    case 566u: goto L_088CEC64;
    case 567u: goto L_088CEC6C;
    case 568u: goto L_088CEC78;
    case 569u: goto L_088CEC94;
    case 570u: goto L_088CECA0;
    case 571u: goto L_088CECC4;
    case 572u: goto L_088CECCC;
    case 573u: goto L_088CECE0;
    case 574u: goto L_088CED04;
    case 575u: goto L_088CED10;
    case 576u: goto L_088CED1C;
    case 577u: goto L_088CED28;
    case 578u: goto L_088CED30;
    case 579u: goto L_088CED48;
    case 580u: goto L_088CED50;
    case 581u: goto L_088CED54;
    case 582u: goto L_088CED60;
    case 583u: goto L_088CED70;
    case 584u: goto L_088CED7C;
    case 585u: goto L_088CEDA0;
    case 586u: goto L_088CEDAC;
    case 587u: goto L_088CEDBC;
    case 588u: goto L_088CEDC4;
    case 589u: goto L_088CEDD0;
    case 590u: goto L_088CEDDC;
    case 591u: goto L_088CEDE0;
    case 592u: goto L_088CEE04;
    case 593u: goto L_088CEE0C;
    case 594u: goto L_088CEE18;
    case 595u: goto L_088CEE2C;
    case 596u: goto L_088CEE34;
    case 597u: goto L_088CEE3C;
    case 598u: goto L_088CEE40;
    case 599u: goto L_088CEE50;
    case 600u: goto L_088CEE58;
    case 601u: goto L_088CEE74;
    case 602u: goto L_088CEE80;
    case 603u: goto L_088CEE88;
    case 604u: goto L_088CEEAC;
    case 605u: goto L_088CEEB8;
    case 606u: goto L_088CEED8;
    case 607u: goto L_088CEEF4;
    case 608u: goto L_088CEF00;
    case 609u: goto L_088CEF08;
    case 610u: goto L_088CEF0C;
    case 611u: goto L_088CEF14;
    case 612u: goto L_088CEF1C;
    case 613u: goto L_088CEF28;
    case 614u: goto L_088CEF44;
    case 615u: goto L_088CEF50;
    case 616u: goto L_088CEF54;
    case 617u: goto L_088CEF5C;
    case 618u: goto L_088CEF68;
    case 619u: goto L_088CEF70;
    case 620u: goto L_088CEF74;
    case 621u: goto L_088CEF84;
    case 622u: goto L_088CEF94;
    case 623u: goto L_088CEFA0;
    case 624u: goto L_088CEFC0;
    case 625u: goto L_088CEFD0;
    case 626u: goto L_088CEFE4;
    case 627u: goto L_088CEFEC;
    case 628u: goto L_088CEFF0;
    case 629u: goto L_088CF00C;
    case 630u: goto L_088CF01C;
    case 631u: goto L_088CF030;
    case 632u: goto L_088CF034;
    case 633u: goto L_088CF04C;
    case 634u: goto L_088CF068;
    case 635u: goto L_088CF078;
    case 636u: goto L_088CF090;
    case 637u: goto L_088CF0B0;
    case 638u: goto L_088CF0BC;
    case 639u: goto L_088CF0F0;
    case 640u: goto L_088CF100;
    case 641u: goto L_088CF118;
    case 642u: goto L_088CF124;
    case 643u: goto L_088CF128;
    case 644u: goto L_088CF130;
    case 645u: goto L_088CF148;
    case 646u: goto L_088CF15C;
    case 647u: goto L_088CF170;
    case 648u: goto L_088CF178;
    case 649u: goto L_088CF19C;
    case 650u: goto L_088CF1A4;
    case 651u: goto L_088CF1C0;
    case 652u: goto L_088CF1D8;
    case 653u: goto L_088CF1F4;
    case 654u: goto L_088CF204;
    case 655u: goto L_088CF20C;
    case 656u: goto L_088CF21C;
    case 657u: goto L_088CF220;
    case 658u: goto L_088CF228;
    case 659u: goto L_088CF230;
    case 660u: goto L_088CF238;
    case 661u: goto L_088CF25C;
    case 662u: goto L_088CF268;
    case 663u: goto L_088CF280;
    case 664u: goto L_088CF2AC;
    case 665u: goto L_088CF2C0;
    case 666u: goto L_088CF2D4;
    case 667u: goto L_088CF2E4;
    case 668u: goto L_088CF30C;
    case 669u: goto L_088CF318;
    case 670u: goto L_088CF324;
    case 671u: goto L_088CF32C;
    case 672u: goto L_088CF330;
    case 673u: goto L_088CF340;
    case 674u: goto L_088CF348;
    case 675u: goto L_088CF354;
    case 676u: goto L_088CF35C;
    case 677u: goto L_088CF37C;
    case 678u: goto L_088CF388;
    case 679u: goto L_088CF394;
    case 680u: goto L_088CF39C;
    case 681u: goto L_088CF3A4;
    case 682u: goto L_088CF3C0;
    case 683u: goto L_088CF3CC;
    case 684u: goto L_088CF3D4;
    case 685u: goto L_088CF3E4;
    case 686u: goto L_088CF3EC;
    case 687u: goto L_088CF408;
    case 688u: goto L_088CF418;
    case 689u: goto L_088CF41C;
    case 690u: goto L_088CF424;
    case 691u: goto L_088CF430;
    case 692u: goto L_088CF444;
    case 693u: goto L_088CF454;
    case 694u: goto L_088CF46C;
    case 695u: goto L_088CF478;
    case 696u: goto L_088CF490;
    case 697u: goto L_088CF49C;
    case 698u: goto L_088CF4B8;
    case 699u: goto L_088CF4D4;
    case 700u: goto L_088CF4E4;
    case 701u: goto L_088CF4F4;
    case 702u: goto L_088CF504;
    case 703u: goto L_088CF510;
    case 704u: goto L_088CF520;
    case 705u: goto L_088CF530;
    case 706u: goto L_088CF538;
    case 707u: goto L_088CF54C;
    case 708u: goto L_088CF55C;
    case 709u: goto L_088CF598;
    case 710u: goto L_088CF5A8;
    case 711u: goto L_088CF5C0;
    case 712u: goto L_088CF5EC;
    case 713u: goto L_088CF5F4;
    case 714u: goto L_088CF5FC;
    case 715u: goto L_088CF600;
    case 716u: goto L_088CF61C;
    case 717u: goto L_088CF620;
    case 718u: goto L_088CF644;
    case 719u: goto L_088CF654;
    case 720u: goto L_088CF66C;
    case 721u: goto L_088CF698;
    case 722u: goto L_088CF6B4;
    case 723u: goto L_088CF6C4;
    case 724u: goto L_088CF6D8;
    case 725u: goto L_088CF6FC;
    case 726u: goto L_088CF704;
    case 727u: goto L_088CF708;
    case 728u: goto L_088CF710;
    case 729u: goto L_088CF718;
    case 730u: goto L_088CF738;
    case 731u: goto L_088CF74C;
    case 732u: goto L_088CF750;
    case 733u: goto L_088CF754;
    case 734u: goto L_088CF774;
    case 735u: goto L_088CF7BC;
    case 736u: goto L_088CF7F8;
    case 737u: goto L_088CF808;
    case 738u: goto L_088CF810;
    case 739u: goto L_088CF818;
    case 740u: goto L_088CF828;
    case 741u: goto L_088CF838;
    case 742u: goto L_088CF844;
    case 743u: goto L_088CF868;
    case 744u: goto L_088CF870;
    case 745u: goto L_088CF884;
    case 746u: goto L_088CF88C;
    case 747u: goto L_088CF894;
    case 748u: goto L_088CF89C;
    case 749u: goto L_088CF8AC;
    case 750u: goto L_088CF8C4;
    case 751u: goto L_088CF8E8;
    case 752u: goto L_088CF8F0;
    case 753u: goto L_088CF904;
    case 754u: goto L_088CF90C;
    case 755u: goto L_088CF914;
    case 756u: goto L_088CF91C;
    case 757u: goto L_088CF924;
    case 758u: goto L_088CF960;
    case 759u: goto L_088CF97C;
    case 760u: goto L_088CF98C;
    case 761u: goto L_088CF9B8;
    case 762u: goto L_088CF9C8;
    case 763u: goto L_088CFA0C;
    case 764u: goto L_088CFA28;
    case 765u: goto L_088CFA50;
    case 766u: goto L_088CFA94;
    case 767u: goto L_088CFA9C;
    case 768u: goto L_088CFAA0;
    case 769u: goto L_088CFAC0;
    case 770u: goto L_088CFB24;
    case 771u: goto L_088CFB30;
    case 772u: goto L_088CFB3C;
    case 773u: goto L_088CFB54;
    case 774u: goto L_088CFB6C;
    case 775u: goto L_088CFB84;
    case 776u: goto L_088CFB8C;
    case 777u: goto L_088CFB94;
    case 778u: goto L_088CFBA8;
    case 779u: goto L_088CFBB8;
    case 780u: goto L_088CFBCC;
    case 781u: goto L_088CFBE4;
    case 782u: goto L_088CFBEC;
    case 783u: goto L_088CFBFC;
    case 784u: goto L_088CFC04;
    case 785u: goto L_088CFC0C;
    case 786u: goto L_088CFC14;
    case 787u: goto L_088CFC20;
    case 788u: goto L_088CFC28;
    case 789u: goto L_088CFC44;
    case 790u: goto L_088CFC4C;
    case 791u: goto L_088CFC64;
    case 792u: goto L_088CFC68;
    case 793u: goto L_088CFC70;
    case 794u: goto L_088CFC7C;
    case 795u: goto L_088CFC84;
    case 796u: goto L_088CFCA0;
    case 797u: goto L_088CFCA8;
    case 798u: goto L_088CFCC0;
    case 799u: goto L_088CFCC4;
    case 800u: goto L_088CFCCC;
    case 801u: goto L_088CFCE8;
    case 802u: goto L_088CFCEC;
    case 803u: goto L_088CFCFC;
    case 804u: goto L_088CFD00;
    case 805u: goto L_088CFD18;
    case 806u: goto L_088CFD28;
    case 807u: goto L_088CFD58;
    case 808u: goto L_088CFD68;
    case 809u: goto L_088CFD8C;
    case 810u: goto L_088CFDA4;
    case 811u: goto L_088CFDD8;
    case 812u: goto L_088CFDE4;
    case 813u: goto L_088CFDF8;
    case 814u: goto L_088CFE10;
    case 815u: goto L_088CFE30;
    case 816u: goto L_088CFE38;
    case 817u: goto L_088CFE84;
    case 818u: goto L_088CFE90;
    case 819u: goto L_088CFEA4;
    case 820u: goto L_088CFEB0;
    case 821u: goto L_088CFEB4;
    case 822u: goto L_088CFEFC;
    case 823u: goto L_088CFF08;
    case 824u: goto L_088CFF1C;
    case 825u: goto L_088CFF30;
    case 826u: goto L_088CFF40;
    case 827u: goto L_088CFF48;
    case 828u: goto L_088CFF68;
    case 829u: goto L_088CFF74;
    case 830u: goto L_088CFF78;
    case 831u: goto L_088CFFA4;
    case 832u: goto L_088CFFAC;
    case 833u: goto L_088CFFB0;
    case 834u: goto L_088CFFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x088CC000u;
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
L_088CC000:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CC024;
      }
      goto L_088CC00C;
    }
L_088CC00C:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_5 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_5);
    goto L_088CC024;
L_088CC024:
    ctx.gpr[8] = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_088CC030;
    }
    goto L_088CC030;
L_088CC030:
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_088CC0C4;
      }
      goto L_088CC03C;
    }
L_088CC03C:
    aot_gpr_4 = (aot_gpr_4 | 4096u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (20224u << 16u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (0u | 14287u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 3713u);
      if (branch_taken) {
          goto L_088CC084;
      }
      goto L_088CC068;
    }
L_088CC068:
    aot_gpr_5 = (17768u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4096u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CC0B0;
      }
      goto L_088CC084;
    }
L_088CC084:
    aot_gpr_5 = (17768u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4096u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (32768u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_5);
    goto L_088CC0B0;
L_088CC0B0:
    ctx.gpr[8] = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_088CC0BC;
    }
    goto L_088CC0BC;
L_088CC0BC:
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_088CC0C4;
L_088CC0C4:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CC164;
      }
      goto L_088CC0DC;
    }
L_088CC0DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_088CC0FC;
      }
      goto L_088CC0F0;
    }
L_088CC0F0:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_088CC0FC;
L_088CC0FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_088CC11C;
      }
      goto L_088CC110;
    }
L_088CC110:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_088CC11C;
L_088CC11C:
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (20224u << 16u);
      if (branch_taken) {
          goto L_088CC148;
      }
      goto L_088CC13C;
    }
L_088CC13C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CC160;
      }
      goto L_088CC148;
    }
L_088CC148:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088CC160;
L_088CC160:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_088CC164;
L_088CC164:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23760)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CC198;
      }
      goto L_088CC178;
    }
L_088CC178:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23760)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(197));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
        goto L_088CC190;
    }
    goto L_088CC190;
L_088CC190:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_088CC1B4;
      }
      goto L_088CC198;
    }
L_088CC198:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23760)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-197));
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
        goto L_088CC1B0;
    }
    goto L_088CC1B0;
L_088CC1B0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_088CC1B4;
L_088CC1B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23760), aot_gpr_4);
    goto L_088CC1BC;
L_088CC1BC:
    aot_gpr_6 = (17164u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088CC1D4u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 26u, 0x088CC1D4u, 0x089B8190u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 21u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 21u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CC1D4u) goto L_088CC1D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CC1D4:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088CC374;
      }
      goto L_088CC1E4;
    }
L_088CC1E4:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
      if (branch_taken) {
          goto L_088CC274;
      }
      goto L_088CC1F0;
    }
L_088CC1F0:
    aot_gpr_4 = (0u | 5956u);
    aot_gpr_5 = (18042u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 30u);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (18042u << 16u);
      if (branch_taken) {
          goto L_088CC23C;
      }
      goto L_088CC224;
    }
L_088CC224:
    aot_gpr_4 = (18042u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CC260;
      }
      goto L_088CC23C;
    }
L_088CC23C:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088CC260;
L_088CC260:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_088CC324;
      }
      goto L_088CC274;
    }
L_088CC274:
    aot_gpr_4 = (ctx.gpr[20] | ctx.gpr[19]);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CC2A8;
      }
      goto L_088CC280;
    }
L_088CC280:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CC2A0;
      }
      goto L_088CC28C;
    }
L_088CC28C:
    aot_gpr_4 = (0u | 5966u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 35u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088CC324;
      }
      goto L_088CC2A0;
    }
L_088CC2A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088CC324;
      }
      goto L_088CC2A8;
    }
L_088CC2A8:
    aot_gpr_4 = (18042u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 45u);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088CC2EC;
      }
      goto L_088CC2D4;
    }
L_088CC2D4:
    aot_gpr_4 = (18042u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CC314;
      }
      goto L_088CC2EC;
    }
L_088CC2EC:
    aot_gpr_4 = (18042u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088CC314;
L_088CC314:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_088CC324;
L_088CC324:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CC374;
      }
      goto L_088CC330;
    }
L_088CC330:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_4 = (16576u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17164u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088CC374u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0108.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 42u, 0x088CC374u, 0x089B7B80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0108_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0108_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CC374u) goto L_088CC374;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CC374:
    aot_gpr_4 = (ctx.gpr[20] | ctx.gpr[19]);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (16128u << 16u);
      if (branch_taken) {
          goto L_088CC588;
      }
      goto L_088CC380;
    }
L_088CC380:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (16128u << 16u);
      if (branch_taken) {
          goto L_088CC588;
      }
      goto L_088CC390;
    }
L_088CC390:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16128u << 16u);
      if (branch_taken) {
          goto L_088CC588;
      }
      goto L_088CC3AC;
    }
L_088CC3AC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16128u << 16u);
      if (branch_taken) {
          goto L_088CC588;
      }
      goto L_088CC3BC;
    }
L_088CC3BC:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16128u << 16u);
      if (branch_taken) {
          goto L_088CC588;
      }
      goto L_088CC3D4;
    }
L_088CC3D4:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17036u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_5 = (16880u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[31] = (0x088CC418u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 48u, 0x088CC418u, 0x089B8190u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 21u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 21u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CC418u) goto L_088CC418;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CC418:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_4 = (16128u << 16u);
      if (branch_taken) {
          goto L_088CC588;
      }
      goto L_088CC428;
    }
L_088CC428:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    aot_gpr_4 = (17723u << 16u);
      if (branch_taken) {
          goto L_088CC4B8;
      }
      goto L_088CC430;
    }
L_088CC430:
    aot_gpr_5 = (17723u << 16u);
    aot_gpr_4 = (0u | 5958u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 30u);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (17723u << 16u);
      if (branch_taken) {
          goto L_088CC484;
      }
      goto L_088CC468;
    }
L_088CC468:
    aot_gpr_4 = (17723u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CC4AC;
      }
      goto L_088CC484;
    }
L_088CC484:
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088CC4AC;
L_088CC4AC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(30000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_088CC534;
      }
      goto L_088CC4B8;
    }
L_088CC4B8:
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 50u);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088CC500;
      }
      goto L_088CC4E4;
    }
L_088CC4E4:
    aot_gpr_4 = (17723u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CC52C;
      }
      goto L_088CC500;
    }
L_088CC500:
    aot_gpr_4 = (17723u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088CC52C;
L_088CC52C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_088CC534;
L_088CC534:
    aot_gpr_4 = (0u | 12u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (16576u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16880u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 30u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088CC584u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0108.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 59u, 0x088CC584u, 0x089B7B80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0108_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0108_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CC584u) goto L_088CC584;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CC584:
    aot_gpr_4 = (16128u << 16u);
    goto L_088CC588;
L_088CC588:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (17150u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[20] | ctx.gpr[19]);
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088CC7E8;
      }
      goto L_088CC5B8;
    }
L_088CC5B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
      if (branch_taken) {
          goto L_088CC5C8;
      }
      goto L_088CC5C0;
    }
L_088CC5C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    aot_gpr_5 = (17640u << 16u);
      if (branch_taken) {
          goto L_088CC668;
      }
      goto L_088CC5C8;
    }
L_088CC5C8:
    aot_gpr_5 = (17545u << 16u);
    aot_gpr_6 = (aot_gpr_5 | 49152u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_7 = (0u | 9000u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_7);
    aot_gpr_5 = (0u | 1102u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_6 = (ctx.gpr[18] | 0u);
        goto L_088CC5F4;
    }
    goto L_088CC5F4;
L_088CC5F4:
    aot_gpr_6 = (aot_gpr_6 << 16u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    ctx.gpr[8] = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (ctx.lo);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_6 = (20224u << 16u);
      if (branch_taken) {
          goto L_088CC638;
      }
      goto L_088CC62C;
    }
L_088CC62C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CC650;
      }
      goto L_088CC638;
    }
L_088CC638:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_6 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    goto L_088CC650;
L_088CC650:
    ctx.gpr[8] = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_088CC65C;
    }
    goto L_088CC65C;
L_088CC65C:
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_5);
      if (branch_taken) {
          goto L_088CC6F0;
      }
      goto L_088CC668;
    }
L_088CC668:
    aot_gpr_5 = (aot_gpr_5 | 8192u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_6 = (20224u << 16u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_7 = (0u | 7143u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_7);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (0u | 1857u);
      if (branch_taken) {
          goto L_088CC6B0;
      }
      goto L_088CC694;
    }
L_088CC694:
    aot_gpr_6 = (17640u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 8192u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CC6DC;
      }
      goto L_088CC6B0;
    }
L_088CC6B0:
    aot_gpr_6 = (17640u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 8192u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (32768u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    goto L_088CC6DC;
L_088CC6DC:
    ctx.gpr[8] = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_088CC6E8;
    }
    goto L_088CC6E8;
L_088CC6E8:
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_5);
    goto L_088CC6F0;
L_088CC6F0:
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CC790;
      }
      goto L_088CC708;
    }
L_088CC708:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 >> 1u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_088CC728;
      }
      goto L_088CC71C;
    }
L_088CC71C:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_088CC728;
L_088CC728:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 >> 1u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_088CC748;
      }
      goto L_088CC73C;
    }
L_088CC73C:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_088CC748;
L_088CC748:
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (20224u << 16u);
      if (branch_taken) {
          goto L_088CC774;
      }
      goto L_088CC768;
    }
L_088CC768:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CC78C;
      }
      goto L_088CC774;
    }
L_088CC774:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_5 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    goto L_088CC78C;
L_088CC78C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_5);
    goto L_088CC790;
L_088CC790:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23756)));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088CC7C4;
      }
      goto L_088CC7A4;
    }
L_088CC7A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23756)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(98));
    aot_gpr_6 = (aot_gpr_6 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
        goto L_088CC7BC;
    }
    goto L_088CC7BC;
L_088CC7BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_5);
      if (branch_taken) {
          goto L_088CC7E0;
      }
      goto L_088CC7C4;
    }
L_088CC7C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23756)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-98));
    aot_gpr_6 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
        goto L_088CC7DC;
    }
    goto L_088CC7DC;
L_088CC7DC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_5);
    goto L_088CC7E0;
L_088CC7E0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23756), aot_gpr_5);
    goto L_088CC7E8;
L_088CC7E8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (17164u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[31] = (0x088CC800u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 90u, 0x088CC800u, 0x089B8190u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 21u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 21u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CC800u) goto L_088CC800;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CC800:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088CC97C;
      }
      goto L_088CC810;
    }
L_088CC810:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
      if (branch_taken) {
          goto L_088CC8A0;
      }
      goto L_088CC81C;
    }
L_088CC81C:
    aot_gpr_4 = (0u | 5957u);
    aot_gpr_5 = (18042u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 30u);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (18042u << 16u);
      if (branch_taken) {
          goto L_088CC868;
      }
      goto L_088CC850;
    }
L_088CC850:
    aot_gpr_4 = (18042u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CC88C;
      }
      goto L_088CC868;
    }
L_088CC868:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088CC88C;
L_088CC88C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_088CC938;
      }
      goto L_088CC8A0;
    }
L_088CC8A0:
    aot_gpr_4 = (ctx.gpr[20] | ctx.gpr[19]);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CC8BC;
      }
      goto L_088CC8AC;
    }
L_088CC8AC:
    aot_gpr_4 = (0u | 306u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088CC938;
      }
      goto L_088CC8BC;
    }
L_088CC8BC:
    aot_gpr_4 = (18042u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 46u);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088CC900;
      }
      goto L_088CC8E8;
    }
L_088CC8E8:
    aot_gpr_4 = (18042u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CC928;
      }
      goto L_088CC900;
    }
L_088CC900:
    aot_gpr_4 = (18042u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088CC928;
L_088CC928:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_088CC938;
L_088CC938:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_4 = (16576u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17164u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088CC97Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0108.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 103u, 0x088CC97Cu, 0x089B7B80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0108_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0108_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CC97Cu) goto L_088CC97C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CC97C:
    aot_gpr_4 = (ctx.gpr[20] | ctx.gpr[19]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_088CCCC0;
      }
      goto L_088CC988;
    }
L_088CC988:
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
    aot_gpr_5 = (0u | 15u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088CCD08;
      }
      goto L_088CC9BC;
    }
L_088CC9BC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CCD08;
      }
      goto L_088CC9D8;
    }
L_088CC9D8:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (17096u << 16u);
      if (branch_taken) {
          goto L_088CCD08;
      }
      goto L_088CC9EC;
    }
L_088CC9EC:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (16800u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[31] = (0x088CCA14u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 108u, 0x088CCA14u, 0x089B8190u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 21u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 21u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CCA14u) goto L_088CCA14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CCA14:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088CCA24;
      }
      goto L_088CCA1C;
    }
L_088CCA1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    aot_gpr_4 = (17768u << 16u);
      if (branch_taken) {
          goto L_088CCAC4;
      }
      goto L_088CCA24;
    }
L_088CCA24:
    aot_gpr_4 = (17673u << 16u);
    aot_gpr_5 = (aot_gpr_4 | 49152u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_6 = (0u | 18000u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_6);
    aot_gpr_4 = (0u | 2204u);
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_5 = (ctx.gpr[18] | 0u);
        goto L_088CCA50;
    }
    goto L_088CCA50;
L_088CCA50:
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_7 = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_7); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (ctx.lo);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (20224u << 16u);
      if (branch_taken) {
          goto L_088CCA94;
      }
      goto L_088CCA88;
    }
L_088CCA88:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_20));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CCAAC;
      }
      goto L_088CCA94;
    }
L_088CCA94:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    aot_gpr_5 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_5);
    goto L_088CCAAC;
L_088CCAAC:
    aot_gpr_7 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_088CCAB8;
    }
    goto L_088CCAB8;
L_088CCAB8:
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_088CCB4C;
      }
      goto L_088CCAC4;
    }
L_088CCAC4:
    aot_gpr_5 = (aot_gpr_4 | 4096u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_6 = (20224u << 16u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (0u | 14287u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (0u | 3713u);
      if (branch_taken) {
          goto L_088CCB0C;
      }
      goto L_088CCAF0;
    }
L_088CCAF0:
    aot_gpr_6 = (17768u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 4096u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CCB38;
      }
      goto L_088CCB0C;
    }
L_088CCB0C:
    aot_gpr_6 = (17768u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 4096u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (32768u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_7 + aot_gpr_6);
    goto L_088CCB38;
L_088CCB38:
    aot_gpr_7 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_088CCB44;
    }
    goto L_088CCB44;
L_088CCB44:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_088CCB4C;
L_088CCB4C:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CCBEC;
      }
      goto L_088CCB64;
    }
L_088CCB64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_088CCB84;
      }
      goto L_088CCB78;
    }
L_088CCB78:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_088CCB84;
L_088CCB84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_088CCBA4;
      }
      goto L_088CCB98;
    }
L_088CCB98:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_088CCBA4;
L_088CCBA4:
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[24] = aot_fpr_12 + ctx.fpr[24];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (20224u << 16u);
      if (branch_taken) {
          goto L_088CCBD0;
      }
      goto L_088CCBC4;
    }
L_088CCBC4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CCBE8;
      }
      goto L_088CCBD0;
    }
L_088CCBD0:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_12;
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088CCBE8;
L_088CCBE8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_088CCBEC;
L_088CCBEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23752)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CCC20;
      }
      goto L_088CCC00;
    }
L_088CCC00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23752)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(197));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
        goto L_088CCC18;
    }
    goto L_088CCC18;
L_088CCC18:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_088CCC3C;
      }
      goto L_088CCC20;
    }
L_088CCC20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23752)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-197));
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
        goto L_088CCC38;
    }
    goto L_088CCC38;
L_088CCC38:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_088CCC3C;
L_088CCC3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23752), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088CCD08;
      }
      goto L_088CCC50;
    }
L_088CCC50:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 5967u);
      if (branch_taken) {
          goto L_088CCD08;
      }
      goto L_088CCC5C;
    }
L_088CCC5C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 35u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 12u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (16544u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16800u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 7u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088CCCB8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0108.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 138u, 0x088CCCB8u, 0x089B7B80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0108_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0108_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CCCB8u) goto L_088CCCB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CCCB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CCD08;
      }
      goto L_088CCCC0;
    }
L_088CCCC0:
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[20] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088CCCF4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0049.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 140u, 0x088CCCF4u, 0x088CA7B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0049_entry(rt, ctx, 494u, aot_mem);
#else
        recomp_unit_0049_entry(rt, ctx, 494u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0049_entry, 49u, 494u, 0x088CA7B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CCCF4u) goto L_088CCCF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CCCF4:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_088CCD08;
L_088CCD08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CCD2C;
      }
      goto L_088CCD18;
    }
L_088CCD18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CCD2C;
      }
      goto L_088CCD24;
    }
L_088CCD24:
    ctx.gpr[31] = (0x088CCD2Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0117.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 144u, 0x088CCD2Cu, 0x089D89E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0117_entry(rt, ctx, 129u, aot_mem);
#else
        recomp_unit_0117_entry(rt, ctx, 129u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CCD2Cu) goto L_088CCD2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CCD2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CCD5C;
      }
      goto L_088CCD34;
    }
L_088CCD34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CCD58;
      }
      goto L_088CCD44;
    }
L_088CCD44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CCD58;
      }
      goto L_088CCD50;
    }
L_088CCD50:
    ctx.gpr[31] = (0x088CCD58u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0117.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 148u, 0x088CCD58u, 0x089D89E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0117_entry(rt, ctx, 129u, aot_mem);
#else
        recomp_unit_0117_entry(rt, ctx, 129u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CCD58u) goto L_088CCD58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CCD58:
    ctx.gpr[2] = (0u | 0u);
    goto L_088CCD5C;
L_088CCD5C:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(300), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(368));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088CCD9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-224));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_7 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_6 = (aot_gpr_6 & aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_6);
    aot_gpr_6 = (17561u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 | 8192u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), ctx.gpr[18]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(204), aot_run_words); }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088CD50C;
      }
      goto L_088CCDFC;
    }
L_088CCDFC:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[19] = (0u | 17u);
    ctx.gpr[31] = (0x088CCE0Cu);
    aot_gpr_5 = (0u | 17u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 152u, 0x088CCE0Cu, 0x0880A288u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 481u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 481u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CCE0Cu) goto L_088CCE0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CCE0C:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
      if (branch_taken) {
          goto L_088CCE44;
      }
      goto L_088CCE18;
    }
L_088CCE18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CD530;
      }
      goto L_088CCE28;
    }
L_088CCE28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CD530;
      }
      goto L_088CCE34;
    }
L_088CCE34:
    ctx.gpr[31] = (0x088CCE3Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0117.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 156u, 0x088CCE3Cu, 0x089D89E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0117_entry(rt, ctx, 129u, aot_mem);
#else
        recomp_unit_0117_entry(rt, ctx, 129u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CCE3Cu) goto L_088CCE3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CCE3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CD530;
      }
      goto L_088CCE44;
    }
L_088CCE44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088CCE50u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 158u, 0x088CCE50u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CCE50u) goto L_088CCE50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CCE50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[2] != aot_gpr_4) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_088CCE64;
    }
    goto L_088CCE5C;
L_088CCE5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_088CCE9C;
      }
      goto L_088CCE64;
    }
L_088CCE64:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CCE98;
      }
      goto L_088CCE90;
    }
L_088CCE90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_088CCE9C;
      }
      goto L_088CCE98;
    }
L_088CCE98:
    ctx.gpr[20] = (0u | 0u);
    goto L_088CCE9C;
L_088CCE9C:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = ctx.gpr[21] != aot_gpr_4;
      if (branch_taken) {
          goto L_088CD184;
      }
      goto L_088CCEA8;
    }
L_088CCEA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1885)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088CCF44;
      }
      goto L_088CCEB8;
    }
L_088CCEB8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    aot_gpr_4 = (17150u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_6 = (17914u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[21] = (0u | 127u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_6 = (20224u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    ctx.gpr[21] = (aot_gpr_4 | 0u);
        goto L_088CCF08;
    }
    goto L_088CCF08;
L_088CCF08:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
        goto L_088CCF28;
    }
    goto L_088CCF18;
L_088CCF18:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_088CCF3C;
      }
      goto L_088CCF28;
    }
L_088CCF28:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[18] = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14000));
    goto L_088CCF3C;
L_088CCF3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CCF4C;
      }
      goto L_088CCF44;
    }
L_088CCF44:
    ctx.gpr[21] = (0u | 127u);
    ctx.gpr[18] = (0u | 25000u);
    goto L_088CCF4C;
L_088CCF4C:
    aot_gpr_4 = (16025u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CD028;
      }
      goto L_088CCF6C;
    }
L_088CCF6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(608)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CD028;
      }
      goto L_088CCF8C;
    }
L_088CCF8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(604)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CD028;
      }
      goto L_088CCFA4;
    }
L_088CCFA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1888)));
    aot_gpr_4 = (17150u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (0u | 127u);
    aot_gpr_4 = (17914u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    ctx.gpr[21] = (aot_gpr_4 | 0u);
        goto L_088CCFF4;
    }
    goto L_088CCFF4;
L_088CCFF4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
        goto L_088CD014;
    }
    goto L_088CD004;
L_088CD004:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_088CD028;
      }
      goto L_088CD014;
    }
L_088CD014:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[18] = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14000));
    goto L_088CD028;
L_088CD028:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088CD0D0;
      }
      goto L_088CD030;
    }
L_088CD030:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(712)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CD064;
      }
      goto L_088CD044;
    }
L_088CD044:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(712)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(7));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[21] | 0u);
        goto L_088CD05C;
    }
    goto L_088CD05C;
L_088CD05C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088CD080;
      }
      goto L_088CD064;
    }
L_088CD064:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(712)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-7));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[21] | 0u);
        goto L_088CD07C;
    }
    goto L_088CD07C;
L_088CD07C:
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    goto L_088CD080;
L_088CD080:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(708)));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CD0B4;
      }
      goto L_088CD094;
    }
L_088CD094:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(708)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(800));
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[18] | 0u);
        goto L_088CD0AC;
    }
    goto L_088CD0AC;
L_088CD0AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088CD0D0;
      }
      goto L_088CD0B4;
    }
L_088CD0B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(708)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-800));
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[18] ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[18] | 0u);
        goto L_088CD0CC;
    }
    goto L_088CD0CC;
L_088CD0CC:
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_088CD0D0;
L_088CD0D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
      if (branch_taken) {
          goto L_088CD168;
      }
      goto L_088CD0D8;
    }
L_088CD0D8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088CD0E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 191u, 0x088CD0E8u, 0x088C6080u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 397u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 397u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD0E8u) goto L_088CD0E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD0E8:
    aot_gpr_6 = (16908u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[21] & 255u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[31] = (0x088CD104u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 192u, 0x088CD104u, 0x089B8190u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 21u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 21u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD104u) goto L_088CD104;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD104:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_4 = (0u | 2u);
      if (branch_taken) {
          goto L_088CD168;
      }
      goto L_088CD114;
    }
L_088CD114:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 5924u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[31] = (0x088CD168u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0108.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 194u, 0x088CD168u, 0x089B7B80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0108_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0108_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD168u) goto L_088CD168;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD168:
    if (ctx.gpr[20] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
        goto L_088CD510;
    }
    goto L_088CD170;
L_088CD170:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(712), ctx.gpr[21]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(708), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088CD50C;
      }
      goto L_088CD184;
    }
L_088CD184:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
        goto L_088CD510;
    }
    goto L_088CD190;
L_088CD190:
    if (ctx.gpr[20] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_088CD1C0;
    }
    goto L_088CD198;
L_088CD198:
    aot_gpr_4 = (2238u << 16u);
    ctx.gpr[22] = (aot_gpr_4 + static_cast<std::uint32_t>(-6640));
    ctx.gpr[31] = (0x088CD1A8u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 199u, 0x088CD1A8u, 0x0898D2D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 430u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 430u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD1A8u) goto L_088CD1A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD1A8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088CD1B4u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 200u, 0x088CD1B4u, 0x0898D140u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 388u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 388u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD1B4u) goto L_088CD1B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD1B4:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088CD1FC;
      }
      goto L_088CD1C0;
    }
L_088CD1C0:
    aot_gpr_5 = (17279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(604)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(608)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[21] = (aot_gpr_4 << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[22] = (aot_gpr_4 << 16u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    goto L_088CD1FC;
L_088CD1FC:
    if (aot_gpr_4 != 0u) {
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
        goto L_088CD204;
    }
    goto L_088CD204;
L_088CD204:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) & 0x7FFFFFFFu);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    ctx.gpr[31] = (0x088CD21Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 204u, 0x088CD21Cu, 0x08860358u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 7u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 7u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD21Cu) goto L_088CD21C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD21C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
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
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CD268;
      }
      goto L_088CD264;
    }
L_088CD264:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    goto L_088CD268;
L_088CD268:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    aot_gpr_4 = (ctx.gpr[22] << 7u);
      if (branch_taken) {
          goto L_088CD310;
      }
      goto L_088CD270;
    }
L_088CD270:
    aot_gpr_5 = (aot_gpr_4 - ctx.gpr[22]);
    aot_gpr_4 = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (16448u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_5 = (0u | 127u);
    aot_gpr_6 = (ctx.lo);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[18] = (0u | 127u);
        goto L_088CD2B0;
    }
    goto L_088CD2B0;
L_088CD2B0:
    aot_gpr_5 = (ctx.gpr[22] << 6u);
    aot_gpr_6 = (0u + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[22] = (0u | 22000u);
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(14000));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_088CD2F0;
      }
      goto L_088CD2E4;
    }
L_088CD2E4:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_088CD2F0;
L_088CD2F0:
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[21] = (0u | 22000u);
        goto L_088CD308;
    }
    goto L_088CD308;
L_088CD308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_088CD31C;
      }
      goto L_088CD310;
    }
L_088CD310:
    ctx.gpr[18] = (0u | 127u);
    ctx.gpr[21] = (0u | 18000u);
    ctx.gpr[22] = (0u | 1u);
    goto L_088CD31C;
L_088CD31C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088CD3CC;
      }
      goto L_088CD324;
    }
L_088CD324:
    { const bool branch_taken = ctx.gpr[22] != 0u;
      if (branch_taken) {
          goto L_088CD3CC;
      }
      goto L_088CD32C;
    }
L_088CD32C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(712)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CD360;
      }
      goto L_088CD340;
    }
L_088CD340:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(712)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(7));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[18] | 0u);
        goto L_088CD358;
    }
    goto L_088CD358;
L_088CD358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088CD37C;
      }
      goto L_088CD360;
    }
L_088CD360:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(712)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-7));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[18] | 0u);
        goto L_088CD378;
    }
    goto L_088CD378;
L_088CD378:
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_088CD37C;
L_088CD37C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(708)));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CD3B0;
      }
      goto L_088CD390;
    }
L_088CD390:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(708)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(800));
    aot_gpr_5 = (ctx.gpr[21] < aot_gpr_4 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[21] | 0u);
        goto L_088CD3A8;
    }
    goto L_088CD3A8;
L_088CD3A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088CD3CC;
      }
      goto L_088CD3B0;
    }
L_088CD3B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(708)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-800));
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[21] ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[21] | 0u);
        goto L_088CD3C8;
    }
    goto L_088CD3C8;
L_088CD3C8:
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    goto L_088CD3CC;
L_088CD3CC:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    aot_gpr_4 = (17914u << 16u);
      if (branch_taken) {
          goto L_088CD418;
      }
      goto L_088CD3D4;
    }
L_088CD3D4:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
        goto L_088CD404;
    }
    goto L_088CD3F4;
L_088CD3F4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_4);
      if (branch_taken) {
          goto L_088CD418;
      }
      goto L_088CD404;
    }
L_088CD404:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_4);
    goto L_088CD418;
L_088CD418:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(617))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CD430;
      }
      goto L_088CD42C;
    }
L_088CD42C:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    goto L_088CD430;
L_088CD430:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
      if (branch_taken) {
          goto L_088CD4EC;
      }
      goto L_088CD438;
    }
L_088CD438:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088CD448u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 233u, 0x088CD448u, 0x088C6080u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 397u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 397u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD448u) goto L_088CD448;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD448:
    aot_gpr_6 = (16908u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[18] & 255u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[31] = (0x088CD464u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 234u, 0x088CD464u, 0x089B8190u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 21u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 21u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD464u) goto L_088CD464;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD464:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088CD4EC;
      }
      goto L_088CD474;
    }
L_088CD474:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_088CD494;
      }
      goto L_088CD47C;
    }
L_088CD47C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), 0u);
    aot_gpr_4 = (0u | 5923u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
      if (branch_taken) {
          goto L_088CD4AC;
      }
      goto L_088CD494;
    }
L_088CD494:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 5924u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    goto L_088CD4AC;
L_088CD4AC:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[31] = (0x088CD4ECu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0108.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 239u, 0x088CD4ECu, 0x089B7B80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0108_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0108_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD4ECu) goto L_088CD4EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD4EC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088CD50C;
      }
      goto L_088CD4F4;
    }
L_088CD4F4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_088CD50C;
      }
      goto L_088CD4FC;
    }
L_088CD4FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(712), ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(708), ctx.gpr[21]);
    goto L_088CD50C;
L_088CD50C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    goto L_088CD510;
L_088CD510:
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CD530;
      }
      goto L_088CD51C;
    }
L_088CD51C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CD530;
      }
      goto L_088CD528;
    }
L_088CD528:
    ctx.gpr[31] = (0x088CD530u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0117.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 246u, 0x088CD530u, 0x089D89E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0117_entry(rt, ctx, 129u, aot_mem);
#else
        recomp_unit_0117_entry(rt, ctx, 129u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD530u) goto L_088CD530;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD530:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(188), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      ctx.gpr[31] = aot_run_words[8];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088CD55C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words); }
    ctx.gpr[31] = (0x088CD5A0u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD5A0u) goto L_088CD5A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CD5A0:
    aot_gpr_4 = (17692u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088CD934;
      }
      goto L_088CD5C0;
    }
L_088CD5C0:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (0u | 5u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 496u);
    aot_gpr_5 = (aot_gpr_5 >> 4u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_gpr_4 = (16320u << 16u);
      if (branch_taken) {
          goto L_088CD628;
      }
      goto L_088CD5DC;
    }
L_088CD5DC:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1920)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[24] = ctx.fpr[24] / aot_fpr_12;
    aot_gpr_4 = (14979u << 16u);
    aot_gpr_5 = (15150u << 16u);
    aot_gpr_6 = (16256u << 16u);
    aot_gpr_7 = (16968u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_gpr_5 = (aot_gpr_5 | 49980u);
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_7);
      if (branch_taken) {
          goto L_088CD630;
      }
      goto L_088CD620;
    }
L_088CD620:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CD634;
      }
      goto L_088CD628;
    }
L_088CD628:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CD934;
      }
      goto L_088CD630;
    }
L_088CD630:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    goto L_088CD634;
L_088CD634:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088CD644;
    }
    goto L_088CD644;
L_088CD644:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
        goto L_088CD654;
    }
    goto L_088CD654;
L_088CD654:
    ctx.gpr[31] = (0x088CD65Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 257u, 0x088CD65Cu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD65Cu) goto L_088CD65C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD65C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088CD704;
      }
      goto L_088CD668;
    }
L_088CD668:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CD6C4;
      }
      goto L_088CD678;
    }
L_088CD678:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x088CD688u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 260u, 0x088CD688u, 0x0898D2D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 430u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 430u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD688u) goto L_088CD688;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD688:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088CD694u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 261u, 0x088CD694u, 0x0898D140u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 388u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 388u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD694u) goto L_088CD694;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD694:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1980)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23856)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23864)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23840)));
    aot_gpr_4 = (ctx.gpr[20] - ctx.gpr[2]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23844)));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23852)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2048)));
      if (branch_taken) {
          goto L_088CD770;
      }
      goto L_088CD6C4;
    }
L_088CD6C4:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088CD6D0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 263u, 0x088CD6D0u, 0x0898D140u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 388u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 388u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD6D0u) goto L_088CD6D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD6D0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088CD6DCu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 264u, 0x088CD6DCu, 0x0898D2D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 430u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 430u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD6DCu) goto L_088CD6DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD6DC:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1980)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23856)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23864)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23840)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23844)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23852)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2048)));
      if (branch_taken) {
          goto L_088CD770;
      }
      goto L_088CD704;
    }
L_088CD704:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(604)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(608)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1980)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[26])) ? 0x00800000u : 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23856)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23864)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23840)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23844)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23852)));
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2048)));
      if (branch_taken) {
          goto L_088CD750;
      }
      goto L_088CD734;
    }
L_088CD734:
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
      if (branch_taken) {
          goto L_088CD770;
      }
      goto L_088CD750;
    }
L_088CD750:
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[18] = (aot_gpr_4 << 16u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    goto L_088CD770;
L_088CD770:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_088CD784;
      }
      goto L_088CD778;
    }
L_088CD778:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    goto L_088CD784;
L_088CD784:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    aot_gpr_4 = (16046u << 16u);
      if (branch_taken) {
          goto L_088CD79C;
      }
      goto L_088CD78C;
    }
L_088CD78C:
    aot_gpr_4 = (48460u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16046u << 16u);
    goto L_088CD79C;
L_088CD79C:
    aot_gpr_4 = (aot_gpr_4 | 5243u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[18] = ctx.fpr[19] / ctx.fpr[18];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[18])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088CD7B8;
    }
    goto L_088CD7B8;
L_088CD7B8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] < aot_fpr_20)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
        goto L_088CD7C8;
    }
    goto L_088CD7C8;
L_088CD7C8:
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fpr[15] = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_20 = aot_fpr_14 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < ctx.fpr[19])) ? 0x00800000u : 0u);
    aot_fpr_13 = ctx.fpr[15] + ctx.fpr[24];
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[17];
      if (branch_taken) {
          goto L_088CD7F8;
      }
      goto L_088CD7EC;
    }
L_088CD7EC:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2048), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23852)));
    goto L_088CD7F8;
L_088CD7F8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[16])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CD824;
      }
      goto L_088CD808;
    }
L_088CD808:
    ctx.fpr[22] = ctx.fpr[16] + ctx.fpr[28];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_088CD81C;
    }
    goto L_088CD81C;
L_088CD81C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CD838;
      }
      goto L_088CD824;
    }
L_088CD824:
    ctx.fpr[22] = ctx.fpr[16] - ctx.fpr[28];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_088CD838;
    }
    goto L_088CD838;
L_088CD838:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CD84C;
      }
      goto L_088CD848;
    }
L_088CD848:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088CD84C;
L_088CD84C:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2048), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088CD860u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 283u, 0x088CD860u, 0x088C6080u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 397u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 397u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD860u) goto L_088CD860;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD860:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[31] = (0x088CD87Cu);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 284u, 0x088CD87Cu, 0x089B8190u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 21u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 21u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD87Cu) goto L_088CD87C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD87C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[17] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    aot_gpr_4 = (17979u << 16u);
      if (branch_taken) {
          goto L_088CD934;
      }
      goto L_088CD88C;
    }
L_088CD88C:
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < 128 ? 1u : 0u);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_088CD8B0;
      }
      goto L_088CD8A8;
    }
L_088CD8A8:
    aot_gpr_4 = (0u | 127u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088CD8B0;
L_088CD8B0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
        goto L_088CD8CC;
    }
    goto L_088CD8C0;
L_088CD8C0:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CD8DC;
      }
      goto L_088CD8CC;
    }
L_088CD8CC:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088CD8DC;
L_088CD8DC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (0u | 40u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 90u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 7u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[31] = (0x088CD934u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0108.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 291u, 0x088CD934u, 0x089B7B80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0108_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0108_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CD934u) goto L_088CD934;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CD934:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      aot_gpr_16 = aot_run_words[6];
      ctx.gpr[17] = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      ctx.gpr[19] = aot_run_words[9];
      ctx.gpr[20] = aot_run_words[10];
      ctx.gpr[31] = aot_run_words[11];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088CD96C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CD974;
      }
      goto L_088CD974;
    }
L_088CD974:
    jump_target = ctx.gpr[31];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088CD97C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (17436u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 | 16384u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088CDB80;
      }
      goto L_088CD9B8;
    }
L_088CD9B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088CD9DC;
      }
      goto L_088CD9C8;
    }
L_088CD9C8:
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088CD9E8;
      }
      goto L_088CD9D4;
    }
L_088CD9D4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CD9F4;
      }
      goto L_088CD9DC;
    }
L_088CD9DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1884)));
      if (branch_taken) {
          goto L_088CD9F8;
      }
      goto L_088CD9E8;
    }
L_088CD9E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1493)));
      if (branch_taken) {
          goto L_088CD9F8;
      }
      goto L_088CD9F4;
    }
L_088CD9F4:
    aot_gpr_4 = (0u | 4u);
    goto L_088CD9F8;
L_088CD9F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088CDB78;
      }
      goto L_088CDA04;
    }
L_088CDA04:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088CDB78;
      }
      goto L_088CDA0C;
    }
L_088CDA0C:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) & 0x7FFFFFFFu);
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CDB78;
      }
      goto L_088CDA28;
    }
L_088CDA28:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088CDA38u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 305u, 0x088CDA38u, 0x088C6080u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 397u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 397u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CDA38u) goto L_088CDA38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CDA38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = ctx.fpr[22] / aot_fpr_13;
    aot_gpr_4 = (16256u << 16u);
    aot_gpr_5 = (16840u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_088CDA70;
    }
    goto L_088CDA70;
L_088CDA70:
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[31] = (0x088CDAA0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 307u, 0x088CDAA0u, 0x089B8190u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 21u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 21u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CDAA0u) goto L_088CDAA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CDAA0:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088CDB78;
      }
      goto L_088CDAB0;
    }
L_088CDAB0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[22];
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_gpr_4 = (0u | 296u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_5 = (0u | 296u);
    ctx.gpr[31] = (0x088CDAE4u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[28], ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CDAE4u) goto L_088CDAE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CDAE4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_088CDB08;
      }
      goto L_088CDAFC;
    }
L_088CDAFC:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    goto L_088CDB08;
L_088CDB08:
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_20 - aot_fpr_13;
        goto L_088CDB2C;
    }
    goto L_088CDB1C;
L_088CDB1C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_20));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
      if (branch_taken) {
          goto L_088CDB40;
      }
      goto L_088CDB2C;
    }
L_088CDB2C:
    aot_gpr_5 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    goto L_088CDB40;
L_088CDB40:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (16576u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[31] = (0x088CDB78u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0108.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 315u, 0x088CDB78u, 0x089B7B80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0108_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0108_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CDB78u) goto L_088CDB78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CDB78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088CDB84;
      }
      goto L_088CDB80;
    }
L_088CDB80:
    ctx.gpr[2] = (0u | 0u);
    goto L_088CDB84;
L_088CDB84:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088CDBA4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), aot_gpr_16};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words); }
    ctx.gpr[31] = (0x088CDBD8u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 319u, 0x088CDBD8u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CDBD8u) goto L_088CDBD8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CDBD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_088CDBFC;
      }
      goto L_088CDBE4;
    }
L_088CDBE4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CDBFC;
      }
      goto L_088CDBEC;
    }
L_088CDBEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088CDC30;
      }
      goto L_088CDBFC;
    }
L_088CDBFC:
    aot_gpr_4 = (17579u << 16u);
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 | 8192u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (0u | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088CDC4C;
      }
      goto L_088CDC28;
    }
L_088CDC28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CDC38;
      }
      goto L_088CDC30;
    }
L_088CDC30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088CE628;
      }
      goto L_088CDC38;
    }
L_088CDC38:
    ctx.gpr[31] = (0x088CDC40u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 326u, 0x088CDC40u, 0x088C63C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 454u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 454u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CDC40u) goto L_088CDC40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CDC40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_088CE624;
      }
      goto L_088CDC4C;
    }
L_088CDC4C:
    ctx.gpr[31] = (0x088CDC54u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 328u, 0x088CDC54u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CDC54u) goto L_088CDC54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CDC54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_088CDCAC;
      }
      goto L_088CDC60;
    }
L_088CDC60:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (0u | 5u);
    aot_gpr_5 = (aot_gpr_5 & 496u);
    aot_gpr_5 = (aot_gpr_5 >> 4u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_088CDCAC;
      }
      goto L_088CDC78;
    }
L_088CDC78:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
      if (branch_taken) {
          goto L_088CDC98;
      }
      goto L_088CDC84;
    }
L_088CDC84:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088CDC90u);
    aot_gpr_5 = (0u | 21u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 332u, 0x088CDC90u, 0x0880A680u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 550u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 550u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CDC90u) goto L_088CDC90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CDC90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CDCA4;
      }
      goto L_088CDC98;
    }
L_088CDC98:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088CDCA4u);
    aot_gpr_5 = (0u | 27u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 334u, 0x088CDCA4u, 0x0880A680u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 550u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 550u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CDCA4u) goto L_088CDCA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CDCA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088CE628;
      }
      goto L_088CDCAC;
    }
L_088CDCAC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CE61C;
      }
      goto L_088CDCBC;
    }
L_088CDCBC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088CDCCCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 337u, 0x088CDCCCu, 0x088C6080u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 397u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 397u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CDCCCu) goto L_088CDCCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CDCCC:
    ctx.gpr[31] = (0x088CDCD4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 338u, 0x088CDCD4u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CDCD4u) goto L_088CDCD4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CDCD4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_6;
      if (branch_taken) {
          goto L_088CDD48;
      }
      goto L_088CDCE0;
    }
L_088CDCE0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088CDD48;
      }
      goto L_088CDCF0;
    }
L_088CDCF0:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(86))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088CDD1C;
      }
      goto L_088CDD0C;
    }
L_088CDD0C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_088CDD1C;
L_088CDD1C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(644));
    ctx.gpr[31] = (0x088CDD28u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 343u, 0x088CDD28u, 0x0880A288u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 481u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 481u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CDD28u) goto L_088CDD28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CDD28:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
      if (branch_taken) {
          goto L_088CE61C;
      }
      goto L_088CDD30;
    }
L_088CDD30:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088CDD40u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_088CE654;
L_088CDD40:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CE61C;
      }
      goto L_088CDD48;
    }
L_088CDD48:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_088CE2EC;
      }
      goto L_088CDD54;
    }
L_088CDD54:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 175 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088CDDA0;
      }
      goto L_088CDD64;
    }
L_088CDD64:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < -969 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < -967 ? 1u : 0u);
      if (branch_taken) {
          goto L_088CDD88;
      }
      goto L_088CDD70;
    }
L_088CDD70:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088CDDD0;
      }
      goto L_088CDD7C;
    }
L_088CDD7C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088CDDD4;
      }
      goto L_088CDD88;
    }
L_088CDD88:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 174 ? 1u : 0u);
      if (branch_taken) {
          goto L_088CDDC4;
      }
      goto L_088CDD90;
    }
L_088CDD90:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CDD7C;
      }
      goto L_088CDD98;
    }
L_088CDD98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CDDD0;
      }
      goto L_088CDDA0;
    }
L_088CDDA0:
    aot_gpr_5 = (0u | 229u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 208u);
      if (branch_taken) {
          goto L_088CDDC4;
      }
      goto L_088CDDAC;
    }
L_088CDDAC:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 184u);
      if (branch_taken) {
          goto L_088CDD7C;
      }
      goto L_088CDDB4;
    }
L_088CDDB4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088CDD7C;
      }
      goto L_088CDDBC;
    }
L_088CDDBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CDDD0;
      }
      goto L_088CDDC4;
    }
L_088CDDC4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088CDDD4;
      }
      goto L_088CDDD0;
    }
L_088CDDD0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(644)));
    goto L_088CDDD4;
L_088CDDD4:
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_5;
    aot_gpr_5 = (0u | 6u);
      if (branch_taken) {
          goto L_088CDDF0;
      }
      goto L_088CDDE0;
    }
L_088CDDE0:
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_5;
      if (branch_taken) {
          goto L_088CDE14;
      }
      goto L_088CDDE8;
    }
L_088CDDE8:
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_088CDE38;
      }
      goto L_088CDDF0;
    }
L_088CDDF0:
    ctx.gpr[2] = (16192u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1885)));
    ctx.gpr[2] = (16916u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1886)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[10] = (aot_gpr_6 + static_cast<std::uint32_t>(1888));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (aot_gpr_6 + static_cast<std::uint32_t>(1892));
      if (branch_taken) {
          goto L_088CDE40;
      }
      goto L_088CDE14;
    }
L_088CDE14:
    ctx.gpr[2] = (16192u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1494)));
    ctx.gpr[2] = (16916u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1495)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[10] = (aot_gpr_6 + static_cast<std::uint32_t>(1496));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (aot_gpr_6 + static_cast<std::uint32_t>(1500));
      if (branch_taken) {
          goto L_088CDE40;
      }
      goto L_088CDE38;
    }
L_088CDE38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088CE628;
      }
      goto L_088CDE40;
    }
L_088CDE40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) <= 0;
      if (branch_taken) {
          goto L_088CE1AC;
      }
      goto L_088CDE48;
    }
L_088CDE48:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(613))))));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(617))))));
    aot_gpr_5 = (aot_gpr_5 & 32u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    ctx.gpr[3] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_088CDE9C;
      }
      goto L_088CDE68;
    }
L_088CDE68:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088CDE78;
      }
      goto L_088CDE70;
    }
L_088CDE70:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_088CDE9C;
      }
      goto L_088CDE78;
    }
L_088CDE78:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CE05C;
      }
      goto L_088CDE8C;
    }
L_088CDE8C:
    ctx.gpr[8] = (16230u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 26214u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_088CE05C;
      }
      goto L_088CDE9C;
    }
L_088CDE9C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(72)));
    ctx.gpr[3] = (0u | 2u);
    ctx.gpr[2] = (ctx.gpr[2] & 496u);
    ctx.gpr[2] = (ctx.gpr[2] >> 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
      if (branch_taken) {
          goto L_088CDEC4;
      }
      goto L_088CDEB4;
    }
L_088CDEB4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_088CDEC4;
      }
      goto L_088CDEBC;
    }
L_088CDEBC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088CDECC;
      }
      goto L_088CDEC4;
    }
L_088CDEC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CE05C;
      }
      goto L_088CDECC;
    }
L_088CDECC:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(92))))));
    ctx.gpr[3] = (0u | 82u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.gpr[3] = (0u | 70u);
      if (branch_taken) {
          goto L_088CDEF4;
      }
      goto L_088CDEDC;
    }
L_088CDEDC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.gpr[3] = (0u | 52u);
      if (branch_taken) {
          goto L_088CDF60;
      }
      goto L_088CDEE4;
    }
L_088CDEE4:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
      if (branch_taken) {
          goto L_088CDFCC;
      }
      goto L_088CDEEC;
    }
L_088CDEEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CE05C;
      }
      goto L_088CDEF4;
    }
L_088CDEF4:
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[12] = (0u | 6u);
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[12];
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088CDF24;
      }
      goto L_088CDF08;
    }
L_088CDF08:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
      if (branch_taken) {
          goto L_088CDF58;
      }
      goto L_088CDF10;
    }
L_088CDF10:
    ctx.gpr[8] = (15948u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = aot_fpr_20 + ctx.fpr[22];
      if (branch_taken) {
          goto L_088CDF58;
      }
      goto L_088CDF24;
    }
L_088CDF24:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
      if (branch_taken) {
          goto L_088CDF3C;
      }
      goto L_088CDF2C;
    }
L_088CDF2C:
    ctx.gpr[8] = (15820u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[22] = aot_fpr_20 + ctx.fpr[22];
    goto L_088CDF3C;
L_088CDF3C:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
      if (branch_taken) {
          goto L_088CDF58;
      }
      goto L_088CDF48;
    }
L_088CDF48:
    ctx.gpr[8] = (15820u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_12;
    goto L_088CDF58;
L_088CDF58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CE05C;
      }
      goto L_088CDF60;
    }
L_088CDF60:
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[12] = (0u | 6u);
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[12];
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088CDF90;
      }
      goto L_088CDF74;
    }
L_088CDF74:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
      if (branch_taken) {
          goto L_088CDFC4;
      }
      goto L_088CDF7C;
    }
L_088CDF7C:
    ctx.gpr[8] = (15948u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = aot_fpr_20 + ctx.fpr[22];
      if (branch_taken) {
          goto L_088CDFC4;
      }
      goto L_088CDF90;
    }
L_088CDF90:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
      if (branch_taken) {
          goto L_088CDFA8;
      }
      goto L_088CDF98;
    }
L_088CDF98:
    ctx.gpr[8] = (15820u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[22] = aot_fpr_20 + ctx.fpr[22];
    goto L_088CDFA8;
L_088CDFA8:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
      if (branch_taken) {
          goto L_088CDFC4;
      }
      goto L_088CDFB4;
    }
L_088CDFB4:
    ctx.gpr[8] = (15820u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_12;
    goto L_088CDFC4;
L_088CDFC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CE05C;
      }
      goto L_088CDFCC;
    }
L_088CDFCC:
    ctx.gpr[2] = (ctx.gpr[8] | 0u);
    ctx.gpr[3] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_088CE020;
      }
      goto L_088CDFDC;
    }
L_088CDFDC:
    ctx.gpr[3] = (15820u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 52429u);
    ctx.gpr[2] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[3]);
    goto L_088CDFEC;
L_088CDFEC:
    ctx.gpr[3] = (ctx.gpr[2] << 2u);
    ctx.gpr[3] = (ctx.gpr[11] + ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[8];
      if (branch_taken) {
          goto L_088CE004;
      }
      goto L_088CE000;
    }
L_088CE000:
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_12;
    goto L_088CE004;
L_088CE004:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
      if (branch_taken) {
          goto L_088CDFEC;
      }
      goto L_088CE018;
    }
L_088CE018:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CE05C;
      }
      goto L_088CE020;
    }
L_088CE020:
    ctx.gpr[3] = (15692u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 52429u);
    ctx.gpr[2] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[3]);
    goto L_088CE030;
L_088CE030:
    ctx.gpr[3] = (ctx.gpr[2] << 2u);
    ctx.gpr[3] = (ctx.gpr[11] + ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[8];
      if (branch_taken) {
          goto L_088CE048;
      }
      goto L_088CE044;
    }
L_088CE044:
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_12;
    goto L_088CE048;
L_088CE048:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
      if (branch_taken) {
          goto L_088CE030;
      }
      goto L_088CE05C;
    }
L_088CE05C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(80)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CE1A4;
      }
      goto L_088CE070;
    }
L_088CE070:
    ctx.gpr[11] = (16256u << 16u);
    ctx.gpr[8] = (ctx.gpr[19] | ctx.gpr[18]);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088CE0A8;
      }
      goto L_088CE084;
    }
L_088CE084:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(80)));
    aot_fpr_20 = ctx.fpr[17] / aot_fpr_13;
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) & 0x7FFFFFFFu);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_088CE0A0;
    }
    goto L_088CE0A0;
L_088CE0A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CE1D8;
      }
      goto L_088CE0A8;
    }
L_088CE0A8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    ctx.gpr[8] = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088CE160;
      }
      goto L_088CE0B0;
    }
L_088CE0B0:
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (aot_gpr_7 + ctx.gpr[8]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    aot_fpr_13 = ctx.fpr[16] / aot_fpr_13;
    ctx.gpr[8] = (16416u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_088CE0F0;
    }
    goto L_088CE0F0;
L_088CE0F0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[22]) || std::isnan(aot_fpr_20)) && ctx.fpr[22] == aot_fpr_20)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[22];
        goto L_088CE140;
    }
    goto L_088CE100;
L_088CE100:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(72)));
    ctx.gpr[8] = (0u | 2u);
    aot_gpr_6 = (aot_gpr_6 & 496u);
    aot_gpr_6 = (aot_gpr_6 >> 4u);
    if (aot_gpr_6 == ctx.gpr[8]) {
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[22];
        goto L_088CE140;
    }
    goto L_088CE118;
L_088CE118:
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(12));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[17] < ctx.fpr[18])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[22];
        goto L_088CE140;
    }
    goto L_088CE130;
L_088CE130:
    aot_gpr_6 = (16179u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 13107u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[22];
    goto L_088CE140;
L_088CE140:
    aot_gpr_6 = (16243u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_gpr_6 = (aot_gpr_6 | 13107u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = aot_fpr_20 + ctx.fpr[16];
      if (branch_taken) {
          goto L_088CE1D8;
      }
      goto L_088CE160;
    }
L_088CE160:
    aot_gpr_6 = (aot_gpr_4 & 255u);
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(88)));
    aot_gpr_6 = (aot_gpr_7 + aot_gpr_6);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    aot_fpr_13 = ctx.fpr[16] / aot_fpr_13;
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) & 0x7FFFFFFFu);
    aot_fpr_20 = aot_fpr_12 - aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_088CE19C;
    }
    goto L_088CE19C;
L_088CE19C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CE1D8;
      }
      goto L_088CE1A4;
    }
L_088CE1A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CE1D8;
      }
      goto L_088CE1AC;
    }
L_088CE1AC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088CE1CC;
      }
      goto L_088CE1B4;
    }
L_088CE1B4:
    aot_gpr_5 = (16076u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_088CE1CC;
L_088CE1CC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(617))))));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 & 4u);
    goto L_088CE1D8;
L_088CE1D8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (18060u << 16u);
      if (branch_taken) {
          goto L_088CE250;
      }
      goto L_088CE1E0;
    }
L_088CE1E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) <= 0;
    aot_gpr_6 = (18060u << 16u);
      if (branch_taken) {
          goto L_088CE250;
      }
      goto L_088CE1E8;
    }
L_088CE1E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    aot_gpr_4 = (17995u << 16u);
      if (branch_taken) {
          goto L_088CE200;
      }
      goto L_088CE1F8;
    }
L_088CE1F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 22050u);
      if (branch_taken) {
          goto L_088CE2A8;
      }
      goto L_088CE200;
    }
L_088CE200:
    aot_gpr_4 = (aot_gpr_4 | 8192u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
        goto L_088CE234;
    }
    goto L_088CE224;
L_088CE224:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_088CE248;
      }
      goto L_088CE234;
    }
L_088CE234:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
    goto L_088CE248;
L_088CE248:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CE2A8;
      }
      goto L_088CE250;
    }
L_088CE250:
    aot_gpr_6 = (aot_gpr_6 | 40960u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
        goto L_088CE284;
    }
    goto L_088CE274;
L_088CE274:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_088CE298;
      }
      goto L_088CE284;
    }
L_088CE284:
    aot_gpr_6 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (aot_gpr_7 + aot_gpr_6);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
    goto L_088CE298;
L_088CE298:
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(1200));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
    goto L_088CE2A8;
L_088CE2A8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CE2E4;
      }
      goto L_088CE2B8;
    }
L_088CE2B8:
    aot_fpr_12 = aot_fpr_20 / aot_fpr_14;
    aot_gpr_4 = (16752u << 16u);
    aot_gpr_6 = (17076u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088CE304;
      }
      goto L_088CE2E4;
    }
L_088CE2E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 105u);
      if (branch_taken) {
          goto L_088CE304;
      }
      goto L_088CE2EC;
    }
L_088CE2EC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(617))))));
    aot_gpr_6 = (16916u << 16u);
    aot_gpr_4 = (0u | 90u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 & 4u);
    goto L_088CE304;
L_088CE304:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088CE314;
      }
      goto L_088CE30C;
    }
L_088CE30C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088CE314;
L_088CE314:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088CE388;
      }
      goto L_088CE31C;
    }
L_088CE31C:
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (17669u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 8192u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088CE368;
      }
      goto L_088CE358;
    }
L_088CE358:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4270));
      if (branch_taken) {
          goto L_088CE380;
      }
      goto L_088CE368;
    }
L_088CE368:
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_5 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (aot_gpr_6 + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4270));
    goto L_088CE380;
L_088CE380:
    aot_gpr_5 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_5);
    goto L_088CE388;
L_088CE388:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x088CE39Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 447u, 0x088CE39Cu, 0x089B8190u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 21u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 21u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CE39Cu) goto L_088CE39C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CE39C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088CE61C;
      }
      goto L_088CE3AC;
    }
L_088CE3AC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_088CE528;
      }
      goto L_088CE3B4;
    }
L_088CE3B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[8] = (15523u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 55050u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_088CE3E8;
      }
      goto L_088CE3D8;
    }
L_088CE3D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_088CE3E8;
L_088CE3E8:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(648)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_7 = (aot_gpr_7 & 496u);
    aot_gpr_7 = (aot_gpr_7 >> 4u);
    ctx.gpr[8] = (0u | 2u);
    { const bool branch_taken = aot_gpr_7 != ctx.gpr[8];
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_088CE498;
      }
      goto L_088CE404;
    }
L_088CE404:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CE484;
      }
      goto L_088CE414;
    }
L_088CE414:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_6 << 3u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21352));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (17948u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088CE460;
      }
      goto L_088CE450;
    }
L_088CE450:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_20));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_088CE478;
      }
      goto L_088CE460;
    }
L_088CE460:
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
    goto L_088CE478;
L_088CE478:
    aot_gpr_4 = (0u | 52u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
      if (branch_taken) {
          goto L_088CE528;
      }
      goto L_088CE484;
    }
L_088CE484:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(644)));
    aot_gpr_5 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_5);
      if (branch_taken) {
          goto L_088CE528;
      }
      goto L_088CE498;
    }
L_088CE498:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(604)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_6 << 3u);
      if (branch_taken) {
          goto L_088CE518;
      }
      goto L_088CE4AC;
    }
L_088CE4AC:
    aot_gpr_6 = (17948u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (2232u << 16u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21352));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088CE4F4;
      }
      goto L_088CE4E4;
    }
L_088CE4E4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_088CE50C;
      }
      goto L_088CE4F4;
    }
L_088CE4F4:
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
    goto L_088CE50C;
L_088CE50C:
    aot_gpr_4 = (0u | 52u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
      if (branch_taken) {
          goto L_088CE528;
      }
      goto L_088CE518;
    }
L_088CE518:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(644)));
    aot_gpr_5 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_5);
    goto L_088CE528;
L_088CE528:
    if (ctx.gpr[18] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
        goto L_088CE590;
    }
    goto L_088CE530;
L_088CE530:
    ctx.gpr[31] = (0x088CE538u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 466u, 0x088CE538u, 0x088C63C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 454u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 454u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CE538u) goto L_088CE538;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CE538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088CE55C;
      }
      goto L_088CE544;
    }
L_088CE544:
    aot_gpr_4 = (0u | 5918u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 15u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 5918u);
      if (branch_taken) {
          goto L_088CE56C;
      }
      goto L_088CE55C;
    }
L_088CE55C:
    aot_gpr_4 = (0u | 87u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 87u);
    goto L_088CE56C;
L_088CE56C:
    aot_gpr_5 = (ctx.gpr[17] << 4u);
    aot_gpr_6 = (ctx.gpr[17] << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (0u | 100u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (ctx.gpr[19] + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_5);
      if (branch_taken) {
          goto L_088CE5BC;
      }
      goto L_088CE590;
    }
L_088CE590:
    aot_gpr_5 = (0u | 1000u);
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (ctx.gpr[19] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_5);
    goto L_088CE5BC;
L_088CE5BC:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_5);
    aot_gpr_5 = (0u | 73u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 100u);
      if (branch_taken) {
          goto L_088CE5DC;
      }
      goto L_088CE5D4;
    }
L_088CE5D4:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088CE5E8;
      }
      goto L_088CE5DC;
    }
L_088CE5DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_088CE5E8;
L_088CE5E8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (16576u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 8u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[31] = (0x088CE61Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0108.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 475u, 0x088CE61Cu, 0x089B7B80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0108_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0108_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CE61Cu) goto L_088CE61C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CE61C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088CE628;
      }
      goto L_088CE624;
    }
L_088CE624:
    ctx.gpr[2] = (0u | 0u);
    goto L_088CE628;
L_088CE628:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      ctx.gpr[20] = aot_run_words[7];
      ctx.gpr[31] = aot_run_words[8];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088CE654:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-304));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_7 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_gpr_16);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    aot_gpr_5 = (16256u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(264), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(292), ctx.gpr[30]);
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(217), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[17] = (0u | 6u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(244), aot_run_words); }
    { const std::uint32_t aot_run_words[6]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(296), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_gpr_4);
      if (branch_taken) {
          goto L_088CE6DC;
      }
      goto L_088CE6D4;
    }
L_088CE6D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 21u);
      if (branch_taken) {
          goto L_088CE6E0;
      }
      goto L_088CE6DC;
    }
L_088CE6DC:
    ctx.gpr[22] = (0u | 27u);
    goto L_088CE6E0;
L_088CE6E0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23836)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CE70C;
      }
      goto L_088CE6EC;
    }
L_088CE6EC:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23836), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-23748), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23744), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23745), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23736), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088CE70C;
L_088CE70C:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[31] = (0x088CE718u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1008));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0033.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 484u, 0x088CE718u, 0x0888876Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0033_entry(rt, ctx, 158u, aot_mem);
#else
        recomp_unit_0033_entry(rt, ctx, 158u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0033_entry, 33u, 158u, 0x0888876Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CE718u) goto L_088CE718;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CE718:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088CE748;
      }
      goto L_088CE720;
    }
L_088CE720:
    aot_gpr_4 = (2238u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-6640));
    ctx.gpr[31] = (0x088CE730u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 486u, 0x088CE730u, 0x0898D2D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 430u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 430u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CE730u) goto L_088CE730;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CE730:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(214), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x088CE73Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 487u, 0x088CE73Cu, 0x0898D140u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 388u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 388u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CE73Cu) goto L_088CE73C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CE73C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(190), static_cast<std::uint16_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088CE75C;
      }
      goto L_088CE748;
    }
L_088CE748:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(214), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_5 = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(190), static_cast<std::uint16_t>(aot_gpr_5));
    goto L_088CE75C;
L_088CE75C:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    aot_gpr_4 = (47747u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CE788;
      }
      goto L_088CE77C;
    }
L_088CE77C:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(188), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088CE790;
      }
      goto L_088CE788;
    }
L_088CE788:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(188), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088CE790;
L_088CE790:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088CE79Cu);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 493u, 0x088CE79Cu, 0x0880A5E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 542u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 542u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 542u, 0x0880A5E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CE79Cu) goto L_088CE79C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CE79C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[24] = aot_fpr_12 / ctx.fpr[24];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088CE7D0;
    }
    goto L_088CE7D0;
L_088CE7D0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
        goto L_088CE7E0;
    }
    goto L_088CE7E0;
L_088CE7E0:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 184 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_088CE824;
      }
      goto L_088CE7F0;
    }
L_088CE7F0:
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < -967 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_7 = (0u | 174u);
      if (branch_taken) {
          goto L_088CE814;
      }
      goto L_088CE7FC;
    }
L_088CE7FC:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < -969 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_088CE8B8;
      }
      goto L_088CE808;
    }
L_088CE808:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(94)));
      if (branch_taken) {
          goto L_088CE85C;
      }
      goto L_088CE810;
    }
L_088CE810:
    aot_gpr_7 = (0u | 174u);
    goto L_088CE814;
L_088CE814:
    if (aot_gpr_6 == aot_gpr_7) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(94)));
        goto L_088CE85C;
    }
    goto L_088CE81C;
L_088CE81C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CE8B8;
      }
      goto L_088CE824;
    }
L_088CE824:
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 209 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_7 = (0u | 229u);
      if (branch_taken) {
          goto L_088CE850;
      }
      goto L_088CE830;
    }
L_088CE830:
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 185 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 208 ? 1u : 0u);
      if (branch_taken) {
          goto L_088CE858;
      }
      goto L_088CE83C;
    }
L_088CE83C:
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_088CE8B8;
      }
      goto L_088CE844;
    }
L_088CE844:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(94)));
      if (branch_taken) {
          goto L_088CE85C;
      }
      goto L_088CE84C;
    }
L_088CE84C:
    aot_gpr_7 = (0u | 229u);
    goto L_088CE850;
L_088CE850:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_088CE8B8;
      }
      goto L_088CE858;
    }
L_088CE858:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(94)));
    goto L_088CE85C;
L_088CE85C:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088CE8A0;
      }
      goto L_088CE880;
    }
L_088CE880:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740), 0u);
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-23748), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(214), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(190), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088CE8AC;
      }
      goto L_088CE8A0;
    }
L_088CE8A0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_088CE8AC;
L_088CE8AC:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088CE8C4;
      }
      goto L_088CE8B8;
    }
L_088CE8B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(644)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088CE8C4;
L_088CE8C4:
    aot_gpr_4 = (0u | 9u);
    if (aot_gpr_5 == aot_gpr_4) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
        goto L_088CE8E4;
    }
    goto L_088CE8D0;
L_088CE8D0:
    if (aot_gpr_5 == ctx.gpr[17]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
        goto L_088CE930;
    }
    goto L_088CE8D8;
L_088CE8D8:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088CE97C;
      }
      goto L_088CE8E0;
    }
L_088CE8E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    goto L_088CE8E4;
L_088CE8E4:
    ctx.gpr[20] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1885)));
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1886)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1724)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(aot_gpr_7));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23728)));
    aot_gpr_6 = (20224u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_7);
    ctx.gpr[9] = (2232u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[19] = (2237u << 16u);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(1888));
    ctx.gpr[23] = (0u | 174u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23732)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-21160));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1280));
      if (branch_taken) {
          goto L_088CE984;
      }
      goto L_088CE930;
    }
L_088CE930:
    ctx.gpr[20] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1494)));
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1495)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1396)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(aot_gpr_7));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23728)));
    aot_gpr_6 = (20224u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_7);
    ctx.gpr[9] = (2232u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[19] = (2237u << 16u);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(1496));
    ctx.gpr[23] = (0u | 174u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23732)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-21160));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1280));
      if (branch_taken) {
          goto L_088CE984;
      }
      goto L_088CE97C;
    }
L_088CE97C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CF774;
      }
      goto L_088CE984;
    }
L_088CE984:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[23];
      if (branch_taken) {
          goto L_088CE9A0;
      }
      goto L_088CE990;
    }
L_088CE990:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[8] = (0u | 184u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[8];
      if (branch_taken) {
          goto L_088CE9A8;
      }
      goto L_088CE9A0;
    }
L_088CE9A0:
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(217), static_cast<std::uint8_t>(aot_gpr_6));
    goto L_088CE9A8;
L_088CE9A8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_088CEAA8;
      }
      goto L_088CE9B8;
    }
L_088CE9B8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_6 = (17723u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 32768u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_6);
      if (branch_taken) {
          goto L_088CEA3C;
      }
      goto L_088CE9D8;
    }
L_088CE9D8:
    aot_gpr_6 = (15948u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_088CE9F8;
    }
    goto L_088CE9F8;
L_088CE9F8:
    aot_fpr_13 = aot_fpr_14 / aot_fpr_13;
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[30])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_13 - ctx.fpr[30];
        goto L_088CEA20;
    }
    goto L_088CEA10;
L_088CEA10:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u - ctx.gpr[18]);
      if (branch_taken) {
          goto L_088CEA34;
      }
      goto L_088CEA20;
    }
L_088CEA20:
    aot_gpr_6 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[18] = (ctx.gpr[8] + aot_gpr_6);
    ctx.gpr[18] = (0u - ctx.gpr[18]);
    goto L_088CEA34;
L_088CEA34:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CEA90;
      }
      goto L_088CEA3C;
    }
L_088CEA3C:
    aot_gpr_6 = (48716u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_088CEA5C;
    }
    goto L_088CEA5C;
L_088CEA5C:
    aot_fpr_12 = aot_fpr_14 / aot_fpr_13;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < ctx.fpr[30])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = ctx.fpr[15] - ctx.fpr[30];
        goto L_088CEA80;
    }
    goto L_088CEA74;
L_088CEA74:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CEA90;
      }
      goto L_088CEA80;
    }
L_088CEA80:
    ctx.gpr[18] = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[18] = (aot_gpr_6 + ctx.gpr[18]);
    goto L_088CEA90;
L_088CEA90:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088CEAA0;
      }
      goto L_088CEA9C;
    }
L_088CEA9C:
    ctx.gpr[18] = (0u - ctx.gpr[18]);
    goto L_088CEAA0;
L_088CEAA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CEAAC;
      }
      goto L_088CEAA8;
    }
L_088CEAA8:
    ctx.gpr[18] = (0u | 0u);
    goto L_088CEAAC;
L_088CEAAC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] <= ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CEABC;
      }
      goto L_088CEABC;
    }
L_088CEABC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < ctx.fpr[17])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
        goto L_088CEAD4;
    }
    goto L_088CEACC;
L_088CEACC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_088CEAD4;
      }
      goto L_088CEAD4;
    }
L_088CEAD4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_7) >= 0;
    aot_gpr_6 = (20352u << 16u);
      if (branch_taken) {
          goto L_088CEAE4;
      }
      goto L_088CEADC;
    }
L_088CEADC:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[18] = ctx.fpr[18] + aot_fpr_13;
    goto L_088CEAE4;
L_088CEAE4:
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[17];
    { const float fs = ctx.fpr[18]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[30])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[30];
        goto L_088CEB08;
    }
    goto L_088CEAFC;
L_088CEAFC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CEB18;
      }
      goto L_088CEB08;
    }
L_088CEB08:
    ctx.gpr[21] = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[21] = (aot_gpr_6 + ctx.gpr[21]);
    goto L_088CEB18;
L_088CEB18:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] <= ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), ctx.gpr[21]);
      if (branch_taken) {
          goto L_088CEB34;
      }
      goto L_088CEB28;
    }
L_088CEB28:
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_088CEB3C;
      }
      goto L_088CEB34;
    }
L_088CEB34:
    aot_gpr_6 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(aot_gpr_6));
    goto L_088CEB3C;
L_088CEB3C:
    aot_gpr_6 = (0u | 6u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_088CEBC8;
      }
      goto L_088CEB48;
    }
L_088CEB48:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_5 = (aot_gpr_5 & 4u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088CEB5C;
      }
      goto L_088CEB58;
    }
L_088CEB58:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1400));
    goto L_088CEB5C;
L_088CEB5C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), ctx.gpr[9]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(432));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    ctx.gpr[31] = (0x088CEB78u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CEB78u) goto L_088CEB78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CEB78:
    ctx.gpr[31] = (0x088CEB80u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 555u, 0x088CEB80u, 0x088C5CD0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 363u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 363u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 363u, 0x088C5CD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CEB80u) goto L_088CEB80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CEB80:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_088CEB98;
    }
    goto L_088CEB98;
L_088CEB98:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23724)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(184)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_088CEBB8;
      }
      goto L_088CEBAC;
    }
L_088CEBAC:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_088CEBB8;
L_088CEBB8:
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[18] = (ctx.gpr[18] + aot_gpr_5);
    goto L_088CEBC8;
L_088CEBC8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_088CEBEC;
      }
      goto L_088CEBDC;
    }
L_088CEBDC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088CEBEC;
L_088CEBEC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(232), ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(644));
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x088CEC10u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CEC10u) goto L_088CEC10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088CEC10:
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(214))))));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.gpr[8] = (ctx.gpr[8] - aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) <= 0;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(232)));
      if (branch_taken) {
          goto L_088CF35C;
      }
      goto L_088CEC34;
    }
L_088CEC34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[23] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_088CEE0C;
      }
      goto L_088CEC40;
    }
L_088CEC40:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23736), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CECCC;
      }
      goto L_088CEC54;
    }
L_088CEC54:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(214))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 150 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CECC4;
      }
      goto L_088CEC64;
    }
L_088CEC64:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088CECC4;
      }
      goto L_088CEC6C;
    }
L_088CEC6C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(190))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_088CECC4;
      }
      goto L_088CEC78;
    }
L_088CEC78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CECC4;
      }
      goto L_088CEC94;
    }
L_088CEC94:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CECC4;
      }
      goto L_088CECA0;
    }
L_088CECA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(94)));
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CECCC;
      }
      goto L_088CECC4;
    }
L_088CECC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740), 0u);
      if (branch_taken) {
          goto L_088CF750;
      }
      goto L_088CECCC;
    }
L_088CECCC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(214))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 220 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u | 8u);
      if (branch_taken) {
          goto L_088CED04;
      }
      goto L_088CECE0;
    }
L_088CECE0:
    aot_gpr_6 = (14979u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_6 | 4719u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[28] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CED1C;
      }
      goto L_088CED04;
    }
L_088CED04:
    aot_gpr_6 = (aot_gpr_4 < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_088CED30;
      }
      goto L_088CED10;
    }
L_088CED10:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740), aot_gpr_4);
      if (branch_taken) {
          goto L_088CED30;
      }
      goto L_088CED1C;
    }
L_088CED1C:
    aot_gpr_6 = (aot_gpr_4 < static_cast<std::uint32_t>(800) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088CED30;
      }
      goto L_088CED28;
    }
L_088CED28:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740), aot_gpr_4);
    goto L_088CED30;
L_088CED30:
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 << 3u);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(217)));
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
      if (branch_taken) {
          goto L_088CED50;
      }
      goto L_088CED48;
    }
L_088CED48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 4270u);
      if (branch_taken) {
          goto L_088CED54;
      }
      goto L_088CED50;
    }
L_088CED50:
    aot_gpr_6 = (0u | 22050u);
    goto L_088CED54;
L_088CED54:
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(217)));
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_088CEDC4;
      }
      goto L_088CED60;
    }
L_088CED60:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_088CED7C;
      }
      goto L_088CED70;
    }
L_088CED70:
    aot_gpr_6 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_088CED7C;
L_088CED7C:
    aot_gpr_6 = (17723u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 32768u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[30])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[30];
        goto L_088CEDAC;
    }
    goto L_088CEDA0;
L_088CEDA0:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CEDBC;
      }
      goto L_088CEDAC;
    }
L_088CEDAC:
    aot_gpr_6 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_7 + aot_gpr_6);
    goto L_088CEDBC;
L_088CEDBC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
      if (branch_taken) {
          goto L_088CEDD0;
      }
      goto L_088CEDC4;
    }
L_088CEDC4:
    aot_gpr_7 = (ctx.gpr[18] + ctx.gpr[21]);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    goto L_088CEDD0;
L_088CEDD0:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088CEDE0;
      }
      goto L_088CEDDC;
    }
L_088CEDDC:
    aot_gpr_5 = (aot_gpr_4 >> 1u);
    goto L_088CEDE0;
L_088CEDE0:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_7 = (ctx.gpr[8] + static_cast<std::uint32_t>(5885));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(208)));
    aot_gpr_5 = (0u | 127u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 64u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x088CEE04u);
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 592u, 0x088CEE04u, 0x088C6D14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 594u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 594u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 594u, 0x088C6D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CEE04u) goto L_088CEE04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CEE04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(214))))));
      if (branch_taken) {
          goto L_088CF754;
      }
      goto L_088CEE0C;
    }
L_088CEE0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088CEE3C;
      }
      goto L_088CEE18;
    }
L_088CEE18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1654))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CEE34;
      }
      goto L_088CEE2C;
    }
L_088CEE2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088CEE40;
      }
      goto L_088CEE34;
    }
L_088CEE34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088CEE40;
      }
      goto L_088CEE3C;
    }
L_088CEE3C:
    aot_gpr_4 = (0u | 0u);
    goto L_088CEE40;
L_088CEE40:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(214))))));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_7) < 150 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 != 0u;
      if (branch_taken) {
          goto L_088CEEB8;
      }
      goto L_088CEE50;
    }
L_088CEE50:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088CEEB8;
      }
      goto L_088CEE58;
    }
L_088CEE58:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(613))))));
    aot_gpr_7 = (aot_gpr_7 & 32u);
    aot_gpr_7 = (0u < aot_gpr_7 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    { const bool branch_taken = aot_gpr_7 != 0u;
      if (branch_taken) {
          goto L_088CEEB8;
      }
      goto L_088CEE74;
    }
L_088CEE74:
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088CEEB8;
      }
      goto L_088CEE80;
    }
L_088CEE80:
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), ctx.gpr[8]);
      if (branch_taken) {
          goto L_088CEEAC;
      }
      goto L_088CEE88;
    }
L_088CEE88:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (15395u << 16u);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[28];
    aot_gpr_6 = (aot_gpr_6 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), ctx.gpr[8]);
      if (branch_taken) {
          goto L_088CEEB8;
      }
      goto L_088CEEAC;
    }
L_088CEEAC:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(190))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) <= 0;
      if (branch_taken) {
          goto L_088CF1A4;
      }
      goto L_088CEEB8;
    }
L_088CEEB8:
    aot_gpr_7 = (2232u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-21352));
    ctx.gpr[8] = (16840u << 16u);
    aot_gpr_6 = (0u | 8u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_7);
      if (branch_taken) {
          goto L_088CEF00;
      }
      goto L_088CEED8;
    }
L_088CEED8:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(613))))));
    aot_gpr_7 = (aot_gpr_7 & 32u);
    aot_gpr_7 = (0u < aot_gpr_7 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    { const bool branch_taken = aot_gpr_7 != 0u;
      if (branch_taken) {
          goto L_088CEF00;
      }
      goto L_088CEEF4;
    }
L_088CEEF4:
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    if (aot_gpr_7 == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(190))))));
        goto L_088CEF0C;
    }
    goto L_088CEF00;
L_088CEF00:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CEF14;
      }
      goto L_088CEF08;
    }
L_088CEF08:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(190))))));
    goto L_088CEF0C;
L_088CEF0C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088CF04C;
      }
      goto L_088CEF14;
    }
L_088CEF14:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088CEF28;
      }
      goto L_088CEF1C;
    }
L_088CEF1C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    aot_gpr_4 = (16153u << 16u);
      if (branch_taken) {
          goto L_088CEF74;
      }
      goto L_088CEF28;
    }
L_088CEF28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(196)));
        goto L_088CEF54;
    }
    goto L_088CEF44;
L_088CEF44:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23744)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CEF68;
      }
      goto L_088CEF50;
    }
L_088CEF50:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    goto L_088CEF54;
L_088CEF54:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CEF84;
      }
      goto L_088CEF5C;
    }
L_088CEF5C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23745)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CEF84;
      }
      goto L_088CEF68;
    }
L_088CEF68:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088CEF84;
      }
      goto L_088CEF70;
    }
L_088CEF70:
    aot_gpr_4 = (16153u << 16u);
    goto L_088CEF74;
L_088CEF74:
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_088CEF84;
L_088CEF84:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (0u | 22u);
    { const bool branch_taken = ctx.gpr[19] == aot_gpr_4;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_088CEFA0;
      }
      goto L_088CEF94;
    }
L_088CEF94:
    aot_gpr_4 = (0u | 23u);
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
    aot_gpr_4 = (18115u << 16u);
      if (branch_taken) {
          goto L_088CEFF0;
      }
      goto L_088CEFA0;
    }
L_088CEFA0:
    aot_gpr_4 = (18026u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 24576u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[30])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[30];
        goto L_088CEFD0;
    }
    goto L_088CEFC0;
L_088CEFC0:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_088CEFE4;
      }
      goto L_088CEFD0;
    }
L_088CEFD0:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_7 = (aot_gpr_7 + aot_gpr_4);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(14000));
    goto L_088CEFE4;
L_088CEFE4:
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_088CF034;
      }
      goto L_088CEFEC;
    }
L_088CEFEC:
    aot_gpr_4 = (18115u << 16u);
    goto L_088CEFF0;
L_088CEFF0:
    aot_gpr_4 = (aot_gpr_4 | 20480u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[30])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[30];
        goto L_088CF01C;
    }
    goto L_088CF00C;
L_088CF00C:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_088CF030;
      }
      goto L_088CF01C;
    }
L_088CF01C:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_7 = (aot_gpr_7 + aot_gpr_4);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(14000));
    goto L_088CF030;
L_088CF030:
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    goto L_088CF034;
L_088CF034:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(80));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088CF0B0;
      }
      goto L_088CF04C;
    }
L_088CF04C:
    aot_gpr_4 = (17914u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[30])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(192)));
      if (branch_taken) {
          goto L_088CF078;
      }
      goto L_088CF068;
    }
L_088CF068:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16000));
      if (branch_taken) {
          goto L_088CF090;
      }
      goto L_088CF078;
    }
L_088CF078:
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[30];
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_7 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16000));
    goto L_088CF090;
L_088CF090:
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088CF0B0;
L_088CF0B0:
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(217)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_088CF118;
      }
      goto L_088CF0BC;
    }
L_088CF0BC:
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (17669u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 8192u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < ctx.fpr[30])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088CF100;
      }
      goto L_088CF0F0;
    }
L_088CF0F0:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4270));
      if (branch_taken) {
          goto L_088CF118;
      }
      goto L_088CF100;
    }
L_088CF100:
    aot_fpr_12 = ctx.fpr[24] - ctx.fpr[30];
    aot_gpr_7 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_7 = (ctx.gpr[9] + aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4270));
    goto L_088CF118;
L_088CF118:
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_6;
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
      if (branch_taken) {
          goto L_088CF128;
      }
      goto L_088CF124;
    }
L_088CF124:
    aot_gpr_7 = (aot_gpr_7 >> 1u);
    goto L_088CF128;
L_088CF128:
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_088CF15C;
      }
      goto L_088CF130;
    }
L_088CF130:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(220), aot_gpr_7);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088CF148u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 645u, 0x088CF148u, 0x0880A680u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 550u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 550u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CF148u) goto L_088CF148;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CF148:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23736), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(220)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(228)));
    goto L_088CF15C;
L_088CF15C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(617))))));
    aot_gpr_6 = (aot_gpr_6 & 4u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088CF178;
      }
      goto L_088CF170;
    }
L_088CF170:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088CF178;
L_088CF178:
    aot_gpr_6 = (aot_gpr_7 | 0u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x088CF19Cu);
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 649u, 0x088CF19Cu, 0x088C6D14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 594u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 594u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 594u, 0x088C6D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CF19Cu) goto L_088CF19C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CF19C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CF354;
      }
      goto L_088CF1A4;
    }
L_088CF1A4:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088CF1C0u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 651u, 0x088CF1C0u, 0x089B8234u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 30u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 30u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 30u, 0x089B8234u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CF1C0u) goto L_088CF1C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CF1C0:
    aot_gpr_5 = (16916u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088CF1D8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 652u, 0x088CF1D8u, 0x089B80C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 13u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 13u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 13u, 0x089B80C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CF1D8u) goto L_088CF1D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CF1D8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23736)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(200)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[23] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_088CF228;
      }
      goto L_088CF1F4;
    }
L_088CF1F4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (0u | 2u);
      if (branch_taken) {
          goto L_088CF20C;
      }
      goto L_088CF204;
    }
L_088CF204:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
      if (branch_taken) {
          goto L_088CF220;
      }
      goto L_088CF20C;
    }
L_088CF20C:
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 1 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_088CF21C;
    }
    goto L_088CF21C;
L_088CF21C:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088CF220;
L_088CF220:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23736), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 1u);
    goto L_088CF228;
L_088CF228:
    { const bool branch_taken = ctx.gpr[23] != 0u;
      if (branch_taken) {
          goto L_088CF2AC;
      }
      goto L_088CF230;
    }
L_088CF230:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CF280;
      }
      goto L_088CF238;
    }
L_088CF238:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(94)));
    aot_gpr_5 = (aot_gpr_5 << 24u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_088CF268;
    }
    goto L_088CF25C;
L_088CF25C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088CF280;
      }
      goto L_088CF268;
    }
L_088CF268:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(617))))));
    aot_gpr_5 = (aot_gpr_5 | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088CEC40;
      }
      goto L_088CF280;
    }
L_088CF280:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (ctx.gpr[8] + static_cast<std::uint32_t>(5884));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(617))))));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_7 = (aot_gpr_7 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x088CF2ACu);
    ctx.gpr[9] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 664u, 0x088CF2ACu, 0x0880A214u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 474u, 0x0880A214u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CF2ACu) goto L_088CF2AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CF2AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(208)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (0u | 127u);
    ctx.gpr[31] = (0x088CF2C0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 665u, 0x088CF2C0u, 0x089B8190u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 21u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 21u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CF2C0u) goto L_088CF2C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CF2C0:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088CF2D4u);
    aot_gpr_7 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 666u, 0x088CF2D4u, 0x0880A438u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 516u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 516u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 516u, 0x0880A438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CF2D4u) goto L_088CF2D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CF2D4:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088CF2E4u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 667u, 0x088CF2E4u, 0x0880A584u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 536u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 536u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 536u, 0x0880A584u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CF2E4u) goto L_088CF2E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CF2E4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746)));
    aot_gpr_6 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-16480));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[21]);
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_5;
    ctx.gpr[18] = (ctx.gpr[18] + aot_gpr_4);
      if (branch_taken) {
          goto L_088CF318;
      }
      goto L_088CF30C;
    }
L_088CF30C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(22050));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
      if (branch_taken) {
          goto L_088CF330;
      }
      goto L_088CF318;
    }
L_088CF318:
    aot_gpr_4 = (0u | 15u);
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_088CF32C;
      }
      goto L_088CF324;
    }
L_088CF324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4270));
      if (branch_taken) {
          goto L_088CF330;
      }
      goto L_088CF32C;
    }
L_088CF32C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(22050));
    goto L_088CF330;
L_088CF330:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088CF340u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 673u, 0x088CF340u, 0x0880A5B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 539u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 539u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 539u, 0x0880A5B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CF340u) goto L_088CF340;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CF340:
    { const bool branch_taken = ctx.gpr[23] != 0u;
      if (branch_taken) {
          goto L_088CF354;
      }
      goto L_088CF348;
    }
L_088CF348:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088CF354u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 675u, 0x088CF354u, 0x0880A624u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 546u, 0x0880A624u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CF354u) goto L_088CF354;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CF354:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(214))))));
      if (branch_taken) {
          goto L_088CF754;
      }
      goto L_088CF35C;
    }
L_088CF35C:
    ctx.gpr[21] = (aot_gpr_5 << 3u);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21352));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(188)));
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[18] = (0u | 8u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_5);
      if (branch_taken) {
          goto L_088CF424;
      }
      goto L_088CF37C;
    }
L_088CF37C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088CF39C;
      }
      goto L_088CF388;
    }
L_088CF388:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088CF394u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 679u, 0x088CF394u, 0x0880A680u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 550u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 550u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CF394u) goto L_088CF394;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CF394:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23736), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088CF39C;
L_088CF39C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088CF3CC;
      }
      goto L_088CF3A4;
    }
L_088CF3A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CF3CC;
      }
      goto L_088CF3C0;
    }
L_088CF3C0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CF3D4;
      }
      goto L_088CF3CC;
    }
L_088CF3CC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088CF408;
      }
      goto L_088CF3D4;
    }
L_088CF3D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 6u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
        goto L_088CF3EC;
    }
    goto L_088CF3E4;
L_088CF3E4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_088CF408;
      }
      goto L_088CF3EC;
    }
L_088CF3EC:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(88)));
    ctx.fpr[26] = ctx.fpr[26] / aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[26])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088CF408;
    }
    goto L_088CF408;
L_088CF408:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CF41C;
      }
      goto L_088CF418;
    }
L_088CF418:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_088CF41C;
L_088CF41C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088CF61C;
      }
      goto L_088CF424;
    }
L_088CF424:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-23748))))));
    if (static_cast<std::int32_t>(aot_gpr_5) <= 0) {
    aot_gpr_4 = (17948u << 16u);
        goto L_088CF620;
    }
    goto L_088CF430;
L_088CF430:
    aot_gpr_5 = (15692u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_088CF46C;
      }
      goto L_088CF444;
    }
L_088CF444:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), ctx.gpr[8]);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088CF454u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 693u, 0x088CF454u, 0x0880A680u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 550u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 550u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CF454u) goto L_088CF454;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CF454:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23736), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(200)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    goto L_088CF46C;
L_088CF46C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740), 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088CF4D4;
      }
      goto L_088CF478;
    }
L_088CF478:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (aot_gpr_5 & 32u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088CF4D4;
      }
      goto L_088CF490;
    }
L_088CF490:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (15395u << 16u);
      if (branch_taken) {
          goto L_088CF4D4;
      }
      goto L_088CF49C;
    }
L_088CF49C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 | 55050u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (15948u << 16u);
      if (branch_taken) {
          goto L_088CF54C;
      }
      goto L_088CF4B8;
    }
L_088CF4B8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CF54C;
      }
      goto L_088CF4D4;
    }
L_088CF4D4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (0u | 229u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088CF530;
      }
      goto L_088CF4E4;
    }
L_088CF4E4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-968));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088CF530;
      }
      goto L_088CF4F4;
    }
L_088CF4F4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-969));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088CF530;
      }
      goto L_088CF504;
    }
L_088CF504:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[23];
      if (branch_taken) {
          goto L_088CF530;
      }
      goto L_088CF510;
    }
L_088CF510:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (0u | 184u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088CF530;
      }
      goto L_088CF520;
    }
L_088CF520:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 208u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (16153u << 16u);
      if (branch_taken) {
          goto L_088CF538;
      }
      goto L_088CF530;
    }
L_088CF530:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_088CF54C;
      }
      goto L_088CF538;
    }
L_088CF538:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088CF54C;
L_088CF54C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (17948u << 16u);
      if (branch_taken) {
          goto L_088CF620;
      }
      goto L_088CF55C;
    }
L_088CF55C:
    aot_gpr_4 = (16243u << 16u);
    aot_fpr_12 = ctx.fpr[26] - aot_fpr_12;
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (17820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(617))))));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[30])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_gpr_5 & 4u);
      if (branch_taken) {
          goto L_088CF5A8;
      }
      goto L_088CF598;
    }
L_088CF598:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(19000));
      if (branch_taken) {
          goto L_088CF5C0;
      }
      goto L_088CF5A8;
    }
L_088CF5A8:
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[30];
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(19000));
    goto L_088CF5C0;
L_088CF5C0:
    aot_gpr_6 = (16840u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_7 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(40));
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_088CF5F4;
      }
      goto L_088CF5EC;
    }
L_088CF5EC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_088CF5F4;
L_088CF5F4:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
      if (branch_taken) {
          goto L_088CF600;
      }
      goto L_088CF5FC;
    }
L_088CF5FC:
    aot_gpr_6 = (aot_gpr_4 >> 1u);
    goto L_088CF600;
L_088CF600:
    aot_gpr_7 = (ctx.gpr[8] + static_cast<std::uint32_t>(5886));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 63u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088CF61Cu);
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 716u, 0x088CF61Cu, 0x088C6D14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 594u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 594u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 594u, 0x088C6D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CF61Cu) goto L_088CF61C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CF61C:
    aot_gpr_4 = (17948u << 16u);
    goto L_088CF620;
L_088CF620:
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(617))))));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[30])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_6 = (aot_gpr_6 & 4u);
      if (branch_taken) {
          goto L_088CF654;
      }
      goto L_088CF644;
    }
L_088CF644:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_088CF66C;
      }
      goto L_088CF654;
    }
L_088CF654:
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[30];
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22050));
    goto L_088CF66C;
L_088CF66C:
    aot_gpr_5 = (16928u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (0u | 127u);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(217)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[8]);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_088CF6FC;
      }
      goto L_088CF698;
    }
L_088CF698:
    aot_gpr_4 = (17658u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[30])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[30];
        goto L_088CF6C4;
    }
    goto L_088CF6B4;
L_088CF6B4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6000));
      if (branch_taken) {
          goto L_088CF6D8;
      }
      goto L_088CF6C4;
    }
L_088CF6C4:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6000));
    goto L_088CF6D8;
L_088CF6D8:
    aot_gpr_5 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (0u | 40u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_7 = (aot_gpr_7 & 255u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_7);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_088CF6FC;
L_088CF6FC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
      if (branch_taken) {
          goto L_088CF708;
      }
      goto L_088CF704;
    }
L_088CF704:
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    goto L_088CF708;
L_088CF708:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088CF718;
      }
      goto L_088CF710;
    }
L_088CF710:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_088CF718;
L_088CF718:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(208)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 52u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x088CF738u);
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 730u, 0x088CF738u, 0x088C6D14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 594u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 594u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 594u, 0x088C6D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CF738u) goto L_088CF738;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CF738:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 1 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_gpr_6 | 0u);
        goto L_088CF74C;
    }
    goto L_088CF74C;
L_088CF74C:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088CF750;
L_088CF750:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(214))))));
    goto L_088CF754;
L_088CF754:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-23748), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(613))))));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23745), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23744), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088CF774;
L_088CF774:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(236), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      aot_gpr_16 = aot_run_words[6];
      ctx.gpr[17] = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      ctx.gpr[19] = aot_run_words[9];
      ctx.gpr[20] = aot_run_words[10];
      ctx.gpr[21] = aot_run_words[11];
      ctx.gpr[22] = aot_run_words[12];
      ctx.gpr[23] = aot_run_words[13];
      ctx.gpr[30] = aot_run_words[14];
      ctx.gpr[31] = aot_run_words[15];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088CF7BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (17505u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088CFA9C;
      }
      goto L_088CF7F8;
    }
L_088CF7F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 6u);
      if (branch_taken) {
          goto L_088CF818;
      }
      goto L_088CF808;
    }
L_088CF808:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088CF89C;
      }
      goto L_088CF810;
    }
L_088CF810:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CF91C;
      }
      goto L_088CF818;
    }
L_088CF818:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CF884;
      }
      goto L_088CF828;
    }
L_088CF828:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088CF838u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(944));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 741u, 0x088CF838u, 0x08B0D8F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 376u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 376u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CF838u) goto L_088CF838;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CF838:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_088CF870;
      }
      goto L_088CF844;
    }
L_088CF844:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1552)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CF870;
      }
      goto L_088CF868;
    }
L_088CF868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088CF884;
      }
      goto L_088CF870;
    }
L_088CF870:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CF828;
      }
      goto L_088CF884;
    }
L_088CF884:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088CF894;
      }
      goto L_088CF88C;
    }
L_088CF88C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CF924;
      }
      goto L_088CF894;
    }
L_088CF894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CFAA0;
      }
      goto L_088CF89C;
    }
L_088CF89C:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CF904;
      }
      goto L_088CF8AC;
    }
L_088CF8AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1076)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088CF8F0;
      }
      goto L_088CF8C4;
    }
L_088CF8C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1248)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CF8F0;
      }
      goto L_088CF8E8;
    }
L_088CF8E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088CF904;
      }
      goto L_088CF8F0;
    }
L_088CF8F0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CF8AC;
      }
      goto L_088CF904;
    }
L_088CF904:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088CF914;
      }
      goto L_088CF90C;
    }
L_088CF90C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CF924;
      }
      goto L_088CF914;
    }
L_088CF914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CFAA0;
      }
      goto L_088CF91C;
    }
L_088CF91C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CFAA0;
      }
      goto L_088CF924;
    }
L_088CF924:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) & 0x7FFFFFFFu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 / aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_088CF960;
    }
    goto L_088CF960;
L_088CF960:
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CFA94;
      }
      goto L_088CF97C;
    }
L_088CF97C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088CF98Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 760u, 0x088CF98Cu, 0x088C6080u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 397u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 397u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CF98Cu) goto L_088CF98C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CF98C:
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (16880u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[31] = (0x088CF9B8u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 761u, 0x088CF9B8u, 0x089B8190u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 21u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 21u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CF9B8u) goto L_088CF9B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CF9B8:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_4 = (0u | 95u);
      if (branch_taken) {
          goto L_088CFA94;
      }
      goto L_088CF9C8;
    }
L_088CF9C8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (17835u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 5u);
    aot_gpr_5 = (aot_gpr_5 | 57344u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (0u | 338u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (17835u << 16u);
      if (branch_taken) {
          goto L_088CFA28;
      }
      goto L_088CFA0C;
    }
L_088CFA0C:
    aot_gpr_4 = (17835u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 57344u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CFA50;
      }
      goto L_088CFA28;
    }
L_088CFA28:
    aot_gpr_4 = (aot_gpr_4 | 57344u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088CFA50;
L_088CFA50:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (16384u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16880u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088CFA94u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0108.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 766u, 0x088CFA94u, 0x089B7B80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0108_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0108_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CFA94u) goto L_088CFA94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CFA94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CFAA0;
      }
      goto L_088CFA9C;
    }
L_088CFA9C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088CFAA0;
L_088CFAA0:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088CFAC0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (17608u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_16, ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    { const std::uint32_t aot_run_words[7]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088CFFAC;
      }
      goto L_088CFB24;
    }
L_088CFB24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_16 = (0u | 1u);
      if (branch_taken) {
          goto L_088CFB84;
      }
      goto L_088CFB30;
    }
L_088CFB30:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088CFB84;
      }
      goto L_088CFB3C;
    }
L_088CFB3C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20328)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088CFB54:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (0u | 4u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1884)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1888)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1892));
      if (branch_taken) {
          goto L_088CFB8C;
      }
      goto L_088CFB6C;
    }
L_088CFB6C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (0u | 2u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1493)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1496)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1500));
      if (branch_taken) {
          goto L_088CFB8C;
      }
      goto L_088CFB84;
    }
L_088CFB84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_088CFFB0;
      }
      goto L_088CFB8C;
    }
L_088CFB8C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088CFFA4;
      }
      goto L_088CFB94;
    }
L_088CFB94:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088CFBA8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 778u, 0x088CFBA8u, 0x088C6080u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 397u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 397u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CFBA8u) goto L_088CFBA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CFBA8:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[30] = (0u | 82u);
      if (branch_taken) {
          goto L_088CFD18;
      }
      goto L_088CFBB8;
    }
L_088CFBB8:
    ctx.gpr[23] = (0u | 70u);
    ctx.gpr[22] = (0u | 52u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[19] = (0u | 2u);
    goto L_088CFBCC;
L_088CFBCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_16 << 2u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088CFBEC;
      }
      goto L_088CFBE4;
    }
L_088CFBE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CFD00;
      }
      goto L_088CFBEC;
    }
L_088CFBEC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[30];
      if (branch_taken) {
          goto L_088CFC14;
      }
      goto L_088CFBFC;
    }
L_088CFBFC:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[23];
      if (branch_taken) {
          goto L_088CFC70;
      }
      goto L_088CFC04;
    }
L_088CFC04:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
      if (branch_taken) {
          goto L_088CFCCC;
      }
      goto L_088CFC0C;
    }
L_088CFC0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CFCEC;
      }
      goto L_088CFC14;
    }
L_088CFC14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[21];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088CFC28;
      }
      goto L_088CFC20;
    }
L_088CFC20:
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[20];
      if (branch_taken) {
          goto L_088CFC4C;
      }
      goto L_088CFC28;
    }
L_088CFC28:
    aot_gpr_7 = (aot_gpr_6 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[31] = (0x088CFC44u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 789u, 0x088CFC44u, 0x088C7414u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 662u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 662u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 662u, 0x088C7414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CFC44u) goto L_088CFC44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CFC44:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088CFC68;
      }
      goto L_088CFC4C;
    }
L_088CFC4C:
    aot_gpr_7 = (aot_gpr_6 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[31] = (0x088CFC64u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 791u, 0x088CFC64u, 0x088C75B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 682u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 682u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 682u, 0x088C75B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CFC64u) goto L_088CFC64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CFC64:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088CFC68;
L_088CFC68:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CFCEC;
      }
      goto L_088CFC70;
    }
L_088CFC70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_16 == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088CFC84;
      }
      goto L_088CFC7C;
    }
L_088CFC7C:
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[19];
      if (branch_taken) {
          goto L_088CFCA8;
      }
      goto L_088CFC84;
    }
L_088CFC84:
    aot_gpr_7 = (aot_gpr_6 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[31] = (0x088CFCA0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 796u, 0x088CFCA0u, 0x088C7414u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 662u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 662u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 662u, 0x088C7414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CFCA0u) goto L_088CFCA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CFCA0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088CFCC4;
      }
      goto L_088CFCA8;
    }
L_088CFCA8:
    aot_gpr_7 = (aot_gpr_6 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[31] = (0x088CFCC0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 798u, 0x088CFCC0u, 0x088C75B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 682u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 682u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 682u, 0x088C75B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CFCC0u) goto L_088CFCC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CFCC0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088CFCC4;
L_088CFCC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088CFCEC;
      }
      goto L_088CFCCC;
    }
L_088CFCCC:
    aot_gpr_7 = (aot_gpr_6 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088CFCE8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 801u, 0x088CFCE8u, 0x088C7414u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 662u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 662u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 662u, 0x088C7414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CFCE8u) goto L_088CFCE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CFCE8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088CFCEC;
L_088CFCEC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088CFD00;
      }
      goto L_088CFCFC;
    }
L_088CFCFC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088CFD00;
L_088CFD00:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (aot_gpr_16 & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088CFBCC;
      }
      goto L_088CFD18;
    }
L_088CFD18:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (0u | 1u);
      if (branch_taken) {
          goto L_088CFFA4;
      }
      goto L_088CFD28;
    }
L_088CFD28:
    aot_gpr_4 = (16988u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (16928u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[31] = (0x088CFD58u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 807u, 0x088CFD58u, 0x089B8190u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 21u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 21u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CFD58u) goto L_088CFD58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CFD58:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    aot_gpr_6 = (0u | 3u);
      if (branch_taken) {
          goto L_088CFFA4;
      }
      goto L_088CFD68;
    }
L_088CFD68:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_7 = (20224u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(311)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_7);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    aot_gpr_7 = (aot_gpr_4 < static_cast<std::uint32_t>(32) ? 1u : 0u);
    if (aot_gpr_7 == 0u) {
    aot_gpr_4 = (17820u << 16u);
        goto L_088CFEB4;
    }
    goto L_088CFD8C;
L_088CFD8C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20288)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088CFDA4:
    aot_gpr_4 = (17995u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 8192u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_7 = (18184u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_gpr_7 = (aot_gpr_7 | 47104u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_7);
    aot_gpr_4 = (0u | 290u);
    ctx.fpr[24] = ctx.fpr[24] + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088CFDE4;
      }
      goto L_088CFDD8;
    }
L_088CFDD8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CFDF8;
      }
      goto L_088CFDE4;
    }
L_088CFDE4:
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_12;
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_7 + aot_gpr_4);
    goto L_088CFDF8;
L_088CFDF8:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088CFE30;
      }
      goto L_088CFE10;
    }
L_088CFE10:
    ctx.gpr[9] = (16448u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[9]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (2237u << 16u);
    aot_gpr_7 = (0u | 8u);
    ctx.gpr[8] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088CFF40;
      }
      goto L_088CFE30;
    }
L_088CFE30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_088CFFB0;
      }
      goto L_088CFE38;
    }
L_088CFE38:
    aot_gpr_4 = (17723u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_7 = (17820u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_gpr_7 = (aot_gpr_7 | 16384u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_7);
    aot_gpr_4 = (0u | 213u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (16448u << 16u);
    ctx.fpr[24] = ctx.fpr[24] + aot_fpr_14;
    ctx.gpr[9] = (2237u << 16u);
    aot_gpr_7 = (0u | 8u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (0u | 8u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088CFE90;
      }
      goto L_088CFE84;
    }
L_088CFE84:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CFEA4;
      }
      goto L_088CFE90;
    }
L_088CFE90:
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_12;
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[10] + aot_gpr_4);
    goto L_088CFEA4;
L_088CFEA4:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088CFF40;
      }
      goto L_088CFEB0;
    }
L_088CFEB0:
    aot_gpr_4 = (17820u << 16u);
    goto L_088CFEB4;
L_088CFEB4:
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_7 = (17963u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_gpr_7 = (aot_gpr_7 | 57344u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_7);
    aot_gpr_4 = (0u | 313u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (16448u << 16u);
    ctx.fpr[24] = ctx.fpr[24] + aot_fpr_14;
    ctx.gpr[9] = (2237u << 16u);
    aot_gpr_7 = (0u | 8u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (0u | 8u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088CFF08;
      }
      goto L_088CFEFC;
    }
L_088CFEFC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088CFF1C;
      }
      goto L_088CFF08;
    }
L_088CFF08:
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_12;
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[10] + aot_gpr_4);
    goto L_088CFF1C;
L_088CFF1C:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[10];
      if (branch_taken) {
          goto L_088CFF40;
      }
      goto L_088CFF30;
    }
L_088CFF30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2000));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_088CFF40;
L_088CFF40:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_7;
    aot_gpr_4 = (0u | 290u);
      if (branch_taken) {
          goto L_088CFF74;
      }
      goto L_088CFF48;
    }
L_088CFF48:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(311)));
    if (aot_gpr_4 != aot_gpr_5) {
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
        goto L_088CFF78;
    }
    goto L_088CFF68;
L_088CFF68:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088CFF74;
L_088CFF74:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    goto L_088CFF78;
L_088CFF78:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[8]);
    { const std::uint32_t aot_run_words[3]{0u, std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(ctx.gpr[18] + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), aot_gpr_6);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x088CFFA4u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0050->0108.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0050_entry, 831u, 0x088CFFA4u, 0x089B7B80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0108_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0108_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088CFFA4u) goto L_088CFFA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088CFFA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_088CFFB0;
      }
      goto L_088CFFAC;
    }
L_088CFFAC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088CFFB0;
L_088CFFB0:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088CFFF0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (17608u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.pc = 0x088D0000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0050(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0050_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_50(Runtime &runtime) {
    runtime.register_generated_unit(50u, 0x088CC000u, 16384u, &recomp_unit_0050, &recomp_unit_0050_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x088CC000u, &recomp_unit_0050, "recomp_unit_0050",
                                          kEntryMasks_recomp_unit_0050, 64u);
}
} // namespace psprecomp
