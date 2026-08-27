#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0099[64] = {
    0x2940A442A8A00041ull, 0x32464810302A2989ull, 0x24242510648C9192ull, 0x10001010A4242424ull,
    0x008010A502000040ull, 0x0C304088A0440000ull, 0x0018651151200000ull, 0x010C204450224000ull,
    0x0808610222811200ull, 0x4120904810A04512ull, 0x0619444000310502ull, 0x1422228155501000ull,
    0x041041041041050Aull, 0x1041041041041041ull, 0x00002D5555555554ull, 0x400130A140000000ull,
    0x050411450940A008ull, 0x40B0A058502C2814ull, 0x8582858502C28161ull, 0x844016140B0A0582ull,
    0x08A2841450820821ull, 0x028002D12894822Aull, 0x4AD249122152B495ull, 0x0000000400A56925ull,
    0x0000000000000420ull, 0x850A186186186184ull, 0x00082080010C1861ull, 0x8A4A28A490800000ull,
    0x2928A2928A2928A2ull, 0xA2928A2928A2928Aull, 0x8A2928A2928A2928ull, 0x28A2928A2928A292ull,
    0xA4A28A4A28A4A289ull, 0x8A4A28A4A28A4A28ull, 0x451145144A28A4A2ull, 0x0851450851450851ull,
    0xA280010A28885145ull, 0x0000000228008A28ull, 0x8410842108000000ull, 0x0842108421084210ull,
    0x1084210842108421ull, 0x2108421084210842ull, 0x4210842108421084ull, 0x8421084210842108ull,
    0x4108410410410410ull, 0x1084210842108410ull, 0x2108421084210842ull, 0x0020422508421084ull,
    0x4210842104210842ull, 0x8421084210842108ull, 0x0842108421084210ull, 0x1084210842108421ull,
    0x2108421084210842ull, 0x1041042108421084ull, 0x8421041042104104ull, 0x0842108421084210ull,
    0x1084210842108421ull, 0x5401500802084442ull, 0x0014028050001501ull, 0x052A014940280520ull,
    0x024534048A680915ull, 0x0A9402A14D01229Aull, 0x94000A94000A9400ull, 0x0150A0002A14000Aull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0099[64] = {
    1u, 17u, 37u, 57u, 69u, 77u, 88u, 100u, 111u, 123u, 138u, 152u, 167u, 179u, 190u, 213u,
    221u, 235u, 253u, 273u, 290u, 305u, 322u, 347u, 359u, 361u, 381u, 392u, 406u, 428u, 451u, 473u,
    495u, 518u, 540u, 561u, 579u, 596u, 604u, 612u, 624u, 637u, 650u, 663u, 676u, 687u, 699u, 712u,
    724u, 737u, 750u, 762u, 775u, 788u, 800u, 812u, 824u, 837u, 850u, 860u, 875u, 894u, 914u, 927u,
};
void recomp_unit_0099_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,6,17,16,31 fprs=13,12,20,14 gpr_occ=4424 fpr_occ=230 gpr_total=5717 fpr_total=243
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_17 = ctx.gpr[17];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[6] = aot_gpr_6; ctx.gpr[17] = aot_gpr_17; ctx.gpr[16] = aot_gpr_16; ctx.gpr[31] = aot_gpr_31; ctx.fpr[13] = aot_fpr_13; ctx.fpr[12] = aot_fpr_12; ctx.fpr[20] = aot_fpr_20; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_17 = ctx.gpr[17]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_31 = ctx.gpr[31]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08990000u;
        entry_id = 0u;
        if (entry_delta < 16356u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0099[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0099[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08990000;
    case 2u: goto L_08990018;
    case 3u: goto L_08990054;
    case 4u: goto L_0899005C;
    case 5u: goto L_0899006C;
    case 6u: goto L_08990074;
    case 7u: goto L_0899007C;
    case 8u: goto L_08990084;
    case 9u: goto L_08990098;
    case 10u: goto L_089900A8;
    case 11u: goto L_089900B4;
    case 12u: goto L_089900BC;
    case 13u: goto L_089900D8;
    case 14u: goto L_089900E0;
    case 15u: goto L_089900EC;
    case 16u: goto L_089900F4;
    case 17u: goto L_08990100;
    case 18u: goto L_0899010C;
    case 19u: goto L_0899011C;
    case 20u: goto L_08990120;
    case 21u: goto L_0899012C;
    case 22u: goto L_08990134;
    case 23u: goto L_08990144;
    case 24u: goto L_0899014C;
    case 25u: goto L_08990154;
    case 26u: goto L_08990170;
    case 27u: goto L_08990174;
    case 28u: goto L_08990190;
    case 29u: goto L_089901AC;
    case 30u: goto L_089901B8;
    case 31u: goto L_089901C4;
    case 32u: goto L_089901C8;
    case 33u: goto L_089901D8;
    case 34u: goto L_089901E4;
    case 35u: goto L_089901F0;
    case 36u: goto L_089901F4;
    case 37u: goto L_08990204;
    case 38u: goto L_08990210;
    case 39u: goto L_0899021C;
    case 40u: goto L_08990220;
    case 41u: goto L_08990230;
    case 42u: goto L_0899023C;
    case 43u: goto L_08990248;
    case 44u: goto L_0899024C;
    case 45u: goto L_0899025C;
    case 46u: goto L_08990268;
    case 47u: goto L_08990274;
    case 48u: goto L_08990278;
    case 49u: goto L_08990290;
    case 50u: goto L_089902A0;
    case 51u: goto L_089902A8;
    case 52u: goto L_089902B4;
    case 53u: goto L_089902C8;
    case 54u: goto L_089902D4;
    case 55u: goto L_089902E8;
    case 56u: goto L_089902F4;
    case 57u: goto L_08990308;
    case 58u: goto L_08990314;
    case 59u: goto L_08990328;
    case 60u: goto L_08990334;
    case 61u: goto L_08990348;
    case 62u: goto L_08990354;
    case 63u: goto L_08990368;
    case 64u: goto L_08990374;
    case 65u: goto L_0899037C;
    case 66u: goto L_08990390;
    case 67u: goto L_089903B0;
    case 68u: goto L_089903F0;
    case 69u: goto L_08990418;
    case 70u: goto L_08990464;
    case 71u: goto L_08990480;
    case 72u: goto L_08990488;
    case 73u: goto L_08990494;
    case 74u: goto L_0899049C;
    case 75u: goto L_089904B0;
    case 76u: goto L_089904DC;
    case 77u: goto L_08990548;
    case 78u: goto L_08990558;
    case 79u: goto L_08990574;
    case 80u: goto L_0899057C;
    case 81u: goto L_0899058C;
    case 82u: goto L_0899059C;
    case 83u: goto L_089905B8;
    case 84u: goto L_089905D0;
    case 85u: goto L_089905D4;
    case 86u: goto L_089905E8;
    case 87u: goto L_089905EC;
    case 88u: goto L_08990654;
    case 89u: goto L_08990660;
    case 90u: goto L_08990670;
    case 91u: goto L_08990678;
    case 92u: goto L_08990680;
    case 93u: goto L_08990690;
    case 94u: goto L_089906A0;
    case 95u: goto L_089906A8;
    case 96u: goto L_089906B4;
    case 97u: goto L_089906B8;
    case 98u: goto L_089906CC;
    case 99u: goto L_089906D0;
    case 100u: goto L_08990738;
    case 101u: goto L_08990744;
    case 102u: goto L_08990754;
    case 103u: goto L_08990770;
    case 104u: goto L_08990778;
    case 105u: goto L_08990788;
    case 106u: goto L_08990798;
    case 107u: goto L_089907B4;
    case 108u: goto L_089907C8;
    case 109u: goto L_089907CC;
    case 110u: goto L_089907E0;
    case 111u: goto L_08990824;
    case 112u: goto L_08990830;
    case 113u: goto L_08990840;
    case 114u: goto L_0899085C;
    case 115u: goto L_08990864;
    case 116u: goto L_08990874;
    case 117u: goto L_08990884;
    case 118u: goto L_089908A0;
    case 119u: goto L_089908B4;
    case 120u: goto L_089908B8;
    case 121u: goto L_089908CC;
    case 122u: goto L_089908EC;
    case 123u: goto L_08990904;
    case 124u: goto L_08990910;
    case 125u: goto L_08990920;
    case 126u: goto L_08990928;
    case 127u: goto L_08990938;
    case 128u: goto L_08990954;
    case 129u: goto L_0899095C;
    case 130u: goto L_08990970;
    case 131u: goto L_0899098C;
    case 132u: goto L_08990998;
    case 133u: goto L_089909B0;
    case 134u: goto L_089909BC;
    case 135u: goto L_089909D4;
    case 136u: goto L_089909E0;
    case 137u: goto L_089909F8;
    case 138u: goto L_08990A04;
    case 139u: goto L_08990A20;
    case 140u: goto L_08990A28;
    case 141u: goto L_08990A40;
    case 142u: goto L_08990A50;
    case 143u: goto L_08990A54;
    case 144u: goto L_08990A98;
    case 145u: goto L_08990AA8;
    case 146u: goto L_08990AB8;
    case 147u: goto L_08990AC0;
    case 148u: goto L_08990ACC;
    case 149u: goto L_08990AD0;
    case 150u: goto L_08990AE4;
    case 151u: goto L_08990AE8;
    case 152u: goto L_08990B30;
    case 153u: goto L_08990B50;
    case 154u: goto L_08990B58;
    case 155u: goto L_08990B60;
    case 156u: goto L_08990B68;
    case 157u: goto L_08990B70;
    case 158u: goto L_08990B78;
    case 159u: goto L_08990B80;
    case 160u: goto L_08990B9C;
    case 161u: goto L_08990BA4;
    case 162u: goto L_08990BB4;
    case 163u: goto L_08990BC4;
    case 164u: goto L_08990BD4;
    case 165u: goto L_08990BE8;
    case 166u: goto L_08990BF0;
    case 167u: goto L_08990C04;
    case 168u: goto L_08990C0C;
    case 169u: goto L_08990C20;
    case 170u: goto L_08990C28;
    case 171u: goto L_08990C40;
    case 172u: goto L_08990C58;
    case 173u: goto L_08990C70;
    case 174u: goto L_08990C88;
    case 175u: goto L_08990CA0;
    case 176u: goto L_08990CB8;
    case 177u: goto L_08990CD0;
    case 178u: goto L_08990CE8;
    case 179u: goto L_08990D00;
    case 180u: goto L_08990D18;
    case 181u: goto L_08990D30;
    case 182u: goto L_08990D48;
    case 183u: goto L_08990D60;
    case 184u: goto L_08990D78;
    case 185u: goto L_08990D90;
    case 186u: goto L_08990DA8;
    case 187u: goto L_08990DC0;
    case 188u: goto L_08990DD8;
    case 189u: goto L_08990DF0;
    case 190u: goto L_08990E08;
    case 191u: goto L_08990E10;
    case 192u: goto L_08990E18;
    case 193u: goto L_08990E20;
    case 194u: goto L_08990E28;
    case 195u: goto L_08990E30;
    case 196u: goto L_08990E38;
    case 197u: goto L_08990E40;
    case 198u: goto L_08990E48;
    case 199u: goto L_08990E50;
    case 200u: goto L_08990E58;
    case 201u: goto L_08990E60;
    case 202u: goto L_08990E68;
    case 203u: goto L_08990E70;
    case 204u: goto L_08990E78;
    case 205u: goto L_08990E80;
    case 206u: goto L_08990E88;
    case 207u: goto L_08990E90;
    case 208u: goto L_08990E98;
    case 209u: goto L_08990EA0;
    case 210u: goto L_08990EA8;
    case 211u: goto L_08990EAC;
    case 212u: goto L_08990EB4;
    case 213u: goto L_08990F78;
    case 214u: goto L_08990F80;
    case 215u: goto L_08990F94;
    case 216u: goto L_08990F9C;
    case 217u: goto L_08990FB0;
    case 218u: goto L_08990FB4;
    case 219u: goto L_08990FC0;
    case 220u: goto L_08990FF8;
    case 221u: goto L_0899100C;
    case 222u: goto L_08991034;
    case 223u: goto L_0899103C;
    case 224u: goto L_08991058;
    case 225u: goto L_08991060;
    case 226u: goto L_0899106C;
    case 227u: goto L_08991080;
    case 228u: goto L_08991088;
    case 229u: goto L_08991098;
    case 230u: goto L_089910A0;
    case 231u: goto L_089910B0;
    case 232u: goto L_089910C8;
    case 233u: goto L_089910E0;
    case 234u: goto L_089910E8;
    case 235u: goto L_08991108;
    case 236u: goto L_08991110;
    case 237u: goto L_0899112C;
    case 238u: goto L_08991134;
    case 239u: goto L_08991148;
    case 240u: goto L_0899114C;
    case 241u: goto L_08991154;
    case 242u: goto L_08991170;
    case 243u: goto L_08991178;
    case 244u: goto L_0899118C;
    case 245u: goto L_08991190;
    case 246u: goto L_08991198;
    case 247u: goto L_089911B4;
    case 248u: goto L_089911BC;
    case 249u: goto L_089911D0;
    case 250u: goto L_089911D4;
    case 251u: goto L_089911DC;
    case 252u: goto L_089911F8;
    case 253u: goto L_08991200;
    case 254u: goto L_08991214;
    case 255u: goto L_08991218;
    case 256u: goto L_08991220;
    case 257u: goto L_0899123C;
    case 258u: goto L_08991244;
    case 259u: goto L_08991258;
    case 260u: goto L_0899125C;
    case 261u: goto L_08991264;
    case 262u: goto L_08991280;
    case 263u: goto L_08991288;
    case 264u: goto L_0899129C;
    case 265u: goto L_089912A0;
    case 266u: goto L_089912A8;
    case 267u: goto L_089912BC;
    case 268u: goto L_089912C4;
    case 269u: goto L_089912DC;
    case 270u: goto L_089912E0;
    case 271u: goto L_089912E8;
    case 272u: goto L_089912FC;
    case 273u: goto L_08991304;
    case 274u: goto L_0899131C;
    case 275u: goto L_08991320;
    case 276u: goto L_08991328;
    case 277u: goto L_08991344;
    case 278u: goto L_0899134C;
    case 279u: goto L_08991360;
    case 280u: goto L_08991364;
    case 281u: goto L_0899136C;
    case 282u: goto L_08991388;
    case 283u: goto L_08991390;
    case 284u: goto L_089913A4;
    case 285u: goto L_089913A8;
    case 286u: goto L_089913B0;
    case 287u: goto L_089913D8;
    case 288u: goto L_089913E8;
    case 289u: goto L_089913FC;
    case 290u: goto L_08991400;
    case 291u: goto L_08991414;
    case 292u: goto L_0899142C;
    case 293u: goto L_08991444;
    case 294u: goto L_0899145C;
    case 295u: goto L_08991470;
    case 296u: goto L_08991478;
    case 297u: goto L_08991488;
    case 298u: goto L_08991490;
    case 299u: goto L_089914A8;
    case 300u: goto L_089914BC;
    case 301u: goto L_089914C4;
    case 302u: goto L_089914D4;
    case 303u: goto L_089914DC;
    case 304u: goto L_089914EC;
    case 305u: goto L_08991504;
    case 306u: goto L_0899150C;
    case 307u: goto L_08991514;
    case 308u: goto L_08991524;
    case 309u: goto L_0899153C;
    case 310u: goto L_08991548;
    case 311u: goto L_08991550;
    case 312u: goto L_0899155C;
    case 313u: goto L_0899156C;
    case 314u: goto L_08991574;
    case 315u: goto L_08991580;
    case 316u: goto L_08991590;
    case 317u: goto L_08991598;
    case 318u: goto L_0899159C;
    case 319u: goto L_089915A4;
    case 320u: goto L_089915DC;
    case 321u: goto L_089915E4;
    case 322u: goto L_08991600;
    case 323u: goto L_08991608;
    case 324u: goto L_08991610;
    case 325u: goto L_0899161C;
    case 326u: goto L_08991628;
    case 327u: goto L_08991630;
    case 328u: goto L_08991634;
    case 329u: goto L_0899163C;
    case 330u: goto L_08991644;
    case 331u: goto L_08991650;
    case 332u: goto L_08991658;
    case 333u: goto L_08991660;
    case 334u: goto L_08991674;
    case 335u: goto L_08991684;
    case 336u: goto L_08991690;
    case 337u: goto L_089916A0;
    case 338u: goto L_089916AC;
    case 339u: goto L_089916B8;
    case 340u: goto L_089916C4;
    case 341u: goto L_089916D0;
    case 342u: goto L_089916D8;
    case 343u: goto L_089916DC;
    case 344u: goto L_089916E4;
    case 345u: goto L_089916EC;
    case 346u: goto L_089916F8;
    case 347u: goto L_08991700;
    case 348u: goto L_08991708;
    case 349u: goto L_08991714;
    case 350u: goto L_08991720;
    case 351u: goto L_0899172C;
    case 352u: goto L_08991734;
    case 353u: goto L_08991738;
    case 354u: goto L_08991740;
    case 355u: goto L_08991748;
    case 356u: goto L_08991754;
    case 357u: goto L_0899175C;
    case 358u: goto L_08991788;
    case 359u: goto L_08991814;
    case 360u: goto L_08991828;
    case 361u: goto L_08991908;
    case 362u: goto L_0899191C;
    case 363u: goto L_08991920;
    case 364u: goto L_08991934;
    case 365u: goto L_08991938;
    case 366u: goto L_0899194C;
    case 367u: goto L_08991950;
    case 368u: goto L_08991964;
    case 369u: goto L_08991968;
    case 370u: goto L_0899197C;
    case 371u: goto L_08991980;
    case 372u: goto L_08991994;
    case 373u: goto L_08991998;
    case 374u: goto L_089919AC;
    case 375u: goto L_089919B0;
    case 376u: goto L_089919C4;
    case 377u: goto L_089919CC;
    case 378u: goto L_089919E0;
    case 379u: goto L_089919E8;
    case 380u: goto L_089919FC;
    case 381u: goto L_08991A00;
    case 382u: goto L_08991A14;
    case 383u: goto L_08991A18;
    case 384u: goto L_08991A2C;
    case 385u: goto L_08991A30;
    case 386u: goto L_08991A48;
    case 387u: goto L_08991A4C;
    case 388u: goto L_08991A60;
    case 389u: goto L_08991A9C;
    case 390u: goto L_08991AB4;
    case 391u: goto L_08991ACC;
    case 392u: goto L_08991B5C;
    case 393u: goto L_08991B70;
    case 394u: goto L_08991B7C;
    case 395u: goto L_08991B88;
    case 396u: goto L_08991B94;
    case 397u: goto L_08991B9C;
    case 398u: goto L_08991BAC;
    case 399u: goto L_08991BB4;
    case 400u: goto L_08991BC4;
    case 401u: goto L_08991BCC;
    case 402u: goto L_08991BD8;
    case 403u: goto L_08991BE4;
    case 404u: goto L_08991BEC;
    case 405u: goto L_08991BFC;
    case 406u: goto L_08991C04;
    case 407u: goto L_08991C14;
    case 408u: goto L_08991C1C;
    case 409u: goto L_08991C2C;
    case 410u: goto L_08991C34;
    case 411u: goto L_08991C40;
    case 412u: goto L_08991C4C;
    case 413u: goto L_08991C54;
    case 414u: goto L_08991C64;
    case 415u: goto L_08991C6C;
    case 416u: goto L_08991C7C;
    case 417u: goto L_08991C84;
    case 418u: goto L_08991C90;
    case 419u: goto L_08991C9C;
    case 420u: goto L_08991CA4;
    case 421u: goto L_08991CB4;
    case 422u: goto L_08991CBC;
    case 423u: goto L_08991CCC;
    case 424u: goto L_08991CD4;
    case 425u: goto L_08991CE0;
    case 426u: goto L_08991CEC;
    case 427u: goto L_08991CF4;
    case 428u: goto L_08991D04;
    case 429u: goto L_08991D0C;
    case 430u: goto L_08991D1C;
    case 431u: goto L_08991D24;
    case 432u: goto L_08991D30;
    case 433u: goto L_08991D3C;
    case 434u: goto L_08991D44;
    case 435u: goto L_08991D54;
    case 436u: goto L_08991D5C;
    case 437u: goto L_08991D6C;
    case 438u: goto L_08991D74;
    case 439u: goto L_08991D80;
    case 440u: goto L_08991D8C;
    case 441u: goto L_08991D94;
    case 442u: goto L_08991DA4;
    case 443u: goto L_08991DAC;
    case 444u: goto L_08991DBC;
    case 445u: goto L_08991DC4;
    case 446u: goto L_08991DD0;
    case 447u: goto L_08991DDC;
    case 448u: goto L_08991DE4;
    case 449u: goto L_08991DF4;
    case 450u: goto L_08991DFC;
    case 451u: goto L_08991E0C;
    case 452u: goto L_08991E14;
    case 453u: goto L_08991E20;
    case 454u: goto L_08991E2C;
    case 455u: goto L_08991E34;
    case 456u: goto L_08991E44;
    case 457u: goto L_08991E4C;
    case 458u: goto L_08991E5C;
    case 459u: goto L_08991E64;
    case 460u: goto L_08991E70;
    case 461u: goto L_08991E7C;
    case 462u: goto L_08991E84;
    case 463u: goto L_08991E94;
    case 464u: goto L_08991E9C;
    case 465u: goto L_08991EAC;
    case 466u: goto L_08991EB4;
    case 467u: goto L_08991EC0;
    case 468u: goto L_08991ECC;
    case 469u: goto L_08991ED4;
    case 470u: goto L_08991EE4;
    case 471u: goto L_08991EEC;
    case 472u: goto L_08991EFC;
    case 473u: goto L_08991F04;
    case 474u: goto L_08991F10;
    case 475u: goto L_08991F1C;
    case 476u: goto L_08991F24;
    case 477u: goto L_08991F34;
    case 478u: goto L_08991F3C;
    case 479u: goto L_08991F4C;
    case 480u: goto L_08991F54;
    case 481u: goto L_08991F60;
    case 482u: goto L_08991F6C;
    case 483u: goto L_08991F74;
    case 484u: goto L_08991F84;
    case 485u: goto L_08991F8C;
    case 486u: goto L_08991F9C;
    case 487u: goto L_08991FA4;
    case 488u: goto L_08991FB0;
    case 489u: goto L_08991FBC;
    case 490u: goto L_08991FC4;
    case 491u: goto L_08991FD4;
    case 492u: goto L_08991FDC;
    case 493u: goto L_08991FEC;
    case 494u: goto L_08991FF4;
    case 495u: goto L_08992000;
    case 496u: goto L_0899200C;
    case 497u: goto L_0899201C;
    case 498u: goto L_08992024;
    case 499u: goto L_08992034;
    case 500u: goto L_0899203C;
    case 501u: goto L_08992048;
    case 502u: goto L_08992054;
    case 503u: goto L_0899205C;
    case 504u: goto L_0899206C;
    case 505u: goto L_08992074;
    case 506u: goto L_08992084;
    case 507u: goto L_0899208C;
    case 508u: goto L_08992098;
    case 509u: goto L_089920A4;
    case 510u: goto L_089920AC;
    case 511u: goto L_089920BC;
    case 512u: goto L_089920C4;
    case 513u: goto L_089920D4;
    case 514u: goto L_089920DC;
    case 515u: goto L_089920E8;
    case 516u: goto L_089920F4;
    case 517u: goto L_089920FC;
    case 518u: goto L_0899210C;
    case 519u: goto L_08992114;
    case 520u: goto L_08992124;
    case 521u: goto L_0899212C;
    case 522u: goto L_08992138;
    case 523u: goto L_08992144;
    case 524u: goto L_0899214C;
    case 525u: goto L_0899215C;
    case 526u: goto L_08992164;
    case 527u: goto L_08992174;
    case 528u: goto L_0899217C;
    case 529u: goto L_08992188;
    case 530u: goto L_08992194;
    case 531u: goto L_0899219C;
    case 532u: goto L_089921AC;
    case 533u: goto L_089921B4;
    case 534u: goto L_089921C4;
    case 535u: goto L_089921CC;
    case 536u: goto L_089921D8;
    case 537u: goto L_089921E4;
    case 538u: goto L_089921EC;
    case 539u: goto L_089921FC;
    case 540u: goto L_08992204;
    case 541u: goto L_08992214;
    case 542u: goto L_0899221C;
    case 543u: goto L_08992228;
    case 544u: goto L_08992234;
    case 545u: goto L_0899223C;
    case 546u: goto L_0899224C;
    case 547u: goto L_08992254;
    case 548u: goto L_08992264;
    case 549u: goto L_0899226C;
    case 550u: goto L_08992278;
    case 551u: goto L_08992288;
    case 552u: goto L_08992290;
    case 553u: goto L_089922A0;
    case 554u: goto L_089922A8;
    case 555u: goto L_089922B8;
    case 556u: goto L_089922C0;
    case 557u: goto L_089922D0;
    case 558u: goto L_089922E0;
    case 559u: goto L_089922E8;
    case 560u: goto L_089922F8;
    case 561u: goto L_08992300;
    case 562u: goto L_08992310;
    case 563u: goto L_08992318;
    case 564u: goto L_0899232C;
    case 565u: goto L_08992340;
    case 566u: goto L_08992348;
    case 567u: goto L_08992358;
    case 568u: goto L_08992360;
    case 569u: goto L_08992370;
    case 570u: goto L_08992378;
    case 571u: goto L_0899238C;
    case 572u: goto L_089923A0;
    case 573u: goto L_089923A8;
    case 574u: goto L_089923B8;
    case 575u: goto L_089923C0;
    case 576u: goto L_089923D0;
    case 577u: goto L_089923D8;
    case 578u: goto L_089923EC;
    case 579u: goto L_08992400;
    case 580u: goto L_08992408;
    case 581u: goto L_08992418;
    case 582u: goto L_08992420;
    case 583u: goto L_08992430;
    case 584u: goto L_08992438;
    case 585u: goto L_0899244C;
    case 586u: goto L_0899245C;
    case 587u: goto L_0899246C;
    case 588u: goto L_08992474;
    case 589u: goto L_08992484;
    case 590u: goto L_0899248C;
    case 591u: goto L_089924A0;
    case 592u: goto L_089924DC;
    case 593u: goto L_089924E4;
    case 594u: goto L_089924F4;
    case 595u: goto L_089924FC;
    case 596u: goto L_0899250C;
    case 597u: goto L_08992514;
    case 598u: goto L_08992524;
    case 599u: goto L_0899252C;
    case 600u: goto L_0899253C;
    case 601u: goto L_0899256C;
    case 602u: goto L_08992574;
    case 603u: goto L_08992584;
    case 604u: goto L_0899266C;
    case 605u: goto L_08992680;
    case 606u: goto L_08992694;
    case 607u: goto L_089926A8;
    case 608u: goto L_089926BC;
    case 609u: goto L_089926D0;
    case 610u: goto L_089926E8;
    case 611u: goto L_089926FC;
    case 612u: goto L_08992710;
    case 613u: goto L_08992724;
    case 614u: goto L_08992738;
    case 615u: goto L_0899274C;
    case 616u: goto L_08992760;
    case 617u: goto L_08992774;
    case 618u: goto L_08992788;
    case 619u: goto L_0899279C;
    case 620u: goto L_089927B0;
    case 621u: goto L_089927C4;
    case 622u: goto L_089927D8;
    case 623u: goto L_089927EC;
    case 624u: goto L_08992800;
    case 625u: goto L_08992814;
    case 626u: goto L_08992828;
    case 627u: goto L_0899283C;
    case 628u: goto L_08992850;
    case 629u: goto L_08992864;
    case 630u: goto L_08992878;
    case 631u: goto L_0899288C;
    case 632u: goto L_089928A0;
    case 633u: goto L_089928B4;
    case 634u: goto L_089928C8;
    case 635u: goto L_089928DC;
    case 636u: goto L_089928F0;
    case 637u: goto L_08992904;
    case 638u: goto L_08992918;
    case 639u: goto L_0899292C;
    case 640u: goto L_08992940;
    case 641u: goto L_08992954;
    case 642u: goto L_08992968;
    case 643u: goto L_0899297C;
    case 644u: goto L_08992990;
    case 645u: goto L_089929A4;
    case 646u: goto L_089929B8;
    case 647u: goto L_089929CC;
    case 648u: goto L_089929E0;
    case 649u: goto L_089929F4;
    case 650u: goto L_08992A08;
    case 651u: goto L_08992A1C;
    case 652u: goto L_08992A30;
    case 653u: goto L_08992A44;
    case 654u: goto L_08992A58;
    case 655u: goto L_08992A6C;
    case 656u: goto L_08992A80;
    case 657u: goto L_08992A94;
    case 658u: goto L_08992AA8;
    case 659u: goto L_08992ABC;
    case 660u: goto L_08992AD0;
    case 661u: goto L_08992AE4;
    case 662u: goto L_08992AF8;
    case 663u: goto L_08992B0C;
    case 664u: goto L_08992B20;
    case 665u: goto L_08992B34;
    case 666u: goto L_08992B48;
    case 667u: goto L_08992B5C;
    case 668u: goto L_08992B70;
    case 669u: goto L_08992B84;
    case 670u: goto L_08992B98;
    case 671u: goto L_08992BAC;
    case 672u: goto L_08992BC0;
    case 673u: goto L_08992BD4;
    case 674u: goto L_08992BE8;
    case 675u: goto L_08992BFC;
    case 676u: goto L_08992C10;
    case 677u: goto L_08992C28;
    case 678u: goto L_08992C40;
    case 679u: goto L_08992C58;
    case 680u: goto L_08992C70;
    case 681u: goto L_08992C88;
    case 682u: goto L_08992CA0;
    case 683u: goto L_08992CB8;
    case 684u: goto L_08992CCC;
    case 685u: goto L_08992CE0;
    case 686u: goto L_08992CF8;
    case 687u: goto L_08992D10;
    case 688u: goto L_08992D28;
    case 689u: goto L_08992D3C;
    case 690u: goto L_08992D50;
    case 691u: goto L_08992D64;
    case 692u: goto L_08992D78;
    case 693u: goto L_08992D8C;
    case 694u: goto L_08992DA0;
    case 695u: goto L_08992DB4;
    case 696u: goto L_08992DC8;
    case 697u: goto L_08992DDC;
    case 698u: goto L_08992DF0;
    case 699u: goto L_08992E04;
    case 700u: goto L_08992E18;
    case 701u: goto L_08992E2C;
    case 702u: goto L_08992E40;
    case 703u: goto L_08992E54;
    case 704u: goto L_08992E68;
    case 705u: goto L_08992E7C;
    case 706u: goto L_08992E90;
    case 707u: goto L_08992EA4;
    case 708u: goto L_08992EB8;
    case 709u: goto L_08992ECC;
    case 710u: goto L_08992EE0;
    case 711u: goto L_08992EF4;
    case 712u: goto L_08992F08;
    case 713u: goto L_08992F1C;
    case 714u: goto L_08992F30;
    case 715u: goto L_08992F44;
    case 716u: goto L_08992F58;
    case 717u: goto L_08992F6C;
    case 718u: goto L_08992F80;
    case 719u: goto L_08992F88;
    case 720u: goto L_08992F94;
    case 721u: goto L_08992FA4;
    case 722u: goto L_08992FB8;
    case 723u: goto L_08992FD4;
    case 724u: goto L_08993004;
    case 725u: goto L_08993018;
    case 726u: goto L_0899302C;
    case 727u: goto L_08993040;
    case 728u: goto L_08993054;
    case 729u: goto L_08993068;
    case 730u: goto L_08993080;
    case 731u: goto L_08993094;
    case 732u: goto L_089930A8;
    case 733u: goto L_089930BC;
    case 734u: goto L_089930D0;
    case 735u: goto L_089930E4;
    case 736u: goto L_089930F8;
    case 737u: goto L_0899310C;
    case 738u: goto L_08993120;
    case 739u: goto L_08993134;
    case 740u: goto L_08993148;
    case 741u: goto L_0899315C;
    case 742u: goto L_08993170;
    case 743u: goto L_08993184;
    case 744u: goto L_08993198;
    case 745u: goto L_089931AC;
    case 746u: goto L_089931C0;
    case 747u: goto L_089931D4;
    case 748u: goto L_089931E8;
    case 749u: goto L_089931FC;
    case 750u: goto L_08993210;
    case 751u: goto L_08993224;
    case 752u: goto L_08993238;
    case 753u: goto L_0899324C;
    case 754u: goto L_08993260;
    case 755u: goto L_08993274;
    case 756u: goto L_08993288;
    case 757u: goto L_0899329C;
    case 758u: goto L_089932B0;
    case 759u: goto L_089932C4;
    case 760u: goto L_089932D8;
    case 761u: goto L_089932EC;
    case 762u: goto L_08993300;
    case 763u: goto L_08993314;
    case 764u: goto L_08993328;
    case 765u: goto L_0899333C;
    case 766u: goto L_08993350;
    case 767u: goto L_08993364;
    case 768u: goto L_08993378;
    case 769u: goto L_0899338C;
    case 770u: goto L_089933A0;
    case 771u: goto L_089933B4;
    case 772u: goto L_089933C8;
    case 773u: goto L_089933DC;
    case 774u: goto L_089933F0;
    case 775u: goto L_08993404;
    case 776u: goto L_08993418;
    case 777u: goto L_0899342C;
    case 778u: goto L_08993440;
    case 779u: goto L_08993454;
    case 780u: goto L_08993468;
    case 781u: goto L_0899347C;
    case 782u: goto L_08993490;
    case 783u: goto L_089934A4;
    case 784u: goto L_089934B8;
    case 785u: goto L_089934CC;
    case 786u: goto L_089934E0;
    case 787u: goto L_089934F4;
    case 788u: goto L_08993508;
    case 789u: goto L_0899351C;
    case 790u: goto L_08993530;
    case 791u: goto L_08993544;
    case 792u: goto L_08993558;
    case 793u: goto L_0899356C;
    case 794u: goto L_08993580;
    case 795u: goto L_08993594;
    case 796u: goto L_089935A8;
    case 797u: goto L_089935C0;
    case 798u: goto L_089935D8;
    case 799u: goto L_089935F0;
    case 800u: goto L_08993608;
    case 801u: goto L_08993620;
    case 802u: goto L_08993638;
    case 803u: goto L_08993650;
    case 804u: goto L_08993664;
    case 805u: goto L_08993678;
    case 806u: goto L_08993690;
    case 807u: goto L_089936A8;
    case 808u: goto L_089936C0;
    case 809u: goto L_089936D4;
    case 810u: goto L_089936E8;
    case 811u: goto L_089936FC;
    case 812u: goto L_08993710;
    case 813u: goto L_08993724;
    case 814u: goto L_08993738;
    case 815u: goto L_0899374C;
    case 816u: goto L_08993760;
    case 817u: goto L_08993774;
    case 818u: goto L_08993788;
    case 819u: goto L_0899379C;
    case 820u: goto L_089937B0;
    case 821u: goto L_089937C4;
    case 822u: goto L_089937D8;
    case 823u: goto L_089937EC;
    case 824u: goto L_08993800;
    case 825u: goto L_08993814;
    case 826u: goto L_08993828;
    case 827u: goto L_0899383C;
    case 828u: goto L_08993850;
    case 829u: goto L_08993864;
    case 830u: goto L_08993878;
    case 831u: goto L_0899388C;
    case 832u: goto L_089938A0;
    case 833u: goto L_089938B4;
    case 834u: goto L_089938C8;
    case 835u: goto L_089938DC;
    case 836u: goto L_089938F0;
    case 837u: goto L_08993904;
    case 838u: goto L_08993918;
    case 839u: goto L_08993928;
    case 840u: goto L_08993938;
    case 841u: goto L_0899394C;
    case 842u: goto L_08993964;
    case 843u: goto L_0899398C;
    case 844u: goto L_089939B0;
    case 845u: goto L_089939B8;
    case 846u: goto L_089939C0;
    case 847u: goto L_089939E8;
    case 848u: goto L_089939F0;
    case 849u: goto L_089939F8;
    case 850u: goto L_08993A00;
    case 851u: goto L_08993A20;
    case 852u: goto L_08993A28;
    case 853u: goto L_08993A30;
    case 854u: goto L_08993A70;
    case 855u: goto L_08993A78;
    case 856u: goto L_08993A9C;
    case 857u: goto L_08993AA4;
    case 858u: goto L_08993AC8;
    case 859u: goto L_08993AD0;
    case 860u: goto L_08993B14;
    case 861u: goto L_08993B20;
    case 862u: goto L_08993B28;
    case 863u: goto L_08993B4C;
    case 864u: goto L_08993B54;
    case 865u: goto L_08993B78;
    case 866u: goto L_08993B80;
    case 867u: goto L_08993B8C;
    case 868u: goto L_08993B98;
    case 869u: goto L_08993BA0;
    case 870u: goto L_08993BC4;
    case 871u: goto L_08993BCC;
    case 872u: goto L_08993BD4;
    case 873u: goto L_08993BE0;
    case 874u: goto L_08993BE8;
    case 875u: goto L_08993C00;
    case 876u: goto L_08993C08;
    case 877u: goto L_08993C10;
    case 878u: goto L_08993C20;
    case 879u: goto L_08993C2C;
    case 880u: goto L_08993C4C;
    case 881u: goto L_08993C54;
    case 882u: goto L_08993C58;
    case 883u: goto L_08993C64;
    case 884u: goto L_08993C6C;
    case 885u: goto L_08993C7C;
    case 886u: goto L_08993C88;
    case 887u: goto L_08993CA8;
    case 888u: goto L_08993CB0;
    case 889u: goto L_08993CB4;
    case 890u: goto L_08993CC0;
    case 891u: goto L_08993CC8;
    case 892u: goto L_08993CD8;
    case 893u: goto L_08993CE4;
    case 894u: goto L_08993D04;
    case 895u: goto L_08993D0C;
    case 896u: goto L_08993D10;
    case 897u: goto L_08993D1C;
    case 898u: goto L_08993D24;
    case 899u: goto L_08993D34;
    case 900u: goto L_08993D40;
    case 901u: goto L_08993D60;
    case 902u: goto L_08993D68;
    case 903u: goto L_08993D6C;
    case 904u: goto L_08993D78;
    case 905u: goto L_08993D80;
    case 906u: goto L_08993D94;
    case 907u: goto L_08993D9C;
    case 908u: goto L_08993DA4;
    case 909u: goto L_08993DC8;
    case 910u: goto L_08993DD0;
    case 911u: goto L_08993DDC;
    case 912u: goto L_08993DE4;
    case 913u: goto L_08993DEC;
    case 914u: goto L_08993E28;
    case 915u: goto L_08993E30;
    case 916u: goto L_08993E3C;
    case 917u: goto L_08993E44;
    case 918u: goto L_08993E4C;
    case 919u: goto L_08993E88;
    case 920u: goto L_08993E90;
    case 921u: goto L_08993E9C;
    case 922u: goto L_08993EA4;
    case 923u: goto L_08993EAC;
    case 924u: goto L_08993EE8;
    case 925u: goto L_08993EF0;
    case 926u: goto L_08993EFC;
    case 927u: goto L_08993F04;
    case 928u: goto L_08993F0C;
    case 929u: goto L_08993F48;
    case 930u: goto L_08993F50;
    case 931u: goto L_08993F64;
    case 932u: goto L_08993F6C;
    case 933u: goto L_08993F74;
    case 934u: goto L_08993FB4;
    case 935u: goto L_08993FBC;
    case 936u: goto L_08993FD0;
    case 937u: goto L_08993FD8;
    case 938u: goto L_08993FE0;
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
L_08990000:
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990018:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & 128u);
    aot_gpr_5 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const std::uint32_t aot_run_words[4]{aot_gpr_17, ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08990174;
      }
      goto L_08990054;
    }
L_08990054:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_5 = (0u | 3u);
      if (branch_taken) {
          goto L_0899006C;
      }
      goto L_0899005C;
    }
L_0899005C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08990074;
      }
      goto L_0899006C;
    }
L_0899006C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_08990098;
      }
      goto L_08990074;
    }
L_08990074:
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_gpr_4 << 5u);
      if (branch_taken) {
          goto L_08990084;
      }
      goto L_0899007C;
    }
L_0899007C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_08990098;
      }
      goto L_08990084;
    }
L_08990084:
    aot_gpr_6 = (0u + aot_gpr_4);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_16 = (aot_gpr_16 + aot_gpr_4);
    goto L_08990098;
L_08990098:
    aot_gpr_17 = (aot_gpr_16 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(476)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089900E0;
      }
      goto L_089900A8;
    }
L_089900A8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089900B4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089900B4u) goto L_089900B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089900B4:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_089900D8;
      }
      goto L_089900BC;
    }
L_089900BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x089900D8u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089900D8u) goto L_089900D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089900D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08990174;
      }
      goto L_089900E0;
    }
L_089900E0:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089900ECu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0031_entry, 31u, 71u, 0x0888081Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089900ECu) goto L_089900EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089900EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08990174;
      }
      goto L_089900F4;
    }
L_089900F4:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08990100u);
    aot_gpr_4 = (0u | 496u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990100u) goto L_08990100;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990100:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08990120;
      }
      goto L_0899010C;
    }
L_0899010C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0899011Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 351u, 0x0882B688u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899011Cu) goto L_0899011C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899011C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08990120;
L_08990120:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899012Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899012Cu) goto L_0899012C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899012C:
    aot_gpr_31 = (0x08990134u);
    goto L_08990374;
L_08990134:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08990144u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990144u) goto L_08990144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990144:
    aot_gpr_31 = (0x0899014Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899014Cu) goto L_0899014C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899014C:
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(80), 0u);
      if (branch_taken) {
          goto L_08990170;
      }
      goto L_08990154;
    }
L_08990154:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08990170u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990170u) goto L_08990170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990170:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), 0u);
    goto L_08990174;
L_08990174:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990190:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x089901ACu);
    aot_gpr_4 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089901ACu) goto L_089901AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089901AC:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15944));
      if (branch_taken) {
          goto L_089901C8;
      }
      goto L_089901B8;
    }
L_089901B8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089901C4u);
    aot_gpr_5 = (0u | 70u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 173u, 0x08B6CF28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089901C4u) goto L_089901C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089901C4:
    aot_gpr_16 = (aot_gpr_17 | 0u);
    goto L_089901C8;
L_089901C8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976), aot_gpr_16);
    aot_gpr_16 = (0u | 0u);
    aot_gpr_31 = (0x089901D8u);
    aot_gpr_4 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089901D8u) goto L_089901D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089901D8:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15936));
      if (branch_taken) {
          goto L_089901F4;
      }
      goto L_089901E4;
    }
L_089901E4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089901F0u);
    aot_gpr_5 = (0u | 40u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 179u, 0x08B6CFD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089901F0u) goto L_089901F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089901F0:
    aot_gpr_16 = (aot_gpr_17 | 0u);
    goto L_089901F4;
L_089901F4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972), aot_gpr_16);
    aot_gpr_16 = (0u | 0u);
    aot_gpr_31 = (0x08990204u);
    aot_gpr_4 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990204u) goto L_08990204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990204:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15924));
      if (branch_taken) {
          goto L_08990220;
      }
      goto L_08990210;
    }
L_08990210:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899021Cu);
    aot_gpr_5 = (0u | 475u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 185u, 0x08B6D078u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899021Cu) goto L_0899021C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899021C:
    aot_gpr_16 = (aot_gpr_17 | 0u);
    goto L_08990220;
L_08990220:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960), aot_gpr_16);
    aot_gpr_16 = (0u | 0u);
    aot_gpr_31 = (0x08990230u);
    aot_gpr_4 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990230u) goto L_08990230;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990230:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15916));
      if (branch_taken) {
          goto L_0899024C;
      }
      goto L_0899023C;
    }
L_0899023C:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08990248u);
    aot_gpr_5 = (0u | 20u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 191u, 0x08B6D120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990248u) goto L_08990248;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990248:
    aot_gpr_16 = (aot_gpr_17 | 0u);
    goto L_0899024C;
L_0899024C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-15956), aot_gpr_16);
    aot_gpr_17 = (0u | 0u);
    aot_gpr_31 = (0x0899025Cu);
    aot_gpr_4 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899025Cu) goto L_0899025C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899025C:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15908));
      if (branch_taken) {
          goto L_08990278;
      }
      goto L_08990268;
    }
L_08990268:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08990274u);
    aot_gpr_5 = (0u | 192u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 197u, 0x08B6D1CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990274u) goto L_08990274;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990274:
    aot_gpr_17 = (aot_gpr_16 | 0u);
    goto L_08990278;
L_08990278:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-15948), aot_gpr_17);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990290:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089902A0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 624u, 0x08B6B464u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089902A0u) goto L_089902A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089902A0:
    aot_gpr_31 = (0x089902A8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 630u, 0x08B6B4B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089902A8u) goto L_089902A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089902A8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089902B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089902C8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089902C8u) goto L_089902C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089902C8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089902D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089902E8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089902E8u) goto L_089902E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089902E8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089902F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08990308u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990308u) goto L_08990308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990308:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990314:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08990328u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990328u) goto L_08990328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990328:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990334:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08990348u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 636u, 0x08B66A10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990348u) goto L_08990348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990348:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08990368u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990368u) goto L_08990368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990368:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990374:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 544u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0899037C:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990390:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089903B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (14545u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), aot_gpr_16);
    aot_gpr_5 = (aot_gpr_5 | 46871u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), aot_gpr_17);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_17 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), aot_gpr_31);
    aot_gpr_31 = (0x089903F0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 123u, 0x08A19410u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089903F0u) goto L_089903F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089903F0:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08990418u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 388u, 0x088B9CB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990418u) goto L_08990418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990418:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(32), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_17 = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990464:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0899049C;
      }
      goto L_08990480;
    }
L_08990480:
    aot_gpr_31 = (0x08990488u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_089904B0;
L_08990488:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0899049C;
      }
      goto L_08990494;
    }
L_08990494:
    aot_gpr_31 = (0x0899049Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899049Cu) goto L_0899049C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899049C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089904B0:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(0u));
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(56), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), 0u);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(76), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089904DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_6 = aot_run_words[0];
      ctx.gpr[7] = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, ctx.gpr[7], ctx.gpr[8]};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(54)));
    aot_gpr_17 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0899057C;
      }
      goto L_08990548;
    }
L_08990548:
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08990574;
      }
      goto L_08990558;
    }
L_08990558:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08990574u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990574u) goto L_08990574;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990574:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(68), 0u);
      if (branch_taken) {
          goto L_08990654;
      }
      goto L_0899057C;
    }
L_0899057C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(54)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089905D4;
      }
      goto L_0899058C;
    }
L_0899058C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(54)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089905B8;
      }
      goto L_0899059C;
    }
L_0899059C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x089905B8u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089905B8u) goto L_089905B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089905B8:
    ctx.gpr[7] = (2201u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(54)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (0u | 16u);
    aot_gpr_31 = (0x089905D0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(912));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089905D0u) goto L_089905D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089905D0:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_089905D4;
L_089905D4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(54)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08990654;
      }
      goto L_089905E8;
    }
L_089905E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(68)));
    goto L_089905EC;
L_089905EC:
    aot_gpr_4 = (ctx.gpr[19] << 4u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(12))))));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(14))))));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(54)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(68)));
        goto L_089905EC;
    }
    goto L_08990654;
L_08990654:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08990680;
      }
      goto L_08990660;
    }
L_08990660:
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08990678;
      }
      goto L_08990670;
    }
L_08990670:
    aot_gpr_31 = (0x08990678u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(56)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990678u) goto L_08990678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990678:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(56), 0u);
      if (branch_taken) {
          goto L_08990738;
      }
      goto L_08990680;
    }
L_08990680:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089906B8;
      }
      goto L_08990690;
    }
L_08990690:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089906A8;
      }
      goto L_089906A0;
    }
L_089906A0:
    aot_gpr_31 = (0x089906A8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(56)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089906A8u) goto L_089906A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089906A8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (0x089906B4u);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089906B4u) goto L_089906B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089906B4:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    goto L_089906B8;
L_089906B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08990738;
      }
      goto L_089906CC;
    }
L_089906CC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(56)));
    goto L_089906D0;
L_089906D0:
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_6 = aot_run_words[0];
      ctx.gpr[7] = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[8], aot_gpr_6, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(56)));
        goto L_089906D0;
    }
    goto L_08990738;
L_08990738:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(53)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08990778;
      }
      goto L_08990744;
    }
L_08990744:
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08990770;
      }
      goto L_08990754;
    }
L_08990754:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 32u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08990770u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990770u) goto L_08990770;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990770:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(60), 0u);
      if (branch_taken) {
          goto L_08990824;
      }
      goto L_08990778;
    }
L_08990778:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(53)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(53)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089907CC;
      }
      goto L_08990788;
    }
L_08990788:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(53)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089907B4;
      }
      goto L_08990798;
    }
L_08990798:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 32u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x089907B4u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089907B4u) goto L_089907B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089907B4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(53)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (0u | 32u);
    aot_gpr_31 = (0x089907C8u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089907C8u) goto L_089907C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089907C8:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    goto L_089907CC;
L_089907CC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(53)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08990824;
      }
      goto L_089907E0;
    }
L_089907E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (ctx.gpr[19] << 5u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
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
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(53)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089907E0;
      }
      goto L_08990824;
    }
L_08990824:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08990864;
      }
      goto L_08990830;
    }
L_08990830:
    aot_mem.aot_direct_store16(aot_gpr_17 + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0899085C;
      }
      goto L_08990840;
    }
L_08990840:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 48u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x0899085Cu);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899085Cu) goto L_0899085C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899085C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_08990904;
      }
      goto L_08990864;
    }
L_08990864:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089908B8;
      }
      goto L_08990874;
    }
L_08990874:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store16(aot_gpr_17 + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089908A0;
      }
      goto L_08990884;
    }
L_08990884:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 48u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x089908A0u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089908A0u) goto L_089908A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089908A0:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (0u | 48u);
    aot_gpr_31 = (0x089908B4u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089908B4u) goto L_089908B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089908B4:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    goto L_089908B8;
L_089908B8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08990904;
      }
      goto L_089908CC;
    }
L_089908CC:
    aot_gpr_4 = (ctx.gpr[19] << 4u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(64)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(64)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_31 = (0x089908ECu);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 390u, 0x088B9CECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089908ECu) goto L_089908EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089908EC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089908CC;
      }
      goto L_08990904;
    }
L_08990904:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0899095C;
      }
      goto L_08990910;
    }
L_08990910:
    aot_mem.aot_direct_store16(aot_gpr_17 + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08990928;
      }
      goto L_08990920;
    }
L_08990920:
    aot_gpr_31 = (0x08990928u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990928u) goto L_08990928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990928:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(76), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08990954;
      }
      goto L_08990938;
    }
L_08990938:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 6u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08990954u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990954u) goto L_08990954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990954:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(72), 0u);
      if (branch_taken) {
          goto L_08990B30;
      }
      goto L_0899095C;
    }
L_0899095C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(50)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089909F8;
      }
      goto L_08990970;
    }
L_08990970:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (ctx.gpr[19] << 3u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08990998;
      }
      goto L_0899098C;
    }
L_0899098C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_08990998;
L_08990998:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089909BC;
      }
      goto L_089909B0;
    }
L_089909B0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    goto L_089909BC;
L_089909BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089909E0;
      }
      goto L_089909D4;
    }
L_089909D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    goto L_089909E0;
L_089909E0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(50)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08990970;
      }
      goto L_089909F8;
    }
L_089909F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08990A20;
      }
      goto L_08990A04;
    }
L_08990A04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 6u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08990A20u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990A20u) goto L_08990A20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990A20:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
      if (branch_taken) {
          goto L_08990A98;
      }
      goto L_08990A28;
    }
L_08990A28:
    ctx.gpr[7] = (2201u << 16u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 6u);
    aot_gpr_31 = (0x08990A40u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(892));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990A40u) goto L_08990A40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990A40:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(72), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08990A98;
      }
      goto L_08990A50;
    }
L_08990A50:
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[19]);
    goto L_08990A54;
L_08990A54:
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08990A54;
      }
      goto L_08990A98;
    }
L_08990A98:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(50)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08990AD0;
      }
      goto L_08990AA8;
    }
L_08990AA8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(50)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store16(aot_gpr_17 + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08990AC0;
      }
      goto L_08990AB8;
    }
L_08990AB8:
    aot_gpr_31 = (0x08990AC0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990AC0u) goto L_08990AC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990AC0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(50)));
    aot_gpr_31 = (0x08990ACCu);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08990ACCu) goto L_08990ACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08990ACC:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_08990AD0;
L_08990AD0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(50)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08990B30;
      }
      goto L_08990AE4;
    }
L_08990AE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    goto L_08990AE8;
L_08990AE8:
    aot_gpr_4 = (ctx.gpr[19] << 3u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(50)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
        goto L_08990AE8;
    }
    goto L_08990B30;
L_08990B30:
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990B50:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9296), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990B58:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990B60:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7892), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990B68:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990B70:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990B78:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990B80:
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (ctx.gpr[28] + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(9404));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_08990B9C;
    }
    goto L_08990B9C;
L_08990B9C:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(9404), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990BA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9348)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9348), aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990BB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9352)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9352), aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990BC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9356)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9356), aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990BD4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9360)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_08990BE8;
    }
    goto L_08990BE8;
L_08990BE8:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9360), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990BF0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9364)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_08990C04;
    }
    goto L_08990C04;
L_08990C04:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9364), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990C0C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9368)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_08990C20;
    }
    goto L_08990C20;
L_08990C20:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9368), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990C28:
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990EA0;
      }
      goto L_08990C40;
    }
L_08990C40:
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E98;
      }
      goto L_08990C58;
    }
L_08990C58:
    aot_gpr_4 = (17046u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E90;
      }
      goto L_08990C70;
    }
L_08990C70:
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E88;
      }
      goto L_08990C88;
    }
L_08990C88:
    aot_gpr_4 = (17174u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E80;
      }
      goto L_08990CA0;
    }
L_08990CA0:
    aot_gpr_4 = (17224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E78;
      }
      goto L_08990CB8;
    }
L_08990CB8:
    aot_gpr_4 = (17274u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E70;
      }
      goto L_08990CD0;
    }
L_08990CD0:
    aot_gpr_4 = (17302u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E68;
      }
      goto L_08990CE8;
    }
L_08990CE8:
    aot_gpr_4 = (17327u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E60;
      }
      goto L_08990D00;
    }
L_08990D00:
    aot_gpr_4 = (17352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E58;
      }
      goto L_08990D18;
    }
L_08990D18:
    aot_gpr_4 = (17402u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E50;
      }
      goto L_08990D30;
    }
L_08990D30:
    aot_gpr_4 = (17430u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E48;
      }
      goto L_08990D48;
    }
L_08990D48:
    aot_gpr_4 = (17455u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E40;
      }
      goto L_08990D60;
    }
L_08990D60:
    aot_gpr_4 = (17480u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E38;
      }
      goto L_08990D78;
    }
L_08990D78:
    aot_gpr_4 = (17505u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E30;
      }
      goto L_08990D90;
    }
L_08990D90:
    aot_gpr_4 = (17530u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E28;
      }
      goto L_08990DA8;
    }
L_08990DA8:
    aot_gpr_4 = (17558u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E20;
      }
      goto L_08990DC0;
    }
L_08990DC0:
    aot_gpr_4 = (17583u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E18;
      }
      goto L_08990DD8;
    }
L_08990DD8:
    aot_gpr_4 = (17608u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990E10;
      }
      goto L_08990DF0;
    }
L_08990DF0:
    aot_gpr_4 = (17633u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08990EA8;
      }
      goto L_08990E08;
    }
L_08990E08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15712));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E10;
    }
L_08990E10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15720));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E18;
    }
L_08990E18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15728));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E20;
    }
L_08990E20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15736));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E28;
    }
L_08990E28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15744));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E30;
    }
L_08990E30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15752));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E38;
    }
L_08990E38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15760));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E40;
    }
L_08990E40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15768));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E48;
    }
L_08990E48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15776));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E50;
    }
L_08990E50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15784));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E58;
    }
L_08990E58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15792));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E60;
    }
L_08990E60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15800));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E68;
    }
L_08990E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15808));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E70;
    }
L_08990E70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15816));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E78;
    }
L_08990E78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15824));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E80;
    }
L_08990E80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15832));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E88;
    }
L_08990E88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15840));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E90;
    }
L_08990E90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15848));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E98;
    }
L_08990E98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15856));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990EA0;
    }
L_08990EA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15864));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990EA8;
    }
L_08990EA8:
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15704));
    goto L_08990EAC;
L_08990EAC:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08990EB4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(172)));
    aot_gpr_6 = (0u | 5000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9036)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9412)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9032)));
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9320)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[7] << 5u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 - ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9348)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9364)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9352)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9368)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[7] << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9356)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9316)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8084)));
    ctx.gpr[8] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08990F80;
      }
      goto L_08990F78;
    }
L_08990F78:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) <= 0;
      if (branch_taken) {
          goto L_08990F9C;
      }
      goto L_08990F80;
    }
L_08990F80:
    aot_gpr_6 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10000));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (aot_gpr_6 | 0u);
        goto L_08990F94;
    }
    goto L_08990F94;
L_08990F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08990FB4;
      }
      goto L_08990F9C;
    }
L_08990F9C:
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_08990FB0;
    }
    goto L_08990FB0;
L_08990FB0:
    ctx.gpr[2] = (aot_gpr_6 | 0u);
    goto L_08990FB4;
L_08990FB4:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 101 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08990FF8;
      }
      goto L_08990FC0;
    }
L_08990FC0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9328)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_13 = aot_fpr_14 / aot_fpr_13;
    aot_gpr_4 = (17402u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = ctx.fpr[15] + aot_fpr_13;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08990FF8;
L_08990FF8:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08991034;
      }
      goto L_0899100C;
    }
L_0899100C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8080)));
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_4 = (17530u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08991034;
L_08991034:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0899103C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8084)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_4 = (17096u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_14) || std::isnan(aot_fpr_13)) && aot_fpr_14 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08991060;
      }
      goto L_08991058;
    }
L_08991058:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899106C;
      }
      goto L_08991060;
    }
L_08991060:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8080)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    goto L_0899106C;
L_0899106C:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[0])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08991080;
    }
    goto L_08991080;
L_08991080:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08991088:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9376)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9376), aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08991098:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9380), aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089910A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9384)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9384), aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089910B0:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9392)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9392), std::bit_cast<std::uint32_t>(aot_fpr_12));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089910C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9412)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9408)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9408), 0u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9412), aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089910E0:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9408), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089910E8:
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17624));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_08991108;
    }
    goto L_08991108;
L_08991108:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08991110:
    aot_gpr_6 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(17664));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08991134;
      }
      goto L_0899112C;
    }
L_0899112C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_0899114C;
      }
      goto L_08991134;
    }
L_08991134:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_08991148;
    }
    goto L_08991148;
L_08991148:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    goto L_0899114C;
L_0899114C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08991154:
    aot_gpr_6 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(17704));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08991178;
      }
      goto L_08991170;
    }
L_08991170:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08991190;
      }
      goto L_08991178;
    }
L_08991178:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_0899118C;
    }
    goto L_0899118C;
L_0899118C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    goto L_08991190;
L_08991190:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08991198:
    aot_gpr_6 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(17744));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_089911BC;
      }
      goto L_089911B4;
    }
L_089911B4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_089911D4;
      }
      goto L_089911BC;
    }
L_089911BC:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_089911D0;
    }
    goto L_089911D0;
L_089911D0:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    goto L_089911D4;
L_089911D4:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089911DC:
    aot_gpr_6 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(17792));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08991200;
      }
      goto L_089911F8;
    }
L_089911F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08991218;
      }
      goto L_08991200;
    }
L_08991200:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_08991214;
    }
    goto L_08991214;
L_08991214:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    goto L_08991218;
L_08991218:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08991220:
    aot_gpr_6 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(17840));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08991244;
      }
      goto L_0899123C;
    }
L_0899123C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_0899125C;
      }
      goto L_08991244;
    }
L_08991244:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_08991258;
    }
    goto L_08991258;
L_08991258:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    goto L_0899125C;
L_0899125C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08991264:
    aot_gpr_6 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(17872));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08991288;
      }
      goto L_08991280;
    }
L_08991280:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_089912A0;
      }
      goto L_08991288;
    }
L_08991288:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_0899129C;
    }
    goto L_0899129C;
L_0899129C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    goto L_089912A0;
L_089912A0:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089912A8:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[28] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(9416)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_089912C4;
      }
      goto L_089912BC;
    }
L_089912BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(9416), aot_gpr_5);
      if (branch_taken) {
          goto L_089912E0;
      }
      goto L_089912C4;
    }
L_089912C4:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(9416));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_089912DC;
    }
    goto L_089912DC;
L_089912DC:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(9416), aot_gpr_6);
    goto L_089912E0;
L_089912E0:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089912E8:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[28] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(9432)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08991304;
      }
      goto L_089912FC;
    }
L_089912FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(9432), aot_gpr_5);
      if (branch_taken) {
          goto L_08991320;
      }
      goto L_08991304;
    }
L_08991304:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(9432));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_0899131C;
    }
    goto L_0899131C;
L_0899131C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(9432), aot_gpr_6);
    goto L_08991320;
L_08991320:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08991328:
    aot_gpr_6 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(17904));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_0899134C;
      }
      goto L_08991344;
    }
L_08991344:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08991364;
      }
      goto L_0899134C;
    }
L_0899134C:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_08991360;
    }
    goto L_08991360;
L_08991360:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    goto L_08991364;
L_08991364:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0899136C:
    aot_gpr_6 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(17936));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08991390;
      }
      goto L_08991388;
    }
L_08991388:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_089913A8;
      }
      goto L_08991390;
    }
L_08991390:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_089913A4;
    }
    goto L_089913A4;
L_089913A4:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    goto L_089913A8;
L_089913A8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089913B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2279u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(17584));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_17 = (aot_gpr_16 | 0u);
    aot_gpr_16 = (0u | 1u);
    aot_gpr_31 = (0x089913D8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 573u, 0x08A06454u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089913D8u) goto L_089913D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089913D8:
    aot_gpr_6 = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_089913E8;
L_089913E8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08991400;
      }
      goto L_089913FC;
    }
L_089913FC:
    aot_gpr_16 = (0u | 0u);
    goto L_08991400;
L_08991400:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089913E8;
      }
      goto L_08991414;
    }
L_08991414:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0899142C:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17584));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    jump_target = aot_gpr_31;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08991444:
    aot_gpr_4 = (2279u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(17584)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17584));
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    goto L_0899145C;
L_0899145C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08991478;
      }
      goto L_08991470;
    }
L_08991470:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[2] = (aot_gpr_5 | 0u);
    goto L_08991478;
L_08991478:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899145C;
      }
      goto L_08991488;
    }
L_08991488:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08991490:
    aot_gpr_4 = (2279u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(17584)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17584));
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    goto L_089914A8;
L_089914A8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089914C4;
      }
      goto L_089914BC;
    }
L_089914BC:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[2] = (aot_gpr_5 | 0u);
    goto L_089914C4;
L_089914C4:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089914A8;
      }
      goto L_089914D4;
    }
L_089914D4:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089914DC:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0899150C;
      }
      goto L_089914EC;
    }
L_089914EC:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9400)));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_6 << (aot_gpr_4 & 31u));
    aot_gpr_6 = (aot_gpr_5 & aot_gpr_4);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_0899150C;
      }
      goto L_08991504;
    }
L_08991504:
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9400), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_0899150C;
L_0899150C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08991514:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08991548;
      }
      goto L_08991524;
    }
L_08991524:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9400)));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_6 << (aot_gpr_4 & 31u));
    aot_gpr_6 = (aot_gpr_5 & aot_gpr_4);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08991548;
      }
      goto L_0899153C;
    }
L_0899153C:
    aot_gpr_4 = (~(aot_gpr_4 | 0u));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9400), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08991548;
L_08991548:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08991550:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 60 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899156C;
      }
      goto L_0899155C;
    }
L_0899155C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-60));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 60 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899155C;
      }
      goto L_0899156C;
    }
L_0899156C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08991574:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 60 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991590;
      }
      goto L_08991580;
    }
L_08991580:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-60));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 60 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08991580;
      }
      goto L_08991590;
    }
L_08991590:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_0899159C;
      }
      goto L_08991598;
    }
L_08991598:
    aot_gpr_4 = (0u - aot_gpr_4);
    goto L_0899159C;
L_0899159C:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089915A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), aot_gpr_17);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[7]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(524), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08991608;
      }
      goto L_089915DC;
    }
L_089915DC:
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08991608;
      }
      goto L_089915E4;
    }
L_089915E4:
    ctx.gpr[19] = (2238u << 16u);
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(17512), static_cast<std::uint16_t>(0u));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[22] = (2238u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(17512));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(-8144));
      if (branch_taken) {
          goto L_08991610;
      }
      goto L_08991600;
    }
L_08991600:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0899163C;
      }
      goto L_08991608;
    }
L_08991608:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899175C;
      }
      goto L_08991610;
    }
L_08991610:
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_31 = (0x0899161Cu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899161Cu) goto L_0899161C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899161C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_08991634;
      }
      goto L_08991628;
    }
L_08991628:
    aot_gpr_31 = (0x08991630u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991630u) goto L_08991630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991630:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08991634;
L_08991634:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[20]);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_0899163C;
L_0899163C:
    aot_gpr_31 = (0x08991644u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991644u) goto L_08991644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991644:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08991650u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991650u) goto L_08991650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991650:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08991708;
      }
      goto L_08991658;
    }
L_08991658:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08991708;
      }
      goto L_08991660;
    }
L_08991660:
    aot_gpr_17 = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    aot_mem.aot_direct_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15696));
    aot_gpr_31 = (0x08991674u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991674u) goto L_08991674;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991674:
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089916A0;
      }
      goto L_08991684;
    }
L_08991684:
    aot_gpr_4 = (ctx.gpr[29] | 0u);
    aot_gpr_31 = (0x08991690u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 846u, 0x08887B30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991690u) goto L_08991690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991690:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08991684;
      }
      goto L_089916A0;
    }
L_089916A0:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x089916ACu);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089916ACu) goto L_089916AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089916AC:
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_17 != 0u;
    aot_gpr_4 = (aot_gpr_17 | 0u);
      if (branch_taken) {
          goto L_089916E4;
      }
      goto L_089916B8;
    }
L_089916B8:
    aot_gpr_17 = (0u | 0u);
    aot_gpr_31 = (0x089916C4u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089916C4u) goto L_089916C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089916C4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_089916DC;
      }
      goto L_089916D0;
    }
L_089916D0:
    aot_gpr_31 = (0x089916D8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089916D8u) goto L_089916D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089916D8:
    aot_gpr_17 = (ctx.gpr[18] | 0u);
    goto L_089916DC;
L_089916DC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), aot_gpr_17);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_089916E4;
L_089916E4:
    aot_gpr_31 = (0x089916ECu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089916ECu) goto L_089916EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089916EC:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x089916F8u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 846u, 0x08887B30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089916F8u) goto L_089916F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089916F8:
    aot_gpr_31 = (0x08991700u);
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(-8144));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 340u, 0x089F5C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991700u) goto L_08991700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991700:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899175C;
      }
      goto L_08991708;
    }
L_08991708:
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_17 != 0u;
    aot_gpr_4 = (aot_gpr_17 | 0u);
      if (branch_taken) {
          goto L_08991740;
      }
      goto L_08991714;
    }
L_08991714:
    aot_gpr_17 = (0u | 0u);
    aot_gpr_31 = (0x08991720u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991720u) goto L_08991720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991720:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08991738;
      }
      goto L_0899172C;
    }
L_0899172C:
    aot_gpr_31 = (0x08991734u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991734u) goto L_08991734;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991734:
    aot_gpr_17 = (ctx.gpr[18] | 0u);
    goto L_08991738;
L_08991738:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), aot_gpr_17);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_08991740;
L_08991740:
    aot_gpr_31 = (0x08991748u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991748u) goto L_08991748;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991748:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08991754u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991754u) goto L_08991754;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991754:
    aot_gpr_31 = (0x0899175Cu);
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(-8144));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 340u, 0x089F5C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899175Cu) goto L_0899175C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899175C:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(516), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08991788:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9304), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9300), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9308), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9312), 0u);
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_16 = (32768u << 16u);
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_6 = (2279u << 16u);
    ctx.gpr[7] = (2279u << 16u);
    ctx.gpr[8] = (2279u << 16u);
    ctx.gpr[9] = (2279u << 16u);
    ctx.gpr[10] = (2279u << 16u);
    ctx.gpr[11] = (2279u << 16u);
    ctx.gpr[2] = (2279u << 16u);
    ctx.gpr[3] = (2279u << 16u);
    ctx.gpr[12] = (2240u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9316), 0u);
    ctx.gpr[13] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17488));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17624));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(17664));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17704));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(17744));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(17792));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(17840));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(17872));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(17904));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(17936));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-23472));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    goto L_08991814;
L_08991814:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[13]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991814;
      }
      goto L_08991828;
    }
L_08991828:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9320), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8080), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9324), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9328), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7880), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8676), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9332), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9336), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9036), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9032), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8912), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9340), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9344), 0u);
    { const std::uint32_t aot_run_words[7]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), 0u, 0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(8088), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8124), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8136), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8116), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8120), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9084), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9080), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(9068), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9064), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9348), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9360), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9352), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9364), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9368), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9356), 0u);
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(9372), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8684), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9388), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9392), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9048), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9056), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9040), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9052), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9060), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9044), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8144), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9396), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7904), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9088), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), 0u);
    ctx.gpr[13] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[28] | 0u);
    goto L_08991908;
L_08991908:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(9404), 0u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[13]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991908;
      }
      goto L_0899191C;
    }
L_0899191C:
    aot_gpr_4 = (0u | 0u);
    goto L_08991920;
L_08991920:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991920;
      }
      goto L_08991934;
    }
L_08991934:
    aot_gpr_4 = (0u | 0u);
    goto L_08991938;
L_08991938:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991938;
      }
      goto L_0899194C;
    }
L_0899194C:
    aot_gpr_4 = (0u | 0u);
    goto L_08991950;
L_08991950:
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991950;
      }
      goto L_08991964;
    }
L_08991964:
    aot_gpr_4 = (0u | 0u);
    goto L_08991968;
L_08991968:
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991968;
      }
      goto L_0899197C;
    }
L_0899197C:
    aot_gpr_4 = (0u | 0u);
    goto L_08991980;
L_08991980:
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991980;
      }
      goto L_08991994;
    }
L_08991994:
    aot_gpr_4 = (0u | 0u);
    goto L_08991998;
L_08991998:
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991998;
      }
      goto L_089919AC;
    }
L_089919AC:
    aot_gpr_4 = (0u | 0u);
    goto L_089919B0;
L_089919B0:
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089919B0;
      }
      goto L_089919C4;
    }
L_089919C4:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[28] | 0u);
    goto L_089919CC;
L_089919CC:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(9416), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089919CC;
      }
      goto L_089919E0;
    }
L_089919E0:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[28] | 0u);
    goto L_089919E8;
L_089919E8:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(9432), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089919E8;
      }
      goto L_089919FC;
    }
L_089919FC:
    aot_gpr_4 = (0u | 0u);
    goto L_08991A00;
L_08991A00:
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991A00;
      }
      goto L_08991A14;
    }
L_08991A14:
    aot_gpr_4 = (0u | 0u);
    goto L_08991A18;
L_08991A18:
    aot_mem.aot_direct_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991A18;
      }
      goto L_08991A2C;
    }
L_08991A2C:
    aot_gpr_4 = (0u | 0u);
    goto L_08991A30;
L_08991A30:
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[28]);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(8160), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991A30;
      }
      goto L_08991A48;
    }
L_08991A48:
    aot_gpr_4 = (0u | 0u);
    goto L_08991A4C;
L_08991A4C:
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991A4C;
      }
      goto L_08991A60;
    }
L_08991A60:
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(8180), aot_run_words); }
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(8296), aot_run_words); }
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8312), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8313), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8314), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8315), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9408), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9412), 0u);
    aot_gpr_4 = (0u | 0u);
    goto L_08991A9C;
L_08991A9C:
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[28]);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(8128), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991A9C;
      }
      goto L_08991AB4;
    }
L_08991AB4:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(8284), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8076), 0u);
    aot_gpr_31 = (0x08991ACCu);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9292), 0u);
    goto L_089913B0;
L_08991ACC:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9400), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8156), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8158), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8148), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8152), 0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(8260), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8140), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8168), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8212), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8216), 0u);
    { const std::uint32_t aot_run_words[4]{0u, aot_gpr_16, aot_gpr_16, aot_gpr_16};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(8196), aot_run_words); }
    { const std::uint32_t aot_run_words[10]{0u, 0u, 0u, 0u, 0u, aot_gpr_16, aot_gpr_16, aot_gpr_16, aot_gpr_16, aot_gpr_16};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(8220), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8172), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8176), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8272), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8280), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8276), 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08991B5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), aot_gpr_31);
    aot_gpr_31 = (0x08991B70u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_08990EB4;
L_08991B70:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_08991C34;
      }
      goto L_08991B7C;
    }
L_08991B7C:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < -499 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08991B9C;
      }
      goto L_08991B88;
    }
L_08991B88:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < -1999 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08991BB4;
      }
      goto L_08991B94;
    }
L_08991B94:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08991BCC;
      }
      goto L_08991B9C;
    }
L_08991B9C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15676));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08991BACu);
    aot_gpr_6 = (ctx.gpr[29] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991BACu) goto L_08991BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991BAC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991BB4;
    }
L_08991BB4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15668));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08991BC4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991BC4u) goto L_08991BC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991BC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991BCC;
    }
L_08991BCC:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < -3999 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08991BEC;
      }
      goto L_08991BD8;
    }
L_08991BD8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < -5999 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08991C04;
      }
      goto L_08991BE4;
    }
L_08991BE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08991C1C;
      }
      goto L_08991BEC;
    }
L_08991BEC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15660));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr_31 = (0x08991BFCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991BFCu) goto L_08991BFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991BFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991C04;
    }
L_08991C04:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15652));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(3));
    aot_gpr_31 = (0x08991C14u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991C14u) goto L_08991C14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991C14:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991C1C;
    }
L_08991C1C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15644));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08991C2Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991C2Cu) goto L_08991C2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991C2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991C34;
    }
L_08991C34:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991C54;
      }
      goto L_08991C40;
    }
L_08991C40:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 50 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991C6C;
      }
      goto L_08991C4C;
    }
L_08991C4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08991C84;
      }
      goto L_08991C54;
    }
L_08991C54:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15636));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(5));
    aot_gpr_31 = (0x08991C64u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991C64u) goto L_08991C64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991C64:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991C6C;
    }
L_08991C6C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15628));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(6));
    aot_gpr_31 = (0x08991C7Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991C7Cu) goto L_08991C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991C7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991C84;
    }
L_08991C84:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 75 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991CA4;
      }
      goto L_08991C90;
    }
L_08991C90:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 100 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991CBC;
      }
      goto L_08991C9C;
    }
L_08991C9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08991CD4;
      }
      goto L_08991CA4;
    }
L_08991CA4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15620));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(7));
    aot_gpr_31 = (0x08991CB4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991CB4u) goto L_08991CB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991CB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991CBC;
    }
L_08991CBC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15612));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x08991CCCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991CCCu) goto L_08991CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991CCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991CD4;
    }
L_08991CD4:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 120 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991CF4;
      }
      goto L_08991CE0;
    }
L_08991CE0:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 150 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991D0C;
      }
      goto L_08991CEC;
    }
L_08991CEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08991D24;
      }
      goto L_08991CF4;
    }
L_08991CF4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15604));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(9));
    aot_gpr_31 = (0x08991D04u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991D04u) goto L_08991D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991D04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991D0C;
    }
L_08991D0C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15596));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(10));
    aot_gpr_31 = (0x08991D1Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991D1Cu) goto L_08991D1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991D1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991D24;
    }
L_08991D24:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 200 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991D44;
      }
      goto L_08991D30;
    }
L_08991D30:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 240 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991D5C;
      }
      goto L_08991D3C;
    }
L_08991D3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08991D74;
      }
      goto L_08991D44;
    }
L_08991D44:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15588));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(11));
    aot_gpr_31 = (0x08991D54u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991D54u) goto L_08991D54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991D54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991D5C;
    }
L_08991D5C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15580));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08991D6Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991D6Cu) goto L_08991D6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991D6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991D74;
    }
L_08991D74:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 270 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991D94;
      }
      goto L_08991D80;
    }
L_08991D80:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 300 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991DAC;
      }
      goto L_08991D8C;
    }
L_08991D8C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08991DC4;
      }
      goto L_08991D94;
    }
L_08991D94:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15572));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(13));
    aot_gpr_31 = (0x08991DA4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991DA4u) goto L_08991DA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991DA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991DAC;
    }
L_08991DAC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15564));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(14));
    aot_gpr_31 = (0x08991DBCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991DBCu) goto L_08991DBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991DBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991DC4;
    }
L_08991DC4:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 335 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991DE4;
      }
      goto L_08991DD0;
    }
L_08991DD0:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 370 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991DFC;
      }
      goto L_08991DDC;
    }
L_08991DDC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08991E14;
      }
      goto L_08991DE4;
    }
L_08991DE4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15556));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(15));
    aot_gpr_31 = (0x08991DF4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991DF4u) goto L_08991DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991DF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991DFC;
    }
L_08991DFC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15548));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08991E0Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991E0Cu) goto L_08991E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991E0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991E14;
    }
L_08991E14:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 400 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991E34;
      }
      goto L_08991E20;
    }
L_08991E20:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 450 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991E4C;
      }
      goto L_08991E2C;
    }
L_08991E2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08991E64;
      }
      goto L_08991E34;
    }
L_08991E34:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15540));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    aot_gpr_31 = (0x08991E44u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991E44u) goto L_08991E44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991E44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991E4C;
    }
L_08991E4C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15532));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    aot_gpr_31 = (0x08991E5Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991E5Cu) goto L_08991E5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991E5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991E64;
    }
L_08991E64:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 500 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991E84;
      }
      goto L_08991E70;
    }
L_08991E70:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 550 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991E9C;
      }
      goto L_08991E7C;
    }
L_08991E7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08991EB4;
      }
      goto L_08991E84;
    }
L_08991E84:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15524));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(19));
    aot_gpr_31 = (0x08991E94u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991E94u) goto L_08991E94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991E94:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991E9C;
    }
L_08991E9C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15516));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr_31 = (0x08991EACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991EACu) goto L_08991EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991EAC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991EB4;
    }
L_08991EB4:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 600 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991ED4;
      }
      goto L_08991EC0;
    }
L_08991EC0:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 610 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991EEC;
      }
      goto L_08991ECC;
    }
L_08991ECC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08991F04;
      }
      goto L_08991ED4;
    }
L_08991ED4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15508));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(21));
    aot_gpr_31 = (0x08991EE4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991EE4u) goto L_08991EE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991EE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991EEC;
    }
L_08991EEC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15500));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(22));
    aot_gpr_31 = (0x08991EFCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991EFCu) goto L_08991EFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991EFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991F04;
    }
L_08991F04:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 650 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991F24;
      }
      goto L_08991F10;
    }
L_08991F10:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 700 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991F3C;
      }
      goto L_08991F1C;
    }
L_08991F1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08991F54;
      }
      goto L_08991F24;
    }
L_08991F24:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15492));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(23));
    aot_gpr_31 = (0x08991F34u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991F34u) goto L_08991F34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991F34:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991F3C;
    }
L_08991F3C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15484));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr_31 = (0x08991F4Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991F4Cu) goto L_08991F4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991F4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991F54;
    }
L_08991F54:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 850 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991F74;
      }
      goto L_08991F60;
    }
L_08991F60:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 1000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991F8C;
      }
      goto L_08991F6C;
    }
L_08991F6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08991FA4;
      }
      goto L_08991F74;
    }
L_08991F74:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15476));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(25));
    aot_gpr_31 = (0x08991F84u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991F84u) goto L_08991F84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991F84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991F8C;
    }
L_08991F8C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15468));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    aot_gpr_31 = (0x08991F9Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991F9Cu) goto L_08991F9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991F9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991FA4;
    }
L_08991FA4:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 1005 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991FC4;
      }
      goto L_08991FB0;
    }
L_08991FB0:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 1150 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08991FDC;
      }
      goto L_08991FBC;
    }
L_08991FBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08991FF4;
      }
      goto L_08991FC4;
    }
L_08991FC4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15460));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(27));
    aot_gpr_31 = (0x08991FD4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991FD4u) goto L_08991FD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991FD4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991FDC;
    }
L_08991FDC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15452));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr_31 = (0x08991FECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08991FECu) goto L_08991FEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08991FEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991FF4;
    }
L_08991FF4:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 1300 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0899203C;
      }
      goto L_08992000;
    }
L_08992000:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9036)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08992024;
      }
      goto L_0899200C;
    }
L_0899200C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15444));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(29));
    aot_gpr_31 = (0x0899201Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899201Cu) goto L_0899201C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899201C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992024;
    }
L_08992024:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15452));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(30));
    aot_gpr_31 = (0x08992034u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992034u) goto L_08992034;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992034:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_0899203C;
    }
L_0899203C:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 1500 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0899205C;
      }
      goto L_08992048;
    }
L_08992048:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 1700 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08992074;
      }
      goto L_08992054;
    }
L_08992054:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899208C;
      }
      goto L_0899205C;
    }
L_0899205C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15436));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(31));
    aot_gpr_31 = (0x0899206Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899206Cu) goto L_0899206C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899206C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992074;
    }
L_08992074:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15428));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08992084u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992084u) goto L_08992084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992084:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_0899208C;
    }
L_0899208C:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089920AC;
      }
      goto L_08992098;
    }
L_08992098:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2100 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089920C4;
      }
      goto L_089920A4;
    }
L_089920A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089920DC;
      }
      goto L_089920AC;
    }
L_089920AC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15420));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(33));
    aot_gpr_31 = (0x089920BCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089920BCu) goto L_089920BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089920BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089920C4;
    }
L_089920C4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15412));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    aot_gpr_31 = (0x089920D4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089920D4u) goto L_089920D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089920D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089920DC;
    }
L_089920DC:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2300 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089920FC;
      }
      goto L_089920E8;
    }
L_089920E8:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2500 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08992114;
      }
      goto L_089920F4;
    }
L_089920F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899212C;
      }
      goto L_089920FC;
    }
L_089920FC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15404));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(35));
    aot_gpr_31 = (0x0899210Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899210Cu) goto L_0899210C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899210C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992114;
    }
L_08992114:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15396));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr_31 = (0x08992124u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992124u) goto L_08992124;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992124:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_0899212C;
    }
L_0899212C:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2750 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0899214C;
      }
      goto L_08992138;
    }
L_08992138:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08992164;
      }
      goto L_08992144;
    }
L_08992144:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899217C;
      }
      goto L_0899214C;
    }
L_0899214C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15388));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(37));
    aot_gpr_31 = (0x0899215Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899215Cu) goto L_0899215C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899215C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992164;
    }
L_08992164:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15380));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(38));
    aot_gpr_31 = (0x08992174u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992174u) goto L_08992174;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992174:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_0899217C;
    }
L_0899217C:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3500 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0899219C;
      }
      goto L_08992188;
    }
L_08992188:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 4000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089921B4;
      }
      goto L_08992194;
    }
L_08992194:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089921CC;
      }
      goto L_0899219C;
    }
L_0899219C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15372));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(39));
    aot_gpr_31 = (0x089921ACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089921ACu) goto L_089921AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089921AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089921B4;
    }
L_089921B4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15364));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr_31 = (0x089921C4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089921C4u) goto L_089921C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089921C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089921CC;
    }
L_089921CC:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 5000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089921EC;
      }
      goto L_089921D8;
    }
L_089921D8:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 7500 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08992204;
      }
      goto L_089921E4;
    }
L_089921E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899221C;
      }
      goto L_089921EC;
    }
L_089921EC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15356));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(41));
    aot_gpr_31 = (0x089921FCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089921FCu) goto L_089921FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089921FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992204;
    }
L_08992204:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15348));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(42));
    aot_gpr_31 = (0x08992214u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992214u) goto L_08992214;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992214:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_0899221C;
    }
L_0899221C:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 10000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0899223C;
      }
      goto L_08992228;
    }
L_08992228:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 20000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08992254;
      }
      goto L_08992234;
    }
L_08992234:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899226C;
      }
      goto L_0899223C;
    }
L_0899223C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15340));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(43));
    aot_gpr_31 = (0x0899224Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899224Cu) goto L_0899224C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899224C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992254;
    }
L_08992254:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15332));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    aot_gpr_31 = (0x08992264u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992264u) goto L_08992264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992264:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_0899226C;
    }
L_0899226C:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 30000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08992290;
      }
      goto L_08992278;
    }
L_08992278:
    aot_gpr_5 = (0u | 40000u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089922A8;
      }
      goto L_08992288;
    }
L_08992288:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089922C0;
      }
      goto L_08992290;
    }
L_08992290:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15324));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(45));
    aot_gpr_31 = (0x089922A0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089922A0u) goto L_089922A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089922A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089922A8;
    }
L_089922A8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15316));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(46));
    aot_gpr_31 = (0x089922B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089922B8u) goto L_089922B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089922B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089922C0;
    }
L_089922C0:
    aot_gpr_5 = (0u | 50000u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089922E8;
      }
      goto L_089922D0;
    }
L_089922D0:
    aot_gpr_5 = (0u | 65000u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08992300;
      }
      goto L_089922E0;
    }
L_089922E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08992318;
      }
      goto L_089922E8;
    }
L_089922E8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15308));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(47));
    aot_gpr_31 = (0x089922F8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089922F8u) goto L_089922F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089922F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992300;
    }
L_08992300:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15300));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08992310u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992310u) goto L_08992310;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992310:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992318;
    }
L_08992318:
    aot_gpr_5 = (1u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(14464));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08992348;
      }
      goto L_0899232C;
    }
L_0899232C:
    aot_gpr_5 = (2u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-31072));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08992360;
      }
      goto L_08992340;
    }
L_08992340:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08992378;
      }
      goto L_08992348;
    }
L_08992348:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15292));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(49));
    aot_gpr_31 = (0x08992358u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992358u) goto L_08992358;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992358:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992360;
    }
L_08992360:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15284));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(50));
    aot_gpr_31 = (0x08992370u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992370u) goto L_08992370;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992370:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992378;
    }
L_08992378:
    aot_gpr_5 = (2u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(18928));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089923A8;
      }
      goto L_0899238C;
    }
L_0899238C:
    aot_gpr_5 = (3u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(3392));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089923C0;
      }
      goto L_089923A0;
    }
L_089923A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089923D8;
      }
      goto L_089923A8;
    }
L_089923A8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15276));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(51));
    aot_gpr_31 = (0x089923B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089923B8u) goto L_089923B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089923B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089923C0;
    }
L_089923C0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15268));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    aot_gpr_31 = (0x089923D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089923D0u) goto L_089923D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089923D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089923D8;
    }
L_089923D8:
    aot_gpr_5 = (5u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27680));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08992408;
      }
      goto L_089923EC;
    }
L_089923EC:
    aot_gpr_5 = (6u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-18216));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08992420;
      }
      goto L_08992400;
    }
L_08992400:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08992438;
      }
      goto L_08992408;
    }
L_08992408:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15260));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(53));
    aot_gpr_31 = (0x08992418u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992418u) goto L_08992418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992418:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992420;
    }
L_08992420:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15252));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(54));
    aot_gpr_31 = (0x08992430u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992430u) goto L_08992430;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992430:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992438;
    }
L_08992438:
    aot_gpr_5 = (8u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24288));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0899248C;
      }
      goto L_0899244C;
    }
L_0899244C:
    aot_gpr_4 = (0u | 11u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08992474;
      }
      goto L_0899245C;
    }
L_0899245C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15244));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(55));
    aot_gpr_31 = (0x0899246Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899246Cu) goto L_0899246C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899246C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992474;
    }
L_08992474:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15252));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    aot_gpr_31 = (0x08992484u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992484u) goto L_08992484;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992484:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_0899248C;
    }
L_0899248C:
    aot_gpr_5 = (15u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16960));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089924E4;
      }
      goto L_089924A0;
    }
L_089924A0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    aot_gpr_5 = (153u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27008));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089924FC;
      }
      goto L_089924DC;
    }
L_089924DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08992514;
      }
      goto L_089924E4;
    }
L_089924E4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15236));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(57));
    aot_gpr_31 = (0x089924F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089924F4u) goto L_089924F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089924F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089924FC;
    }
L_089924FC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15228));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(58));
    aot_gpr_31 = (0x0899250Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899250Cu) goto L_0899250C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899250C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992514;
    }
L_08992514:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15236));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(59));
    aot_gpr_31 = (0x08992524u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992524u) goto L_08992524;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992524:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_0899252C;
    }
L_0899252C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0899253C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2279u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17584));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x0899256Cu);
    goto L_089910C8;
L_0899256C:
    aot_gpr_4 = (0u | 338u);
    aot_gpr_5 = (0u | 0u);
    goto L_08992574;
L_08992574:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08992574;
      }
      goto L_08992584;
    }
L_08992584:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(36));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(36));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(36));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9300));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899266Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899266Cu) goto L_0899266C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899266C:
    aot_gpr_16 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9304));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992680u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992680u) goto L_08992680;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992680:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9308));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992694u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992694u) goto L_08992694;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992694:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9312));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089926A8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089926A8u) goto L_089926A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089926A8:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7880));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089926BCu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089926BCu) goto L_089926BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089926BC:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9316));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089926D0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089926D0u) goto L_089926D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089926D0:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 92u);
    aot_gpr_31 = (0x089926E8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17488));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089926E8u) goto L_089926E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089926E8:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(92));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9320));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089926FCu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089926FCu) goto L_089926FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089926FC:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8080));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992710u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992710u) goto L_08992710;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992710:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8084));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992724u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992724u) goto L_08992724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992724:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9324));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992738u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992738u) goto L_08992738;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992738:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9328));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0899274Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899274Cu) goto L_0899274C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899274C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8676));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992760u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992760u) goto L_08992760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992760:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9332));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992774u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992774u) goto L_08992774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992774:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9336));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992788u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992788u) goto L_08992788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992788:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9036));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0899279Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899279Cu) goto L_0899279C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899279C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9032));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089927B0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089927B0u) goto L_089927B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089927B0:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8912));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089927C4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089927C4u) goto L_089927C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089927C4:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9340));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089927D8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089927D8u) goto L_089927D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089927D8:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9344));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089927ECu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089927ECu) goto L_089927EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089927EC:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8088));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992800u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992800u) goto L_08992800;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992800:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8092));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992814u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992814u) goto L_08992814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992814:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8096));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992828u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992828u) goto L_08992828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992828:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8100));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0899283Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899283Cu) goto L_0899283C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899283C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8104));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992850u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992850u) goto L_08992850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992850:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8108));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992864u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992864u) goto L_08992864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992864:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8112));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992878u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992878u) goto L_08992878;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992878:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8124));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0899288Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899288Cu) goto L_0899288C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899288C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8116));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089928A0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089928A0u) goto L_089928A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089928A0:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8120));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089928B4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089928B4u) goto L_089928B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089928B4:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8284));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089928C8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089928C8u) goto L_089928C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089928C8:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8288));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089928DCu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089928DCu) goto L_089928DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089928DC:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8292));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089928F0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089928F0u) goto L_089928F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089928F0:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8076));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992904u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992904u) goto L_08992904;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992904:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9084));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992918u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992918u) goto L_08992918;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992918:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9080));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0899292Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899292Cu) goto L_0899292C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899292C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9068));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992940u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992940u) goto L_08992940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992940:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9072));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992954u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992954u) goto L_08992954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992954:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9076));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992968u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992968u) goto L_08992968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992968:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9064));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0899297Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899297Cu) goto L_0899297C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899297C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9348));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992990u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992990u) goto L_08992990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992990:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9352));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089929A4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089929A4u) goto L_089929A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089929A4:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9356));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089929B8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089929B8u) goto L_089929B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089929B8:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9360));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089929CCu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089929CCu) goto L_089929CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089929CC:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9364));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089929E0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089929E0u) goto L_089929E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089929E0:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9368));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089929F4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089929F4u) goto L_089929F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089929F4:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9372));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992A08u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992A08u) goto L_08992A08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992A08:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9376));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992A1Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992A1Cu) goto L_08992A1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992A1C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9380));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992A30u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992A30u) goto L_08992A30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992A30:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9384));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992A44u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992A44u) goto L_08992A44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992A44:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8684));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992A58u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992A58u) goto L_08992A58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992A58:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9388));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992A6Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992A6Cu) goto L_08992A6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992A6C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9392));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992A80u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992A80u) goto L_08992A80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992A80:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9048));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992A94u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992A94u) goto L_08992A94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992A94:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9056));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992AA8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992AA8u) goto L_08992AA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992AA8:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9040));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992ABCu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992ABCu) goto L_08992ABC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992ABC:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9052));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992AD0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992AD0u) goto L_08992AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992AD0:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9060));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992AE4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992AE4u) goto L_08992AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992AE4:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9044));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992AF8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992AF8u) goto L_08992AF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992AF8:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8144));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992B0Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992B0Cu) goto L_08992B0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992B0C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9396));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992B20u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992B20u) goto L_08992B20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992B20:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7904));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992B34u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992B34u) goto L_08992B34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992B34:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9400));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992B48u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992B48u) goto L_08992B48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992B48:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(2));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9088));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992B5Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992B5Cu) goto L_08992B5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992B5C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9404));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992B70u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992B70u) goto L_08992B70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992B70:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9408));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992B84u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992B84u) goto L_08992B84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992B84:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9412));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992B98u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992B98u) goto L_08992B98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992B98:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8128));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992BACu);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992BACu) goto L_08992BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992BAC:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9288));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992BC0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992BC0u) goto L_08992BC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992BC0:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8260));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992BD4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992BD4u) goto L_08992BD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992BD4:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8264));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992BE8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992BE8u) goto L_08992BE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992BE8:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8268));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992BFCu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992BFCu) goto L_08992BFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992BFC:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8140));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992C10u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992C10u) goto L_08992C10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992C10:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 36u);
    aot_gpr_31 = (0x08992C28u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17624));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992C28u) goto L_08992C28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992C28:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(36));
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 36u);
    aot_gpr_31 = (0x08992C40u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17664));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992C40u) goto L_08992C40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992C40:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(36));
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 36u);
    aot_gpr_31 = (0x08992C58u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992C58u) goto L_08992C58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992C58:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(36));
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 48u);
    aot_gpr_31 = (0x08992C70u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17744));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992C70u) goto L_08992C70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992C70:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 48u);
    aot_gpr_31 = (0x08992C88u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17792));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992C88u) goto L_08992C88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992C88:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 32u);
    aot_gpr_31 = (0x08992CA0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17840));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992CA0u) goto L_08992CA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992CA0:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 32u);
    aot_gpr_31 = (0x08992CB8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17872));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992CB8u) goto L_08992CB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992CB8:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9416));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992CCCu);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992CCCu) goto L_08992CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992CCC:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9432));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992CE0u);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992CE0u) goto L_08992CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992CE0:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 32u);
    aot_gpr_31 = (0x08992CF8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17904));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992CF8u) goto L_08992CF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992CF8:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 32u);
    aot_gpr_31 = (0x08992D10u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17936));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992D10u) goto L_08992D10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992D10:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (2240u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 24u);
    aot_gpr_31 = (0x08992D28u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-23472));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992D28u) goto L_08992D28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992D28:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8180));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992D3Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992D3Cu) goto L_08992D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992D3C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8184));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992D50u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992D50u) goto L_08992D50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992D50:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8188));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992D64u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992D64u) goto L_08992D64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992D64:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8192));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992D78u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992D78u) goto L_08992D78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992D78:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8296));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992D8Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992D8Cu) goto L_08992D8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992D8C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8300));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992DA0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992DA0u) goto L_08992DA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992DA0:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8304));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992DB4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992DB4u) goto L_08992DB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992DB4:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8308));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992DC8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992DC8u) goto L_08992DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992DC8:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8168));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992DDCu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992DDCu) goto L_08992DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992DDC:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8212));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992DF0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992DF0u) goto L_08992DF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992DF0:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8216));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992E04u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992E04u) goto L_08992E04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992E04:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8196));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992E18u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992E18u) goto L_08992E18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992E18:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8200));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992E2Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992E2Cu) goto L_08992E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992E2C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8204));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992E40u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992E40u) goto L_08992E40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992E40:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8208));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992E54u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992E54u) goto L_08992E54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992E54:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8220));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992E68u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992E68u) goto L_08992E68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992E68:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8224));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992E7Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992E7Cu) goto L_08992E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992E7C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8228));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992E90u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992E90u) goto L_08992E90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992E90:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8232));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992EA4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992EA4u) goto L_08992EA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992EA4:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8236));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992EB8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992EB8u) goto L_08992EB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992EB8:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8240));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992ECCu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992ECCu) goto L_08992ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992ECC:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8244));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992EE0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992EE0u) goto L_08992EE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992EE0:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8248));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992EF4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992EF4u) goto L_08992EF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992EF4:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8252));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992F08u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992F08u) goto L_08992F08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992F08:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8256));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992F1Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992F1Cu) goto L_08992F1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992F1C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8172));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992F30u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992F30u) goto L_08992F30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992F30:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8176));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992F44u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992F44u) goto L_08992F44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992F44:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8272));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992F58u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992F58u) goto L_08992F58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992F58:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8280));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08992F6Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992F6Cu) goto L_08992F6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992F6C:
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8276));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08992F80u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992F80u) goto L_08992F80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992F80:
    aot_gpr_31 = (0x08992F88u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_089913B0;
L_08992F88:
    aot_gpr_17 = (0u | 0u);
    aot_gpr_16 = (0u | 0u);
    aot_gpr_17 = (aot_gpr_17 + ctx.gpr[19]);
    goto L_08992F94;
L_08992F94:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08992FA4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08992FA4u) goto L_08992FA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08992FA4:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08992F94;
      }
      goto L_08992FB8;
    }
L_08992FB8:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08992FD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2279u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(17584));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9300));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08993004u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993004u) goto L_08993004;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993004:
    aot_gpr_17 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9304));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993018u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993018u) goto L_08993018;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993018:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9308));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899302Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899302Cu) goto L_0899302C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899302C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9312));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993040u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993040u) goto L_08993040;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993040:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7880));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993054u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993054u) goto L_08993054;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993054:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9316));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993068u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993068u) goto L_08993068;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993068:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (0u | 92u);
    aot_gpr_31 = (0x08993080u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17488));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993080u) goto L_08993080;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993080:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(92));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9320));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993094u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993094u) goto L_08993094;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993094:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8080));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089930A8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089930A8u) goto L_089930A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089930A8:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8084));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089930BCu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089930BCu) goto L_089930BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089930BC:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9324));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089930D0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089930D0u) goto L_089930D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089930D0:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9328));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089930E4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089930E4u) goto L_089930E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089930E4:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8676));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089930F8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089930F8u) goto L_089930F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089930F8:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9332));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899310Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899310Cu) goto L_0899310C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899310C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9336));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993120u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993120u) goto L_08993120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993120:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9036));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993134u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993134u) goto L_08993134;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993134:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9032));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993148u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993148u) goto L_08993148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993148:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8912));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899315Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899315Cu) goto L_0899315C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899315C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9340));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993170u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993170u) goto L_08993170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993170:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9344));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993184u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993184u) goto L_08993184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993184:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8088));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993198u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993198u) goto L_08993198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993198:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8092));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089931ACu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089931ACu) goto L_089931AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089931AC:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8096));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089931C0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089931C0u) goto L_089931C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089931C0:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8100));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089931D4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089931D4u) goto L_089931D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089931D4:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8104));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089931E8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089931E8u) goto L_089931E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089931E8:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8108));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089931FCu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089931FCu) goto L_089931FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089931FC:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8112));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993210u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993210u) goto L_08993210;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993210:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8124));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993224u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993224u) goto L_08993224;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993224:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8116));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993238u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993238u) goto L_08993238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993238:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8120));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899324Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899324Cu) goto L_0899324C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899324C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8284));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993260u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993260u) goto L_08993260;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993260:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8288));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993274u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993274u) goto L_08993274;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993274:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8292));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993288u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993288u) goto L_08993288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993288:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8076));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899329Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899329Cu) goto L_0899329C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899329C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9084));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089932B0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089932B0u) goto L_089932B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089932B0:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9080));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089932C4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089932C4u) goto L_089932C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089932C4:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9068));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089932D8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089932D8u) goto L_089932D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089932D8:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9072));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089932ECu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089932ECu) goto L_089932EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089932EC:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9076));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993300u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993300u) goto L_08993300;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993300:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9064));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993314u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993314u) goto L_08993314;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993314:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9348));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993328u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993328u) goto L_08993328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993328:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9352));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899333Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899333Cu) goto L_0899333C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899333C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9356));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993350u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993350u) goto L_08993350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993350:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9360));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993364u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993364u) goto L_08993364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993364:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9364));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993378u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993378u) goto L_08993378;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993378:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9368));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899338Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899338Cu) goto L_0899338C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899338C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9372));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089933A0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089933A0u) goto L_089933A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089933A0:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9376));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089933B4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089933B4u) goto L_089933B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089933B4:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9380));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089933C8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089933C8u) goto L_089933C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089933C8:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9384));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089933DCu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089933DCu) goto L_089933DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089933DC:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8684));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089933F0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089933F0u) goto L_089933F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089933F0:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9388));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993404u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993404u) goto L_08993404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993404:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9392));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993418u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993418u) goto L_08993418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993418:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9048));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899342Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899342Cu) goto L_0899342C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899342C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9056));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993440u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993440u) goto L_08993440;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993440:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9040));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993454u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993454u) goto L_08993454;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993454:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9052));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993468u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993468u) goto L_08993468;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993468:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9060));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899347Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899347Cu) goto L_0899347C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899347C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9044));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993490u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993490u) goto L_08993490;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993490:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8144));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089934A4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089934A4u) goto L_089934A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089934A4:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9396));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089934B8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089934B8u) goto L_089934B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089934B8:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7904));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089934CCu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089934CCu) goto L_089934CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089934CC:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9400));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089934E0u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089934E0u) goto L_089934E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089934E0:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9088));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089934F4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089934F4u) goto L_089934F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089934F4:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9404));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993508u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993508u) goto L_08993508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993508:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9408));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899351Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899351Cu) goto L_0899351C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899351C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9412));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993530u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993530u) goto L_08993530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993530:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8128));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993544u);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993544u) goto L_08993544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993544:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9288));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993558u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993558u) goto L_08993558;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993558:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8260));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899356Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899356Cu) goto L_0899356C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899356C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8264));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993580u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993580u) goto L_08993580;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993580:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8268));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993594u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993594u) goto L_08993594;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993594:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8140));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089935A8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089935A8u) goto L_089935A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089935A8:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (0u | 36u);
    aot_gpr_31 = (0x089935C0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17624));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089935C0u) goto L_089935C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089935C0:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(36));
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (0u | 36u);
    aot_gpr_31 = (0x089935D8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17664));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089935D8u) goto L_089935D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089935D8:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(36));
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (0u | 36u);
    aot_gpr_31 = (0x089935F0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089935F0u) goto L_089935F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089935F0:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(36));
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (0u | 48u);
    aot_gpr_31 = (0x08993608u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17744));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993608u) goto L_08993608;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993608:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (0u | 48u);
    aot_gpr_31 = (0x08993620u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17792));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993620u) goto L_08993620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993620:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (0u | 32u);
    aot_gpr_31 = (0x08993638u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17840));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993638u) goto L_08993638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993638:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (0u | 32u);
    aot_gpr_31 = (0x08993650u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17872));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993650u) goto L_08993650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993650:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9416));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993664u);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993664u) goto L_08993664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993664:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9432));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993678u);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993678u) goto L_08993678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993678:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (0u | 32u);
    aot_gpr_31 = (0x08993690u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17904));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993690u) goto L_08993690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993690:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (0u | 32u);
    aot_gpr_31 = (0x089936A8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17936));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089936A8u) goto L_089936A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089936A8:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (2240u << 16u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (0u | 24u);
    aot_gpr_31 = (0x089936C0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-23472));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089936C0u) goto L_089936C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089936C0:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8180));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089936D4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089936D4u) goto L_089936D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089936D4:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8184));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089936E8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089936E8u) goto L_089936E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089936E8:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8188));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089936FCu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089936FCu) goto L_089936FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089936FC:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8192));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993710u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993710u) goto L_08993710;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993710:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8296));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993724u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993724u) goto L_08993724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993724:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8300));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993738u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993738u) goto L_08993738;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993738:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8304));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899374Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899374Cu) goto L_0899374C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899374C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8308));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993760u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993760u) goto L_08993760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993760:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8168));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993774u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993774u) goto L_08993774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993774:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8212));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993788u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993788u) goto L_08993788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993788:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8216));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899379Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899379Cu) goto L_0899379C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899379C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8196));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089937B0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089937B0u) goto L_089937B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089937B0:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8200));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089937C4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089937C4u) goto L_089937C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089937C4:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8204));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089937D8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089937D8u) goto L_089937D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089937D8:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8208));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089937ECu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089937ECu) goto L_089937EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089937EC:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8220));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993800u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993800u) goto L_08993800;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993800:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8224));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993814u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993814u) goto L_08993814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993814:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8228));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993828u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993828u) goto L_08993828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993828:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8232));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899383Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899383Cu) goto L_0899383C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899383C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8236));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993850u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993850u) goto L_08993850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993850:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8240));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993864u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993864u) goto L_08993864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993864:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8244));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993878u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993878u) goto L_08993878;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993878:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8248));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0899388Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899388Cu) goto L_0899388C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899388C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8252));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089938A0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089938A0u) goto L_089938A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089938A0:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8256));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089938B4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089938B4u) goto L_089938B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089938B4:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8172));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089938C8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089938C8u) goto L_089938C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089938C8:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8176));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089938DCu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089938DCu) goto L_089938DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089938DC:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8272));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x089938F0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089938F0u) goto L_089938F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089938F0:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8280));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08993904u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993904u) goto L_08993904;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993904:
    ctx.gpr[18] = (aot_gpr_17 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8276));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08993918u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993918u) goto L_08993918;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993918:
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_17 = (0u | 0u);
    aot_gpr_16 = (aot_gpr_4 + aot_gpr_16);
    goto L_08993928;
L_08993928:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08993938u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993938u) goto L_08993938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993938:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08993928;
      }
      goto L_0899394C;
    }
L_0899394C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08993964:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-736));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[5]{aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(712), aot_run_words); }
    aot_gpr_31 = (0x0899398Cu);
    aot_gpr_17 = (0u | 0u);
    goto L_0899103C;
L_0899398C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_14)) && aot_fpr_12 == aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089939F0;
      }
      goto L_089939B0;
    }
L_089939B0:
    { const bool branch_taken = aot_gpr_17 == aot_gpr_16;
      if (branch_taken) {
          goto L_089939C0;
      }
      goto L_089939B8;
    }
L_089939B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993A28;
      }
      goto L_089939C0;
    }
L_089939C0:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15212));
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_6 = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_gpr_31 = (0x089939E8u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089939E8u) goto L_089939E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089939E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_089939F0;
    }
L_089939F0:
    { const bool branch_taken = aot_gpr_17 == aot_gpr_16;
      if (branch_taken) {
          goto L_08993A00;
      }
      goto L_089939F8;
    }
L_089939F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993A28;
      }
      goto L_08993A00;
    }
L_08993A00:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15212));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (0u | 5u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08993A20u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993A20u) goto L_08993A20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993A20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993A28;
    }
L_08993A28:
    { const bool branch_taken = aot_gpr_17 == aot_gpr_16;
      if (branch_taken) {
          goto L_08993A78;
      }
      goto L_08993A30;
    }
L_08993A30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (0u | 60000u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_5 = (0u | 60u);
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.hi);
    { const bool branch_taken = aot_gpr_17 == aot_gpr_16;
      if (branch_taken) {
          goto L_08993AA4;
      }
      goto L_08993A70;
    }
L_08993A70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
      if (branch_taken) {
          goto L_08993AD0;
      }
      goto L_08993A78;
    }
L_08993A78:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8124)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15204));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08993A9Cu);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993A9Cu) goto L_08993A9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993A9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993AA4;
    }
L_08993AA4:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15196));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08993AC8u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993AC8u) goto L_08993AC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993AC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993AD0;
    }
L_08993AD0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8140)));
    aot_gpr_6 = (0u | 60000u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (0u | 60u);
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.hi);
    { const bool branch_taken = aot_gpr_17 == aot_gpr_16;
      if (branch_taken) {
          goto L_08993B28;
      }
      goto L_08993B14;
    }
L_08993B14:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_17 == aot_gpr_16;
      if (branch_taken) {
          goto L_08993B54;
      }
      goto L_08993B20;
    }
L_08993B20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08993B80;
      }
      goto L_08993B28;
    }
L_08993B28:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15188));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08993B4Cu);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993B4Cu) goto L_08993B4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993B4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993B54;
    }
L_08993B54:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8912)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15180));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08993B78u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993B78u) goto L_08993B78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993B78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993B80;
    }
L_08993B80:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_17 == aot_gpr_16;
      if (branch_taken) {
          goto L_08993BA0;
      }
      goto L_08993B8C;
    }
L_08993B8C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-10001)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993BCC;
      }
      goto L_08993B98;
    }
L_08993B98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 20u, 0x08994138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993BA0;
    }
L_08993BA0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9340)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15172));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08993BC4u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993BC4u) goto L_08993BC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993BC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993BCC;
    }
L_08993BCC:
    { const bool branch_taken = aot_gpr_17 == aot_gpr_16;
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15164));
      if (branch_taken) {
          goto L_08993BE8;
      }
      goto L_08993BD4;
    }
L_08993BD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8296)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993C08;
      }
      goto L_08993BE0;
    }
L_08993BE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08993C58;
      }
      goto L_08993BE8;
    }
L_08993BE8:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08993C00u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993C00u) goto L_08993C00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993C00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993C08;
    }
L_08993C08:
    { const bool branch_taken = aot_gpr_17 != aot_gpr_16;
      if (branch_taken) {
          goto L_08993C54;
      }
      goto L_08993C10;
    }
L_08993C10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8296)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08993C2C;
      }
      goto L_08993C20;
    }
L_08993C20:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08993C2C;
L_08993C2C:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15156));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr_6 = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08993C4Cu);
    ctx.gpr[9] = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993C4Cu) goto L_08993C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993C4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993C54;
    }
L_08993C54:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    goto L_08993C58;
L_08993C58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8300)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08993CB4;
      }
      goto L_08993C64;
    }
L_08993C64:
    { const bool branch_taken = aot_gpr_17 != aot_gpr_16;
      if (branch_taken) {
          goto L_08993CB0;
      }
      goto L_08993C6C;
    }
L_08993C6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8300)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08993C88;
      }
      goto L_08993C7C;
    }
L_08993C7C:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08993C88;
L_08993C88:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15148));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    aot_gpr_6 = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08993CA8u);
    ctx.gpr[9] = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993CA8u) goto L_08993CA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993CA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993CB0;
    }
L_08993CB0:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    goto L_08993CB4;
L_08993CB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8304)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08993D10;
      }
      goto L_08993CC0;
    }
L_08993CC0:
    { const bool branch_taken = aot_gpr_17 != aot_gpr_16;
      if (branch_taken) {
          goto L_08993D0C;
      }
      goto L_08993CC8;
    }
L_08993CC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8304)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08993CE4;
      }
      goto L_08993CD8;
    }
L_08993CD8:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08993CE4;
L_08993CE4:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15140));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08993D04u);
    ctx.gpr[9] = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993D04u) goto L_08993D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993D04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993D0C;
    }
L_08993D0C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    goto L_08993D10;
L_08993D10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8308)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08993D6C;
      }
      goto L_08993D1C;
    }
L_08993D1C:
    { const bool branch_taken = aot_gpr_17 != aot_gpr_16;
      if (branch_taken) {
          goto L_08993D68;
      }
      goto L_08993D24;
    }
L_08993D24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8308)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08993D40;
      }
      goto L_08993D34;
    }
L_08993D34:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08993D40;
L_08993D40:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15132));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    aot_gpr_6 = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08993D60u);
    ctx.gpr[9] = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993D60u) goto L_08993D60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993D60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993D68;
    }
L_08993D68:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    goto L_08993D6C;
L_08993D6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08993D80;
      }
      goto L_08993D78;
    }
L_08993D78:
    aot_gpr_31 = (0x08993D80u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993D80u) goto L_08993D80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993D80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8312)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), aot_gpr_4);
      if (branch_taken) {
          goto L_08993DD0;
      }
      goto L_08993D94;
    }
L_08993D94:
    { const bool branch_taken = aot_gpr_17 == aot_gpr_16;
      if (branch_taken) {
          goto L_08993DA4;
      }
      goto L_08993D9C;
    }
L_08993D9C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993DD0;
      }
      goto L_08993DA4;
    }
L_08993DA4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8312)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15124));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08993DC8u);
    ctx.gpr[9] = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993DC8u) goto L_08993DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993DC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993DD0;
    }
L_08993DD0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8312)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08993E30;
      }
      goto L_08993DDC;
    }
L_08993DDC:
    if (aot_gpr_17 == aot_gpr_16) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8312)));
        goto L_08993DEC;
    }
    goto L_08993DE4;
L_08993DE4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993E30;
      }
      goto L_08993DEC;
    }
L_08993DEC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15116));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    aot_gpr_6 = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[10] = (ctx.lo);
    aot_gpr_31 = (0x08993E28u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[10]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993E28u) goto L_08993E28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993E28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993E30;
    }
L_08993E30:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8313)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08993E90;
      }
      goto L_08993E3C;
    }
L_08993E3C:
    if (aot_gpr_17 == aot_gpr_16) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8313)));
        goto L_08993E4C;
    }
    goto L_08993E44;
L_08993E44:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993E90;
      }
      goto L_08993E4C;
    }
L_08993E4C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15108));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr_6 = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[10] = (ctx.lo);
    aot_gpr_31 = (0x08993E88u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[10]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993E88u) goto L_08993E88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993E88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993E90;
    }
L_08993E90:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8314)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08993EF0;
      }
      goto L_08993E9C;
    }
L_08993E9C:
    if (aot_gpr_17 == aot_gpr_16) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8314)));
        goto L_08993EAC;
    }
    goto L_08993EA4;
L_08993EA4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993EF0;
      }
      goto L_08993EAC;
    }
L_08993EAC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15100));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    aot_gpr_6 = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[10] = (ctx.lo);
    aot_gpr_31 = (0x08993EE8u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[10]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993EE8u) goto L_08993EE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993EE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993EF0;
    }
L_08993EF0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8315)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08993F50;
      }
      goto L_08993EFC;
    }
L_08993EFC:
    if (aot_gpr_17 == aot_gpr_16) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8315)));
        goto L_08993F0C;
    }
    goto L_08993F04;
L_08993F04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993F50;
      }
      goto L_08993F0C;
    }
L_08993F0C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15092));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    aot_gpr_6 = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[10] = (ctx.lo);
    aot_gpr_31 = (0x08993F48u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[10]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993F48u) goto L_08993F48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993F48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993F50;
    }
L_08993F50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8184)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8180)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08993FBC;
      }
      goto L_08993F64;
    }
L_08993F64:
    if (aot_gpr_17 == aot_gpr_16) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8180)));
        goto L_08993F74;
    }
    goto L_08993F6C;
L_08993F6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993FBC;
      }
      goto L_08993F74;
    }
L_08993F74:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8184)));
    aot_gpr_6 = (aot_gpr_4 << 5u);
    ctx.gpr[7] = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_6 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    { const std::uint32_t dividend = aot_gpr_6; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15084));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    aot_gpr_6 = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[10] = (ctx.lo);
    aot_gpr_31 = (0x08993FB4u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[10]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08993FB4u) goto L_08993FB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08993FB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993FBC;
    }
L_08993FBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8192)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8188)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 3u, 0x08994028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993FD0;
    }
L_08993FD0:
    if (aot_gpr_17 == aot_gpr_16) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8188)));
        goto L_08993FE0;
    }
    goto L_08993FD8;
L_08993FD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 3u, 0x08994028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08993FE0;
    }
L_08993FE0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8192)));
    aot_gpr_6 = (aot_gpr_4 << 5u);
    ctx.gpr[7] = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_6 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    { const std::uint32_t dividend = aot_gpr_6; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-15076));
    ctx.pc = 0x08994000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0099(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0099_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_99(Runtime &runtime) {
    runtime.register_generated_unit(99u, 0x08990000u, 16384u, &recomp_unit_0099, &recomp_unit_0099_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08990000u, &recomp_unit_0099, "recomp_unit_0099",
                                          kEntryMasks_recomp_unit_0099, 64u);
}
} // namespace psprecomp
